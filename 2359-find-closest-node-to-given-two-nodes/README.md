<h2><a href="https://leetcode.com/problems/find-closest-node-to-given-two-nodes/">2359. Find Closest Node to Given Two Nodes</a></h2><h3>Medium</h3><hr><div><p>You are given a <strong>directed</strong> graph of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> nodes numbered from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n - 1</code>, where each node has <strong>at most one</strong> outgoing edge.</p>

<p>The graph is represented with a given <strong>0-indexed</strong> array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges</code> of size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>, indicating that there is a directed edge from node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> to node <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges[i]</code>. If there is no outgoing edge from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code>, then <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges[i] == -1</code>.</p>

<p>You are also given two integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">node1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">node2</code>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the <strong>index</strong> of the node that can be reached from both </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">node1</code><em style="color: rgb(234, 238, 241) !important;"> and </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">node2</code><em style="color: rgb(234, 238, 241) !important;">, such that the <strong>maximum</strong> between the distance from </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">node1</code><em style="color: rgb(234, 238, 241) !important;"> to that node, and from </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">node2</code><em style="color: rgb(234, 238, 241) !important;"> to that node is <strong>minimized</strong></em>. If there are multiple answers, return the node with the <strong>smallest</strong> index, and if no possible answer exists, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code>.</p>

<p>Note that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges</code> may contain cycles.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/07/graph4drawio-2.png" style="width: 321px; height: 161px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> edges = [2,2,3,-1], node1 = 0, node2 = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong> The distance from node 0 to node 2 is 1, and the distance from node 1 to node 2 is 1.
The maximum of those two distances is 1. It can be proven that we cannot get a node with a smaller maximum distance than 1, so we return node 2.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/07/graph4drawio-4.png" style="width: 195px; height: 161px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> edges = [1,2,-1], node1 = 0, node2 = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> The distance from node 0 to node 2 is 2, and the distance from node 2 to itself is 0.
The maximum of those two distances is 2. It can be proven that we cannot get a node with a smaller maximum distance than 2, so we return node 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == edges.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1 &lt;= edges[i] &lt; n</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">edges[i] != i</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= node1, node2 &lt; n</code></li>
</ul>
</div>