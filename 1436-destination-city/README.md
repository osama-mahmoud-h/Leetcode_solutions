<h2><a href="https://leetcode.com/problems/destination-city/">1436. Destination City</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given the array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">paths</code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">paths[i] = [cityA<sub style="border-color: rgb(84, 109, 121) !important;">i</sub>, cityB<sub style="border-color: rgb(84, 109, 121) !important;">i</sub>]</code> means there exists a direct path going from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">cityA<sub style="border-color: rgb(84, 109, 121) !important;">i</sub></code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">cityB<sub style="border-color: rgb(84, 109, 121) !important;">i</sub></code>. <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">Return the destination city, that is, the city without any path outgoing to another city.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;">It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "Sao Paulo" 
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Starting at "London" city you will reach "Sao Paulo" city which is the destination city. Your trip consist of: "London" -&gt; "New York" -&gt; "Lima" -&gt; "Sao Paulo".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> paths = [["B","C"],["D","B"],["C","A"]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "A"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> All possible trips are:&nbsp;
"D" -&gt; "B" -&gt; "C" -&gt; "A".&nbsp;
"B" -&gt; "C" -&gt; "A".&nbsp;
"C" -&gt; "A".&nbsp;
"A".&nbsp;
Clearly the destination city is "A".
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> paths = [["A","Z"]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "Z"
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= paths.length &lt;= 100</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">paths[i].length == 2</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= cityA<sub style="border-color: rgb(84, 109, 121) !important;">i</sub>.length, cityB<sub style="border-color: rgb(84, 109, 121) !important;">i</sub>.length &lt;= 10</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">cityA<sub style="border-color: rgb(84, 109, 121) !important;">i</sub> != cityB<sub style="border-color: rgb(84, 109, 121) !important;">i</sub></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">All strings consist of lowercase and uppercase English letters and the space character.</li>
</ul>
</div>