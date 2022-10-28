<h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-convert-time/">2224. Minimum Number of Operations to Convert Time</a></h2><h3>Easy</h3><hr><div><p>You are given two strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">current</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">correct</code> representing two <strong>24-hour times</strong>.</p>

<p>24-hour times are formatted as <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"HH:MM"</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">HH</code> is between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">00</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">23</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">MM</code> is between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">00</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">59</code>. The earliest 24-hour time is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">00:00</code>, and the latest is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">23:59</code>.</p>

<p>In one operation you can increase the time <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">current</code> by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">5</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">15</code>, or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">60</code> minutes. You can perform this operation <strong>any</strong> number of times.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the <strong>minimum number of operations</strong> needed to convert </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">current</code><em style="color: rgb(234, 238, 241) !important;"> to </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">correct</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> current = "02:30", correct = "04:35"
<strong>Output:</strong> 3
<strong>Explanation:
</strong>We can convert current to correct in 3 operations as follows:
- Add 60 minutes to current. current becomes "03:30".
- Add 60 minutes to current. current becomes "04:30".
- Add 5 minutes to current. current becomes "04:35".
It can be proven that it is not possible to convert current to correct in fewer than 3 operations.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> current = "11:00", correct = "11:01"
<strong>Output:</strong> 1
<strong>Explanation:</strong> We only have to add one minute to current, so the minimum number of operations needed is 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">current</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">correct</code> are in the format <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">"HH:MM"</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">current &lt;= correct</code></li>
</ul>
</div>