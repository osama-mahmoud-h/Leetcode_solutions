<h2><a href="https://leetcode.com/problems/linked-list-cycle-ii/">142. Linked List Cycle II</a></h2><h3>Medium</h3><hr><div><p>Given the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">head</code> of a linked list, return <em style="color: rgb(234, 238, 241) !important;">the node where the cycle begins. If there is no cycle, return </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">null</code>.</p>

<p>There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">next</code> pointer. Internally, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pos</code> is used to denote the index of the node that tail's <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">next</code> pointer is connected to (<strong>0-indexed</strong>). It is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code> if there is no cycle. <strong>Note that</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pos</code> <strong>is not passed as a parameter</strong>.</p>

<p><strong>Do not modify</strong> the linked list.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" style="height: 145px; width: 450px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = [3,2,0,-4], pos = 1
<strong>Output:</strong> tail connects to node index 1
<strong>Explanation:</strong> There is a cycle in the linked list, where tail connects to the second node.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png" style="height: 105px; width: 201px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = [1,2], pos = 0
<strong>Output:</strong> tail connects to node index 0
<strong>Explanation:</strong> There is a cycle in the linked list, where tail connects to the first node.
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png" style="height: 65px; width: 65px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> head = [1], pos = -1
<strong>Output:</strong> no cycle
<strong>Explanation:</strong> There is no cycle in the linked list.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of the nodes in the list is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[0, 10<sup>4</sup>]</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>5</sup> &lt;= Node.val &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pos</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code> or a <strong>valid index</strong> in the linked-list.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Can you solve it using <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(1)</code> (i.e. constant) memory?</p>
</div>