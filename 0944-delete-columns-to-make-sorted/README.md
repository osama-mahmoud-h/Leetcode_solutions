<h2><a href="https://leetcode.com/problems/delete-columns-to-make-sorted/">944. Delete Columns to Make Sorted</a></h2><h3>Easy</h3><hr><div><p>You are given an array of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">strs</code>, all of the same length.</p>

<p>The strings can be arranged such that there is one on each line, making a grid. For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">strs = ["abc", "bce", "cae"]</code> can be arranged as:</p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;">abc
bce
cae
</pre>

<p>You want to <strong>delete</strong> the columns that are <strong>not sorted lexicographically</strong>. In the above example (0-indexed), columns 0 (<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'a'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'b'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'c'</code>) and 2 (<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'c'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'e'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'e'</code>) are sorted while column 1 (<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'b'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'c'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'a'</code>) is not, so you would delete column 1.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the number of columns that you will delete</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> strs = ["cba","daf","ghi"]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The grid looks as follows:
  cba
  daf
  ghi
Columns 0 and 2 are sorted, but column 1 is not, so you only need to delete 1 column.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> strs = ["a","b"]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The grid looks as follows:
  a
  b
Column 0 is the only column and is sorted, so you will not delete any columns.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> strs = ["zyx","wvu","tsr"]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The grid looks as follows:
  zyx
  wvu
  tsr
All 3 columns are not sorted, so you will delete all 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == strs.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= strs[i].length &lt;= 1000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">strs[i]</code> consists of lowercase English letters.</li>
</ul>
</div>