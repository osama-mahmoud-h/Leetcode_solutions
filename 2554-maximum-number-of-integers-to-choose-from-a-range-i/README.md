<h2><a href="https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/">2554. Maximum Number of Integers to Choose From a Range I</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">You are given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">banned</code> and two integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">maxSum</code>. You are choosing some number of integers following the below rules:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">The chosen integers have to be in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">[1, n]</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;">Each integer can be chosen <strong style="border-color: rgb(92, 122, 137) !important;">at most once</strong>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;">The chosen integers should not be in the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">banned</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;">The sum of the chosen integers should not exceed <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">maxSum</code>.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">the <strong style="border-color: rgb(92, 122, 137) !important;">maximum</strong> number of integers you can choose following the mentioned rules</em>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> banned = [1,6,5], n = 5, maxSum = 6
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 2
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> You can choose the integers 2 and 4.
2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 0
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> You cannot choose any integer while following the mentioned conditions.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> banned = [11], n = 7, maxSum = 50
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 7
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> You can choose the integers 1, 2, 3, 4, 5, 6, and 7.
They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= banned.length &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">4</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= banned[i], n &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">4</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= maxSum &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">9</sup></code></li>
</ul>
</div>