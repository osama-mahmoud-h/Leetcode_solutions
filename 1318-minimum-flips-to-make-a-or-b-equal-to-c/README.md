<h2><a href="https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/">1318. Minimum Flips to Make a OR b Equal to c</a></h2><h3>Medium</h3><hr><div><p>Given 3 positives numbers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">a</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">b</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">c</code>. Return the minimum flips required in some bits of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">a</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">b</code> to make (&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">a</code> OR <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">b</code> == <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">c</code>&nbsp;). (bitwise OR operation).<br>
Flip operation&nbsp;consists of change&nbsp;<strong>any</strong>&nbsp;single bit 1 to 0 or change the bit 0 to 1&nbsp;in their binary representation.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/01/06/sample_3_1676.png" style="width: 260px; height: 87px; filter: saturate(0.9) brightness(0.8);"></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> a = 2, b = 6, c = 5
<strong>Output:</strong> 3
<strong>Explanation: </strong>After flips a = 1 , b = 4 , c = 5 such that (<code>a</code> OR <code>b</code> == <code>c</code>)</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> a = 4, b = 2, c = 7
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> a = 1, b = 2, c = 3
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= a &lt;= 10^9</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= b&nbsp;&lt;= 10^9</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= c&nbsp;&lt;= 10^9</code></li>
</ul></div>