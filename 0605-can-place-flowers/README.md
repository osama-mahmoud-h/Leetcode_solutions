<h2><a href="https://leetcode.com/problems/can-place-flowers/">605. Can Place Flowers</a></h2><h3>Easy</h3><hr><div><p>You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in <strong>adjacent</strong> plots.</p>

<p>Given an integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">flowerbed</code> containing <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code>'s and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>'s, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> means empty and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> means not empty, and an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code>, return <em style="color: rgb(234, 238, 241) !important;">if</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> new flowers can be planted in the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">flowerbed</code> without violating the no-adjacent-flowers rule.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> flowerbed = [1,0,0,0,1], n = 1
<strong>Output:</strong> true
</pre><p><strong class="example">Example 2:</strong></p>
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> flowerbed = [1,0,0,0,1], n = 2
<strong>Output:</strong> false
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= flowerbed.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">flowerbed[i]</code> is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code>.</li>
	<li>There are no two adjacent flowers in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">flowerbed</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= n &lt;= flowerbed.length</code></li>
</ul>
</div>