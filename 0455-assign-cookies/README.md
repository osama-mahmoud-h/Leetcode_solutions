<h2><a href="https://leetcode.com/problems/assign-cookies/">455. Assign Cookies</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Each child <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code> has a greed factor <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">g[i]</code>, which is the minimum size of a cookie that the child will be content with; and each cookie <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">j</code> has a size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s[j]</code>. If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">s[j] &gt;= g[i]</code>, we can assign the cookie <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">j</code> to the child <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code>, and the child <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">i</code> will be content. Your goal is to maximize the number of your content children and output the maximum number.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> g = [1,2,3], s = [1,1]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 1
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> g = [1,2], s = [1,2,3]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> 2
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2. 
You have 3 cookies and their sizes are big enough to gratify all of the children, 
You need to output 2.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= g.length &lt;= 3 * 10<sup style="border-color: rgb(84, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">0 &lt;= s.length &lt;= 3 * 10<sup style="border-color: rgb(84, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= g[i], s[j] &lt;= 2<sup style="border-color: rgb(84, 109, 121) !important;">31</sup> - 1</code></li>
</ul>
</div>