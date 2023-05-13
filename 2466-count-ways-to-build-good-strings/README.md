<h2><a href="https://leetcode.com/problems/count-ways-to-build-good-strings/">2466. Count Ways To Build Good Strings</a></h2><h3>Medium</h3><hr><div><p>Given the integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">zero</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">one</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">low</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">high</code>, we can construct a string by starting with an empty string, and then at each step perform either of the following:</p>

<ul>
	<li>Append the character <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'0'</code> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">zero</code> times.</li>
	<li>Append the character <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">'1'</code> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">one</code> times.</li>
</ul>

<p>This can be performed any number of times.</p>

<p>A <strong>good</strong> string is a string constructed by the above process having a <strong>length</strong> between <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">low</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">high</code> (<strong>inclusive</strong>).</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the number of <strong>different</strong> good strings that can be constructed satisfying these properties.</em> Since the answer can be large, return it <strong>modulo</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> low = 3, high = 3, zero = 1, one = 1
<strong>Output:</strong> 8
<strong>Explanation:</strong> 
One possible valid good string is "011". 
It can be constructed as follows: "" -&gt; "0" -&gt; "01" -&gt; "011". 
All binary strings from "000" to "111" are good strings in this example.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> low = 2, high = 3, zero = 1, one = 2
<strong>Output:</strong> 5
<strong>Explanation:</strong> The good strings are "00", "11", "000", "110", and "011".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= low&nbsp;&lt;= high&nbsp;&lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= zero, one &lt;= low</code></li>
</ul>
</div>