<h2><a href="https://leetcode.com/problems/time-based-key-value-store/">981. Time Based Key-Value Store</a></h2><h3>Medium</h3><hr><div><p>Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.</p>

<p>Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">TimeMap</code> class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">TimeMap()</code> Initializes the object of the data structure.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void set(String key, String value, int timestamp)</code> Stores the key <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> with the value <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">value </code>at the given time <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">timestamp</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">String get(String key, int timestamp)</code> Returns a value such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">set</code> was called previously, with <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">timestamp_prev &lt;= timestamp</code>. If there are multiple such values, it returns the value associated with the largest <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">timestamp_prev</code>. If there are no values, it returns <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">""</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input</strong>
["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]
<strong>Output</strong>
[null, null, "bar", "bar", null, "bar2", "bar2"]

<strong>Explanation</strong>
TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1);  // store the key "foo" and value "bar" along with timestamp = 1.
timeMap.get("foo", 1);         // return "bar"
timeMap.get("foo", 3);         // return "bar", since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 is "bar".
timeMap.set("foo", "bar2", 4); // store the key "foo" and value "bar2" along with timestamp = 4.
timeMap.get("foo", 4);         // return "bar2"
timeMap.get("foo", 5);         // return "bar2"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= key.length, value.length &lt;= 100</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">value</code> consist of lowercase English letters and digits.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= timestamp &lt;= 10<sup>7</sup></code></li>
	<li>All the timestamps <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">timestamp</code> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">set</code> are strictly increasing.</li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * 10<sup>5</sup></code> calls will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">set</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">get</code>.</li>
</ul>
</div>