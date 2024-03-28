<h2><a href="https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/">2958. Length of Longest Subarray With at Most K Frequency</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">nums</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">k</code>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">The <strong style="border-color: rgb(92, 122, 137) !important;">frequency</strong> of an element <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">x</code> is the number of times it occurs in an array.</p>

<p style="border-color: rgb(91, 119, 134) !important;">An array is called <strong style="border-color: rgb(92, 122, 137) !important;">good</strong> if the frequency of each element in this array is <strong style="border-color: rgb(92, 122, 137) !important;">less than or equal</strong> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">k</code>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">the length of the <strong style="border-color: rgb(92, 122, 137) !important;">longest</strong> <strong style="border-color: rgb(92, 122, 137) !important;">good</strong> subarray of</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">nums</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">.</em></p>

<p style="border-color: rgb(92, 122, 137) !important;">A <strong style="border-color: rgb(92, 122, 137) !important;">subarray</strong> is a contiguous non-empty sequence of elements within an array.</p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [1,2,3,1,2,3,1,2], k = 2
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 6
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> The longest possible good subarray is [1,2,3,1,2,3] since the values 1, 2, and 3 occur at most twice in this subarray. Note that the subarrays [2,3,1,2,3,1] and [3,1,2,3,1,2] are also good.
It can be shown that there are no good subarrays with length more than 6.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [1,2,1,2,1,2,1,2], k = 1
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 2
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> The longest possible good subarray is [1,2] since the values 1 and 2 occur at most once in this subarray. Note that the subarray [2,1] is also good.
It can be shown that there are no good subarrays with length more than 2.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [5,5,5,5,5,5,5], k = 4
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 4
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> The longest possible good subarray is [5,5,5,5] since the value 5 occurs 4 times in this subarray.
It can be shown that there are no good subarrays with length more than 4.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= nums.length &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= nums[i] &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">9</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>