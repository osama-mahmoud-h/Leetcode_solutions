<h2><a href="https://leetcode.com/problems/coin-change-ii/">518. Coin Change II</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">coins</code> representing coins of different denominations and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">amount</code> representing a total amount of money.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the number of combinations that make up that amount</em>. If that amount of money cannot be made up by any combination of the coins, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>.</p>

<p>You may assume that you have an infinite number of each kind of coin.</p>

<p>The answer is <strong>guaranteed</strong> to fit into a signed <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> amount = 5, coins = [1,2,5]
<strong>Output:</strong> 4
<strong>Explanation:</strong> there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
</pre>

<p><strong>Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> amount = 3, coins = [2]
<strong>Output:</strong> 0
<strong>Explanation:</strong> the amount of 3 cannot be made up just with coins of 2.
</pre>

<p><strong>Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> amount = 10, coins = [10]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= coins.length &lt;= 300</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= coins[i] &lt;= 5000</code></li>
	<li>All the values of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">coins</code> are <strong>unique</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= amount &lt;= 5000</code></li>
</ul>
</div>