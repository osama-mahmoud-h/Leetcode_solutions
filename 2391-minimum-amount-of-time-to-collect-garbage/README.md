<h2><a href="https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/">2391. Minimum Amount of Time to Collect Garbage</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given a <strong style="border-color: rgb(92, 122, 137) !important;">0-indexed</strong> array of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">garbage</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">garbage[i]</code> represents the assortment of garbage at the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i<sup style="border-color: rgb(92, 120, 133) !important;">th</sup></code> house. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">garbage[i]</code> consists only of the characters <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'M'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'P'</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'G'</code> representing one unit of metal, paper and glass garbage respectively. Picking up <strong style="border-color: rgb(92, 122, 137) !important;">one</strong> unit of any type of garbage takes <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1</code> minute.</p>

<p style="border-color: rgb(92, 122, 137) !important;">You are also given a <strong style="border-color: rgb(92, 122, 137) !important;">0-indexed</strong> integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">travel</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">travel[i]</code> is the number of minutes needed to go from house <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code> to house <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i + 1</code>.</p>

<p style="border-color: rgb(92, 122, 137) !important;">There are three garbage trucks in the city, each responsible for picking up one type of garbage. Each garbage truck starts at house <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0</code> and must visit each house <strong style="border-color: rgb(92, 122, 137) !important;">in order</strong>; however, they do <strong style="border-color: rgb(92, 122, 137) !important;">not</strong> need to visit every house.</p>

<p style="border-color: rgb(92, 122, 137) !important;">Only <strong style="border-color: rgb(92, 122, 137) !important;">one</strong> garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks <strong style="border-color: rgb(92, 122, 137) !important;">cannot</strong> do anything.</p>

<p style="border-color: rgb(92, 122, 137) !important;">Return<em style="color: rgb(234, 238, 241) !important; border-color: rgb(92, 122, 137) !important;"> the <strong style="border-color: rgb(92, 122, 137) !important;">minimum</strong> number of minutes needed to pick up all the garbage.</em></p>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> garbage = ["G","P","GP","GG"], travel = [2,4,3]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 21
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong>
The paper garbage truck:
1. Travels from house 0 to house 1
2. Collects the paper garbage at house 1
3. Travels from house 1 to house 2
4. Collects the paper garbage at house 2
Altogether, it takes 8 minutes to pick up all the paper garbage.
The glass garbage truck:
1. Collects the glass garbage at house 0
2. Travels from house 0 to house 1
3. Travels from house 1 to house 2
4. Collects the glass garbage at house 2
5. Travels from house 2 to house 3
6. Collects the glass garbage at house 3
Altogether, it takes 13 minutes to pick up all the glass garbage.
Since there is no metal garbage, we do not need to consider the metal garbage truck.
Therefore, it takes a total of 8 + 13 = 21 minutes to collect all the garbage.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;"><strong class="example" style="border-color: rgb(92, 122, 137) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Input:</strong> garbage = ["MMM","PGM","GP"], travel = [3,10]
<strong style="border-color: rgb(91, 119, 134) !important;">Output:</strong> 37
<strong style="border-color: rgb(91, 119, 134) !important;">Explanation:</strong>
The metal garbage truck takes 7 minutes to pick up all the metal garbage.
The paper garbage truck takes 15 minutes to pick up all the paper garbage.
The glass garbage truck takes 15 minutes to pick up all the glass garbage.
It takes a total of 7 + 15 + 15 = 37 minutes to collect all the garbage.
</pre>

<p style="border-color: rgb(92, 122, 137) !important;">&nbsp;</p>
<p style="border-color: rgb(92, 122, 137) !important;"><strong style="border-color: rgb(92, 122, 137) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(92, 122, 137) !important;">
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">2 &lt;= garbage.length &lt;= 10<sup style="border-color: rgb(92, 120, 133) !important;">5</sup></code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">garbage[i]</code> consists of only the letters <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'M'</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'P'</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">'G'</code>.</li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= garbage[i].length &lt;= 10</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">travel.length == garbage.length - 1</code></li>
	<li style="border-color: rgb(92, 122, 137) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= travel[i] &lt;= 100</code></li>
</ul>
</div>