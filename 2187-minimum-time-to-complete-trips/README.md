<h2><a href="https://leetcode.com/problems/minimum-time-to-complete-trips/">2187. Minimum Time to Complete Trips</a></h2><h3>Medium</h3><hr><div><p>You are given an array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">time</code> where <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">time[i]</code> denotes the time taken by the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i<sup>th</sup></code> bus to complete <strong>one trip</strong>.</p>

<p>Each bus can make multiple trips <strong>successively</strong>; that is, the next trip can start <strong>immediately after</strong> completing the current trip. Also, each bus operates <strong>independently</strong>; that is, the trips of one bus do not influence the trips of any other bus.</p>

<p>You are also given an integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">totalTrips</code>, which denotes the number of trips all buses should make <strong>in total</strong>. Return <em style="color: rgb(234, 238, 241) !important;">the <strong>minimum time</strong> required for all buses to complete <strong>at least</strong> </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">totalTrips</code><em style="color: rgb(234, 238, 241) !important;"> trips</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> time = [1,2,3], totalTrips = 5
<strong>Output:</strong> 3
<strong>Explanation:</strong>
- At time t = 1, the number of trips completed by each bus are [1,0,0]. 
  The total number of trips completed is 1 + 0 + 0 = 1.
- At time t = 2, the number of trips completed by each bus are [2,1,0]. 
  The total number of trips completed is 2 + 1 + 0 = 3.
- At time t = 3, the number of trips completed by each bus are [3,1,1]. 
  The total number of trips completed is 3 + 1 + 1 = 5.
So the minimum time needed for all buses to complete at least 5 trips is 3.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> time = [2], totalTrips = 1
<strong>Output:</strong> 2
<strong>Explanation:</strong>
There is only one bus, and it will complete its first trip at t = 2.
So the minimum time needed to complete 1 trip is 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= time.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= time[i], totalTrips &lt;= 10<sup>7</sup></code></li>
</ul>
</div>