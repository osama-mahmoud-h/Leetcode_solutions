<h2><a href="https://leetcode.com/problems/zigzag-conversion/">6. Zigzag Conversion</a></h2><h3>Medium</h3><hr><div><p>The string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"PAYPALISHIRING"</code> is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)</p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">P   A   H   N
A P L S I I G
Y   I   R
</pre>

<p>And then read line by line: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"PAHNAPLSIIGYIR"</code></p>

<p>Write the code that will take a string and make this conversion given a number of rows:</p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">string convert(string s, int numRows);
</pre>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> s = "PAYPALISHIRING", numRows = 3
<strong>Output:</strong> "PAHNAPLSIIGYIR"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> s = "PAYPALISHIRING", numRows = 4
<strong>Output:</strong> "PINALSIGYAHRPI"
<strong>Explanation:</strong>
P     I    N
A   L S  I G
Y A   H R
P     I
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> s = "A", numRows = 1
<strong>Output:</strong> "A"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= s.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> consists of English letters (lower-case and upper-case), <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">','</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'.'</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= numRows &lt;= 1000</code></li>
</ul>
</div>