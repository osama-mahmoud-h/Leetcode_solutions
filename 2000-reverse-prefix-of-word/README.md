<h2><a href="https://leetcode.com/problems/reverse-prefix-of-word/">2000. Reverse Prefix of Word</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">word</code> and a character <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">ch</code>, <strong style="border-color: rgb(91, 119, 134) !important;">reverse</strong> the segment of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">word</code> that starts at index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code> and ends at the index of the <strong style="border-color: rgb(91, 119, 134) !important;">first occurrence</strong> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">ch</code> (<strong style="border-color: rgb(91, 119, 134) !important;">inclusive</strong>). If the character <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">ch</code> does not exist in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">word</code>, do nothing.</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">For example, if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">word = "abcdefd"</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">ch = "d"</code>, then you should <strong style="border-color: rgb(91, 119, 134) !important;">reverse</strong> the segment that starts at <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code> and ends at <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">3</code> (<strong style="border-color: rgb(91, 119, 134) !important;">inclusive</strong>). The resulting string will be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"<u style="border-color: rgb(83, 109, 121) !important;">dcba</u>efd"</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the resulting string</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> word = "<u style="border-color: rgb(83, 109, 122) !important;">abcd</u>efd", ch = "d"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "<u style="border-color: rgb(83, 109, 122) !important;">dcba</u>efd"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>&nbsp;The first occurrence of "d" is at index 3. 
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> word = "<u style="border-color: rgb(83, 109, 122) !important;">xyxz</u>xe", ch = "z"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "<u style="border-color: rgb(83, 109, 122) !important;">zxyx</u>xe"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>&nbsp;The first and only occurrence of "z" is at index 3.
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> word = "abcd", ch = "z"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "abcd"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>&nbsp;"z" does not exist in word.
You should not do any reverse operation, the resulting string is "abcd".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= word.length &lt;= 250</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">word</code> consists of lowercase English letters.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">ch</code> is a lowercase English letter.</li>
</ul>
</div>