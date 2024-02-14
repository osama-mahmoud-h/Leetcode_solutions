<h2><a href="https://leetcode.com/problems/rearrange-array-elements-by-sign/">2149. Rearrange Array Elements by Sign</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> of <strong style="border-color: rgb(91, 119, 134) !important;">even</strong> length consisting of an <strong style="border-color: rgb(91, 119, 134) !important;">equal</strong> number of positive and negative integers.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You should <strong style="border-color: rgb(91, 119, 134) !important;">rearrange</strong> the elements of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> such that the modified array follows the given conditions:</p>

<ol style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">Every <strong style="border-color: rgb(91, 119, 134) !important;">consecutive pair</strong> of integers have <strong style="border-color: rgb(91, 119, 134) !important;">opposite signs</strong>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">For all integers with the same sign, the <strong style="border-color: rgb(91, 119, 134) !important;">order</strong> in which they were present in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> is <strong style="border-color: rgb(91, 119, 134) !important;">preserved</strong>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The rearranged array begins with a positive integer.</li>
</ol>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the modified array after rearranging the elements to satisfy the aforementioned conditions</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [3,1,-2,-5,2,-4]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [3,-2,1,-5,2,-4]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> nums = [-1,1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [1,-1]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">2 &lt;= nums.length &lt;= 2 * 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums.length</code> is <strong style="border-color: rgb(91, 119, 134) !important;">even</strong></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= |nums[i]| &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">nums</code> consists of <strong style="border-color: rgb(91, 119, 134) !important;">equal</strong> number of positive and negative integers.</li>
</ul>
</div>