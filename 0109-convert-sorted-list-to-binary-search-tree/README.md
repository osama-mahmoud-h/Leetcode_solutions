<h2><a href="https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/">109. Convert Sorted List to Binary Search Tree</a></h2><h3>Medium</h3><hr><div><p>Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">head</code> of a singly linked list where elements are sorted in <strong>ascending order</strong>, convert <em style="color: rgb(234, 238, 241) !important;">it to a </em><span data-keyword="height-balanced"><strong><em style="color: rgb(234, 238, 241) !important;">height-balanced</em></strong></span> <em style="color: rgb(234, 238, 241) !important;">binary search tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/17/linked.jpg" style="width: 500px; height: 388px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = [-10,-3,0,5,9]
<strong>Output:</strong> [0,-3,9,-10,null,5]
<strong>Explanation:</strong> One possible answer is [0,-3,9,-10,null,5], which represents the shown height balanced BST.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = []
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">head</code> is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[0, 2 * 10<sup>4</sup>]</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
</ul>
</div>