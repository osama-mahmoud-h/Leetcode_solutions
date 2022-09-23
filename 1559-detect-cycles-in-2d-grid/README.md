<h2><a href="https://leetcode.com/problems/detect-cycles-in-2d-grid/">1559. Detect Cycles in 2D Grid</a></h2><h3>Medium</h3><hr><div><p>Given a 2D array of characters <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code> of size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m x n</code>, you need to find if there exists any cycle consisting of the <strong>same value</strong> in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>.</p>

<p>A cycle is a path of <strong>length 4 or more</strong> in the grid that starts and ends at the same cell. From a given cell, you can move to one of the cells adjacent to it - in one of the four directions (up, down, left, or right), if it has the <strong>same value</strong> of the current cell.</p>

<p>Also, you cannot move to the cell that you visited in your last move. For example, the cycle <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(1, 1) -&gt; (1, 2) -&gt; (1, 1)</code> is invalid because from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(1, 2)</code> we visited <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(1, 1)</code> which was the last visited cell.</p>

<p>Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if any cycle of the same value exists in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>, otherwise, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/07/15/1.png" style="width: 231px; height: 152px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> grid = [["a","a","a","a"],["a","b","b","a"],["a","b","b","a"],["a","a","a","a"]]
<strong>Output:</strong> true
<strong>Explanation: </strong>There are two valid cycles shown in different colors in the image below:
<img alt="" src="https://assets.leetcode.com/uploads/2020/07/15/11.png" style="width: 225px; height: 163px; filter: saturate(0.9) brightness(0.8);">
</pre>

<p><strong>Example 2:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/07/15/22.png" style="width: 236px; height: 154px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> grid = [["c","c","c","a"],["c","d","c","c"],["c","c","e","c"],["f","c","c","c"]]
<strong>Output:</strong> true
<strong>Explanation: </strong>There is only one valid cycle highlighted in the image below:
<img alt="" src="https://assets.leetcode.com/uploads/2020/07/15/2.png" style="width: 229px; height: 157px; filter: saturate(0.9) brightness(0.8);">
</pre>

<p><strong>Example 3:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2020/07/15/3.png" style="width: 183px; height: 120px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> grid = [["a","b","b"],["b","z","b"],["b","b","a"]]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m == grid.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == grid[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= m, n &lt;= 500</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code> consists only of lowercase English letters.</li>
</ul>
</div>