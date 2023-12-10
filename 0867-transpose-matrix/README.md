<h2><a href="https://leetcode.com/problems/transpose-matrix/">867. Transpose Matrix</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a 2D integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">matrix</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the <strong style="border-color: rgb(91, 119, 134) !important;">transpose</strong> of</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">matrix</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The <strong style="border-color: rgb(91, 119, 134) !important;">transpose</strong> of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.</p>

<p style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2021/02/10/hint_transpose.png" style="width: 600px; height: 197px; filter: saturate(0.9) brightness(0.8); color: rgb(194, 207, 214) !important;"></p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> matrix = [[1,2,3],[4,5,6],[7,8,9]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[1,4,7],[2,5,8],[3,6,9]]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> matrix = [[1,2,3],[4,5,6]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[1,4],[2,5],[3,6]]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">m == matrix.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">n == matrix[i].length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1 &lt;= m, n &lt;= 1000</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1 &lt;= m * n &lt;= 10<sup style="border-color: rgb(84, 110, 122) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">-10<sup style="border-color: rgb(84, 110, 122) !important;">9</sup> &lt;= matrix[i][j] &lt;= 10<sup style="border-color: rgb(84, 110, 122) !important;">9</sup></code></li>
</ul>
</div>