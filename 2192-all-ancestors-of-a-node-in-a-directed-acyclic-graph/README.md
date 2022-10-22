<h2><a href="https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/">2192. All Ancestors of a Node in a Directed Acyclic Graph</a></h2><h3>Medium</h3><hr><div><p>You are given a positive integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> representing the number of nodes of a <strong>Directed Acyclic Graph</strong> (DAG). The nodes are numbered from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n - 1</code> (<strong>inclusive</strong>).</p>

<p>You are also given a 2D integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges[i] = [from<sub>i</sub>, to<sub>i</sub>]</code> denotes that there is a <strong>unidirectional</strong> edge from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">from<sub>i</sub></code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">to<sub>i</sub></code> in the graph.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">a list</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">answer</code><em style="color: rgb(234, 238, 241) !important;">, where </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">answer[i]</code><em style="color: rgb(234, 238, 241) !important;"> is the <strong>list of ancestors</strong> of the</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> <em style="color: rgb(234, 238, 241) !important;">node, sorted in <strong>ascending order</strong></em>.</p>

<p>A node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">u</code> is an <strong>ancestor</strong> of another node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">v</code> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">u</code> can reach <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">v</code> via a set of edges.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/12/e1.png" style="width: 322px; height: 265px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> n = 8, edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]
<strong>Output:</strong> [[],[],[],[0,1],[0,2],[0,1,3],[0,1,2,3,4],[0,1,2,3]]
<strong>Explanation:</strong>
The above diagram represents the input graph.
- Nodes 0, 1, and 2 do not have any ancestors.
- Node 3 has two ancestors 0 and 1.
- Node 4 has two ancestors 0 and 2.
- Node 5 has three ancestors 0, 1, and 3.
- Node 6 has five ancestors 0, 1, 2, 3, and 4.
- Node 7 has four ancestors 0, 1, 2, and 3.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/12/e2.png" style="width: 343px; height: 299px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> n = 5, edgeList = [[0,1],[0,2],[0,3],[0,4],[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
<strong>Output:</strong> [[],[0],[0,1],[0,1,2],[0,1,2,3]]
<strong>Explanation:</strong>
The above diagram represents the input graph.
- Node 0 does not have any ancestor.
- Node 1 has one ancestor 0.
- Node 2 has two ancestors 0 and 1.
- Node 3 has three ancestors 0, 1, and 2.
- Node 4 has four ancestors 0, 1, 2, and 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= edges.length &lt;= min(2000, n * (n - 1) / 2)</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges[i].length == 2</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= from<sub>i</sub>, to<sub>i</sub> &lt;= n - 1</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">from<sub>i</sub> != to<sub>i</sub></code></li>
	<li>There are no duplicate edges.</li>
	<li>The graph is <strong>directed</strong> and <strong>acyclic</strong>.</li>
</ul>
</div>