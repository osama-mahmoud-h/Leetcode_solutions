<h2><a href="https://leetcode.com/problems/evaluate-boolean-binary-tree/">2331. Evaluate Boolean Binary Tree</a></h2><h3>Easy</h3><hr><div><p>You are given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">root</code> of a <strong>full binary tree</strong> with the following properties:</p>

<ul>
	<li><strong>Leaf nodes</strong> have either the value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> represents <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">False</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> represents <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">True</code>.</li>
	<li><strong>Non-leaf nodes</strong> have either the value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">3</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2</code> represents the boolean <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">OR</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">3</code> represents the boolean <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">AND</code>.</li>
</ul>

<p>The <strong>evaluation</strong> of a node is as follows:</p>

<ul>
	<li>If the node is a leaf node, the evaluation is the <strong>value</strong> of the node, i.e. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">True</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">False</code>.</li>
	<li>Otherwise, <strong>evaluate</strong> the node's two children and <strong>apply</strong> the boolean operation of its value with the children's evaluations.</li>
</ul>

<p>Return<em style="color: rgb(234, 238, 241) !important;"> the boolean result of <strong>evaluating</strong> the </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">root</code><em style="color: rgb(234, 238, 241) !important;"> node.</em></p>

<p>A <strong>full binary tree</strong> is a binary tree where each node has either <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2</code> children.</p>

<p>A <strong>leaf node</strong> is a node that has zero children.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/05/16/example1drawio1.png" style="width: 700px; height: 252px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> root = [2,1,3,null,null,0,1]
<strong>Output:</strong> true
<strong>Explanation:</strong> The above diagram illustrates the evaluation process.
The AND node evaluates to False AND True = False.
The OR node evaluates to True OR False = True.
The root node evaluates to True, so we return true.</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> root = [0]
<strong>Output:</strong> false
<strong>Explanation:</strong> The root node is a leaf node and it evaluates to false, so we return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, 1000]</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= Node.val &lt;= 3</code></li>
	<li>Every node has either <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2</code> children.</li>
	<li>Leaf nodes have a value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>.</li>
	<li>Non-leaf nodes have a value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">3</code>.</li>
</ul>
</div>