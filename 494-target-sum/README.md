<h2><a href="https://leetcode.com/problems/target-sum/">494. Target Sum</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>.</p>

<p>You want to build an <strong>expression</strong> out of nums by adding one of the symbols <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'+'</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'-'</code> before each integer in nums and then concatenate all the integers.</p>

<ul>
	<li>For example, if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums = [2, 1]</code>, you can add a <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'+'</code> before <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2</code> and a <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'-'</code> before <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> and concatenate them to build the expression <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"+2-1"</code>.</li>
</ul>

<p>Return the number of different <strong>expressions</strong> that you can build, which evaluates to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [1,1,1,1,1], target = 3
<strong>Output:</strong> 5
<strong>Explanation:</strong> There are 5 ways to assign symbols to make the sum of nums be target 3.
-1 + 1 + 1 + 1 + 1 = 3
+1 - 1 + 1 + 1 + 1 = 3
+1 + 1 - 1 + 1 + 1 = 3
+1 + 1 + 1 - 1 + 1 = 3
+1 + 1 + 1 + 1 - 1 = 3
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [1], target = 1
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums.length &lt;= 20</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= nums[i] &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= sum(nums[i]) &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1000 &lt;= target &lt;= 1000</code></li>
</ul>
</div>