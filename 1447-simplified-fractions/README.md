<h2><a href="https://leetcode.com/problems/simplified-fractions/">1447. Simplified Fractions</a></h2><h3>Medium</h3><hr><div><p>Given an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important;">a list of all <strong>simplified</strong> fractions between </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code><em style="color: rgb(234, 238, 241) !important;"> and </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code><em style="color: rgb(234, 238, 241) !important;"> (exclusive) such that the denominator is less-than-or-equal-to </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> n = 2
<strong>Output:</strong> ["1/2"]
<strong>Explanation:</strong> "1/2" is the only unique fraction with a denominator less-than-or-equal-to 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> n = 3
<strong>Output:</strong> ["1/2","1/3","2/3"]
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> n = 4
<strong>Output:</strong> ["1/2","1/3","1/4","2/3","3/4"]
<strong>Explanation:</strong> "2/4" is not a simplified fraction because it can be simplified to "1/2".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 100</code></li>
</ul>
</div>