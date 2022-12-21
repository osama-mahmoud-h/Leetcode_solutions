<h2><a href="https://leetcode.com/problems/find-smallest-letter-greater-than-target/">744. Find Smallest Letter Greater Than Target</a></h2><h3>Easy</h3><hr><div><p>You are given an array of characters <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters</code> that is sorted in <strong>non-decreasing order</strong>, and a character <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>. There are <strong>at least two different</strong> characters in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters</code>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the smallest character in </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters</code><em style="color: rgb(234, 238, 241) !important;"> that is lexicographically greater than </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>. If such a character does not exist, return the first character in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> letters = ["c","f","j"], target = "a"
<strong>Output:</strong> "c"
<strong>Explanation:</strong> The smallest character that is lexicographically greater than 'a' in letters is 'c'.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> letters = ["c","f","j"], target = "c"
<strong>Output:</strong> "f"
<strong>Explanation:</strong> The smallest character that is lexicographically greater than 'c' in letters is 'f'.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> letters = ["x","x","y","y"], target = "z"
<strong>Output:</strong> "x"
<strong>Explanation:</strong> There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= letters.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters[i]</code> is a lowercase English letter.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters</code> is sorted in <strong>non-decreasing</strong> order.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">letters</code> contains at least two different characters.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> is a lowercase English letter.</li>
</ul>
</div>