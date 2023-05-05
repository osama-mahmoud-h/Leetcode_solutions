<h2><a href="https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/">1456. Maximum Number of Vowels in a Substring of Given Length</a></h2><h3>Medium</h3><hr><div><p>Given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>, return <em style="color: rgb(234, 238, 241) !important;">the maximum number of vowel letters in any substring of </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code><em style="color: rgb(234, 238, 241) !important;"> with length </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>.</p>

<p><strong>Vowel letters</strong> in English are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'a'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'e'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'i'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'o'</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'u'</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "abciiidef", k = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> The substring "iii" contains 3 vowel letters.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "aeiou", k = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> Any substring of length 2 contains 2 vowels.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "leetcode", k = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> "lee", "eet" and "ode" contain 2 vowels.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> consists of lowercase English letters.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= k &lt;= s.length</code></li>
</ul>
</div>