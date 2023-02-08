<h2><a href="https://leetcode.com/problems/jump-game-ii/">45. Jump Game II</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> array of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>. You are initially positioned at <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[0]</code>.</p>

<p>Each element <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i]</code> represents the maximum length of a forward jump from index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code>. In other words, if you are at <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i]</code>, you can jump to any <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i + j]</code> where:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= j &lt;= nums[i]</code> and</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i + j &lt; n</code></li>
</ul>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the minimum number of jumps to reach </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[n - 1]</code>. The test cases are generated such that you can reach <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[n - 1]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [2,3,1,1,4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [2,3,0,1,4]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>