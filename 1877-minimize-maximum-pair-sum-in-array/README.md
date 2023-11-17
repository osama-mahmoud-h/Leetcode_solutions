<h2><a href="https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/">1877. Minimize Maximum Pair Sum in Array</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">The <strong style="border-color: rgb(91, 119, 134) !important;">pair sum</strong> of a pair <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(a,b)</code> is equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">a + b</code>. The <strong style="border-color: rgb(91, 119, 134) !important;">maximum pair sum</strong> is the largest <strong style="border-color: rgb(91, 119, 134) !important;">pair sum</strong> in a list of pairs.</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">For example, if we have pairs <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(1,5)</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(2,3)</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(4,4)</code>, the <strong style="border-color: rgb(91, 119, 134) !important;">maximum pair sum</strong> would be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">max(1+5, 2+3, 4+4) = max(6, 5, 8) = 8</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> of <strong style="border-color: rgb(91, 119, 134) !important;">even</strong> length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code>, pair up the elements of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> into <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n / 2</code> pairs such that:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Each element of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> is in <strong style="border-color: rgb(91, 119, 134) !important;">exactly one</strong> pair, and</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The <strong style="border-color: rgb(91, 119, 134) !important;">maximum pair sum </strong>is <strong style="border-color: rgb(91, 119, 134) !important;">minimized</strong>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the minimized <strong style="border-color: rgb(91, 119, 134) !important;">maximum pair sum</strong> after optimally pairing up the elements</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [3,5,2,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 7
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The elements can be paired up into pairs (3,3) and (5,2).
The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [3,5,4,2,4,6]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 8
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The elements can be paired up into pairs (3,5), (4,4), and (6,2).
The maximum pair sum is max(3+5, 4+4, 6+2) = max(8, 8, 8) = 8.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == nums.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= n &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> is <strong style="border-color: rgb(91, 119, 134) !important;">even</strong>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums[i] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
</ul></div>