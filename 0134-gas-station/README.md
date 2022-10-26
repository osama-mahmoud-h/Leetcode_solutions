<h2><a href="https://leetcode.com/problems/gas-station/">134. Gas Station</a></h2><h3>Medium</h3><hr><div><p>There are <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> gas stations along a circular route, where the amount of gas at the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> station is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">gas[i]</code>.</p>

<p>You have a car with an unlimited gas tank and it costs <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">cost[i]</code> of gas to travel from the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> station to its next <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">(i + 1)<sup>th</sup></code> station. You begin the journey with an empty tank at one of the gas stations.</p>

<p>Given two integer arrays <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">gas</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">cost</code>, return <em style="color: rgb(234, 238, 241) !important;">the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return</em> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code>. If there exists a solution, it is <strong>guaranteed</strong> to be <strong>unique</strong></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> gas = [1,2,3,4,5], cost = [3,4,5,1,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong>
Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 4. Your tank = 4 - 1 + 5 = 8
Travel to station 0. Your tank = 8 - 2 + 1 = 7
Travel to station 1. Your tank = 7 - 3 + 2 = 6
Travel to station 2. Your tank = 6 - 4 + 3 = 5
Travel to station 3. The cost is 5. Your gas is just enough to travel back to station 3.
Therefore, return 3 as the starting index.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> gas = [2,3,4], cost = [3,4,3]
<strong>Output:</strong> -1
<strong>Explanation:</strong>
You can't start at station 0 or 1, as there is not enough gas to travel to the next station.
Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
Travel to station 0. Your tank = 4 - 3 + 2 = 3
Travel to station 1. Your tank = 3 - 3 + 3 = 3
You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.
Therefore, you can't travel around the circuit once no matter where you start.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n == gas.length == cost.length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= gas[i], cost[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>