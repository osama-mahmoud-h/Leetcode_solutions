<h2><a href="https://leetcode.com/problems/diameter-of-binary-tree/">543. Diameter of Binary Tree</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">root</code> of a binary tree, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the length of the <strong style="border-color: rgb(91, 119, 134) !important;">diameter</strong> of the tree</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The <strong style="border-color: rgb(91, 119, 134) !important;">diameter</strong> of a binary tree is the <strong style="border-color: rgb(91, 119, 134) !important;">length</strong> of the longest path between any two nodes in a tree. This path may or may not pass through the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">root</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The <strong style="border-color: rgb(91, 119, 134) !important;">length</strong> of a path between two nodes is represented by the number of edges between them.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/06/diamtree.jpg" style="width: 292px; height: 302px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,2,3,4,5]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 3 is the length of the path [4,2,1,3] or [5,2,1,3].
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,2]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[1, 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup>]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>