<h2><a href="https://leetcode.com/problems/insert-interval/">57. Insert Interval</a></h2><h3>Medium</h3><hr><div><p>You are given an array of non-overlapping intervals <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> represent the start and the end of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> interval and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code> is sorted in ascending order by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">start<sub>i</sub></code>. You are also given an interval <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">newInterval = [start, end]</code> that represents the start and end of another interval.</p>

<p>Insert <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">newInterval</code> into <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code> is still sorted in ascending order by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">start<sub>i</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code> still does not have any overlapping intervals (merge overlapping intervals if necessary).</p>

<p>Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code><em style="color: rgb(234, 238, 241) !important;"> after the insertion</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> intervals = [[1,3],[6,9]], newInterval = [2,5]
<strong>Output:</strong> [[1,5],[6,9]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
<strong>Output:</strong> [[1,2],[3,10],[12,16]]
<strong>Explanation:</strong> Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= intervals.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals[i].length == 2</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">intervals</code> is sorted by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">start<sub>i</sub></code> in <strong>ascending</strong> order.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">newInterval.length == 2</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= start &lt;= end &lt;= 10<sup>5</sup></code></li>
</ul>
</div>