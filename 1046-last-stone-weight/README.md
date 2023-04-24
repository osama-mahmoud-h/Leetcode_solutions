<h2><a href="https://leetcode.com/problems/last-stone-weight/">1046. Last Stone Weight</a></h2><h3>Easy</h3><hr><div><p>You are given an array of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">stones</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">stones[i]</code> is the weight of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> stone.</p>

<p>We are playing a game with the stones. On each turn, we choose the <strong>heaviest two stones</strong> and smash them together. Suppose the heaviest two stones have weights <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">y</code> with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x &lt;= y</code>. The result of this smash is:</p>

<ul>
	<li>If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x == y</code>, both stones are destroyed, and</li>
	<li>If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x != y</code>, the stone of weight <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> is destroyed, and the stone of weight <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">y</code> has new weight <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">y - x</code>.</li>
</ul>

<p>At the end of the game, there is <strong>at most one</strong> stone left.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the weight of the last remaining stone</em>. If there are no stones left, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> stones = [2,7,4,1,8,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> stones = [1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= stones.length &lt;= 30</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= stones[i] &lt;= 1000</code></li>
</ul>
</div>