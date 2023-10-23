<h2><a href="https://leetcode.com/problems/power-of-four/">342. Power of Four</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(222, 229, 232) !important; border-color: rgb(83, 109, 121) !important;">true</code> if it is a power of four. Otherwise, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(222, 229, 232) !important; border-color: rgb(83, 109, 121) !important;">false</code></em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">An integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> is a power of four, if there exists an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">x</code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == 4<sup style="border-color: rgb(83, 109, 121) !important;">x</sup></code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 16
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
</pre><p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 5
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> false
</pre><p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 1
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> true
</pre>
<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-2<sup style="border-color: rgb(83, 109, 121) !important;">31</sup> &lt;= n &lt;= 2<sup style="border-color: rgb(83, 109, 121) !important;">31</sup> - 1</code></li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<strong style="border-color: rgb(91, 119, 134) !important;">Follow up:</strong> Could you solve it without loops/recursion?</div>