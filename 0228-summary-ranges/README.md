<h2><a href="https://leetcode.com/problems/summary-ranges/">228. Summary Ranges</a></h2><h3>Easy</h3><hr><div><p>You are given a <strong>sorted unique</strong> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code>.</p>

<p>A <strong>range</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[a,b]</code> is the set of all integers from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">a</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">b</code> (inclusive).</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the <strong>smallest sorted</strong> list of ranges that <strong>cover all the numbers in the array exactly</strong></em>. That is, each element of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> is covered by exactly one of the ranges, and there is no integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> is in one of the ranges but not in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code>.</p>

<p>Each range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[a,b]</code> in the list should be output as:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"a-&gt;b"</code> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">a != b</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"a"</code> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">a == b</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [0,1,2,4,5,7]
<strong>Output:</strong> ["0-&gt;2","4-&gt;5","7"]
<strong>Explanation:</strong> The ranges are:
[0,2] --&gt; "0-&gt;2"
[4,5] --&gt; "4-&gt;5"
[7,7] --&gt; "7"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [0,2,3,4,6,8,9]
<strong>Output:</strong> ["0","2-&gt;4","6","8-&gt;9"]
<strong>Explanation:</strong> The ranges are:
[0,0] --&gt; "0"
[2,4] --&gt; "2-&gt;4"
[6,6] --&gt; "6"
[8,9] --&gt; "8-&gt;9"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= nums.length &lt;= 20</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li>All the values of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> are <strong>unique</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> is sorted in ascending order.</li>
</ul>
</div>