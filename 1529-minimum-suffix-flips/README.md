<h2><a href="https://leetcode.com/problems/minimum-suffix-flips/">1529. Minimum Suffix Flips</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>0-indexed</strong> binary string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>. You have another binary string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> that is initially set to all zeros. You want to make <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code> equal to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>.</p>

<p>In one operation, you can pick an index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= i &lt; n</code> and flip all bits in the <strong>inclusive</strong> range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[i, n - 1]</code>. Flip means changing <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'0'</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'1'</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'1'</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'0'</code>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the minimum number of operations needed to make </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">s</code><em style="color: rgb(234, 238, 241) !important;"> equal to </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> target = "10111"
<strong>Output:</strong> 3
<strong>Explanation:</strong> Initially, s = "00000".
Choose index i = 2: "00<u>000</u>" -&gt; "00<u>111</u>"
Choose index i = 0: "<u>00111</u>" -&gt; "<u>11000</u>"
Choose index i = 1: "1<u>1000</u>" -&gt; "1<u>0111</u>"
We need at least 3 flip operations to form target.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> target = "101"
<strong>Output:</strong> 3
<strong>Explanation:</strong> Initially, s = "000".
Choose index i = 0: "<u>000</u>" -&gt; "<u>111</u>"
Choose index i = 1: "1<u>11</u>" -&gt; "1<u>00</u>"
Choose index i = 2: "10<u>0</u>" -&gt; "10<u>1</u>"
We need at least 3 flip operations to form target.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> target = "00000"
<strong>Output:</strong> 0
<strong>Explanation:</strong> We do not need any operations since the initial s already equals target.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == target.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target[i]</code> is either <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'0'</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'1'</code>.</li>
</ul>
</div>