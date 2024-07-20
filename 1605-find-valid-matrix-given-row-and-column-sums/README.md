<h2><a href="https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/">1605. Find Valid Matrix Given Row and Column Sums</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given two arrays <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">rowSum</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">colSum</code> of non-negative integers where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">rowSum[i]</code> is the sum of the elements in the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code> row and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">colSum[j]</code> is the sum of the elements of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">j<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code> column of a 2D matrix. In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Find any matrix of <strong style="border-color: rgb(91, 119, 134) !important;">non-negative</strong> integers of size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">rowSum.length x colSum.length</code> that satisfies the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">rowSum</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">colSum</code> requirements.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">a 2D array representing <strong style="border-color: rgb(91, 119, 134) !important;">any</strong> matrix that fulfills the requirements</em>. It's guaranteed that <strong style="border-color: rgb(91, 119, 134) !important;">at least one </strong>matrix that fulfills the requirements exists.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> rowSum = [3,8], colSum = [4,7]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[3,0],
         [1,7]]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 
0<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> row: 3 + 0 = 3 == rowSum[0]
1<sup style="border-color: rgb(83, 109, 122) !important;">st</sup> row: 1 + 7 = 8 == rowSum[1]
0<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> column: 3 + 1 = 4 == colSum[0]
1<sup style="border-color: rgb(83, 109, 122) !important;">st</sup> column: 0 + 7 = 7 == colSum[1]
The row and column sums match, and all matrix elements are non-negative.
Another possible matrix is: [[1,2],
                             [3,5]]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> rowSum = [5,7,10], colSum = [8,6,8]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[0,5,0],
         [6,1,0],
         [2,0,8]]
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= rowSum.length, colSum.length &lt;= 500</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= rowSum[i], colSum[i] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">8</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">sum(rowSum) == sum(colSum)</code></li>
</ul>
</div>