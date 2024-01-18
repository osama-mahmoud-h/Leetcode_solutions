<h2><a href="https://leetcode.com/problems/climbing-stairs/">70. Climbing Stairs</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are climbing a staircase. It takes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">n</code> steps to reach the top.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Each time you can either climb <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">2</code> steps. In how many distinct ways can you climb to the top?</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 2
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 3
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1 &lt;= n &lt;= 45</code></li>
</ul>
</div>