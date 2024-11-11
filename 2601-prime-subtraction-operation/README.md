<h2><a href="https://leetcode.com/problems/prime-subtraction-operation/">2601. Prime Subtraction Operation</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">You are given a <strong style="border-color: rgb(92, 122, 137) !important;">0-indexed</strong> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">nums</code> of length <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n</code>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">You can perform the following operation as many times as you want:</p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">Pick an index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code> that you haven’t picked before, and pick a prime <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">p</code> <strong style="border-color: rgb(92, 122, 137) !important;">strictly less than</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">nums[i]</code>, then subtract <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">p</code> from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">nums[i]</code>.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">true if you can make <code style="background-color: rgb(20, 28, 32) !important; color: rgb(222, 229, 232) !important; border-color: rgb(84, 109, 121) !important;">nums</code> a strictly increasing array using the above operation and false otherwise.</em></p>

<p style="border-color: rgb(92, 122, 137) !important;">A <strong style="border-color: rgb(92, 122, 137) !important;">strictly increasing array</strong> is an array whose each element is strictly greater than its preceding element.</p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [4,9,6,10]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> true
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> In the first operation: Pick i = 0 and p = 3, and then subtract 3 from nums[0], so that nums becomes [1,9,6,10].
In the second operation: i = 1, p = 7, subtract 7 from nums[1], so nums becomes equal to [1,2,6,10].
After the second operation, nums is sorted in strictly increasing order, so the answer is true.</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [6,8,11,12]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> true
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation: </strong>Initially nums is sorted in strictly increasing order, so we don't need to make any operations.</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> nums = [5,8,3]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> false
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> It can be proven that there is no way to perform operations to make nums sorted in strictly increasing order, so the answer is false.</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= nums[i] &lt;= 1000</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;"><font face="monospace" style="border-color: rgb(92, 120, 133) !important;">nums.length == n</font></code></li>
</ul>
</div>