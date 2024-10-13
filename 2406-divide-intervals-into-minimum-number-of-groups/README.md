<h2><a href="https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/">2406. Divide Intervals Into Minimum Number of Groups</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a 2D integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">intervals</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">intervals[i] = [left<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, right<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code> represents the <strong style="border-color: rgb(91, 119, 134) !important;">inclusive</strong> interval <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[left<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, right<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You have to divide the intervals into one or more <strong style="border-color: rgb(91, 119, 134) !important;">groups</strong> such that each interval is in <strong style="border-color: rgb(91, 119, 134) !important;">exactly</strong> one group, and no two intervals that are in the same group <strong style="border-color: rgb(91, 119, 134) !important;">intersect</strong> each other.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the <strong style="border-color: rgb(91, 119, 134) !important;">minimum</strong> number of groups you need to make</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Two intervals <strong style="border-color: rgb(91, 119, 134) !important;">intersect</strong> if there is at least one common number between them. For example, the intervals <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[1, 5]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[5, 8]</code> intersect.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> intervals = [[5,10],[6,8],[1,5],[2,3],[1,10]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> We can divide the intervals into the following groups:
- Group 1: [1, 5], [6, 8].
- Group 2: [2, 3], [5, 10].
- Group 3: [1, 10].
It can be proven that it is not possible to divide the intervals into fewer than 3 groups.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> intervals = [[1,3],[5,6],[8,10],[11,13]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> None of the intervals overlap, so we can put all of them in one group.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= intervals.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">intervals[i].length == 2</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= left<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt;= right<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">6</sup></code></li>
</ul>
</div>