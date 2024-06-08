<h2><a href="https://leetcode.com/problems/continuous-subarray-sum/">523. Continuous Subarray Sum</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">Given an integer array nums and an integer k, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">true</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">if </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">nums</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;"> has a <strong style="border-color: rgb(92, 122, 137) !important;">good subarray</strong> or </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">false</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;"> otherwise</em>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">A <strong style="border-color: rgb(92, 122, 137) !important;">good subarray</strong> is a subarray where:</p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">its length is <strong style="border-color: rgb(92, 122, 137) !important;">at least two</strong>, and</li>
	<li style="border-color: rgb(92, 122, 137) !important;">the sum of the elements of the subarray is a multiple of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">k</code>.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Note</strong> that:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">A <strong style="border-color: rgb(92, 122, 137) !important;">subarray</strong> is a contiguous part of the array.</li>
	<li style="border-color: rgb(92, 122, 137) !important;">An integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">x</code> is a multiple of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">k</code> if there exists an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n</code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">x = n * k</code>. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0</code> is <strong style="border-color: rgb(92, 122, 137) !important;">always</strong> a multiple of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">k</code>.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [23,<u style="border-color: rgb(91, 119, 134) !important;">2,4</u>,6,7], k = 6
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> true
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [<u style="border-color: rgb(91, 119, 134) !important;">23,2,6,4,7</u>], k = 6
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> true
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [23,2,6,4,7], k = 13
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> false
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= nums.length &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0 &lt;= nums[i] &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">9</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0 &lt;= sum(nums[i]) &lt;= 2<sup style="border-color: rgb(92, 120, 133) !important;">31</sup> - 1</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= k &lt;= 2<sup style="border-color: rgb(92, 120, 133) !important;">31</sup> - 1</code></li>
</ul>
</div>