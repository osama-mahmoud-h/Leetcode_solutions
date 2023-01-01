<h2><a href="https://leetcode.com/problems/word-pattern/">290. Word Pattern</a></h2><h3>Easy</h3><hr><div><p>Given a <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">pattern</code> and a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code>, find if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code>&nbsp;follows the same pattern.</p>

<p>Here <b>follow</b> means a full match, such that there is a bijection between a letter in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">pattern</code> and a <b>non-empty</b> word in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> pattern = "abba", s = "dog cat cat dog"
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> pattern = "abba", s = "dog cat cat fish"
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> pattern = "aaaa", s = "dog cat cat dog"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= pattern.length &lt;= 300</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">pattern</code> contains only lower-case English letters.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= s.length &lt;= 3000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code> contains only lowercase English letters and spaces <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">' '</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code> <strong>does not contain</strong> any leading or trailing spaces.</li>
	<li>All the words in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code> are separated by a <strong>single space</strong>.</li>
</ul>
</div>