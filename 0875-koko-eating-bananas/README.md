<h2><a href="https://leetcode.com/problems/koko-eating-bananas/">875. Koko Eating Bananas</a></h2><h3>Medium</h3><hr><div><p>Koko loves to eat bananas. There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n</code> piles of bananas, the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">i<sup>th</sup></code> pile has <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">piles[i]</code> bananas. The guards have gone and will come back in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">h</code> hours.</p>

<p>Koko can decide her bananas-per-hour eating speed of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">k</code>. Each hour, she chooses some pile of bananas and eats <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">k</code> bananas from that pile. If the pile has less than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">k</code> bananas, she eats all of them instead and will not eat any more bananas during this hour.</p>

<p>Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the minimum integer</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">k</code> <em style="color: rgb(234, 238, 241) !important;">such that she can eat all the bananas within</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">h</code> <em style="color: rgb(234, 238, 241) !important;">hours</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> piles = [3,6,7,11], h = 8
<strong>Output:</strong> 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> piles = [30,11,23,4,20], h = 5
<strong>Output:</strong> 30
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> piles = [30,11,23,4,20], h = 6
<strong>Output:</strong> 23
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= piles.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">piles.length &lt;= h &lt;= 10<sup>9</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= piles[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>