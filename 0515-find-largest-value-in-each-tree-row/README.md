<h2><a href="https://leetcode.com/problems/find-largest-value-in-each-tree-row/">515. Find Largest Value in Each Tree Row</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">root</code> of a binary tree, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an array of the largest value in each row</em> of the tree <strong style="border-color: rgb(91, 119, 134) !important;">(0-indexed)</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/21/largest_e1.jpg" style="width: 300px; height: 172px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,3,2,5,3,null,9]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,3,9]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,2,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,3]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of nodes in the tree will be in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[0, 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup>]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-2<sup style="border-color: rgb(83, 109, 121) !important;">31</sup> &lt;= Node.val &lt;= 2<sup style="border-color: rgb(83, 109, 121) !important;">31</sup> - 1</code></li>
</ul>
</div>