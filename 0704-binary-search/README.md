<h2><a href="https://leetcode.com/problems/binary-search/">704. Binary Search</a></h2><h3>Easy</h3><hr><div><p>Given an array of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> which is sorted in ascending order, and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>, write a function to search <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code>. If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> exists, then return its index. Otherwise, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code>.</p>

<p>You must write an algorithm with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 9
<strong>Output:</strong> 4
<strong>Explanation:</strong> 9 exists in nums and its index is 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> 2 does not exist in nums so return -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>4</sup> &lt; nums[i], target &lt; 10<sup>4</sup></code></li>
	<li>All the integers in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> are <strong>unique</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> is sorted in ascending order.</li>
</ul>
</div>