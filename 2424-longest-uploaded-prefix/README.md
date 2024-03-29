<h2><a href="https://leetcode.com/problems/longest-uploaded-prefix/">2424. Longest Uploaded Prefix</a></h2><h3>Medium</h3><hr><div><p>You are given a stream of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> videos, each represented by a <strong>distinct</strong> number from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> that you need to "upload" to a server. You need to implement a data structure that calculates the length of the <strong>longest uploaded prefix</strong> at various points in the upload process.</p>

<p>We consider <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> to be an uploaded prefix if all videos in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> (<strong>inclusive</strong>) have been uploaded to the server. The longest uploaded prefix is the <strong>maximum </strong>value of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">i</code> that satisfies this definition.<br>
<br>
Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">LUPrefix </code>class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">LUPrefix(int n)</code> Initializes the object for a stream of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> videos.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void upload(int video)</code> Uploads <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">video</code> to the server.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">int longest()</code> Returns the length of the <strong>longest uploaded prefix</strong> defined above.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input</strong>
["LUPrefix", "upload", "longest", "upload", "longest", "upload", "longest"]
[[4], [3], [], [1], [], [2], []]
<strong>Output</strong>
[null, null, 0, null, 1, null, 3]

<strong>Explanation</strong>
LUPrefix server = new LUPrefix(4);   // Initialize a stream of 4 videos.
server.upload(3);                    // Upload video 3.
server.longest();                    // Since video 1 has not been uploaded yet, there is no prefix.
                                     // So, we return 0.
server.upload(1);                    // Upload video 1.
server.longest();                    // The prefix [1] is the longest uploaded prefix, so we return 1.
server.upload(2);                    // Upload video 2.
server.longest();                    // The prefix [1,2,3] is the longest uploaded prefix, so we return 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= video &lt;= 10<sup>5</sup></code></li>
	<li>All values of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">video</code> are <strong>distinct</strong>.</li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * 10<sup>5</sup></code> calls <strong>in total</strong> will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">upload</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">longest</code>.</li>
	<li>At least one call will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">longest</code>.</li>
</ul>
</div>