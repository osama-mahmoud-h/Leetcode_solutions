<h2><a href="https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/">1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> cities numbered from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n-1</code>. Given the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">edges</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">edges[i] = [from<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, to<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, weight<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>]</code> represents a bidirectional and weighted edge between cities <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">from<sub style="border-color: rgb(92, 120, 133) !important;">i</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">to<sub style="border-color: rgb(92, 120, 133) !important;">i</sub></code>, and given the integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">distanceThreshold</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return the city with the smallest number of cities that are reachable through some path and whose distance is <strong style="border-color: rgb(92, 122, 137) !important;">at most</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">distanceThreshold</code>, If there are multiple such cities, return the city with the greatest number.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Notice that the distance of a path connecting cities <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">i</strong></em> and <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">j</strong></em> is equal to the sum of the edges' weights along that path.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/16/find_the_city_01.png" style="width: 300px; height: 225px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(90, 120, 135) !important;">Input:</strong> n = 4, edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]], distanceThreshold = 4
<strong style="border-color: rgb(90, 120, 135) !important;">Output:</strong> 3
<strong style="border-color: rgb(90, 120, 135) !important;">Explanation: </strong>The figure above describes the graph.&nbsp;
The neighboring cities at a distanceThreshold = 4 for each city are:
City 0 -&gt; [City 1, City 2]&nbsp;
City 1 -&gt; [City 0, City 2, City 3]&nbsp;
City 2 -&gt; [City 0, City 1, City 3]&nbsp;
City 3 -&gt; [City 1, City 2]&nbsp;
Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, but we have to return city 3 since it has the greatest number.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/16/find_the_city_02.png" style="width: 300px; height: 225px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(90, 120, 135) !important;">Input:</strong> n = 5, edges = [[0,1,2],[0,4,8],[1,2,3],[1,4,2],[2,3,1],[3,4,1]], distanceThreshold = 2
<strong style="border-color: rgb(90, 120, 135) !important;">Output:</strong> 0
<strong style="border-color: rgb(90, 120, 135) !important;">Explanation: </strong>The figure above describes the graph.&nbsp;
The neighboring cities at a distanceThreshold = 2 for each city are:
City 0 -&gt; [City 1]&nbsp;
City 1 -&gt; [City 0, City 4]&nbsp;
City 2 -&gt; [City 3, City 4]&nbsp;
City 3 -&gt; [City 2, City 4]
City 4 -&gt; [City 1, City 2, City 3]&nbsp;
The city 0 has 1 neighboring city at a distanceThreshold = 2.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= n &lt;= 100</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= edges.length &lt;= n * (n - 1) / 2</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">edges[i].length == 3</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= from<sub style="border-color: rgb(92, 120, 133) !important;">i</sub> &lt; to<sub style="border-color: rgb(92, 120, 133) !important;">i</sub> &lt; n</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= weight<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>,&nbsp;distanceThreshold &lt;= 10^4</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;">All pairs <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(from<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>, to<sub style="border-color: rgb(92, 120, 133) !important;">i</sub>)</code> are distinct.</li>
</ul>
</div>