<h2><a href="https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/">153. Find Minimum in Rotated Sorted Array</a></h2><h3>Medium</h3><hr><div><p>Suppose an array of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> sorted in ascending order is <strong>rotated</strong> between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> times. For example, the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums = [0,1,2,4,5,6,7]</code> might become:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[4,5,6,7,0,1,2]</code> if it was rotated <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">4</code> times.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[0,1,2,4,5,6,7]</code> if it was rotated <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">7</code> times.</li>
</ul>

<p>Notice that <strong>rotating</strong> an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[a[0], a[1], a[2], ..., a[n-1]]</code> 1 time results in the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[a[n-1], a[0], a[1], a[2], ..., a[n-2]]</code>.</p>

<p>Given the sorted rotated array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> of <strong>unique</strong> elements, return <em style="color: rgb(234, 238, 241) !important;">the minimum element of this array</em>.</p>

<p>You must write an algorithm that runs in&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(log n) time.</code></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [3,4,5,1,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The original array was [1,2,3,4,5] rotated 3 times.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [4,5,6,7,0,1,2]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> nums = [11,13,15,17]
<strong>Output:</strong> 11
<strong>Explanation:</strong> The original array was [11,13,15,17] and it was rotated 4 times. 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == nums.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 5000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-5000 &lt;= nums[i] &lt;= 5000</code></li>
	<li>All the integers of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> are <strong>unique</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> is sorted and rotated between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> times.</li>
</ul>
</div>