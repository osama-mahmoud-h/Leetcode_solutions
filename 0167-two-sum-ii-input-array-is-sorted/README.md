<h2><a href="https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/">167. Two Sum II - Input Array Is Sorted</a></h2><h3>Medium</h3><hr><div><p>Given a <strong>1-indexed</strong> array of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">numbers</code> that is already <strong><em style="color: rgb(234, 238, 241) !important;">sorted in non-decreasing order</em></strong>, find two numbers such that they add up to a specific <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">target</code> number. Let these two numbers be <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">numbers[index<sub>1</sub>]</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">numbers[index<sub>2</sub>]</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= index<sub>1</sub> &lt; index<sub>2</sub> &lt;= numbers.length</code>.</p>

<p>Return<em style="color: rgb(234, 238, 241) !important;"> the indices of the two numbers, </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">index<sub>1</sub></code><em style="color: rgb(234, 238, 241) !important;"> and </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">index<sub>2</sub></code><em style="color: rgb(234, 238, 241) !important;">, <strong>added by one</strong> as an integer array </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[index<sub>1</sub>, index<sub>2</sub>]</code><em style="color: rgb(234, 238, 241) !important;"> of length 2.</em></p>

<p>The tests are generated such that there is <strong>exactly one solution</strong>. You <strong>may not</strong> use the same element twice.</p>

<p>Your solution must use only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> numbers = [<u>2</u>,<u>7</u>,11,15], target = 9
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> The sum of 2 and 7 is 9. Therefore, index<sub>1</sub> = 1, index<sub>2</sub> = 2. We return [1, 2].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> numbers = [<u>2</u>,3,<u>4</u>], target = 6
<strong>Output:</strong> [1,3]
<strong>Explanation:</strong> The sum of 2 and 4 is 6. Therefore index<sub>1</sub> = 1, index<sub>2</sub> = 3. We return [1, 3].
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> numbers = [<u>-1</u>,<u>0</u>], target = -1
<strong>Output:</strong> [1,2]
<strong>Explanation:</strong> The sum of -1 and 0 is -1. Therefore index<sub>1</sub> = 1, index<sub>2</sub> = 2. We return [1, 2].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= numbers.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1000 &lt;= numbers[i] &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">numbers</code> is sorted in <strong>non-decreasing order</strong>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1000 &lt;= target &lt;= 1000</code></li>
	<li>The tests are generated such that there is <strong>exactly one solution</strong>.</li>
</ul>
</div>