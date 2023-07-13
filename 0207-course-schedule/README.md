<h2><a href="https://leetcode.com/problems/course-schedule/">207. Course Schedule</a></h2><h3>Medium</h3><hr><div><p>There are a total of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">numCourses</code> courses you have to take, labeled from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">numCourses - 1</code>. You are given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prerequisites</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prerequisites[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that you <strong>must</strong> take course <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">b<sub>i</sub></code> first if you want to take course <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">a<sub>i</sub></code>.</p>

<ul>
	<li>For example, the pair <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[0, 1]</code>, indicates that to take course <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> you have to first take course <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>.</li>
</ul>

<p>Return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if you can finish all courses. Otherwise, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> numCourses = 2, prerequisites = [[1,0]]
<strong>Output:</strong> true
<strong>Explanation:</strong> There are a total of 2 courses to take. 
To take course 1 you should have finished course 0. So it is possible.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> numCourses = 2, prerequisites = [[1,0],[0,1]]
<strong>Output:</strong> false
<strong>Explanation:</strong> There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= numCourses &lt;= 2000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= prerequisites.length &lt;= 5000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prerequisites[i].length == 2</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt; numCourses</code></li>
	<li>All the pairs prerequisites[i] are <strong>unique</strong>.</li>
</ul>
</div>