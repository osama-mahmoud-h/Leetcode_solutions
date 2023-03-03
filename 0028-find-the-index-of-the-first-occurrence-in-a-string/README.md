<h2><a href="https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/">28. Find the Index of the First Occurrence in a String</a></h2><h3>Medium</h3><hr><div><p>Given two strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">needle</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">haystack</code>, return the index of the first occurrence of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">needle</code> in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">haystack</code>, or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">needle</code> is not part of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">haystack</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> haystack = "sadbutsad", needle = "sad"
<strong>Output:</strong> 0
<strong>Explanation:</strong> "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> haystack = "leetcode", needle = "leeto"
<strong>Output:</strong> -1
<strong>Explanation:</strong> "leeto" did not occur in "leetcode", so we return -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= haystack.length, needle.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">haystack</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">needle</code> consist of only lowercase English characters.</li>
</ul>
</div>