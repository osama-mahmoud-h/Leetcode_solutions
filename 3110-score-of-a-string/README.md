<h2><a href="https://leetcode.com/problems/score-of-a-string/">3110. Score of a String</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code>. The <strong style="border-color: rgb(91, 119, 134) !important;">score</strong> of a string is defined as the sum of the absolute difference between the <strong style="border-color: rgb(91, 119, 134) !important;">ASCII</strong> values of adjacent characters.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return the <strong style="border-color: rgb(91, 119, 134) !important;">score</strong> of<em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<div class="example-block" style="color: rgba(232, 229, 227, 0.55) !important; border-color: rgba(140, 122, 115, 0.08) !important;">
<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Input:</strong> <span class="example-io" style="border-color: rgba(140, 122, 115, 0.55) !important;">s = "hello"</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Output:</strong> <span class="example-io" style="border-color: rgba(140, 122, 115, 0.55) !important;">13</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Explanation:</strong></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;">The <strong style="border-color: rgba(140, 122, 115, 0.55) !important;">ASCII</strong> values of the characters in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> are: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'h' = 104</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'e' = 101</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'l' = 108</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'o' = 111</code>. So, the score of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> would be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">|104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13</code>.</p>
</div>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<div class="example-block" style="color: rgba(232, 229, 227, 0.55) !important; border-color: rgba(140, 122, 115, 0.08) !important;">
<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Input:</strong> <span class="example-io" style="border-color: rgba(140, 122, 115, 0.55) !important;">s = "zaz"</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Output:</strong> <span class="example-io" style="border-color: rgba(140, 122, 115, 0.55) !important;">50</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Explanation:</strong></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;">The <strong style="border-color: rgba(140, 122, 115, 0.55) !important;">ASCII</strong> values of the characters in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> are: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'z' = 122</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'a' = 97</code>. So, the score of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> would be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">|122 - 97| + |97 - 122| = 25 + 25 = 50</code>.</p>
</div>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= s.length &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">s</code> consists only of lowercase English letters.</li>
</ul>
</div>