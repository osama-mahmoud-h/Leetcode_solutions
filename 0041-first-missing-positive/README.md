<h2><a href="https://leetcode.com/problems/first-missing-positive/">41. First Missing Positive</a></h2><h3>Hard</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given an unsorted integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code>. Return the <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">smallest positive integer</em> that is <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">not present</em> in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You must implement an algorithm that runs in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">O(n)</code> time and uses <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">O(1)</code> auxiliary space.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [1,2,0]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The numbers in the range [1,2] are all in the array.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [3,4,-1,1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 2
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 1 is in the array but 2 is missing.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [7,8,9,11,12]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The smallest positive integer 1 is missing.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-2<sup style="border-color: rgb(83, 109, 121) !important;">31</sup> &lt;= nums[i] &lt;= 2<sup style="border-color: rgb(83, 109, 121) !important;">31</sup> - 1</code></li>
</ul>
</div>