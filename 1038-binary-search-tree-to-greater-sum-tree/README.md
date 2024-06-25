<h2><a href="https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/">1038. Binary Search Tree to Greater Sum Tree</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">root</code> of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.</p>

<p style="border-color: rgb(91, 119, 134) !important;">As a reminder, a <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">binary search tree</em> is a tree that satisfies these constraints:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The left subtree of a node contains only nodes with keys <strong style="border-color: rgb(91, 119, 134) !important;">less than</strong> the node's key.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The right subtree of a node contains only nodes with keys <strong style="border-color: rgb(91, 119, 134) !important;">greater than</strong> the node's key.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/02/tree.png" style="width: 400px; height: 273px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [0,null,1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,null,1]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[1, 100]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= Node.val &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">All the values in the tree are <strong style="border-color: rgb(91, 119, 134) !important;">unique</strong>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Note:</strong> This question is the same as 538: <a href="https://leetcode.com/problems/convert-bst-to-greater-tree/" target="_blank" style="transition-property: -border-bottom-color !important; --link-color: rgb(161, 178, 190) !important; --link-color-hover: rgb(180, 193, 203) !important; --link-color-active: rgb(158, 175, 188) !important; --visited-color: rgb(160, 117, 234) !important; --visited-color-hover: rgb(179, 144, 238) !important; --visited-color-active: rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">https://leetcode.com/problems/convert-bst-to-greater-tree/</a></p>
</div>