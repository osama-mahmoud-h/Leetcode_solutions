<h2><a href="https://leetcode.com/problems/unique-paths-ii/">63. Unique Paths II</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m x n</code> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>. There is a robot initially located at the <b>top-left corner</b> (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid[0][0]</code>). The robot tries to move to the <strong>bottom-right corner</strong> (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid[m - 1][n - 1]</code>). The robot can only move either down or right at any point in time.</p>

<p>An obstacle and space are marked as <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> respectively in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>. A path that the robot takes cannot include <strong>any</strong> square that is an obstacle.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the number of possible unique paths that the robot can take to reach the bottom-right corner</em>.</p>

<p>The testcases are generated so that the answer will be less than or equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * 10<sup>9</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/04/robot1.jpg" style="width: 242px; height: 242px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -&gt; Right -&gt; Down -&gt; Down
2. Down -&gt; Down -&gt; Right -&gt; Right
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/04/robot2.jpg" style="width: 162px; height: 162px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> obstacleGrid = [[0,1],[0,0]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m == obstacleGrid.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == obstacleGrid[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= m, n &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">obstacleGrid[i][j]</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>.</li>
</ul>
</div>