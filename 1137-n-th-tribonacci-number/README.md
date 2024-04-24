<h2><a href="https://leetcode.com/problems/n-th-tribonacci-number/">1137. N-th Tribonacci Number</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">The Tribonacci sequence T<sub style="border-color: rgb(91, 119, 134) !important;">n</sub> is defined as follows:&nbsp;</p>

<p style="border-color: rgb(91, 119, 134) !important;">T<sub style="border-color: rgb(91, 119, 134) !important;">0</sub> = 0, T<sub style="border-color: rgb(91, 119, 134) !important;">1</sub> = 1, T<sub style="border-color: rgb(91, 119, 134) !important;">2</sub> = 1, and T<sub style="border-color: rgb(91, 119, 134) !important;">n+3</sub> = T<sub style="border-color: rgb(91, 119, 134) !important;">n</sub> + T<sub style="border-color: rgb(91, 119, 134) !important;">n+1</sub> + T<sub style="border-color: rgb(91, 119, 134) !important;">n+2</sub> for n &gt;= 0.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code>, return the value of T<sub style="border-color: rgb(91, 119, 134) !important;">n</sub>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 4
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 4
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 25
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1389537
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= n &lt;= 37</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">The answer is guaranteed to fit within a 32-bit integer, ie. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">answer &lt;= 2^31 - 1</code>.</li>
</ul></div>