<h2><a href="https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/">2610. Convert an Array Into a 2D Array With Conditions</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code>. You need to create a 2D array from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> satisfying the following conditions:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The 2D array should contain <strong style="border-color: rgb(91, 119, 134) !important;">only</strong> the elements of the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Each row in the 2D array contains <strong style="border-color: rgb(91, 119, 134) !important;">distinct</strong> integers.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The number of rows in the 2D array should be <strong style="border-color: rgb(91, 119, 134) !important;">minimal</strong>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the resulting array</em>. If there are multiple answers, return any of them.</p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Note</strong> that the 2D array can have a different number of elements on each row.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [1,3,4,1,2,3,1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[1,3,4,2],[1,3],[1]]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> We can create a 2D array that contains the following rows:
- 1,3,4,2
- 1,3
- 1
All elements of nums were used, and each row of the 2D array contains distinct integers, so it is a valid answer.
It can be shown that we cannot have less than 3 rows in a valid array.</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [1,2,3,4]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[4,3,2,1]]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> All elements of the array are distinct, so we can keep all of them in the first row of the 2D array.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums.length &lt;= 200</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums[i] &lt;= nums.length</code></li>
</ul>
</div>