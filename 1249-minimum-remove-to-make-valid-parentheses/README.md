<h2><a href="https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/">1249. Minimum Remove to Make Valid Parentheses</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a string <font face="monospace" style="border-color: rgb(91, 119, 134) !important;">s</font> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'('</code> , <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">')'</code> and lowercase English characters.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Your task is to remove the minimum number of parentheses ( <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'('</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">')'</code>, in any positions ) so that the resulting <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">parentheses string</em> is valid and return <strong style="border-color: rgb(91, 119, 134) !important;">any</strong> valid string.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Formally, a <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">parentheses string</em> is valid if and only if:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">It is the empty string, contains only lowercase characters, or</li>
	<li style="border-color: rgb(91, 119, 134) !important;">It can be written as <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">AB</code> (<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">A</code> concatenated with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">B</code>), where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">A</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">B</code> are valid strings, or</li>
	<li style="border-color: rgb(91, 119, 134) !important;">It can be written as <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(A)</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">A</code> is a valid string.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "lee(t(c)o)de)"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "lee(t(c)o)de"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "a)b(c)d"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "ab(c)d"
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "))(("
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> ""
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> An empty string is also valid.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= s.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s[i]</code> is either<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'('</code> , <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">')'</code>, or lowercase English letter<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">.</code></li>
</ul>
</div>