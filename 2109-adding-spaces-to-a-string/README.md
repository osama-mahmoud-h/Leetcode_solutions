<h2><a href="https://leetcode.com/problems/adding-spaces-to-a-string/">2109. Adding Spaces to a String</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> and a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">spaces</code> that describes the indices in the original string where spaces will be added. Each space should be inserted <strong style="border-color: rgb(91, 119, 134) !important;">before</strong> the character at the given index.</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">For example, given <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s = "EnjoyYourCoffee"</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">spaces = [5, 9]</code>, we place spaces before <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'Y'</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'C'</code>, which are at indices <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">5</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">9</code> respectively. Thus, we obtain <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"Enjoy <strong style="border-color: rgb(92, 120, 133) !important;"><u style="border-color: rgb(92, 120, 133) !important;">Y</u></strong>our <u style="border-color: rgb(92, 120, 133) !important;"><strong style="border-color: rgb(92, 120, 133) !important;">C</strong></u>offee"</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Return<strong style="border-color: rgb(92, 122, 137) !important;"> </strong><em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the modified string <strong style="border-color: rgb(91, 119, 134) !important;">after</strong> the spaces have been added.</em></p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> s = "LeetcodeHelpsMeLearn", spaces = [8,13,15]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "Leetcode Helps Me Learn"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> 
The indices 8, 13, and 15 correspond to the underlined characters in "Leetcode<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">H</strong></u>elps<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">M</strong></u>e<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">L</strong></u>earn".
We then place spaces before those characters.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> s = "icodeinpython", spaces = [1,5,7,9]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "i code in py thon"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong>
The indices 1, 5, 7, and 9 correspond to the underlined characters in "i<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">c</strong></u>ode<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">i</strong></u>n<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">p</strong></u>y<u style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">t</strong></u>hon".
We then place spaces before those characters.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> s = "spacing", spaces = [0,1,2,3,4,5,6]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> " s p a c i n g"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong>
We are also able to place spaces before the first character of the string.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= s.length &lt;= 3 * 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s</code> consists only of lowercase and uppercase English letters.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= spaces.length &lt;= 3 * 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0 &lt;= spaces[i] &lt;= s.length - 1</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">All the values of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">spaces</code> are <strong style="border-color: rgb(91, 119, 134) !important;">strictly increasing</strong>.</li>
</ul>
</div>