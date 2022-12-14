<h2><a href="https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/">2023. Number of Pairs of Strings With Concatenation Equal to Target</a></h2><h3>Medium</h3><hr><div><p>Given an array of <strong>digit</strong> strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums</code> and a <strong>digit</strong> string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>, return <em style="color: rgb(234, 238, 241) !important;">the number of pairs of indices </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(i, j)</code><em style="color: rgb(234, 238, 241) !important;"> (where </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i != j</code><em style="color: rgb(234, 238, 241) !important;">) such that the <strong>concatenation</strong> of </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i] + nums[j]</code><em style="color: rgb(234, 238, 241) !important;"> equals </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = ["777","7","77","77"], target = "7777"
<strong>Output:</strong> 4
<strong>Explanation:</strong> Valid pairs are:
- (0, 1): "777" + "7"
- (1, 0): "7" + "777"
- (2, 3): "77" + "77"
- (3, 2): "77" + "77"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = ["123","4","12","34"], target = "1234"
<strong>Output:</strong> 2
<strong>Explanation:</strong> Valid pairs are:
- (0, 1): "123" + "4"
- (2, 3): "12" + "34"
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> nums = ["1","1","1"], target = "11"
<strong>Output:</strong> 6
<strong>Explanation:</strong> Valid pairs are:
- (0, 1): "1" + "1"
- (1, 0): "1" + "1"
- (0, 2): "1" + "1"
- (2, 0): "1" + "1"
- (1, 2): "1" + "1"
- (2, 1): "1" + "1"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= nums.length &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= nums[i].length &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= target.length &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> consist of digits.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">nums[i]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> do not have leading zeros.</li>
</ul>
</div>