<h2><a href="https://leetcode.com/problems/image-smoother/">661. Image Smoother</a></h2><h3>Easy</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">An <strong style="border-color: rgb(91, 119, 134) !important;">image smoother</strong> is a filter of the size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">3 x 3</code> that can be applied to each cell of an image by rounding down the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother). If one or more of the surrounding cells of a cell is not present, we do not consider it in the average (i.e., the average of the four cells in the red smoother).</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/smoother-grid.jpg" style="width: 493px; height: 493px; filter: saturate(0.9) brightness(0.8);">
<p style="border-color: rgb(91, 119, 134) !important;">Given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">m x n</code> integer matrix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">img</code> representing the grayscale of an image, return <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">the image after applying the smoother on each cell of it</em>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/smooth-grid.jpg" style="width: 613px; height: 253px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> img = [[1,1,1],[1,0,1],[1,1,1]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[0,0,0],[0,0,0],[0,0,0]]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
For the points (0,0), (0,2), (2,0), (2,2): floor(3/4) = floor(0.75) = 0
For the points (0,1), (1,0), (1,2), (2,1): floor(5/6) = floor(0.83333333) = 0
For the point (1,1): floor(8/9) = floor(0.88888889) = 0
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/smooth2-grid.jpg" style="width: 613px; height: 253px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> img = [[100,200,100],[200,50,200],[100,200,100]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> [[137,141,137],[141,138,141],[137,141,137]]
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong>
For the points (0,0), (0,2), (2,0), (2,2): floor((100+200+200+50)/4) = floor(137.5) = 137
For the points (0,1), (1,0), (1,2), (2,1): floor((200+200+50+200+100+100)/6) = floor(141.666667) = 141
For the point (1,1): floor((50+200+200+200+200+100+100+100+100)/9) = floor(138.888889) = 138
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">m == img.length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">n == img[i].length</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">1 &lt;= m, n &lt;= 200</code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important; border-color: rgb(84, 109, 121) !important;">0 &lt;= img[i][j] &lt;= 255</code></li>
</ul>
</div>