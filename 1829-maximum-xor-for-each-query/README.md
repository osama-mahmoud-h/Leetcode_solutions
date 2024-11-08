<h2><a href="https://leetcode.com/problems/maximum-xor-for-each-query/">1829. Maximum XOR for Each Query</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a <strong style="border-color: rgb(91, 119, 134) !important;">sorted</strong> array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> non-negative integers and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">maximumBit</code>. You want to perform the following query <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> <strong style="border-color: rgb(91, 119, 134) !important;">times</strong>:</p>

<ol style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Find a non-negative integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k &lt; 2<sup style="border-color: rgb(83, 109, 121) !important;">maximumBit</sup></code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums[0] XOR nums[1] XOR ... XOR nums[nums.length-1] XOR k</code> is <strong style="border-color: rgb(91, 119, 134) !important;">maximized</strong>. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code> is the answer to the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code> query.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Remove the <strong style="border-color: rgb(91, 119, 134) !important;">last </strong>element from the current array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code>.</li>
</ol>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an array</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">answer</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">, where </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">answer[i]</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> is the answer to the </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> query</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [0,1,1,3], maximumBit = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [0,3,2,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation</strong>: The queries are answered as follows:
1<sup style="border-color: rgb(83, 109, 122) !important;">st</sup> query: nums = [0,1,1,3], k = 0 since 0 XOR 1 XOR 1 XOR 3 XOR 0 = 3.
2<sup style="border-color: rgb(83, 109, 122) !important;">nd</sup> query: nums = [0,1,1], k = 3 since 0 XOR 1 XOR 1 XOR 3 = 3.
3<sup style="border-color: rgb(83, 109, 122) !important;">rd</sup> query: nums = [0,1], k = 2 since 0 XOR 1 XOR 2 = 3.
4<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> query: nums = [0], k = 3 since 0 XOR 3 = 3.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [2,3,4,7], maximumBit = 3
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [5,2,6,5]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation</strong>: The queries are answered as follows:
1<sup style="border-color: rgb(83, 109, 122) !important;">st</sup> query: nums = [2,3,4,7], k = 5 since 2 XOR 3 XOR 4 XOR 7 XOR 5 = 7.
2<sup style="border-color: rgb(83, 109, 122) !important;">nd</sup> query: nums = [2,3,4], k = 2 since 2 XOR 3 XOR 4 XOR 2 = 7.
3<sup style="border-color: rgb(83, 109, 122) !important;">rd</sup> query: nums = [2,3], k = 6 since 2 XOR 3 XOR 6 = 7.
4<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> query: nums = [2], k = 5 since 2 XOR 5 = 7.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [0,1,2,2,5,7], maximumBit = 3
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [4,3,6,4,6,7]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums.length == n</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= maximumBit &lt;= 20</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= nums[i] &lt; 2<sup style="border-color: rgb(83, 109, 121) !important;">maximumBit</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code>​​​ is sorted in <strong style="border-color: rgb(91, 119, 134) !important;">ascending</strong> order.</li>
</ul>
</div>