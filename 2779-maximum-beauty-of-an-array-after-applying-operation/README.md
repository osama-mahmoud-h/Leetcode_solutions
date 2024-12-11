<h2><a href="https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/">2779. Maximum Beauty of an Array After Applying Operation</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> and a <strong style="border-color: rgb(91, 119, 134) !important;">non-negative</strong> integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">In one operation, you can do the following:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Choose an index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i</code> that <strong style="border-color: rgb(91, 119, 134) !important;">hasn't been chosen before</strong> from the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[0, nums.length - 1]</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Replace <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums[i]</code> with any integer from the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[nums[i] - k, nums[i] + k]</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">The <strong style="border-color: rgb(91, 119, 134) !important;">beauty</strong> of the array is the length of the longest subsequence consisting of equal elements.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the <strong style="border-color: rgb(91, 119, 134) !important;">maximum</strong> possible beauty of the array </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> after applying the operation any number of times.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Note</strong> that you can apply the operation to each index <strong style="border-color: rgb(91, 119, 134) !important;">only once</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A&nbsp;<strong style="border-color: rgb(91, 119, 134) !important;">subsequence</strong> of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the order of the remaining elements.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [4,6,1,2], k = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> In this example, we apply the following operations:
- Choose index 1, replace it with 4 (from range [4,8]), nums = [4,4,1,2].
- Choose index 3, replace it with 4 (from range [0,4]), nums = [4,4,1,4].
After the applied operations, the beauty of the array nums is 3 (subsequence consisting of indices 0, 1, and 3).
It can be proven that 3 is the maximum possible length we can achieve.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [1,1,1,1], k = 10
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 4
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> In this example we don't have to apply any operations.
The beauty of the array nums is 4 (whole array).
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= nums[i], k &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
</ul>
</div>