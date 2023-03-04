<h2><a href="https://leetcode.com/problems/decode-ways/">91. Decode Ways</a></h2><h3>Medium</h3><hr><div><p>A message containing letters from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">A-Z</code> can be <strong>encoded</strong> into numbers using the following mapping:</p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">'A' -&gt; "1"
'B' -&gt; "2"
...
'Z' -&gt; "26"
</pre>

<p>To <strong>decode</strong> an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"11106"</code> can be mapped into:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"AAJF"</code> with the grouping <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(1 1 10 6)</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"KJF"</code> with the grouping <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(11 10 6)</code></li>
</ul>

<p>Note that the grouping <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(1 11 06)</code> is invalid because <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"06"</code> cannot be mapped into <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'F'</code> since <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"6"</code> is different from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"06"</code>.</p>

<p>Given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> containing only digits, return <em style="color: rgb(234, 238, 241) !important;">the <strong>number</strong> of ways to <strong>decode</strong> it</em>.</p>

<p>The test cases are generated so that the answer fits in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> s = "12"
<strong>Output:</strong> 2
<strong>Explanation:</strong> "12" could be decoded as "AB" (1 2) or "L" (12).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> s = "226"
<strong>Output:</strong> 3
<strong>Explanation:</strong> "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> s = "06"
<strong>Output:</strong> 0
<strong>Explanation:</strong> "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06").
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= s.length &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> contains only digits and may contain leading zero(s).</li>
</ul>
</div>