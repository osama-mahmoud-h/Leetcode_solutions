<h2><a href="https://leetcode.com/problems/sort-the-people/">2418. Sort the People</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an array of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">names</code>, and an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">heights</code> that consists of <strong style="border-color: rgb(91, 119, 134) !important;">distinct</strong> positive integers. Both arrays are of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">n</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">For each index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">i</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">names[i]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">heights[i]</code> denote the name and height of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">i<sup style="border-color: rgb(84, 109, 121) !important;">th</sup></code> person.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">names</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> sorted in <strong style="border-color: rgb(91, 119, 134) !important;">descending</strong> order by the people's heights</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> names = ["Mary","John","Emma"], heights = [180,165,170]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> ["Mary","Emma","John"]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Mary is the tallest, followed by Emma and John.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> names = ["Alice","Bob","Bob"], heights = [155,185,150]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> ["Bob","Alice","Bob"]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> The first Bob is the tallest, followed by Alice and the second Bob.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">n == names.length == heights.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= n &lt;= 10<sup style="border-color: rgb(84, 109, 121) !important;">3</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= names[i].length &lt;= 20</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= heights[i] &lt;= 10<sup style="border-color: rgb(84, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">names[i]</code> consists of lower and upper case English letters.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">All the values of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">heights</code> are distinct.</li>
</ul>
</div>