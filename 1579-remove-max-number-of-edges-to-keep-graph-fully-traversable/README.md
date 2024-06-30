<h2><a href="https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/">1579. Remove Max Number of Edges to Keep Graph Fully Traversable</a></h2><h3>Hard</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Alice and Bob have an undirected graph of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> nodes and three types of edges:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Type 1: Can be traversed by Alice only.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Type 2: Can be traversed by Bob only.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Type 3: Can be traversed by both Alice and Bob.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">edges</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">edges[i] = [type<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, u<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, v<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code> represents a bidirectional edge of type <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">type<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code> between nodes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">u<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">v<sub style="border-color: rgb(83, 109, 121) !important;">i</sub></code>, find the maximum number of edges you can remove so that after removing the edges, the graph can still be fully traversed by both Alice and Bob. The graph is fully traversed by Alice and Bob if starting from any node, they can reach all other nodes.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the maximum number of edges you can remove, or return</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">-1</code> <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">if Alice and Bob cannot fully traverse the graph.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/ex1.png" style="width: 179px; height: 191px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 4, edges = [[3,1,2],[3,2,3],[1,1,3],[1,2,4],[1,1,2],[2,3,4]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 2
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation: </strong>If we remove the 2 edges [1,1,2] and [1,1,3]. The graph will still be fully traversable by Alice and Bob. Removing any additional edge will not make it so. So the maximum number of edges we can remove is 2.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/ex2.png" style="width: 178px; height: 190px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 4, edges = [[3,1,2],[3,2,3],[1,1,4],[2,1,4]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 0
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation: </strong>Notice that removing any edge will not make the graph fully traversable by Alice and Bob.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;"><img alt="" src="https://assets.leetcode.com/uploads/2020/08/19/ex3.png" style="width: 178px; height: 190px; filter: saturate(0.9) brightness(0.8);"></strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 4, edges = [[3,2,3],[1,1,2],[2,3,4]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> -1
<b style="border-color: rgb(83, 109, 122) !important;">Explanation: </b>In the current graph, Alice cannot reach node 4 from the other nodes. Likewise, Bob cannot reach 1. Therefore it's impossible to make the graph fully traversable.</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= edges.length &lt;= min(10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup>, 3 * n * (n - 1) / 2)</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">edges[i].length == 3</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= type<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt;= 3</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= u<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt; v<sub style="border-color: rgb(83, 109, 121) !important;">i</sub> &lt;= n</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">All tuples <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">(type<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, u<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, v<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>)</code> are distinct.</li>
</ul>
</div>