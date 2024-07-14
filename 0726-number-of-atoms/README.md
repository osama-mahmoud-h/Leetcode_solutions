<h2><a href="https://leetcode.com/problems/number-of-atoms/">726. Number of Atoms</a></h2><h3>Hard</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(92, 122, 137) !important;">Given a string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">formula</code> representing a chemical formula, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;">the count of each atom</em>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">The atomic element always starts with an uppercase character, then zero or more lowercase letters, representing the name.</p>

<p style="border-color: rgb(92, 122, 137) !important;">One or more digits representing that element's count may follow if the count is greater than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1</code>. If the count is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1</code>, no digits will follow.</p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"H2O"</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"H2O2"</code> are possible, but <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"H1O2"</code> is impossible.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">Two formulas are concatenated together to produce another formula.</p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"H2O2He3Mg4"</code> is also a formula.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">A formula placed in parentheses, and a count (optionally added) is also a formula.</p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;">For example, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"(H2O2)"</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">"(H2O2)3"</code> are formulas.</li>
</ul>

<p style="border-color: rgb(92, 122, 137) !important;">Return the count of all elements as a string in the following form: the first name (in sorted order), followed by its count (if that count is more than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1</code>), followed by the second name (in sorted order), followed by its count (if that count is more than <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1</code>), and so on.</p>

<p style="border-color: rgb(92, 122, 137) !important;">The test cases are generated so that all the values in the output fit in a <strong style="border-color: rgb(92, 122, 137) !important;">32-bit</strong> integer.</p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> formula = "H2O"
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "H2O"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> The count of elements are {'H': 2, 'O': 1}.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> formula = "Mg(OH)2"
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "H2MgO2"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> The count of elements are {'H': 2, 'Mg': 1, 'O': 2}.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> formula = "K4(ON(SO3)2)2"
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> "K4N2O14S4"
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong> The count of elements are {'K': 4, 'N': 2, 'O': 14, 'S': 4}.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= formula.length &lt;= 1000</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">formula</code> consists of English letters, digits, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'('</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">')'</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">formula</code> is always valid.</li>
</ul>
</div>