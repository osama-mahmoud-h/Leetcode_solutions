<h2><a href="https://leetcode.com/problems/maximum-odd-binary-number/">2864. Maximum Odd Binary Number</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">You are given a <strong style="border-color: rgb(92, 122, 137) !important;">binary</strong> string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> that contains at least one <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'1'</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You have to <strong style="border-color: rgb(92, 122, 137) !important;">rearrange</strong> the bits in such a way that the resulting binary number is the <strong style="border-color: rgb(92, 122, 137) !important;">maximum odd binary number</strong> that can be created from this combination.</p>

<p style="border-color: rgb(92, 122, 137) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">a string representing the maximum odd binary number that can be created from the given combination.</em></p>

<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Note </strong>that the resulting string <strong style="border-color: rgb(92, 122, 137) !important;">can</strong> have leading zeros.</p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> s = "010"
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "001"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> Because there is just one '1', it must be in the last position. So the answer is "001".
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> s = "0101"
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "1001"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation: </strong>One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001".
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> consists only of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'0'</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'1'</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> contains at least one <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'1'</code>.</li>
</ul>
</div>