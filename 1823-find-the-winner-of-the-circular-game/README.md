<h2><a href="https://leetcode.com/problems/find-the-winner-of-the-circular-game/">1823. Find the Winner of the Circular Game</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">There are <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">n</code> friends that are playing a game. The friends are sitting in a circle and are numbered from <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">1</code> to <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">n</code> in <strong style="border-color: rgb(91, 119, 134) !important;">clockwise order</strong>. More formally, moving clockwise from the <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">i<sup style="border-color: rgb(91, 119, 132) !important;">th</sup></code> friend brings you to the <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">(i+1)<sup style="border-color: rgb(91, 119, 132) !important;">th</sup></code> friend for <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">1 &lt;= i &lt; n</code>, and moving clockwise from the <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">n<sup style="border-color: rgb(91, 119, 132) !important;">th</sup></code> friend brings you to the <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">1<sup style="border-color: rgb(91, 119, 132) !important;">st</sup></code> friend.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The rules of the game are as follows:</p>

<ol style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Start</strong> at the <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">1<sup style="border-color: rgb(91, 119, 132) !important;">st</sup></code> friend.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Count the next <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">k</code> friends in the clockwise direction <strong style="border-color: rgb(91, 119, 134) !important;">including</strong> the friend you started at. The counting wraps around the circle and may count some friends more than once.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The last friend you counted leaves the circle and loses the game.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">If there is still more than one friend in the circle, go back to step <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">2</code> <strong style="border-color: rgb(91, 119, 134) !important;">starting</strong> from the friend <strong style="border-color: rgb(91, 119, 134) !important;">immediately clockwise</strong> of the friend who just lost and repeat.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Else, the last friend in the circle wins the game.</li>
</ol>

<p style="border-color: rgb(91, 119, 134) !important;">Given the number of friends, <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">n</code>, and an integer <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">k</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the winner of the game</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/25/ic234-q2-ex11.png" style="width: 500px; height: 345px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(90, 119, 133) !important;"><strong style="border-color: rgb(90, 119, 133) !important;">Input:</strong> n = 5, k = 2
<strong style="border-color: rgb(90, 119, 133) !important;">Output:</strong> 3
<strong style="border-color: rgb(90, 119, 133) !important;">Explanation:</strong> Here are the steps of the game:
1) Start at friend 1.
2) Count 2 friends clockwise, which are friends 1 and 2.
3) Friend 2 leaves the circle. Next start is friend 3.
4) Count 2 friends clockwise, which are friends 3 and 4.
5) Friend 4 leaves the circle. Next start is friend 5.
6) Count 2 friends clockwise, which are friends 5 and 1.
7) Friend 1 leaves the circle. Next start is friend 3.
8) Count 2 friends clockwise, which are friends 3 and 5.
9) Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(90, 119, 133) !important;"><strong style="border-color: rgb(90, 119, 133) !important;">Input:</strong> n = 6, k = 5
<strong style="border-color: rgb(90, 119, 133) !important;">Output:</strong> 1
<strong style="border-color: rgb(90, 119, 133) !important;">Explanation:</strong> The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important; border-color: rgb(91, 119, 132) !important;">1 &lt;= k &lt;= n &lt;= 500</code></li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Follow up:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;">Could you solve this problem in linear time with constant space?</p>
</div>