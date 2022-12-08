<h2><a href="https://leetcode.com/problems/leaf-similar-trees/">872. Leaf-Similar Trees</a></h2><h3>Easy</h3><hr><div><p>Consider all the leaves of a binary tree, from&nbsp;left to right order, the values of those&nbsp;leaves form a <strong>leaf value sequence</strong><em style="color: rgb(234, 238, 241) !important;">.</em></p>

<p><img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/16/tree.png" style="width: 400px; height: 336px; filter: saturate(0.9) brightness(0.8);"></p>

<p>For example, in the given tree above, the leaf value sequence is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(6, 7, 4, 9, 8)</code>.</p>

<p>Two binary trees are considered <em style="color: rgb(234, 238, 241) !important;">leaf-similar</em>&nbsp;if their leaf value sequence is the same.</p>

<p>Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if and only if the two given trees with head nodes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">root1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">root2</code> are leaf-similar.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/03/leaf-similar-1.jpg" style="width: 600px; height: 237px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/03/leaf-similar-2.jpg" style="width: 300px; height: 110px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root1 = [1,2,3], root2 = [1,3,2]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in each tree will be in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, 200]</code>.</li>
	<li>Both of the given trees will have values in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[0, 200]</code>.</li>
</ul>
</div>