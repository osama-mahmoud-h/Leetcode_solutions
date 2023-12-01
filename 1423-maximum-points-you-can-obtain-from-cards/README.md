<h2><a href="https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/">1423. Maximum Points You Can Obtain from Cards</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">There are several cards <strong style="border-color: rgb(91, 119, 134) !important;">arranged in a row</strong>, and each card has an associated number of points. The points are given in the integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">cardPoints</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">In one step, you can take one card from the beginning or from the end of the row. You have to take exactly <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code> cards.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Your score is the sum of the points of the cards you have taken.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Given the integer array <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">cardPoints</code> and the integer <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">k</code>, return the <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">maximum score</em> you can obtain.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> cardPoints = [1,2,3,4,5,6,1], k = 3
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 12
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> cardPoints = [2,2,2], k = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 4
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> Regardless of which two cards you take, your score will always be 4.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> cardPoints = [9,7,7,9,7,7,9], k = 7
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 55
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> You have to take all the cards. Your score is the sum of points of all cards.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= cardPoints.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">5</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= cardPoints[i] &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= k &lt;= cardPoints.length</code></li>
</ul>
</div>