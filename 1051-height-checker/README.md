<h2><a href="https://leetcode.com/problems/height-checker/">1051. Height Checker</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in <strong style="border-color: rgb(91, 119, 134) !important;">non-decreasing order</strong> by height. Let this ordering be represented by the integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">expected</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">expected[i]</code> is the expected height of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code> student in line.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">heights</code> representing the <strong style="border-color: rgb(91, 119, 134) !important;">current order</strong> that the students are standing in. Each <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">heights[i]</code> is the height of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code> student in line (<strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong>).</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the <strong style="border-color: rgb(91, 119, 134) !important;">number of indices</strong> where </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">heights[i] != expected[i]</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> heights = [1,1,4,2,1,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 
heights:  [1,1,<u style="border-color: rgb(83, 109, 122) !important;">4</u>,2,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>]
expected: [1,1,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,2,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">4</u>]
Indices 2, 4, and 5 do not match.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> heights = [5,1,2,3,4]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 5
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
heights:  [<u style="border-color: rgb(83, 109, 122) !important;">5</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">4</u>]
expected: [<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">4</u>,<u style="border-color: rgb(83, 109, 122) !important;">5</u>]
All indices do not match.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> heights = [1,2,3,4,5]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 0
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
heights:  [1,2,3,4,5]
expected: [1,2,3,4,5]
All indices match.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= heights.length &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= heights[i] &lt;= 100</code></li>
</ul>
</div>