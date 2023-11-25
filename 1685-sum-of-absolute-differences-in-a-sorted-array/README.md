<h2><a href="https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/">1685. Sum of Absolute Differences in a Sorted Array</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> sorted in <strong style="border-color: rgb(91, 119, 134) !important;">non-decreasing</strong> order.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Build and return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an integer array </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">result</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> with the same length as </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> such that </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">result[i]</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> is equal to the <strong style="border-color: rgb(91, 119, 134) !important;">summation of absolute differences</strong> between </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums[i]</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> and all the other elements in the array.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;">In other words, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">result[i]</code> is equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">sum(|nums[i]-nums[j]|)</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= j &lt; nums.length</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">j != i</code> (<strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong>).</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [2,3,5]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [4,3,5]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Assuming the arrays are 0-indexed, then
result[0] = |2-2| + |2-3| + |2-5| = 0 + 1 + 3 = 4,
result[1] = |3-2| + |3-3| + |3-5| = 1 + 0 + 2 = 3,
result[2] = |5-2| + |5-3| + |5-5| = 3 + 2 + 0 = 5.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [1,4,6,8,10]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [24,15,13,15,21]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= nums.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums[i] &lt;= nums[i + 1] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
</ul>
</div>