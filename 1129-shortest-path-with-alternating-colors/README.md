<h2><a href="https://leetcode.com/problems/shortest-path-with-alternating-colors/">1129. Shortest Path with Alternating Colors</a></h2><h3>Medium</h3><hr><div><p>You are given an integer <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">n</code>, the number of nodes in a directed graph where the nodes are labeled from <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">0</code> to <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">n - 1</code>. Each edge is red or blue in this graph, and there could be self-edges and parallel edges.</p>

<p>You are given two arrays <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">redEdges</code> and <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">blueEdges</code> where:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">redEdges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that there is a directed red edge from node <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">a<sub>i</sub></code> to node <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">b<sub>i</sub></code> in the graph, and</li>
	<li><code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">blueEdges[j] = [u<sub>j</sub>, v<sub>j</sub>]</code> indicates that there is a directed blue edge from node <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">u<sub>j</sub></code> to node <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">v<sub>j</sub></code> in the graph.</li>
</ul>

<p>Return an array <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">answer</code> of length <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">n</code>, where each <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">answer[x]</code> is the length of the shortest path from node <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">0</code> to node <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">x</code> such that the edge colors alternate along the path, or <code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">-1</code> if such a path does not exist.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> n = 3, redEdges = [[0,1],[1,2]], blueEdges = []
<strong>Output:</strong> [0,1,-1]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 33) !important; color: rgb(183, 199, 206) !important;"><strong>Input:</strong> n = 3, redEdges = [[0,1]], blueEdges = [[2,1]]
<strong>Output:</strong> [0,1,-1]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">1 &lt;= n &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">0 &lt;= redEdges.length,&nbsp;blueEdges.length &lt;= 400</code></li>
	<li><code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">redEdges[i].length == blueEdges[j].length == 2</code></li>
	<li><code style="background-color: rgb(20, 28, 33) !important; color: rgb(184, 199, 206) !important;">0 &lt;= a<sub>i</sub>, b<sub>i</sub>, u<sub>j</sub>, v<sub>j</sub> &lt; n</code></li>
</ul>
</div>