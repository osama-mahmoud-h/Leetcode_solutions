<h2><a href="https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/">2058. Find the Minimum and Maximum Number of Nodes Between Critical Points</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">critical point</strong> in a linked list is defined as <strong style="border-color: rgb(91, 119, 134) !important;">either</strong> a <strong style="border-color: rgb(91, 119, 134) !important;">local maxima</strong> or a <strong style="border-color: rgb(91, 119, 134) !important;">local minima</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A node is a <strong style="border-color: rgb(91, 119, 134) !important;">local maxima</strong> if the current node has a value <strong style="border-color: rgb(91, 119, 134) !important;">strictly greater</strong> than the previous node and the next node.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A node is a <strong style="border-color: rgb(91, 119, 134) !important;">local minima</strong> if the current node has a value <strong style="border-color: rgb(91, 119, 134) !important;">strictly smaller</strong> than the previous node and the next node.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Note that a node can only be a local maxima/minima if there exists <strong style="border-color: rgb(91, 119, 134) !important;">both</strong> a previous node and a next node.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Given a linked list <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">head</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an array of length 2 containing </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[minDistance, maxDistance]</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> where </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">minDistance</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> is the <strong style="border-color: rgb(91, 119, 134) !important;">minimum distance</strong> between <strong style="border-color: rgb(91, 119, 134) !important;">any&nbsp;two distinct</strong> critical points and </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">maxDistance</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> is the <strong style="border-color: rgb(91, 119, 134) !important;">maximum distance</strong> between <strong style="border-color: rgb(91, 119, 134) !important;">any&nbsp;two distinct</strong> critical points. If there are <strong style="border-color: rgb(91, 119, 134) !important;">fewer</strong> than two critical points, return </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[-1, -1]</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/13/a1.png" style="width: 148px; height: 55px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [3,1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [-1,-1]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are no critical points in [3,1].
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/13/a2.png" style="width: 624px; height: 46px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [5,3,1,2,5,1,2]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are three critical points:
- [5,3,<strong style="border-color: rgb(83, 109, 122) !important;"><u style="border-color: rgb(83, 109, 122) !important;">1</u></strong>,2,5,1,2]: The third node is a local minima because 1 is less than 3 and 2.
- [5,3,1,2,<u style="border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">5</strong></u>,1,2]: The fifth node is a local maxima because 5 is greater than 2 and 1.
- [5,3,1,2,5,<u style="border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">1</strong></u>,2]: The sixth node is a local minima because 1 is less than 5 and 2.
The minimum distance is between the fifth and the sixth node. minDistance = 6 - 5 = 1.
The maximum distance is between the third and the sixth node. maxDistance = 6 - 3 = 3.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/14/a5.png" style="width: 624px; height: 39px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [1,3,2,2,3,2,2,2,7]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [3,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are two critical points:
- [1,<u style="border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">3</strong></u>,2,2,3,2,2,2,7]: The second node is a local maxima because 3 is greater than 1 and 2.
- [1,3,2,2,<u style="border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">3</strong></u>,2,2,2,7]: The fifth node is a local maxima because 3 is greater than 2 and 2.
Both the minimum and maximum distances are between the second and the fifth node.
Thus, minDistance and maxDistance is 5 - 2 = 3.
Note that the last node is not considered a local maxima because it does not have a next node.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of nodes in the list is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[2, 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup>]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= Node.val &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
</ul>
</div>