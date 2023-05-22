<h2><a href="https://leetcode.com/problems/top-k-frequent-elements/">347. Top K Frequent Elements</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>, return <em style="color: rgb(234, 238, 241) !important;">the</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code> <em style="color: rgb(234, 238, 241) !important;">most frequent elements</em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [1,1,1,2,2,3], k = 2
<strong>Output:</strong> [1,2]
</pre><p><strong class="example">Example 2:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [1], k = 1
<strong>Output:</strong> [1]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code> is in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1, the number of unique elements in the array]</code>.</li>
	<li>It is <strong>guaranteed</strong> that the answer is <strong>unique</strong>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Your algorithm's time complexity must be better than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(n log n)</code>, where n is the array's size.</p>
</div>