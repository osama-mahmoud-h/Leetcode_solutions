<h2><a href="https://leetcode.com/problems/maximal-square/">221. Maximal Square</a></h2><h3>Medium</h3><hr><div><p>Given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m x n</code> binary <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">matrix</code> filled with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>'s and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>'s, <em style="color: rgb(234, 238, 241) !important;">find the largest square containing only</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>'s <em style="color: rgb(234, 238, 241) !important;">and return its area</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/max1grid.jpg" style="width: 400px; height: 319px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
<strong>Output:</strong> 4
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/max2grid.jpg" style="width: 165px; height: 165px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> matrix = [["0","1"],["1","0"]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> matrix = [["0"]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">m == matrix.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == matrix[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= m, n &lt;= 300</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">matrix[i][j]</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'0'</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'1'</code>.</li>
</ul>
</div>