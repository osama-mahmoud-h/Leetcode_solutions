<h2><a href="https://leetcode.com/problems/shortest-bridge/">934. Shortest Bridge</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">n x n</code> binary matrix <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">grid</code> where <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1</code> represents land and <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">0</code> represents water.</p>

<p>An <strong>island</strong> is a 4-directionally connected group of <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1</code>'s not connected to any other <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1</code>'s. There are <strong>exactly two islands</strong> in <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">grid</code>.</p>

<p>You may change <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">0</code>'s to <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1</code>'s to connect the two islands to form <strong>one island</strong>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the smallest number of </em><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">0</code><em style="color: rgb(234, 238, 241) !important;">'s you must flip to connect the two islands</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> grid = [[0,1],[1,0]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> grid = [[0,1,0],[0,0,0],[0,0,1]]
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 29, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> grid = [[1,1,1,1,1],[1,0,0,0,1],[1,0,1,0,1],[1,0,0,0,1],[1,1,1,1,1]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">n == grid.length == grid[i].length</code></li>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">2 &lt;= n &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">grid[i][j]</code> is either <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">0</code> or <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">1</code>.</li>
	<li>There are exactly two islands in <code style="background-color: rgb(20, 29, 33) !important; color: rgb(184, 199, 206) !important;">grid</code>.</li>
</ul>
</div>