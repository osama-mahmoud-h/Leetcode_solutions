<h2><a href="https://leetcode.com/problems/divide-array-into-equal-pairs/">2206. Divide Array Into Equal Pairs</a></h2><h3>Easy</h3><hr><div><p>You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> consisting of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * n</code> integers.</p>

<p>You need to divide <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> into <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> pairs such that:</p>

<ul>
	<li>Each element belongs to <strong>exactly one</strong> pair.</li>
	<li>The elements present in a pair are <strong>equal</strong>.</li>
</ul>

<p>Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> <em style="color: rgb(234, 238, 241) !important;">if nums can be divided into</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> <em style="color: rgb(234, 238, 241) !important;">pairs, otherwise return</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [3,2,3,2,2,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> 
There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> 
There is no way to divide nums into 4 / 2 = 2 pairs such that the pairs satisfy every condition.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums.length == 2 * n</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 500</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums[i] &lt;= 500</code></li>
</ul>
</div>