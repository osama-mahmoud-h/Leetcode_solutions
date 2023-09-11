<h2><a href="https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/">1282. Group the People Given the Group Size They Belong To</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> people&nbsp;that are split into some unknown number of groups. Each person is labeled with a&nbsp;<strong style="border-color: rgb(91, 119, 134) !important;">unique ID</strong>&nbsp;from&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code>&nbsp;to&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n - 1</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You are given an integer array&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">groupSizes</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">groupSizes[i]</code>&nbsp;is the size of the group that person&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i</code>&nbsp;is in. For example, if&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">groupSizes[1] = 3</code>, then&nbsp;person&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1</code>&nbsp;must be in a&nbsp;group of size&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">3</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return&nbsp;<em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">a list of groups&nbsp;such that&nbsp;each person&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(222, 229, 232) !important; border-color: rgb(83, 109, 121) !important;">i</code>&nbsp;is in a group of size&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(222, 229, 232) !important; border-color: rgb(83, 109, 121) !important;">groupSizes[i]</code></em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Each person should&nbsp;appear in&nbsp;<strong style="border-color: rgb(91, 119, 134) !important;">exactly one group</strong>,&nbsp;and every person must be in a group. If there are&nbsp;multiple answers, <strong style="border-color: rgb(91, 119, 134) !important;">return any of them</strong>. It is <strong style="border-color: rgb(91, 119, 134) !important;">guaranteed</strong> that there will be <strong style="border-color: rgb(91, 119, 134) !important;">at least one</strong> valid solution for the given input.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> groupSizes = [3,3,3,3,3,1,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[5],[0,1,2],[3,4,6]]
<b style="border-color: rgb(83, 109, 122) !important;">Explanation:</b> 
The first group is [5]. The size is 1, and groupSizes[5] = 1.
The second group is [0,1,2]. The size is 3, and groupSizes[0] = groupSizes[1] = groupSizes[2] = 3.
The third group is [3,4,6]. The size is 3, and groupSizes[3] = groupSizes[4] = groupSizes[6] = 3.
Other possible solutions are [[2,1,6],[5],[0,4,3]] and [[5],[0,6,2],[4,3,1]].
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> groupSizes = [2,1,3,3,3,2]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[1],[0,5],[2,3,4]]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">groupSizes.length == n</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n&nbsp;&lt;= 500</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;=&nbsp;groupSizes[i] &lt;= n</code></li>
</ul>
</div>