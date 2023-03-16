<h2><a href="https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/">106. Construct Binary Tree from Inorder and Postorder Traversal</a></h2><h3>Medium</h3><hr><div><p>Given two integer arrays <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">inorder</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">postorder</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">inorder</code> is the inorder traversal of a binary tree and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">postorder</code> is the postorder traversal of the same tree, construct and return <em style="color: rgb(234, 238, 241) !important;">the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/tree.jpg" style="width: 277px; height: 302px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
<strong>Output:</strong> [3,9,20,null,null,15,7]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> inorder = [-1], postorder = [-1]
<strong>Output:</strong> [-1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= inorder.length &lt;= 3000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">postorder.length == inorder.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">-3000 &lt;= inorder[i], postorder[i] &lt;= 3000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">inorder</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">postorder</code> consist of <strong>unique</strong> values.</li>
	<li>Each value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">postorder</code> also appears in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">inorder</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">inorder</code> is <strong>guaranteed</strong> to be the inorder traversal of the tree.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">postorder</code> is <strong>guaranteed</strong> to be the postorder traversal of the tree.</li>
</ul>
</div>