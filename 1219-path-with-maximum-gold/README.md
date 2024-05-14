<h2><a href="https://leetcode.com/problems/path-with-maximum-gold/">1219. Path with Maximum Gold</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">In a gold mine <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">grid</code> of size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">m x n</code>, each cell in this mine has an integer representing the amount of gold in that cell, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code> if it is empty.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return the maximum amount of gold you can collect under the conditions:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Every time you are located in a cell you will collect all the gold in that cell.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">From your position, you can walk one step to the left, right, up, or down.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">You can't visit the same cell more than once.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Never visit a cell with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code> gold.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">You can start and stop collecting gold from <strong style="border-color: rgb(91, 119, 134) !important;">any </strong>position in the grid that has some gold.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> grid = [[0,6,0],[5,8,7],[0,9,0]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 24
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
[[0,6,0],
 [5,8,7],
 [0,9,0]]
Path to get the maximum gold, 9 -&gt; 8 -&gt; 7.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> grid = [[1,0,7],[2,0,6],[3,4,5],[0,3,0],[9,0,20]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 28
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
[[1,0,7],
 [2,0,6],
 [3,4,5],
 [0,3,0],
 [9,0,20]]
Path to get the maximum gold, 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5 -&gt; 6 -&gt; 7.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">m == grid.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == grid[i].length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= m, n &lt;= 15</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= grid[i][j] &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">There are at most <strong style="border-color: rgb(91, 119, 134) !important;">25 </strong>cells containing gold.</li>
</ul>
</div>