<h2><a href="https://leetcode.com/problems/swapping-nodes-in-a-linked-list/">1721. Swapping Nodes in a Linked List</a></h2><h3>Medium</h3><hr><div><p>You are given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">head</code> of a linked list, and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the head of the linked list after <strong>swapping</strong> the values of the </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k<sup>th</sup></code> <em style="color: rgb(234, 238, 241) !important;">node from the beginning and the </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k<sup>th</sup></code> <em style="color: rgb(234, 238, 241) !important;">node from the end (the list is <strong>1-indexed</strong>).</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/linked1.jpg" style="width: 400px; height: 112px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = [1,2,3,4,5], k = 2
<strong>Output:</strong> [1,4,3,2,5]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = [7,9,6,6,7,8,3,0,9,5], k = 5
<strong>Output:</strong> [7,9,6,6,8,7,3,0,9,5]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= k &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>