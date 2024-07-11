<h2><a href="https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/">1190. Reverse Substrings Between Each Pair of Parentheses</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> that consists of lower case English letters and brackets.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Reverse the strings in each pair of matching parentheses, starting from the innermost one.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Your result should <strong style="border-color: rgb(91, 119, 134) !important;">not</strong> contain any brackets.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "(abcd)"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "dcba"
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "(u(love)i)"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "iloveu"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The substring "love" is reversed first, then the whole string is reversed.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "(ed(et(oc))el)"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "leetcode"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> First, we reverse the substring "oc", then "etco", and finally, the whole string.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= s.length &lt;= 2000</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> only contains lower case English characters and parentheses.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">It is guaranteed that all parentheses are balanced.</li>
</ul>
</div>