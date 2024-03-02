<h2><a href="https://leetcode.com/problems/squares-of-a-sorted-array/">977. Squares of a Sorted Array</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> sorted in <strong style="border-color: rgb(91, 119, 134) !important;">non-decreasing</strong> order, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an array of <strong style="border-color: rgb(91, 119, 134) !important;">the squares of each number</strong> sorted in non-decreasing order</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [-4,-1,0,3,10]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [0,1,9,16,100]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [-7,-3,2,3,11]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [4,9,9,49,121]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;"><span style="border-color: rgb(83, 109, 121) !important;">1 &lt;= nums.length &lt;= </span>10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup> &lt;= nums[i] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> is sorted in <strong style="border-color: rgb(91, 119, 134) !important;">non-decreasing</strong> order.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<strong style="border-color: rgb(91, 119, 134) !important;">Follow up:</strong> Squaring each element and sorting the new array is very trivial, could you find an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">O(n)</code> solution using a different approach?</div>