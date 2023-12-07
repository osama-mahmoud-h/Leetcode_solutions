<h2><a href="https://leetcode.com/problems/largest-odd-number-in-string/">1903. Largest Odd Number in String</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">num</code>, representing a large integer. Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the <strong style="border-color: rgb(91, 119, 134) !important;">largest-valued odd</strong> integer (as a string) that is a <strong style="border-color: rgb(91, 119, 134) !important;">non-empty substring</strong> of </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">num</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">, or an empty string </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">""</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> if no odd integer exists</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">substring</strong> is a contiguous sequence of characters within a string.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> num = "52"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "5"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> num = "4206"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> ""
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are no odd numbers in "4206".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> num = "35427"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "35427"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> "35427" is already an odd number.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= num.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">num</code> only consists of digits and does not contain any leading zeros.</li>
</ul>
</div>