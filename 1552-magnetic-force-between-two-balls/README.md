<h2><a href="https://leetcode.com/problems/magnetic-force-between-two-balls/">1552. Magnetic Force Between Two Balls</a></h2><h3>Medium</h3><hr><div><p>In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">n</code> empty baskets, the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">i<sup>th</sup></code> basket is at <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">position[i]</code>, Morty has <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">m</code> balls and needs to distribute the balls into the baskets such that the <strong>minimum magnetic force</strong> between any two balls is <strong>maximum</strong>.</p>

<p>Rick stated that magnetic force between two different balls at positions <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">x</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">y</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">|x - y|</code>.</p>

<p>Given the integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">position</code> and the integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">m</code>. Return <em style="color: rgb(234, 238, 241) !important;">the required force</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/11/q3v1.jpg" style="width: 562px; height: 195px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> position = [1,2,3,4,7], m = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> position = [5,4,3,2,1,1000000000], m = 2
<strong>Output:</strong> 999999999
<strong>Explanation:</strong> We can use baskets 1 and 1000000000.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">n == position.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">1 &lt;= position[i] &lt;= 10<sup>9</sup></code></li>
	<li>All integers in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">position</code> are <strong>distinct</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important;">2 &lt;= m &lt;= position.length</code></li>
</ul>
</div>