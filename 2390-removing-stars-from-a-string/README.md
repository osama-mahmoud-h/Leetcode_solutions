<h2><a href="https://leetcode.com/problems/removing-stars-from-a-string/">2390. Removing Stars From a String</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code>, which contains stars <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">*</code>.</p>

<p>In one operation, you can:</p>

<ul>
	<li>Choose a star in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code>.</li>
	<li>Remove the closest <strong>non-star</strong> character to its <strong>left</strong>, as well as remove the star itself.</li>
</ul>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the string after <strong>all</strong> stars have been removed</em>.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>The input will be generated such that the operation is always possible.</li>
	<li>It can be shown that the resulting string will always be unique.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "leet**cod*e"
<strong>Output:</strong> "lecoe"
<strong>Explanation:</strong> Performing the removals from left to right:
- The closest character to the 1<sup>st</sup> star is 't' in "lee<strong><u>t</u></strong>**cod*e". s becomes "lee*cod*e".
- The closest character to the 2<sup>nd</sup> star is 'e' in "le<strong><u>e</u></strong>*cod*e". s becomes "lecod*e".
- The closest character to the 3<sup>rd</sup> star is 'd' in "leco<strong><u>d</u></strong>*e". s becomes "lecoe".
There are no more stars, so we return "lecoe".</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "erase*****"
<strong>Output:</strong> ""
<strong>Explanation:</strong> The entire string is removed, so we return an empty string.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> consists of lowercase English letters and stars <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">*</code>.</li>
	<li>The operation above can be performed on <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code>.</li>
</ul>
</div>