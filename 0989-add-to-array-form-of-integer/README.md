<h2><a href="https://leetcode.com/problems/add-to-array-form-of-integer/">989. Add to Array-Form of Integer</a></h2><h3>Easy</h3><hr><div><p>The <strong>array-form</strong> of an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">num</code> is an array representing its digits in left to right order.</p>

<ul>
	<li>For example, for <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">num = 1321</code>, the array form is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">[1,3,2,1]</code>.</li>
</ul>

<p>Given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">num</code>, the <strong>array-form</strong> of an integer, and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">k</code>, return <em style="color: rgb(234, 238, 241) !important;">the <strong>array-form</strong> of the integer</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">num + k</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> num = [1,2,0,0], k = 34
<strong>Output:</strong> [1,2,3,4]
<strong>Explanation:</strong> 1200 + 34 = 1234
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> num = [2,7,4], k = 181
<strong>Output:</strong> [4,5,5]
<strong>Explanation:</strong> 274 + 181 = 455
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> num = [2,1,5], k = 806
<strong>Output:</strong> [1,0,2,1]
<strong>Explanation:</strong> 215 + 806 = 1021
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= num.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= num[i] &lt;= 9</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">num</code> does not contain any leading zeros except for the zero itself.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= k &lt;= 10<sup>4</sup></code></li>
</ul>
</div>