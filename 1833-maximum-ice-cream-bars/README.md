<h2><a href="https://leetcode.com/problems/maximum-ice-cream-bars/">1833. Maximum Ice Cream Bars</a></h2><h3>Medium</h3><hr><div><p>It is a sweltering summer day, and a boy wants to buy some ice cream bars.</p>

<p>At the store, there are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n</code> ice cream bars. You are given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">costs</code> of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">costs[i]</code> is the price of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">i<sup>th</sup></code> ice cream bar in coins. The boy initially has <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">coins</code> coins to spend, and he wants to buy as many ice cream bars as possible.&nbsp;</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the <strong>maximum</strong> number of ice cream bars the boy can buy with </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">coins</code><em style="color: rgb(234, 238, 241) !important;"> coins.</em></p>

<p><strong>Note:</strong> The boy can buy the ice cream bars in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> costs = [1,3,2,4,1], coins = 7
<strong>Output:</strong> 4
<strong>Explanation: </strong>The boy can buy ice cream bars at indices 0,1,2,4 for a total price of 1 + 3 + 2 + 1 = 7.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> costs = [10,6,8,7,7,8], coins = 5
<strong>Output:</strong> 0
<strong>Explanation: </strong>The boy cannot afford any of the ice cream bars.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> costs = [1,6,3,1,2,5], coins = 20
<strong>Output:</strong> 6
<strong>Explanation: </strong>The boy can buy all the ice cream bars for a total price of 1 + 6 + 3 + 1 + 2 + 5 = 18.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">costs.length == n</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= costs[i] &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= coins &lt;= 10<sup>8</sup></code></li>
</ul></div>