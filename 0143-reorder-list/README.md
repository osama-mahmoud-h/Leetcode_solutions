<h2><a href="https://leetcode.com/problems/reorder-list/">143. Reorder List</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given the head of a singly linked-list. The list can be represented as:</p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;">L<sub style="border-color: rgb(83, 109, 122) !important;">0</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">1</sub> → … → L<sub style="border-color: rgb(83, 109, 122) !important;">n - 1</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">n</sub>
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">Reorder the list to be on the following form:</em></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;">L<sub style="border-color: rgb(83, 109, 122) !important;">0</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">n</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">1</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">n - 1</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">2</sub> → L<sub style="border-color: rgb(83, 109, 122) !important;">n - 2</sub> → …
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">You may not modify the values in the list's nodes. Only nodes themselves may be changed.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/04/reorder1linked-list.jpg" style="width: 422px; height: 222px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [1,2,3,4]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,4,2,3]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/09/reorder2-linked-list.jpg" style="width: 542px; height: 222px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> head = [1,2,3,4,5]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,5,2,4,3]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The number of nodes in the list is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[1, 5 * 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup>]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= Node.val &lt;= 1000</code></li>
</ul>
</div>