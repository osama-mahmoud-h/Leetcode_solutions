<h2><a href="https://leetcode.com/problems/balance-a-binary-search-tree/">1382. Balance a Binary Search Tree</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">root</code> of a binary search tree, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">a <strong style="border-color: rgb(100, 128, 150) !important;">balanced</strong> binary search tree with the same node values</em>. If there is more than one answer, return <strong style="border-color: rgb(92, 122, 137) !important;">any of them</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A binary search tree is <strong style="border-color: rgb(92, 122, 137) !important;">balanced</strong> if the depth of the two subtrees of every node never differs by more than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/10/balance1-tree.jpg" style="width: 500px; height: 319px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(90, 120, 135) !important;">Input:</strong> root = [1,null,2,null,3,null,4,null,null]
<strong style="border-color: rgb(90, 120, 135) !important;">Output:</strong> [2,1,3,null,null,null,4]
<b style="border-color: rgb(90, 120, 135) !important;">Explanation:</b> This is not the only correct answer, [3,1,4,null,2] is also correct.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/08/10/balanced2-tree.jpg" style="width: 224px; height: 145px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(90, 120, 135) !important;">Input:</strong> root = [2,1,3]
<strong style="border-color: rgb(90, 120, 135) !important;">Output:</strong> [2,1,3]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[1, 10<sup style="border-color: rgb(92, 120, 133) !important;">4</sup>]</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= Node.val &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
</ul>
</div>