<h2><a href="https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/">2275. Largest Combination With Bitwise AND Greater Than Zero</a></h2><h3>Medium</h3><hr><div><p>The <strong>bitwise AND</strong> of an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> is the bitwise AND of all integers in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code>.</p>

<ul>
	<li>For example, for <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums = [1, 5, 3]</code>, the bitwise AND is equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &amp; 5 &amp; 3 = 1</code>.</li>
	<li>Also, for <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums = [7]</code>, the bitwise AND is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">7</code>.</li>
</ul>

<p>You are given an array of positive integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">candidates</code>. Evaluate the <strong>bitwise AND</strong> of every <strong>combination</strong> of numbers of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">candidates</code>. Each number in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">candidates</code> may only be used <strong>once</strong> in each combination.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the size of the <strong>largest</strong> combination of </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">candidates</code><em style="color: rgb(234, 238, 241) !important;"> with a bitwise AND <strong>greater</strong> than </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> candidates = [16,17,71,62,12,24,14]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The combination [16,17,62,24] has a bitwise AND of 16 &amp; 17 &amp; 62 &amp; 24 = 16 &gt; 0.
The size of the combination is 4.
It can be shown that no combination with a size greater than 4 has a bitwise AND greater than 0.
Note that more than one combination may have the largest size.
For example, the combination [62,12,24,14] has a bitwise AND of 62 &amp; 12 &amp; 24 &amp; 14 = 8 &gt; 0.
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> candidates = [8,8]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The largest combination [8,8] has a bitwise AND of 8 &amp; 8 = 8 &gt; 0.
The size of the combination is 2, so we return 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= candidates.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= candidates[i] &lt;= 10<sup>7</sup></code></li>
</ul>
</div>