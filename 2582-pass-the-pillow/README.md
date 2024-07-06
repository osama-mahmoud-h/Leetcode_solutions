<h2><a href="https://leetcode.com/problems/pass-the-pillow/">2582. Pass the Pillow</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n</code> people standing in a line labeled from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n</code>. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.</p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">For example, once the pillow reaches the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n<sup style="border-color: rgb(92, 120, 133) !important;">th</sup></code> person they pass it to the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n - 1<sup style="border-color: rgb(92, 120, 133) !important;">th</sup></code> person, then to the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n - 2<sup style="border-color: rgb(92, 120, 133) !important;">th</sup></code> person and so on.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">Given the two positive integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">time</code>, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">the index of the person holding the pillow after </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">time</code><em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;"> seconds</em>.</p>
<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> n = 4, time = 5
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 2
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> People pass the pillow in the following way: 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 3 -&gt; 2.
After five seconds, the 2<sup style="border-color: rgb(91, 119, 134) !important;">nd</sup> person is holding the pillow.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> n = 3, time = 2
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 3
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> People pass the pillow in the following way: 1 -&gt; 2 -&gt; 3.
After two seconds, the 3<sup style="border-color: rgb(91, 119, 134) !important;">r</sup><sup style="border-color: rgb(91, 119, 134) !important;">d</sup> person is holding the pillow.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">2 &lt;= n &lt;= 1000</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= time &lt;= 1000</code></li>
</ul>
</div>