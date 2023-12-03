<h2><a href="https://leetcode.com/problems/minimum-time-visiting-all-points/">1266. Minimum Time Visiting All Points</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">On a 2D plane, there are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> points with integer coordinates <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points[i] = [x<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, y<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code>. Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the <strong style="border-color: rgb(91, 119, 134) !important;">minimum time</strong> in seconds to visit all the points in the order given by </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You can move according to these rules:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">In <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1</code> second, you can either:

	<ul style="border-color: rgb(91, 119, 134) !important;">
		<li style="border-color: rgb(91, 119, 134) !important;">move vertically by one&nbsp;unit,</li>
		<li style="border-color: rgb(91, 119, 134) !important;">move horizontally by one unit, or</li>
		<li style="border-color: rgb(91, 119, 134) !important;">move diagonally <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">sqrt(2)</code> units (in other words, move one unit vertically then one unit horizontally in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1</code> second).</li>
	</ul>
	</li>
	<li style="border-color: rgb(91, 119, 134) !important;">You have to visit the points in the same order as they appear in the array.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">You are allowed to pass through points that appear later in the order, but these do not count as visits.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/14/1626_example_1.PNG" style="width: 500px; height: 428px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> points = [[1,1],[3,4],[-1,0]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 7
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation: </strong>One optimal path is <strong style="border-color: rgb(83, 109, 122) !important;">[1,1]</strong> -&gt; [2,2] -&gt; [3,3] -&gt; <strong style="border-color: rgb(83, 109, 122) !important;">[3,4] </strong>-&gt; [2,3] -&gt; [1,2] -&gt; [0,1] -&gt; <strong style="border-color: rgb(83, 109, 122) !important;">[-1,0]</strong>   
Time from [1,1] to [3,4] = 3 seconds 
Time from [3,4] to [-1,0] = 4 seconds
Total time = 7 seconds</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> points = [[3,2],[-2,2]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 5
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points.length == n</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n&nbsp;&lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">points[i].length == 2</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-1000&nbsp;&lt;= points[i][0], points[i][1]&nbsp;&lt;= 1000</code></li>
</ul>
</div>