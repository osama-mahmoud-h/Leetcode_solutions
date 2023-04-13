<h2><a href="https://leetcode.com/problems/validate-stack-sequences/">946. Validate Stack Sequences</a></h2><h3>Medium</h3><hr><div><p>Given two integer arrays <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pushed</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">popped</code> each with distinct values, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code><em style="color: rgb(234, 238, 241) !important;"> if this could have been the result of a sequence of push and pop operations on an initially empty stack, or </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code><em style="color: rgb(234, 238, 241) !important;"> otherwise.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
<strong>Output:</strong> true
<strong>Explanation:</strong> We might do the following sequence:
push(1), push(2), push(3), push(4),
pop() -&gt; 4,
push(5),
pop() -&gt; 5, pop() -&gt; 3, pop() -&gt; 2, pop() -&gt; 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
<strong>Output:</strong> false
<strong>Explanation:</strong> 1 cannot be popped before 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= pushed.length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= pushed[i] &lt;= 1000</code></li>
	<li>All the elements of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pushed</code> are <strong>unique</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">popped.length == pushed.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">popped</code> is a permutation of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pushed</code>.</li>
</ul>
</div>