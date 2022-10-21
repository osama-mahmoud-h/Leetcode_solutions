<h2><a href="https://leetcode.com/problems/contains-duplicate-ii/">219. Contains Duplicate II</a></h2><h3>Easy</h3><hr><div><p>Given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if there are two <strong>distinct indices</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">j</code> in the array such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i] == nums[j]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">abs(i - j) &lt;= k</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [1,2,3,1], k = 3
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [1,0,1,1], k = 1
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [1,2,3,1,2,3], k = 2
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>
</div>