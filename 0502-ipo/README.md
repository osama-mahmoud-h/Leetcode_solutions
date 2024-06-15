<h2><a href="https://leetcode.com/problems/ipo/">502. IPO</a></h2><h3>Hard</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Suppose LeetCode will start its <strong style="border-color: rgb(92, 122, 137) !important;">IPO</strong> soon. In order to sell a good price of its shares to Venture Capital, LeetCode would like to work on some projects to increase its capital before the <strong style="border-color: rgb(92, 122, 137) !important;">IPO</strong>. Since it has limited resources, it can only finish at most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code> distinct projects before the <strong style="border-color: rgb(92, 122, 137) !important;">IPO</strong>. Help LeetCode design the best way to maximize its total capital after finishing at most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code> distinct projects.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You are given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> projects where the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">i<sup style="border-color: rgb(92, 120, 133) !important;">th</sup></code> project has a pure profit <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">profits[i]</code> and a minimum capital of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">capital[i]</code> is needed to start it.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Initially, you have <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">w</code> capital. When you finish a project, you will obtain its pure profit and the profit will be added to your total capital.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Pick a list of <strong style="border-color: rgb(92, 122, 137) !important;">at most</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code> distinct projects from given projects to <strong style="border-color: rgb(91, 119, 134) !important;">maximize your final capital</strong>, and return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the final maximized capital</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">The answer is guaranteed to fit in a 32-bit signed integer.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> k = 2, w = 0, profits = [1,2,3], capital = [0,1,1]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 4
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Since your initial capital is 0, you can only start the project indexed 0.
After finishing it you will obtain profit 1 and your capital becomes 1.
With capital 1, you can either start the project indexed 1 or the project indexed 2.
Since you can choose at most 2 projects, you need to finish the project indexed 2 to get the maximum capital.
Therefore, output the final maximized capital, which is 0 + 1 + 3 = 4.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> k = 3, w = 0, profits = [1,2,3], capital = [0,1,2]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 6
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= k &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= w &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">9</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == profits.length</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n == capital.length</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= profits[i] &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">4</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= capital[i] &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">9</sup></code></li>
</ul>
</div>