<h2><a href="https://leetcode.com/problems/maximum-sum-circular-subarray/">918. Maximum Sum Circular Subarray</a></h2><h3>Medium</h3><hr><div><p>Given a <strong>circular integer array</strong> <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums</code> of length <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important;">the maximum possible sum of a non-empty <strong>subarray</strong> of </em><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums</code>.</p>

<p>A <strong>circular array</strong> means the end of the array connects to the beginning of the array. Formally, the next element of <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums[i]</code> is <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums[(i + 1) % n]</code> and the previous element of <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums[i]</code> is <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums[(i - 1 + n) % n]</code>.</p>

<p>A <strong>subarray</strong> may only include each element of the fixed buffer <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums</code> at most once. Formally, for a subarray <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">nums[i], nums[i + 1], ..., nums[j]</code>, there does not exist <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">i &lt;= k1</code>, <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">k2 &lt;= j</code> with <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">k1 % n == k2 % n</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;"><strong>Input:</strong> nums = [1,-2,3,-2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> Subarray [3] has maximum sum 3.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;"><strong>Input:</strong> nums = [5,-3,5]
<strong>Output:</strong> 10
<strong>Explanation:</strong> Subarray [5,5] has maximum sum 5 + 5 = 10.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;"><strong>Input:</strong> nums = [-3,-2,-3]
<strong>Output:</strong> -2
<strong>Explanation:</strong> Subarray [-2] has maximum sum -2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">n == nums.length</code></li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">1 &lt;= n &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">-3 * 10<sup>4</sup> &lt;= nums[i] &lt;= 3 * 10<sup>4</sup></code></li>
</ul>
</div>