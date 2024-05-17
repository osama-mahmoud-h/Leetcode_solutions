<h2><a href="https://leetcode.com/problems/delete-leaves-with-a-given-value/">1325. Delete Leaves With a Given Value</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a binary tree <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">root</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">target</code>, delete all the <strong style="border-color: rgb(91, 119, 134) !important;">leaf nodes</strong> with value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">target</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Note that once you delete a leaf node with value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">target</code><strong style="border-color: rgb(91, 119, 134) !important;">, </strong>if its parent node becomes a leaf node and has the value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">target</code>, it should also be deleted (you need to continue doing that until you cannot).</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2020/01/09/sample_1_1684.png" style="width: 500px; height: 112px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,2,3,2,null,2,4], target = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,null,3,null,4]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Leaf nodes in green with value (target = 2) are removed (Picture in left). 
After removing, new nodes become leaf nodes with value (target = 2) (Picture in center).
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2020/01/09/sample_2_1684.png" style="width: 400px; height: 154px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,3,3,3,2], target = 3
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,3,null,null,2]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2020/01/15/sample_3_1684.png" style="width: 500px; height: 166px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> root = [1,2,null,2,null,2], target = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Leaf nodes in green with value (target = 2) are removed at each step.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[1, 3000]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= Node.val, target &lt;= 1000</code></li>
</ul>
</div>