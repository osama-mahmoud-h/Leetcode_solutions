<h2><a href="https://leetcode.com/problems/calculate-money-in-leetcode-bank/">1716. Calculate Money in Leetcode Bank</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Hercy wants to save money for his first car. He puts money in the Leetcode&nbsp;bank <strong style="border-color: rgb(91, 119, 134) !important;">every day</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">He starts by putting in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">$1</code> on Monday, the first day. Every day from Tuesday to Sunday, he will put in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">$1</code> more than the day before. On every subsequent Monday, he will put in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">$1</code> more than the <strong style="border-color: rgb(91, 119, 134) !important;">previous Monday</strong>.<span style="display: none; border-color: rgb(91, 119, 134) !important;"> </span></p>

<p style="border-color: rgb(91, 119, 134) !important;">Given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the total amount of money he will have in the Leetcode bank at the end of the </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> day.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 4
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 10
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>&nbsp;After the 4<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> day, the total is 1 + 2 + 3 + 4 = 10.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 10
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 37
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>&nbsp;After the 10<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37. Notice that on the 2<sup style="border-color: rgb(83, 109, 122) !important;">nd</sup> Monday, Hercy only puts in $2.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 20
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 96
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>&nbsp;After the 20<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4 + 5 + 6 + 7 + 8) + (3 + 4 + 5 + 6 + 7 + 8) = 96.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>