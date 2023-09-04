<h2><a href="https://leetcode.com/problems/linked-list-cycle/">141. Linked List Cycle</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">head</code>, the head of a linked list, determine if the linked list has a cycle in it.</p>

<p style="border-color: rgb(91, 119, 134) !important;">There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">next</code>&nbsp;pointer. Internally, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">pos</code>&nbsp;is used to denote the index of the node that&nbsp;tail's&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">next</code>&nbsp;pointer is connected to.&nbsp;<strong style="border-color: rgb(91, 119, 134) !important;">Note that&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">pos</code>&nbsp;is not passed as a parameter</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">true</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> if there is a cycle in the linked list</em>. Otherwise, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">false</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" style="width: 300px; height: 97px; margin-top: 8px; margin-bottom: 8px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [3,2,0,-4], pos = 1
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png" style="width: 141px; height: 74px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [1,2], pos = 0
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 0th node.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png" style="width: 45px; height: 45px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [1], pos = -1
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> false
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There is no cycle in the linked list.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of the nodes in the list is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">[0, 10<sup style="border-color: rgb(84, 109, 121) !important;">4</sup>]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">-10<sup style="border-color: rgb(84, 109, 121) !important;">5</sup> &lt;= Node.val &lt;= 10<sup style="border-color: rgb(84, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">pos</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">-1</code> or a <strong style="border-color: rgb(91, 119, 134) !important;">valid index</strong> in the linked-list.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Follow up:</strong> Can you solve it using <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">O(1)</code> (i.e. constant) memory?</p>
</div>