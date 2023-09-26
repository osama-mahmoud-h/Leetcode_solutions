<h2><a href="https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/">1081. Smallest Subsequence of Distinct Characters</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the </em><span data-keyword="lexicographically-smaller-string" style="border-color: rgb(91, 119, 134) !important;"><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">lexicographically smallest</em></span> <span data-keyword="subsequence-string" style="border-color: rgb(91, 119, 134) !important;"><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">subsequence</em></span><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> of</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">that contains all the distinct characters of</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">exactly once</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "bcabc"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "abc"
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "cbacdcbc"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "acdb"
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> consists of lowercase English letters.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<strong style="border-color: rgb(91, 119, 134) !important;">Note:</strong> This question is the same as 316: <a href="https://leetcode.com/problems/remove-duplicate-letters/" target="_blank" style="transition-property: -border-bottom-color !important; --link-color: rgb(161, 178, 190) !important; --link-color-hover: rgb(180, 193, 203) !important; --link-color-active: rgb(158, 175, 188) !important; --visited-color: rgb(160, 117, 234) !important; --visited-color-hover: rgb(179, 144, 238) !important; --visited-color-active: rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">https://leetcode.com/problems/remove-duplicate-letters/</a></div>