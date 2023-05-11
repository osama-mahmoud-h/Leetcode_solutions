<h2><a href="https://leetcode.com/problems/maximum-length-of-pair-chain/">646. Maximum Length of Pair Chain</a></h2><h3>Medium</h3><hr><div><p>You are given an array of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> pairs <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pairs</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pairs[i] = [left<sub>i</sub>, right<sub>i</sub>]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">left<sub>i</sub> &lt; right<sub>i</sub></code>.</p>

<p>A pair <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">p2 = [c, d]</code> <strong>follows</strong> a pair <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">p1 = [a, b]</code> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">b &lt; c</code>. A <strong>chain</strong> of pairs can be formed in this fashion.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the length longest chain which can be formed</em>.</p>

<p>You do not need to use up all the given intervals. You can select pairs in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> pairs = [[1,2],[2,3],[3,4]]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The longest chain is [1,2] -&gt; [3,4].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> pairs = [[1,2],[7,8],[4,5]]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The longest chain is [1,2] -&gt; [4,5] -&gt; [7,8].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == pairs.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1000 &lt;= left<sub>i</sub> &lt; right<sub>i</sub> &lt;= 1000</code></li>
</ul>
</div>