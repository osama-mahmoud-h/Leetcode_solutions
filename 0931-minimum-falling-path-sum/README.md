<h2><a href="https://leetcode.com/problems/minimum-falling-path-sum/">931. Minimum Falling Path Sum</a></h2><h3>Medium</h3><hr><div><p>Given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n x n</code> array of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">matrix</code>, return <em style="color: rgb(234, 238, 241) !important;">the <strong>minimum sum</strong> of any <strong>falling path</strong> through</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">matrix</code>.</p>

<p>A <strong>falling path</strong> starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(row, col)</code> will be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(row + 1, col - 1)</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(row + 1, col)</code>, or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(row + 1, col + 1)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/03/failing1-grid.jpg" style="width: 499px; height: 500px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> matrix = [[2,1,3],[6,5,4],[7,8,9]]
<strong>Output:</strong> 13
<strong>Explanation:</strong> There are two falling paths with a minimum sum as shown.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/11/03/failing2-grid.jpg" style="width: 164px; height: 365px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> matrix = [[-19,57],[-40,-5]]
<strong>Output:</strong> -59
<strong>Explanation:</strong> The falling path with a minimum sum is shown.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == matrix.length == matrix[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-100 &lt;= matrix[i][j] &lt;= 100</code></li>
</ul>
</div>