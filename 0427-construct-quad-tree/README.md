<h2><a href="https://leetcode.com/problems/construct-quad-tree/">427. Construct Quad Tree</a></h2><h3>Medium</h3><hr><div><p>Given a <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n * n</code> matrix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0's</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1's</code> only. We want to represent <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code> with a Quad-Tree.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the root of the Quad-Tree representing </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">grid</code>.</p>

<p>A Quad-Tree is a tree data structure in which each internal node has exactly four children. Besides, each node has two attributes:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code>: True if the node represents a grid of 1's or False if the node represents a grid of 0's. Notice that you can assign the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> to True or False when <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">isLeaf</code> is False, and both are accepted in the answer.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">isLeaf</code>: True if the node is a leaf node on the tree or False if the node has four children.</li>
</ul>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;">class Node {
    public boolean val;
    public boolean isLeaf;
    public Node topLeft;
    public Node topRight;
    public Node bottomLeft;
    public Node bottomRight;
}</pre>

<p>We can construct a Quad-Tree from a two-dimensional area using the following steps:</p>

<ol>
	<li>If the current grid has the same value (i.e all <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1's</code> or all <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0's</code>) set <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">isLeaf</code> True and set <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> to the value of the grid and set the four children to Null and stop.</li>
	<li>If the current grid has different values, set <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">isLeaf</code> to False and set <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> to any value and divide the current grid into four sub-grids as shown in the photo.</li>
	<li>Recurse for each of the children with the proper sub-grid.</li>
</ol>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/11/new_top.png" style="width: 777px; height: 181px; filter: saturate(0.9) brightness(0.8);">
<p>If you want to know more about the Quad-Tree, you can refer to the <a href="https://en.wikipedia.org/wiki/Quadtree" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">wiki</a>.</p>

<p><strong>Quad-Tree format:</strong></p>

<p>You don't need to read this section for solving the problem. This is only if you want to understand the output format here. The output represents the serialized format of a Quad-Tree using level order traversal, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">null</code> signifies a path terminator where no node exists below.</p>

<p>It is very similar to the serialization of the binary tree. The only difference is that the node is represented as a list <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[isLeaf, val]</code>.</p>

<p>If the value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">isLeaf</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> is True we represent it as <strong>1</strong> in the list <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[isLeaf, val]</code> and if the value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">isLeaf</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">val</code> is False we represent it as <strong>0</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/11/grid1.png" style="width: 777px; height: 99px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[0,1],[1,0]]
<strong>Output:</strong> [[0,1],[1,0],[1,1],[1,1],[1,0]]
<strong>Explanation:</strong> The explanation of this example is shown below:
Notice that 0 represnts False and 1 represents True in the photo representing the Quad-Tree.
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/12/e1tree.png" style="width: 777px; height: 186px; filter: saturate(0.9) brightness(0.8);">
</pre>

<p><strong class="example">Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2020/02/12/e2mat.png" style="width: 777px; height: 343px; filter: saturate(0.9) brightness(0.8);"></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> grid = [[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,1,1,1,1],[1,1,1,1,1,1,1,1],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0]]
<strong>Output:</strong> [[0,1],[1,1],[0,1],[1,1],[1,0],null,null,null,null,[1,0],[1,0],[1,1],[1,1]]
<strong>Explanation:</strong> All values in the grid are not the same. We divide the grid into four sub-grids.
The topLeft, bottomLeft and bottomRight each has the same value.
The topRight have different values so we divide it into 4 sub-grids where each has the same value.
Explanation is shown in the photo below:
<img alt="" src="https://assets.leetcode.com/uploads/2020/02/12/e2tree.png" style="width: 777px; height: 328px; filter: saturate(0.9) brightness(0.8);">
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == grid.length == grid[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == 2<sup>x</sup></code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= x &lt;= 6</code></li>
</ul>
</div>