<h2><a href="https://leetcode.com/problems/longest-common-subsequence/">1143. Longest Common Subsequence</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">text1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">text2</code>, return <em style="color: rgb(234, 238, 241) !important;">the length of their longest <strong>common subsequence</strong>. </em>If there is no <strong>common subsequence</strong>, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>.</p>

<p>A <strong>subsequence</strong> of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.</p>

<ul>
	<li>For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"ace"</code> is a subsequence of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"abcde"</code>.</li>
</ul>

<p>A <strong>common subsequence</strong> of two strings is a subsequence that is common to both strings.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> text1 = "abcde", text2 = "ace" 
<strong>Output:</strong> 3  
<strong>Explanation:</strong> The longest common subsequence is "ace" and its length is 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> text1 = "abc", text2 = "abc"
<strong>Output:</strong> 3
<strong>Explanation:</strong> The longest common subsequence is "abc" and its length is 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> text1 = "abc", text2 = "def"
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no such common subsequence, so the result is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= text1.length, text2.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">text1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">text2</code> consist of only lowercase English characters.</li>
</ul>
</div>