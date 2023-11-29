<h2><a href="https://leetcode.com/problems/number-of-1-bits/">191. Number of 1 Bits</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Write a function that takes&nbsp;the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the <a href="http://en.wikipedia.org/wiki/Hamming_weight" target="_blank" style="transition-property: -border-bottom-color !important; --link-color: rgb(161, 178, 190) !important; --link-color-hover: rgb(180, 193, 203) !important; --link-color-active: rgb(158, 175, 188) !important; --visited-color: rgb(160, 117, 234) !important; --visited-color-hover: rgb(179, 144, 238) !important; --visited-color-active: rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">Hamming weight</a>).</p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Note:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Note that in some languages, such as Java, there is no unsigned integer type. In this case, the input will be given as a signed integer type. It should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">In Java, the compiler represents the signed integers using <a href="https://en.wikipedia.org/wiki/Two%27s_complement" target="_blank" style="transition-property: -border-bottom-color !important; --link-color: rgb(161, 178, 190) !important; --link-color-hover: rgb(180, 193, 203) !important; --link-color-active: rgb(158, 175, 188) !important; --visited-color: rgb(160, 117, 234) !important; --visited-color-hover: rgb(179, 144, 238) !important; --visited-color-active: rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">2's complement notation</a>. Therefore, in <strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3</strong>, the input represents the signed integer. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-3</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 00000000000000000000000000001011
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The input binary string <strong style="border-color: rgb(83, 109, 122) !important;">00000000000000000000000000001011</strong> has a total of three '1' bits.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 00000000000000000000000010000000
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The input binary string <strong style="border-color: rgb(83, 109, 122) !important;">00000000000000000000000010000000</strong> has a total of one '1' bit.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 11111111111111111111111111111101
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 31
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The input binary string <strong style="border-color: rgb(83, 109, 122) !important;">11111111111111111111111111111101</strong> has a total of thirty one '1' bits.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The input must be a <strong style="border-color: rgb(91, 119, 134) !important;">binary string</strong> of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">32</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<strong style="border-color: rgb(91, 119, 134) !important;">Follow up:</strong> If this function is called many times, how would you optimize it?</div>