<h2><a href="https://leetcode.com/problems/all-paths-from-source-to-target/">797. All Paths From Source to Target</a></h2><h3>Medium</h3><hr><div><p>Given a directed acyclic graph (<strong>DAG</strong>) of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> nodes labeled from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n - 1</code>, find all possible paths from node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> to node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n - 1</code> and return them in <strong>any order</strong>.</p>

<p>The graph is given as follows: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">graph[i]</code> is a list of all nodes you can visit from node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> (i.e., there is a directed edge from node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> to node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">graph[i][j]</code>).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/28/all_1.jpg" style="width: 242px; height: 242px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> graph = [[1,2],[3],[3],[]]
<strong>Output:</strong> [[0,1,3],[0,2,3]]
<strong>Explanation:</strong> There are two paths: 0 -&gt; 1 -&gt; 3 and 0 -&gt; 2 -&gt; 3.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/28/all_2.jpg" style="width: 423px; height: 301px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> graph = [[4,3,1],[3,2,4],[3],[4],[]]
<strong>Output:</strong> [[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == graph.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= n &lt;= 15</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= graph[i][j] &lt; n</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">graph[i][j] != i</code> (i.e., there will be no self-loops).</li>
	<li>All the elements of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">graph[i]</code> are <strong>unique</strong>.</li>
	<li>The input graph is <strong>guaranteed</strong> to be a <strong>DAG</strong>.</li>
</ul>
</div>