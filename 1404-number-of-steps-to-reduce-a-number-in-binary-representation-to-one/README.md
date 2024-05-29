<h2><a href="https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/">1404. Number of Steps to Reduce a Number in Binary Representation to One</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Given the binary representation of an integer as a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">s</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the number of steps to reduce it to </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> under the following rules</em>:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">
	<p style="border-color: rgb(91, 119, 134) !important;">If the current number is even, you have to divide it by <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">2</code>.</p>
	</li>
	<li style="border-color: rgb(91, 119, 134) !important;">
	<p style="border-color: rgb(91, 119, 134) !important;">If the current number is odd, you have to add <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1</code> to it.</p>
	</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">It is guaranteed that you can always reach one for all test cases.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "1101"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 6
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> "1101" corressponds to number 13 in their decimal representation.
Step 1) 13 is odd, add 1 and obtain 14.&nbsp;
Step 2) 14 is even, divide by 2 and obtain 7.
Step 3) 7 is odd, add 1 and obtain 8.
Step 4) 8 is even, divide by 2 and obtain 4.&nbsp; 
Step 5) 4 is even, divide by 2 and obtain 2.&nbsp;
Step 6) 2 is even, divide by 2 and obtain 1.&nbsp; 
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "10"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> "10" corressponds to number 2 in their decimal representation.
Step 1) 2 is even, divide by 2 and obtain 1.&nbsp; 
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> s = "1"
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 0
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">1 &lt;= s.length&nbsp;&lt;= 500</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">s</code> consists of characters '0' or '1'</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 199, 206) !important; border-color: rgb(84, 110, 122) !important;">s[0] == '1'</code></li>
</ul>
</div>