<h2><a href="https://leetcode.com/problems/create-binary-tree-from-descriptions/">2196. Create Binary Tree From Descriptions</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a 2D integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">descriptions</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">descriptions[i] = [parent<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, child<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, isLeft<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code> indicates that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">parent<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code> is the <strong style="border-color: rgb(91, 119, 134) !important;">parent</strong> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">child<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code> in a <strong style="border-color: rgb(91, 119, 134) !important;">binary</strong> tree of <strong style="border-color: rgb(91, 119, 134) !important;">unique</strong> values. Furthermore,</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">isLeft<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> == 1</code>, then <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">child<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code> is the left child of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">parent<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">isLeft<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> == 0</code>, then <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">child<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code> is the right child of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">parent<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Construct the binary tree described by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">descriptions</code> and return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">its <strong style="border-color: rgb(91, 119, 134) !important;">root</strong></em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The test cases will be generated such that the binary tree is <strong style="border-color: rgb(91, 119, 134) !important;">valid</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/09/example1drawio.png" style="width: 300px; height: 236px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> descriptions = [[20,15,1],[20,17,0],[50,20,1],[50,80,0],[80,19,1]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [50,20,80,15,17,19]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The root node is the node with value 50 since it has no parent.
The resulting binary tree is shown in the diagram.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/09/example2drawio.png" style="width: 131px; height: 300px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> descriptions = [[1,2,1],[2,3,0],[3,4,1]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,2,null,null,3,4]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The root node is the node with value 1 since it has no parent.
The resulting binary tree is shown in the diagram.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= descriptions.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">descriptions[i].length == 3</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= parent<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, child<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= isLeft<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt;= 1</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">The binary tree described by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">descriptions</code> is valid.</li>
</ul>
</div>