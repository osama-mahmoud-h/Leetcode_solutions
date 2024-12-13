<h2><a href="https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/">2593. Find Score of an Array After Marking All Elements</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> consisting of positive integers.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Starting with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">score = 0</code>, apply the following algorithm:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Add the value of the chosen integer to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">score</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Mark <strong style="border-color: rgb(91, 119, 134) !important;">the chosen element and its two adjacent elements if they exist</strong>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Repeat until all the array elements are marked.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the score you get after applying the above algorithm</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [2,1,3,4,5,2]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 7
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> We mark the elements as follows:
- 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,4,5,2].
- 2 is the smallest unmarked element, so we mark it and its left adjacent element: [<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,4,<u style="border-color: rgb(83, 109, 122) !important;">5</u>,<u style="border-color: rgb(83, 109, 122) !important;">2</u>].
- 4 is the only remaining unmarked element, so we mark it: [<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">4</u>,<u style="border-color: rgb(83, 109, 122) !important;">5</u>,<u style="border-color: rgb(83, 109, 122) !important;">2</u>].
Our score is 1 + 2 + 4 = 7.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [2,3,5,1,3,2]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 5
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> We mark the elements as follows:
- 1 is the smallest unmarked element, so we mark it and its two adjacent elements: [2,3,<u style="border-color: rgb(83, 109, 122) !important;">5</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,2].
- 2 is the smallest unmarked element, since there are two of them, we choose the left-most one, so we mark the one at index 0 and its right adjacent element: [<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">5</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,2].
- 2 is the only remaining unmarked element, so we mark it: [<u style="border-color: rgb(83, 109, 122) !important;">2</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">5</u>,<u style="border-color: rgb(83, 109, 122) !important;">1</u>,<u style="border-color: rgb(83, 109, 122) !important;">3</u>,<u style="border-color: rgb(83, 109, 122) !important;">2</u>].
Our score is 1 + 2 + 2 = 5.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= nums[i] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">6</sup></code></li>
</ul>
</div>