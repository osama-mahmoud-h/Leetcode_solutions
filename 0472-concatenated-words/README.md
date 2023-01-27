<h2><a href="https://leetcode.com/problems/concatenated-words/">472. Concatenated Words</a></h2><h3>Hard</h3><hr><div><p>Given an array of strings <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">words</code> (<strong>without duplicates</strong>), return <em style="color: rgb(234, 238, 241) !important;">all the <strong>concatenated words</strong> in the given list of</em> <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">words</code>.</p>

<p>A <strong>concatenated word</strong> is defined as a string that is comprised entirely of at least two shorter words in the given array.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;"><strong>Input:</strong> words = ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"]
<strong>Output:</strong> ["catsdogcats","dogcatsdog","ratcatdogcat"]
<strong>Explanation:</strong> "catsdogcats" can be concatenated by "cats", "dog" and "cats"; 
"dogcatsdog" can be concatenated by "dog", "cats" and "dog"; 
"ratcatdogcat" can be concatenated by "rat", "cat", "dog" and "cat".</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;"><strong>Input:</strong> words = ["cat","dog","catdog"]
<strong>Output:</strong> ["catdog"]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">1 &lt;= words.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">1 &lt;= words[i].length &lt;= 30</code></li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">words[i]</code> consists of only lowercase English letters.</li>
	<li>All the strings of <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">words</code> are <strong>unique</strong>.</li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">1 &lt;= sum(words[i].length) &lt;= 10<sup>5</sup></code></li>
</ul>
</div>