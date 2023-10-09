<h2><a href="https://leetcode.com/problems/majority-element-ii/">229. Majority Element II</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given an integer array of size <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">n</code>, find all elements that appear more than <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">⌊ n/3 ⌋</code> times.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(90, 119, 133) !important;"><strong style="border-color: rgb(90, 119, 133) !important;">Input:</strong> nums = [3,2,3]
<strong style="border-color: rgb(90, 119, 133) !important;">Output:</strong> [3]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(90, 119, 133) !important;"><strong style="border-color: rgb(90, 119, 133) !important;">Input:</strong> nums = [1]
<strong style="border-color: rgb(90, 119, 133) !important;">Output:</strong> [1]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(90, 119, 133) !important;"><strong style="border-color: rgb(90, 119, 133) !important;">Input:</strong> nums = [1,2]
<strong style="border-color: rgb(90, 119, 133) !important;">Output:</strong> [1,2]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">1 &lt;= nums.length &lt;= 5 * 10<sup style="border-color: rgb(91, 119, 132) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">-10<sup style="border-color: rgb(91, 119, 132) !important;">9</sup> &lt;= nums[i] &lt;= 10<sup style="border-color: rgb(91, 119, 132) !important;">9</sup></code></li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Follow up:</strong> Could you solve the problem in linear time and in <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">O(1)</code> space?</p>
</div>