<h2><a href="https://leetcode.com/problems/design-browser-history/">1472. Design Browser History</a></h2><h3>Medium</h3><hr><div><p>You have a <strong>browser</strong> of one tab where you start on the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">homepage</code> and you can visit another <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">url</code>, get back in the history number of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps</code> or move forward in the history number of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps</code>.</p>

<p>Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">BrowserHistory</code> class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">BrowserHistory(string homepage)</code> Initializes the object with the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">homepage</code>&nbsp;of the browser.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void visit(string url)</code>&nbsp;Visits&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">url</code> from the current page. It clears up all the forward history.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">string back(int steps)</code>&nbsp;Move <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps</code> back in history. If you can only return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> steps in the history and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps &gt; x</code>, you will&nbsp;return only <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> steps. Return the current <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">url</code>&nbsp;after moving back in history <strong>at most</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">string forward(int steps)</code>&nbsp;Move <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps</code> forward in history. If you can only forward <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> steps in the history and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps &gt; x</code>, you will&nbsp;forward only&nbsp;<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">x</code> steps. Return the current <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">url</code>&nbsp;after forwarding in history <strong>at most</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">steps</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><b>Input:</b>
["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
<b>Output:</b>
[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]

<b>Explanation:</b>
BrowserHistory browserHistory = new BrowserHistory("leetcode.com");
browserHistory.visit("google.com");       // You are in "leetcode.com". Visit "google.com"
browserHistory.visit("facebook.com");     // You are in "google.com". Visit "facebook.com"
browserHistory.visit("youtube.com");      // You are in "facebook.com". Visit "youtube.com"
browserHistory.back(1);                   // You are in "youtube.com", move back to "facebook.com" return "facebook.com"
browserHistory.back(1);                   // You are in "facebook.com", move back to "google.com" return "google.com"
browserHistory.forward(1);                // You are in "google.com", move forward to "facebook.com" return "facebook.com"
browserHistory.visit("linkedin.com");     // You are in "facebook.com". Visit "linkedin.com"
browserHistory.forward(2);                // You are in "linkedin.com", you cannot move forward any steps.
browserHistory.back(2);                   // You are in "linkedin.com", move back two steps to "facebook.com" then to "google.com". return "google.com"
browserHistory.back(7);                   // You are in "google.com", you can move back only one step to "leetcode.com". return "leetcode.com"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= homepage.length &lt;= 20</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= url.length &lt;= 20</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= steps &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">homepage</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">url</code> consist of&nbsp; '.' or lower case English letters.</li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">5000</code>&nbsp;calls will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">visit</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">back</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">forward</code>.</li>
</ul>
</div>