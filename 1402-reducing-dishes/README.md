<h2><a href="https://leetcode.com/problems/reducing-dishes/">1402. Reducing Dishes</a></h2><h3>Hard</h3><hr><div><p>A chef has collected data on the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">satisfaction</code> level of his <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> dishes. Chef can cook any dish in 1 unit of time.</p>

<p><strong>Like-time coefficient</strong> of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">time[i] * satisfaction[i]</code>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the maximum sum of <strong>like-time coefficient</strong> that the chef can obtain after dishes preparation</em>.</p>

<p>Dishes can be prepared in <strong>any </strong>order and the chef can discard some dishes to get this maximum value.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> satisfaction = [-1,-8,0,5,-9]
<strong>Output:</strong> 14
<strong>Explanation:</strong> After Removing the second and last dish, the maximum total <strong>like-time coefficient</strong> will be equal to (-1*1 + 0*2 + 5*3 = 14).
Each dish is prepared in one unit of time.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> satisfaction = [4,3,2]
<strong>Output:</strong> 20
<strong>Explanation:</strong> Dishes can be prepared in any order, (2*1 + 3*2 + 4*3 = 20)
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> satisfaction = [-1,-4,-5]
<strong>Output:</strong> 0
<strong>Explanation:</strong> People do not like the dishes. No dish is prepared.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == satisfaction.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 500</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1000 &lt;= satisfaction[i] &lt;= 1000</code></li>
</ul>
</div>