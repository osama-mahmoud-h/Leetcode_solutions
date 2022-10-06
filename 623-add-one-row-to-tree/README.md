<h2><a href="https://leetcode.com/problems/add-one-row-to-tree/">623. Add One Row to Tree</a></h2><h3>Medium</h3><hr><div><p>Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">root</code> of a binary tree and two integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">depth</code>, add a row of nodes with value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> at the given depth <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">depth</code>.</p>

<p>Note that the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">root</code> node is at depth <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>.</p>

<p>The adding rule is:</p>

<ul>
	<li>Given the integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">depth</code>, for each not null tree node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">cur</code> at the depth <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">depth - 1</code>, create two tree nodes with value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> as <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">cur</code>'s left subtree root and right subtree root.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">cur</code>'s original left subtree should be the left subtree of the new left subtree root.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">cur</code>'s original right subtree should be the right subtree of the new right subtree root.</li>
	<li>If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">depth == 1</code> that means there is no depth <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">depth - 1</code> at all, then create a tree node with value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> as the new root of the whole original tree, and the original tree is the new root's left subtree.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/15/addrow-tree.jpg" style="width: 500px; height: 231px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> root = [4,2,6,3,1,5], val = 1, depth = 2
<strong>Output:</strong> [4,1,1,2,null,null,6,3,1,5]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/11/add2-tree.jpg" style="width: 500px; height: 277px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> root = [4,2,null,3,1], val = 1, depth = 3
<strong>Output:</strong> [4,2,null,1,1,3,null,null,1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, 10<sup>4</sup>]</code>.</li>
	<li>The depth of the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, 10<sup>4</sup>]</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-100 &lt;= Node.val &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>5</sup> &lt;= val &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= depth &lt;= the depth of tree + 1</code></li>
</ul>
</div>