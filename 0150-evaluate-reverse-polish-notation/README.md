<h2><a href="https://leetcode.com/problems/evaluate-reverse-polish-notation/">150. Evaluate Reverse Polish Notation</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an array of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">tokens</code> that represents an arithmetic expression in a <a href="http://en.wikipedia.org/wiki/Reverse_Polish_notation" target="_blank" style="transition-property: -border-bottom-color !important; --link-color: rgb(161, 178, 190) !important; --link-color-hover: rgb(180, 193, 203) !important; --link-color-active: rgb(158, 175, 188) !important; --visited-color: rgb(160, 117, 234) !important; --visited-color-hover: rgb(179, 144, 238) !important; --visited-color-active: rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">Reverse Polish Notation</a>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Evaluate the expression. Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">an integer that represents the value of the expression</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Note</strong> that:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The valid operators are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'+'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'-'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'*'</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">'/'</code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">Each operand may be an integer or another expression.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The division between two integers always <strong style="border-color: rgb(91, 119, 134) !important;">truncates toward zero</strong>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">There will not be any division by zero.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The input represents a valid arithmetic expression in a reverse polish notation.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">The answer and all the intermediate calculations can be represented in a <strong style="border-color: rgb(91, 119, 134) !important;">32-bit</strong> integer.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> tokens = ["2","1","+","3","*"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 9
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> ((2 + 1) * 3) = 9
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> tokens = ["4","13","5","/","+"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 6
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> (4 + (13 / 5)) = 6
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 22
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= tokens.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">tokens[i]</code> is either an operator: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"+"</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"-"</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"*"</code>, or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"/"</code>, or an integer in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[-200, 200]</code>.</li>
</ul>
</div>