<h2><a href="https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/">2825. Make String a Subsequence Using Cyclic Increments</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given two <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str2</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">In an operation, you select a <strong style="border-color: rgb(91, 119, 134) !important;">set</strong> of indices in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str1</code>, and for each index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i</code> in the set, increment <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str1[i]</code> to the next character <strong style="border-color: rgb(91, 119, 134) !important;">cyclically</strong>. That is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'a'</code> becomes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'b'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'b'</code> becomes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'c'</code>, and so on, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'z'</code> becomes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'a'</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">true</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">if it is possible to make </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str2</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">a subsequence of </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str1</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">by performing the operation <strong style="border-color: rgb(91, 119, 134) !important;">at most once</strong></em>, <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">and</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">false</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">otherwise</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Note:</strong> A subsequence of a string is a new string that is formed from the original string by deleting some (possibly none) of the characters without disturbing the relative positions of the remaining characters.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> str1 = "abc", str2 = "ad"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Select index 2 in str1.
Increment str1[2] to become 'd'. 
Hence, str1 becomes "abd" and str2 is now a subsequence. Therefore, true is returned.</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> str1 = "zc", str2 = "ad"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Select indices 0 and 1 in str1. 
Increment str1[0] to become 'a'. 
Increment str1[1] to become 'd'. 
Hence, str1 becomes "ad" and str2 is now a subsequence. Therefore, true is returned.</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> str1 = "ab", str2 = "d"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> false
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> In this example, it can be shown that it is impossible to make str2 a subsequence of str1 using the operation at most once. 
Therefore, false is returned.</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= str1.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= str2.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">str2</code> consist of only lowercase English letters.</li>
</ul>
</div>