<h2><a href="https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/">1897. Redistribute Characters to Make All Strings Equal</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an array of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">words</code> (<strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong>).</p>

<p style="border-color: rgb(91, 119, 134) !important;">In one operation, pick two <strong style="border-color: rgb(91, 119, 134) !important;">distinct</strong> indices <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">j</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">words[i]</code> is a non-empty string, and move <strong style="border-color: rgb(91, 119, 134) !important;">any</strong> character from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">words[i]</code> to <strong style="border-color: rgb(91, 119, 134) !important;">any</strong> position in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">words[j]</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">true</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">if you can make<strong style="border-color: rgb(91, 119, 134) !important;"> every</strong> string in </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">words</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> <strong style="border-color: rgb(91, 119, 134) !important;">equal </strong>using <strong style="border-color: rgb(91, 119, 134) !important;">any</strong> number of operations</em>,<em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> and </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">false</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">otherwise</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> words = ["abc","aabc","bc"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Move the first 'a' in <code style="border-color: rgb(83, 109, 122) !important;">words[1] to the front of words[2],
to make </code><code style="border-color: rgb(83, 109, 122) !important;">words[1]</code> = "abc" and words[2] = "abc".
All the strings are now equal to "abc", so return <code style="border-color: rgb(83, 109, 122) !important;">true</code>.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> words = ["ab","a"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> false
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> It is impossible to make all the strings equal using the operation.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= words.length &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= words[i].length &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">words[i]</code> consists of lowercase English letters.</li>
</ul>
</div>