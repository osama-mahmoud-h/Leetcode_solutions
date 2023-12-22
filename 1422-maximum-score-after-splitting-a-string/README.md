<h2><a href="https://leetcode.com/problems/maximum-score-after-splitting-a-string/">1422. Maximum Score After Splitting a String</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a&nbsp;string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code>&nbsp;of zeros and ones, <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">return the maximum score after splitting the string into two <strong style="border-color: rgb(91, 119, 134) !important;">non-empty</strong> substrings</em> (i.e. <strong style="border-color: rgb(91, 119, 134) !important;">left</strong> substring and <strong style="border-color: rgb(91, 119, 134) !important;">right</strong> substring).</p>

<p style="border-color: rgb(91, 119, 134) !important;">The score after splitting a string is the number of <strong style="border-color: rgb(91, 119, 134) !important;">zeros</strong> in the <strong style="border-color: rgb(91, 119, 134) !important;">left</strong> substring plus the number of <strong style="border-color: rgb(91, 119, 134) !important;">ones</strong> in the <strong style="border-color: rgb(91, 119, 134) !important;">right</strong> substring.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "011101"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 5 
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 
All possible ways of splitting s into two non-empty substrings are:
left = "0" and right = "11101", score = 1 + 4 = 5 
left = "01" and right = "1101", score = 1 + 3 = 4 
left = "011" and right = "101", score = 1 + 2 = 3 
left = "0111" and right = "01", score = 1 + 1 = 2 
left = "01110" and right = "1", score = 2 + 1 = 3
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "00111"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 5
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "1111"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= s.length &lt;= 500</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">The string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> consists of characters <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'0'</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'1'</code> only.</li>
</ul>
</div>