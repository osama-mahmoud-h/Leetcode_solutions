<h2><a href="https://leetcode.com/problems/unique-length-3-palindromic-subsequences/">1930. Unique Length-3 Palindromic Subsequences</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the number of <strong style="border-color: rgb(91, 119, 134) !important;">unique palindromes of length three</strong> that are a <strong style="border-color: rgb(91, 119, 134) !important;">subsequence</strong> of </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Note that even if there are multiple ways to obtain the same subsequence, it is still only counted <strong style="border-color: rgb(91, 119, 134) !important;">once</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">palindrome</strong> is a string that reads the same forwards and backwards.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">subsequence</strong> of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"ace"</code> is a subsequence of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"<u style="border-color: rgb(83, 109, 121) !important;">a</u>b<u style="border-color: rgb(83, 109, 121) !important;">c</u>d<u style="border-color: rgb(83, 109, 121) !important;">e</u>"</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "aabca"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The 3 palindromic subsequences of length 3 are:
- "aba" (subsequence of "<u style="border-color: rgb(83, 109, 122) !important;">a</u>a<u style="border-color: rgb(83, 109, 122) !important;">b</u>c<u style="border-color: rgb(83, 109, 122) !important;">a</u>")
- "aaa" (subsequence of "<u style="border-color: rgb(83, 109, 122) !important;">aa</u>bc<u style="border-color: rgb(83, 109, 122) !important;">a</u>")
- "aca" (subsequence of "<u style="border-color: rgb(83, 109, 122) !important;">a</u>ab<u style="border-color: rgb(83, 109, 122) !important;">ca</u>")
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "adc"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 0
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are no palindromic subsequences of length 3 in "adc".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "bbcbaba"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 4
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The 4 palindromic subsequences of length 3 are:
- "bbb" (subsequence of "<u style="border-color: rgb(83, 109, 122) !important;">bb</u>c<u style="border-color: rgb(83, 109, 122) !important;">b</u>aba")
- "bcb" (subsequence of "<u style="border-color: rgb(83, 109, 122) !important;">b</u>b<u style="border-color: rgb(83, 109, 122) !important;">cb</u>aba")
- "bab" (subsequence of "<u style="border-color: rgb(83, 109, 122) !important;">b</u>bcb<u style="border-color: rgb(83, 109, 122) !important;">ab</u>a")
- "aba" (subsequence of "bbcb<u style="border-color: rgb(83, 109, 122) !important;">aba</u>")
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">3 &lt;= s.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> consists of only lowercase English letters.</li>
</ul>
</div>