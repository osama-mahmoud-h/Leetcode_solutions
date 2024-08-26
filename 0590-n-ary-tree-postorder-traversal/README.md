<h2><a href="https://leetcode.com/problems/n-ary-tree-postorder-traversal/">590. N-ary Tree Postorder Traversal</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">root</code> of an n-ary tree, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">the postorder traversal of its nodes' values</em>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)</p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width: 100%; max-width: 300px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> root = [1,null,3,2,4,null,5,6]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> [5,6,3,2,4,1]
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> [2,6,14,11,7,3,12,8,4,13,9,10,5,1]
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">[0, 10<sup style="border-color: rgb(92, 120, 133) !important;">4</sup>]</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0 &lt;= Node.val &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">4</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;">The height of the n-ary tree is less than or equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1000</code>.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Follow up:</strong> Recursive solution is trivial, could you do it iteratively?</p>
</div>