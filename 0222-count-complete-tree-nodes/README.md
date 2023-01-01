<h2><a href="https://leetcode.com/problems/count-complete-tree-nodes/">222. Count Complete Tree Nodes</a></h2><h3>Medium</h3><hr><div><p>Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">root</code> of a <strong>complete</strong> binary tree, return the number of the nodes in the tree.</p>

<p>According to <strong><a href="http://en.wikipedia.org/wiki/Binary_tree#Types_of_binary_trees" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">Wikipedia</a></strong>, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">2<sup>h</sup></code> nodes inclusive at the last level <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">h</code>.</p>

<p>Design an algorithm that runs in less than&nbsp;<code data-stringify-type="code" style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">O(n)</code>&nbsp;time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/14/complete.jpg" style="width: 372px; height: 302px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root = [1,2,3,4,5,6]
<strong>Output:</strong> 6
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root = []
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> root = [1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[0, 5 * 10<sup>4</sup>]</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">0 &lt;= Node.val &lt;= 5 * 10<sup>4</sup></code></li>
	<li>The tree is guaranteed to be <strong>complete</strong>.</li>
</ul>
</div>