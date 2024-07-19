<h2><a href="https://leetcode.com/problems/lucky-numbers-in-a-matrix/">1380. Lucky Numbers in a Matrix</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">m x n</code> matrix of <strong style="border-color: rgb(91, 119, 134) !important;">distinct </strong>numbers, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">all <strong style="border-color: rgb(91, 119, 134) !important;">lucky numbers</strong> in the matrix in <strong style="border-color: rgb(91, 119, 134) !important;">any </strong>order</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">lucky number</strong> is an element of the matrix such that it is the minimum element in its row and maximum in its column.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> matrix = [[3,7,8],[9,11,13],[15,16,17]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [15]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [12]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> matrix = [[7,8],[1,2]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [7]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">m == mat.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == mat[i].length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n, m &lt;= 50</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= matrix[i][j] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">All elements in the matrix are distinct.</li>
</ul>
</div>