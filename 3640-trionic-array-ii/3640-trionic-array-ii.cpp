#include <bits/stdc++.h>
using namespace std;

enum class Trend { Increasing, Decreasing, None };

struct Segment {
    int l, h;
    vector<long long> prefix_sum;
    Trend trend;
};

class Solution {
private:
    using ll = long long;

    Trend getTrend(int a, int b) {
        if (b > a)
            return Trend::Increasing;
        if (b < a)
            return Trend::Decreasing;
        return Trend::None;
    }

    vector<Segment> buildSegments(vector<int>& nums) {
        vector<Segment> result;
        int n = nums.size();
        if (n == 0)
            return result;

        int l = 0;
        Trend cur = Trend::None;

        for (int i = 1; i <= n; i++) {
            Trend next = (i < n) ? getTrend(nums[i - 1], nums[i]) : Trend::None;

            if (i == n || (cur != Trend::None && next != cur)) {
                if (cur != Trend::None && i - 1 >= l) {
                    Segment seg;
                    seg.l = l;
                    seg.h = i - 1;
                    seg.trend = cur;

                    ll sum = 0;
                    for (int j = l; j <= seg.h; j++) {
                        sum += nums[j];
                        seg.prefix_sum.push_back(sum);
                    }
                    result.push_back(seg);
                }

                if (next == Trend::None) {
                    l = i; // Start fresh after the break
                } else {
                    l = i - 1; // Overlap at boundary
                }
                cur = next;
            } else if (cur == Trend::None) {
                l = i - 1; // FIX: Start fresh from current position
                cur = next;
            }
        }
        return result;
    }

    ll fullSegmentSum(const Segment& seg) { return seg.prefix_sum.back(); }

    // Best suffix sum excluding the last element (the peak)
    ll bestSuffixSumExcludingLast(const Segment& seg, vector<int>& nums) {
        if (seg.h <= seg.l)
            return LLONG_MIN;
        ll best = LLONG_MIN, sum = 0;
        for (int i = seg.h - 1; i >= seg.l; --i) {
            sum += nums[i];
            best = max(best, sum);
        }
        return best;
    }

    // Best prefix sum excluding the first element (the valley)
    ll bestPrefixSumExcludingFirst(const Segment& seg, vector<int>& nums) {
        if (seg.h <= seg.l)
            return LLONG_MIN;
        ll best = LLONG_MIN, sum = 0;
        for (int i = seg.l + 1; i <= seg.h; ++i) {
            sum += nums[i];
            best = max(best, sum);
        }
        return best;
    }

    ll maxSumAroundDecreasing(const vector<Segment>& segments,
                              vector<int>& nums) {
        ll ans = LLONG_MIN;

        for (int i = 1; i + 1 < (int)segments.size(); i++) {
            const Segment &prev = segments[i - 1], &cur = segments[i],
                          &next = segments[i + 1];

            // Check I-D-I pattern
            if (prev.trend != Trend::Increasing ||
                cur.trend != Trend::Decreasing ||
                next.trend != Trend::Increasing) {
                continue;
            }

            // Check segments are contiguous (overlap at boundaries)
            if (prev.h != cur.l || cur.h != next.l) {
                continue;
            }

            ll left = bestSuffixSumExcludingLast(prev, nums);
            ll mid = fullSegmentSum(cur);
            ll right = bestPrefixSumExcludingFirst(next, nums);

            if (left != LLONG_MIN && right != LLONG_MIN) {
                ans = max(ans, left + mid + right);
            }
        }
        return ans;
    }

public:
    long long maxSumTrionic(vector<int>& nums) {
        vector<Segment> segs = buildSegments(nums);
        return maxSumAroundDecreasing(segs, nums);
    }
};
