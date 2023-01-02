<h2><a href="https://leetcode.com/problems/ways-to-split-array-into-three-subarrays/">1712. Ways to Split Array Into Three Subarrays</a></h2><h3>Medium</h3><hr><div><p>A split of an integer array is <strong>good</strong> if:</p>

<ul>
	<li>The array is split into three <strong>non-empty</strong> contiguous subarrays - named <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">left</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">mid</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">right</code> respectively from left to right.</li>
	<li>The sum of the elements in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">left</code> is less than or equal to the sum of the elements in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">mid</code>, and the sum of the elements in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">mid</code> is less than or equal to the sum of the elements in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">right</code>.</li>
</ul>

<p>Given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code>, an array of <strong>non-negative</strong> integers, return <em style="color: rgb(234, 238, 241) !important;">the number of <strong>good</strong> ways to split</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code>. As the number may be too large, return it <strong>modulo</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">10<sup>9 </sup>+ 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [1,1,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The only good way to split nums is [1] [1] [1].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [1,2,2,2,5,0]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three good ways of splitting nums:
[1] [2] [2,2,5,0]
[1] [2,2] [2,5,0]
[1,2] [2,2] [5,0]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [3,2,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no good way to split nums.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">3 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>