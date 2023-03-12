<h2><a href="https://leetcode.com/problems/merge-k-sorted-lists/">23. Merge k Sorted Lists</a></h2><h3>Hard</h3><hr><div><p>You are given an array of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code> linked-lists <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">lists</code>, each linked-list is sorted in ascending order.</p>

<p><em style="color: rgb(234, 238, 241) !important;">Merge all the linked-lists into one sorted linked-list and return it.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> lists = [[1,4,5],[1,3,4],[2,6]]
<strong>Output:</strong> [1,1,2,3,4,4,5,6]
<strong>Explanation:</strong> The linked-lists are:
[
  1-&gt;4-&gt;5,
  1-&gt;3-&gt;4,
  2-&gt;6
]
merging them into one sorted list:
1-&gt;1-&gt;2-&gt;3-&gt;4-&gt;4-&gt;5-&gt;6
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> lists = []
<strong>Output:</strong> []
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> lists = [[]]
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k == lists.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= k &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= lists[i].length &lt;= 500</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>4</sup> &lt;= lists[i][j] &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">lists[i]</code> is sorted in <strong>ascending order</strong>.</li>
	<li>The sum of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">lists[i].length</code> will not exceed <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">10<sup>4</sup></code>.</li>
</ul>
</div>