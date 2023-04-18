<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/">714. Best Time to Buy and Sell Stock with Transaction Fee</a></h2><h3>Medium</h3><hr><div><p>You are given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prices</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prices[i]</code> is the price of a given stock on the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> day, and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">fee</code> representing a transaction fee.</p>

<p>Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.</p>

<p><strong>Note:</strong> You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> prices = [1,3,2,8,4,9], fee = 2
<strong>Output:</strong> 8
<strong>Explanation:</strong> The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> prices = [1,3,7,5,10,3], fee = 3
<strong>Output:</strong> 6
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= prices.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= prices[i] &lt; 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= fee &lt; 5 * 10<sup>4</sup></code></li>
</ul>
</div>