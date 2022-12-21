<h2><a href="https://leetcode.com/problems/arranging-coins/">441. Arranging Coins</a></h2><h3>Easy</h3><hr><div><p>You have <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> coins and you want to build a staircase with these coins. The staircase consists of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code> rows where the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> row has exactly <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> coins. The last row of the staircase <strong>may be</strong> incomplete.</p>

<p>Given the integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important;">the number of <strong>complete rows</strong> of the staircase you will build</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/09/arrangecoins1-grid.jpg" style="width: 253px; height: 253px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> n = 5
<strong>Output:</strong> 2
<strong>Explanation:</strong> Because the 3<sup>rd</sup> row is incomplete, we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/09/arrangecoins2-grid.jpg" style="width: 333px; height: 333px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> n = 8
<strong>Output:</strong> 3
<strong>Explanation:</strong> Because the 4<sup>th</sup> row is incomplete, we return 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>