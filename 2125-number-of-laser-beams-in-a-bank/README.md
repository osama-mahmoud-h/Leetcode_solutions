<h2><a href="https://leetcode.com/problems/number-of-laser-beams-in-a-bank/">2125. Number of Laser Beams in a Bank</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Anti-theft security devices are activated inside a bank. You are given a <strong style="border-color: rgb(91, 119, 134) !important;">0-indexed</strong> binary string array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">bank</code> representing the floor plan of the bank, which is an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">m x n</code> 2D matrix. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">bank[i]</code> represents the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i<sup style="border-color: rgb(84, 109, 121) !important;">th</sup></code> row, consisting of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'0'</code>s and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'1'</code>s. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'0'</code> means the cell is empty, while<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'1'</code> means the cell has a security device.</p>

<p style="border-color: rgb(91, 119, 134) !important;">There is <strong style="border-color: rgb(91, 119, 134) !important;">one</strong> laser beam between any <strong style="border-color: rgb(91, 119, 134) !important;">two</strong> security devices <strong style="border-color: rgb(91, 119, 134) !important;">if both</strong> conditions are met:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">The two devices are located on two <strong style="border-color: rgb(91, 119, 134) !important;">different rows</strong>: <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">r<sub style="border-color: rgb(84, 109, 121) !important;">1</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">r<sub style="border-color: rgb(84, 109, 121) !important;">2</sub></code>, where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">r<sub style="border-color: rgb(84, 109, 121) !important;">1</sub> &lt; r<sub style="border-color: rgb(84, 109, 121) !important;">2</sub></code>.</li>
	<li style="border-color: rgb(91, 119, 134) !important;">For <strong style="border-color: rgb(91, 119, 134) !important;">each</strong> row <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">r<sub style="border-color: rgb(84, 109, 121) !important;">1</sub> &lt; i &lt; r<sub style="border-color: rgb(84, 109, 121) !important;">2</sub></code>, there are <strong style="border-color: rgb(91, 119, 134) !important;">no security devices</strong> in the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i<sup style="border-color: rgb(84, 109, 121) !important;">th</sup></code> row.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Laser beams are independent, i.e., one beam does not interfere nor join with another.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the total number of laser beams in the bank</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/24/laser1.jpg" style="width: 400px; height: 368px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> bank = ["011001","000000","010100","001000"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 8
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Between each of the following device pairs, there is one beam. In total, there are 8 beams:
 * bank[0][1] -- bank[2][1]
 * bank[0][1] -- bank[2][3]
 * bank[0][2] -- bank[2][1]
 * bank[0][2] -- bank[2][3]
 * bank[0][5] -- bank[2][1]
 * bank[0][5] -- bank[2][3]
 * bank[2][1] -- bank[3][2]
 * bank[2][3] -- bank[3][2]
Note that there is no beam between any device on the 0<sup style="border-color: rgb(83, 109, 122) !important;">th</sup> row with any on the 3<sup style="border-color: rgb(83, 109, 122) !important;">rd</sup> row.
This is because the 2<sup style="border-color: rgb(83, 109, 122) !important;">nd</sup> row contains security devices, which breaks the second condition.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/24/laser2.jpg" style="width: 244px; height: 325px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> bank = ["000","111","000"]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 0
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There does not exist two devices located on two different rows.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">m == bank.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">n == bank[i].length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= m, n &lt;= 500</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">bank[i][j]</code> is either <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'0'</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'1'</code>.</li>
</ul>
</div>