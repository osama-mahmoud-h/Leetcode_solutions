<h2><a href="https://leetcode.com/problems/h-index/">274. H-Index</a></h2><h3>Medium</h3><hr><div><p>Given an array of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">citations</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">citations[i]</code> is the number of citations a researcher received for their <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> paper, return compute the researcher's <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code><strong>-index</strong>.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/H-index" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">definition of h-index on Wikipedia</a>: A scientist has an index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code> if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code> of their <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> papers have at least <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code> citations each, and the other <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n − h</code> papers have no more than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code> citations each.</p>

<p>If there are several possible values for <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code>, the maximum one is taken as the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">h</code><strong>-index</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> citations = [3,0,6,1,5]
<strong>Output:</strong> 3
<strong>Explanation:</strong> [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> citations = [1,3,1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == citations.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 5000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= citations[i] &lt;= 1000</code></li>
</ul>
</div>