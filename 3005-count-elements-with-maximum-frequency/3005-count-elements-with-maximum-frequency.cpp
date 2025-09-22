#include <vector>

#include <unordered_map>

class Solution {

public:

    int maxFrequencyElements(std::vector<int>& nums) {

        std::unordered_map<int, int> freqMap;

        // Count the frequency of each element

        for (int num : nums) {

            freqMap[num]++;

        }

        int maxFreq = 0;

        int countMaxFreq = 0;

        // Find the maximum frequency

        for (const auto& entry : freqMap) {

            int frequency = entry.second;

            maxFreq = std::max(maxFreq, frequency);

        }

        // Count elements with maximum frequency

        for (const auto& entry : freqMap) {

            if (entry.second == maxFreq) {

                countMaxFreq += entry.second;  // Fix: Add the frequency to the count

            }

        }

        return countMaxFreq;

    }

};


        
    
