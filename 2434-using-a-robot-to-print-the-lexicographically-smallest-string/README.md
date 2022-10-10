<h2><a href="https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/">2434. Using a Robot to Print the Lexicographically Smallest String</a></h2><h3>Medium</h3><hr><div><p>You are given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> and a robot that currently holds an empty string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code>. Apply one of the following operations until <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code> <strong>are both empty</strong>:</p>

<ul>
	<li>Remove the <strong>first</strong> character of a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> and give it to the robot. The robot will append this character to the string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code>.</li>
	<li>Remove the <strong>last</strong> character of a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">t</code> and give it to the robot. The robot will write this character on paper.</li>
</ul>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the lexicographically smallest string that can be written on the paper.</em></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "zza"
<strong>Output:</strong> "azz"
<strong>Explanation:</strong> Let p denote the written string.
Initially p="", s="zza", t="".
Perform first operation three times p="", s="", t="zza".
Perform second operation three times p="azz", s="", t="".
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "bac"
<strong>Output:</strong> "abc"
<strong>Explanation:</strong> Let p denote the written string.
Perform first operation twice p="", s="c", t="ba". 
Perform second operation twice p="ab", s="c", t="". 
Perform first operation p="ab", s="", t="c". 
Perform second operation p="abc", s="", t="".
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> s = "bdda"
<strong>Output:</strong> "addb"
<strong>Explanation:</strong> Let p denote the written string.
Initially p="", s="bdda", t="".
Perform first operation four times p="", s="", t="bdda".
Perform second operation four times p="addb", s="", t="".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> consists of only English lowercase letters.</li>
</ul>
</div>