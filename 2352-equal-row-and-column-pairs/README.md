<h2><a href="https://leetcode.com/problems/equal-row-and-column-pairs/">2352. Equal Row and Column Pairs</a></h2><h3>Medium</h3><hr><div><p>Given a <strong>0-indexed</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n x n</code> integer matrix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>, <em style="color: rgb(234, 238, 241) !important;">return the number of pairs </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(r<sub>i</sub>, c<sub>j</sub>)</code><em style="color: rgb(234, 238, 241) !important;"> such that row </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">r<sub>i</sub></code><em style="color: rgb(234, 238, 241) !important;"> and column </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">c<sub>j</sub></code><em style="color: rgb(234, 238, 241) !important;"> are equal</em>.</p>

<p>A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/01/ex1.jpg" style="width: 150px; height: 153px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[3,2,1],[1,7,6],[2,7,7]]
<strong>Output:</strong> 1
<strong>Explanation:</strong> There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/01/ex2.jpg" style="width: 200px; height: 209px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are 3 equal row and column pairs:
- (Row 0, Column 0): [3,1,2,2]
- (Row 2, Column 2): [2,4,2,2]
- (Row 3, Column 2): [2,4,2,2]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == grid.length == grid[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 200</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= grid[i][j] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>