<h2><a href="https://leetcode.com/problems/most-profit-assigning-work/">826. Most Profit Assigning Work</a></h2><h3>Medium</h3><hr><div><p>You have <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n</code> jobs and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">m</code> workers. You are given three arrays: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">difficulty</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">profit</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">worker</code> where:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">difficulty[i]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">profit[i]</code> are the difficulty and the profit of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">i<sup>th</sup></code> job, and</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">worker[j]</code> is the ability of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">j<sup>th</sup></code> worker (i.e., the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">j<sup>th</sup></code> worker can only complete a job with difficulty at most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">worker[j]</code>).</li>
</ul>

<p>Every worker can be assigned <strong>at most one job</strong>, but one job can be <strong>completed multiple times</strong>.</p>

<ul>
	<li>For example, if three workers attempt the same job that pays <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">$1</code>, then the total profit will be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">$3</code>. If a worker cannot complete any job, their profit is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">$0</code>.</li>
</ul>

<p>Return the maximum profit we can achieve after assigning the workers to the jobs.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
<strong>Output:</strong> 100
<strong>Explanation:</strong> Workers are assigned jobs of difficulty [4,4,6,6] and they get a profit of [20,20,30,30] separately.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> difficulty = [85,47,57], profit = [24,66,99], worker = [40,25,25]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n == difficulty.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n == profit.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">m == worker.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= n, m &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= difficulty[i], profit[i], worker[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>