<h2><a href="https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/">1855. Maximum Distance Between a Pair of Values</a></h2><h3>Medium</h3><hr><div><p>You are given two <strong>non-increasing 0-indexed </strong>integer arrays <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums1</code>​​​​​​ and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums2</code>​​​​​​.</p>

<p>A pair of indices <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">(i, j)</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">0 &lt;= i &lt; nums1.length</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">0 &lt;= j &lt; nums2.length</code>, is <strong>valid</strong> if both <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">i &lt;= j</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums1[i] &lt;= nums2[j]</code>. The <strong>distance</strong> of the pair is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">j - i</code>​​​​.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the <strong>maximum distance</strong> of any <strong>valid</strong> pair </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">(i, j)</code><em style="color: rgb(234, 238, 241) !important;">. If there are no valid pairs, return </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">0</code>.</p>

<p>An array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">arr</code> is <strong>non-increasing</strong> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">arr[i-1] &gt;= arr[i]</code> for every <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= i &lt; arr.length</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums1 = [55,30,5,4,2], nums2 = [100,20,10,10,5]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The valid pairs are (0,0), (2,2), (2,3), (2,4), (3,3), (3,4), and (4,4).
The maximum distance is 2 with pair (2,4).
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums1 = [2,2,2], nums2 = [10,10,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The valid pairs are (0,0), (0,1), and (1,1).
The maximum distance is 1 with pair (0,1).
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums1 = [30,29,19,5], nums2 = [25,25,25,25,25]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The valid pairs are (2,2), (2,3), (2,4), (3,3), and (3,4).
The maximum distance is 2 with pair (2,4).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= nums1.length, nums2.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= nums1[i], nums2[j] &lt;= 10<sup>5</sup></code></li>
	<li>Both <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums2</code> are <strong>non-increasing</strong>.</li>
</ul>
</div>