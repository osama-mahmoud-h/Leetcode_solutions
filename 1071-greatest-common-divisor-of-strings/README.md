<h2><a href="https://leetcode.com/problems/greatest-common-divisor-of-strings/">1071. Greatest Common Divisor of Strings</a></h2><h3>Easy</h3><hr><div><p>For two strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code>, we say "<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code> divides <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code>" if and only if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s = t + ... + t</code> (i.e., <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code> is concatenated with itself one or more times).</p>

<p>Given two strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">str1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">str2</code>, return <em style="color: rgb(234, 238, 241) !important;">the largest string </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code><em style="color: rgb(234, 238, 241) !important;"> such that </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code><em style="color: rgb(234, 238, 241) !important;"> divides both </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">str1</code><em style="color: rgb(234, 238, 241) !important;"> and </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">str2</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> str1 = "ABCABC", str2 = "ABC"
<strong>Output:</strong> "ABC"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> str1 = "ABABAB", str2 = "ABAB"
<strong>Output:</strong> "AB"
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> str1 = "LEET", str2 = "CODE"
<strong>Output:</strong> ""
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= str1.length, str2.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">str1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">str2</code> consist of English uppercase letters.</li>
</ul>
</div>