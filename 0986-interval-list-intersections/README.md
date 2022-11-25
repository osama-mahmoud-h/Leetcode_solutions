<h2><a href="https://leetcode.com/problems/interval-list-intersections/">986. Interval List Intersections</a></h2><h3>Medium</h3><hr><div><p>You are given two lists of closed intervals, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">firstList</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">secondList</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">firstList[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">secondList[j] = [start<sub>j</sub>, end<sub>j</sub>]</code>. Each list of intervals is pairwise <strong>disjoint</strong> and in <strong>sorted order</strong>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the intersection of these two interval lists</em>.</p>

<p>A <strong>closed interval</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[a, b]</code> (with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">a &lt;= b</code>) denotes the set of real numbers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">a &lt;= x &lt;= b</code>.</p>

<p>The <strong>intersection</strong> of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. For example, the intersection of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, 3]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[2, 4]</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[2, 3]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/30/interval1.png" style="width: 700px; height: 194px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]]
<strong>Output:</strong> [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> firstList = [[1,3],[5,9]], secondList = []
<strong>Output:</strong> []
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= firstList.length, secondList.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">firstList.length + secondList.length &gt;= 1</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= start<sub>i</sub> &lt; end<sub>i</sub> &lt;= 10<sup>9</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">end<sub>i</sub> &lt; start<sub>i+1</sub></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= start<sub>j</sub> &lt; end<sub>j</sub> &lt;= 10<sup>9</sup> </code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">end<sub>j</sub> &lt; start<sub>j+1</sub></code></li>
</ul>
</div>