<h2><a href="https://leetcode.com/problems/min-cost-to-connect-all-points/">1584. Min Cost to Connect All Points</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points</code> representing integer coordinates of some points on a 2D-plane, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points[i] = [x<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, y<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>]</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The cost of connecting two points <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[x<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, y<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[x<sub style="border-color: rgb(92, 120, 133) !important;">j</sub>, y<sub style="border-color: rgb(92, 120, 133) !important;">j</sub>]</code> is the <strong style="border-color: rgb(91, 119, 134) !important;">manhattan distance</strong> between them: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">|x<sub style="border-color: rgb(92, 120, 133) !important;">i</sub> - x<sub style="border-color: rgb(92, 120, 133) !important;">j</sub>| + |y<sub style="border-color: rgb(92, 120, 133) !important;">i</sub> - y<sub style="border-color: rgb(92, 120, 133) !important;">j</sub>|</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">|val|</code> denotes the absolute value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">val</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the minimum cost to make all points connected.</em> All points are connected if there is <strong style="border-color: rgb(92, 122, 137) !important;">exactly one</strong> simple path between any two points.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/26/d.png" style="width: 214px; height: 268px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(90, 120, 135) !important;">Input:</strong> points = [[0,0],[2,2],[3,10],[5,2],[7,0]]
<strong style="border-color: rgb(90, 120, 135) !important;">Output:</strong> 20
<strong style="border-color: rgb(90, 120, 135) !important;">Explanation:</strong> 
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/26/c.png" style="width: 214px; height: 268px; filter: saturate(0.9) brightness(0.8);">
We can connect the points as shown above to get the minimum cost of 20.
Notice that there is a unique path between every pair of points.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(90, 120, 135) !important;">Input:</strong> points = [[3,12],[-2,5],[-4,1]]
<strong style="border-color: rgb(90, 120, 135) !important;">Output:</strong> 18
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= points.length &lt;= 1000</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-10<sup style="border-color: rgb(92, 120, 133) !important;">6</sup> &lt;= x<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, y<sub style="border-color: rgb(92, 120, 133) !important;">i</sub> &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">6</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">All pairs <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(x<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, y<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>)</code> are distinct.</li>
</ul>
</div>