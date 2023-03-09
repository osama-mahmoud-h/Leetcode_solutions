<h2><a href="https://leetcode.com/problems/unique-paths/">62. Unique Paths</a></h2><h3>Medium</h3><hr><div><p>There is a robot on an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m x n</code> grid. The robot is initially located at the <strong>top-left corner</strong> (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid[0][0]</code>). The robot tries to move to the <strong>bottom-right corner</strong> (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid[m - 1][n - 1]</code>). The robot can only move either down or right at any point in time.</p>

<p>Given the two integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important;">the number of possible unique paths that the robot can take to reach the bottom-right corner</em>.</p>

<p>The test cases are generated so that the answer will be less than or equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * 10<sup>9</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2018/10/22/robot_maze.png" style="width: 400px; height: 183px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> m = 3, n = 7
<strong>Output:</strong> 28
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> m = 3, n = 2
<strong>Output:</strong> 3
<strong>Explanation:</strong> From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -&gt; Down -&gt; Down
2. Down -&gt; Down -&gt; Right
3. Down -&gt; Right -&gt; Down
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= m, n &lt;= 100</code></li>
</ul>
</div>