<h2><a href="https://leetcode.com/problems/peak-index-in-a-mountain-array/">852. Peak Index in a Mountain Array</a></h2><h3>Medium</h3><hr><div><p>An array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr</code> a <strong>mountain</strong> if the following properties hold:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr.length &gt;= 3</code></li>
	<li>There exists some <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt; i &lt; arr.length - 1</code> such that:
	<ul>
		<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i] </code></li>
		<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p>Given a mountain array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr</code>, return the index <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code>.</p>

<p>You must solve it in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(log(arr.length))</code> time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = [0,1,0]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = [0,2,1,0]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = [0,10,5,2]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">3 &lt;= arr.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= arr[i] &lt;= 10<sup>6</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">arr</code> is <strong>guaranteed</strong> to be a mountain array.</li>
</ul>
</div>