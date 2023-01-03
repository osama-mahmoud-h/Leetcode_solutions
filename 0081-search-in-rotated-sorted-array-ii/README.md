<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array-ii/">81. Search in Rotated Sorted Array II</a></h2><h3>Medium</h3><hr><div><p>There is an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code> sorted in non-decreasing order (not necessarily with <strong>distinct</strong> values).</p>

<p>Before being passed to your function, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code> is <strong>rotated</strong> at an unknown pivot index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">k</code> (<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">0 &lt;= k &lt; nums.length</code>) such that the resulting array is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[0,1,2,4,4,4,5,6,6,7]</code> might be rotated at pivot index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">5</code> and become <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[4,5,6,6,7,0,1,2,4,4]</code>.</p>

<p>Given the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code> <strong>after</strong> the rotation and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">target</code>, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">true</code><em style="color: rgb(234, 238, 241) !important;"> if </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">target</code><em style="color: rgb(234, 238, 241) !important;"> is in </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code><em style="color: rgb(234, 238, 241) !important;">, or </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">false</code><em style="color: rgb(234, 238, 241) !important;"> if it is not in </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code><em style="color: rgb(234, 238, 241) !important;">.</em></p>

<p>You must decrease the overall operation steps as much as possible.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [2,5,6,0,0,1,2], target = 0
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = [2,5,6,0,0,1,2], target = 3
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= nums.length &lt;= 5000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code> is guaranteed to be rotated at some pivot.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> This problem is similar to&nbsp;<a href="/problems/search-in-rotated-sorted-array/description/" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">Search in Rotated Sorted Array</a>, but&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">nums</code> may contain <strong>duplicates</strong>. Would this affect the runtime complexity? How and why?</p>
</div>