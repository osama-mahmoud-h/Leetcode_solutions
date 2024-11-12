<h2><a href="https://leetcode.com/problems/most-beautiful-item-for-each-query/">2070. Most Beautiful Item for Each Query</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a 2D integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">items</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">items[i] = [price<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, beauty<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>]</code> denotes the <strong style="border-color: rgb(91, 119, 134) !important;">price</strong> and <strong style="border-color: rgb(91, 119, 134) !important;">beauty</strong> of an item respectively.</p>

<p style="border-color: rgb(91, 119, 134) !important;">You are also given a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">queries</code>. For each <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">queries[j]</code>, you want to determine the <strong style="border-color: rgb(91, 119, 134) !important;">maximum beauty</strong> of an item whose <strong style="border-color: rgb(91, 119, 134) !important;">price</strong> is <strong style="border-color: rgb(91, 119, 134) !important;">less than or equal</strong> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">queries[j]</code>. If no such item exists, then the answer to this query is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an array </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">answer</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> of the same length as </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">queries</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> where </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">answer[j]</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> is the answer to the </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">j<sup style="border-color: rgb(83, 109, 121) !important;">th</sup></code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;"> query</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> items = [[1,2],[3,2],[2,4],[5,6],[3,5]], queries = [1,2,3,4,5,6]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [2,4,5,5,6,6]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
- For queries[0]=1, [1,2] is the only item which has price &lt;= 1. Hence, the answer for this query is 2.
- For queries[1]=2, the items which can be considered are [1,2] and [2,4]. 
  The maximum beauty among them is 4.
- For queries[2]=3 and queries[3]=4, the items which can be considered are [1,2], [3,2], [2,4], and [3,5].
  The maximum beauty among them is 5.
- For queries[4]=5 and queries[5]=6, all items can be considered.
  Hence, the answer for them is the maximum beauty of all items, i.e., 6.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> items = [[1,2],[1,2],[1,3],[1,4]], queries = [1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [4]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> 
The price of every item is equal to 1, so we choose the item with the maximum beauty 4. 
Note that multiple items can have the same price and/or beauty.  
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> items = [[10,1000]], queries = [5]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [0]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
No item has a price less than or equal to 5, so no item can be chosen.
Hence, the answer to the query is 0.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= items.length, queries.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">items[i].length == 2</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= price<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, beauty<sub style="border-color: rgb(83, 109, 121) !important;">i</sub>, queries[j] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">9</sup></code></li>
</ul>
</div>