<h2><a href="https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/">1637. Widest Vertical Area Between Two Points Containing No Points</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points</code> on a 2D plane where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points[i] = [x<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, y<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code>, Return<em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">&nbsp;the <strong style="border-color: rgb(91, 119, 134) !important;">widest vertical area</strong> between two points such that no points are inside the area.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">vertical area</strong> is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The <strong style="border-color: rgb(91, 119, 134) !important;">widest vertical area</strong> is the one with the maximum width.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Note that points <strong style="border-color: rgb(91, 119, 134) !important;">on the edge</strong> of a vertical area <strong style="border-color: rgb(91, 119, 134) !important;">are not</strong> considered included in the area.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/19/points3.png" style="width: 276px; height: 371px; filter: saturate(0.9) brightness(0.8);">​
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> points = [[8,7],[9,9],[7,4],[9,7]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Both the red and the blue area are optimal.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 3
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == points.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= n &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points[i].length == 2</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= x<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, y<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>&nbsp;&lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">9</sup></code></li>
</ul>
</div>