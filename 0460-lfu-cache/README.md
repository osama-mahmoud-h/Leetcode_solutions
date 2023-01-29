<h2><a href="https://leetcode.com/problems/lfu-cache/">460. LFU Cache</a></h2><h3>Hard</h3><hr><div><p>Design and implement a data structure for a <a href="https://en.wikipedia.org/wiki/Least_frequently_used" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">Least Frequently Used (LFU)</a> cache.</p>

<p>Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">LFUCache</code> class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">LFUCache(int capacity)</code> Initializes the object with the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">capacity</code> of the data structure.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">int get(int key)</code> Gets the value of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> if the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> exists in the cache. Otherwise, returns <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void put(int key, int value)</code> Update the value of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> if present, or inserts the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> if not already present. When the cache reaches its <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">capacity</code>, it should invalidate and remove the <strong>least frequently used</strong> key before inserting a new item. For this problem, when there is a <strong>tie</strong> (i.e., two or more keys with the same frequency), the <strong>least recently used</strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> would be invalidated.</li>
</ul>

<p>To determine the least frequently used key, a <strong>use counter</strong> is maintained for each key in the cache. The key with the smallest <strong>use counter</strong> is the least frequently used key.</p>

<p>When a key is first inserted into the cache, its <strong>use counter</strong> is set to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1</code> (due to the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">put</code> operation). The <strong>use counter</strong> for a key in the cache is incremented either a <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">get</code> or <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">put</code> operation is called on it.</p>

<p>The functions&nbsp;<code data-stringify-type="code" style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">get</code>&nbsp;and&nbsp;<code data-stringify-type="code" style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">put</code>&nbsp;must each run in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(1)</code> average time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input</strong>
["LFUCache", "put", "put", "get", "put", "get", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [3], [4, 4], [1], [3], [4]]
<strong>Output</strong>
[null, null, null, 1, null, -1, 3, null, -1, 3, 4]

<strong>Explanation</strong>
// cnt(x) = the use counter for key x
// cache=[] will show the last used order for tiebreakers (leftmost element is  most recent)
LFUCache lfu = new LFUCache(2);
lfu.put(1, 1);   // cache=[1,_], cnt(1)=1
lfu.put(2, 2);   // cache=[2,1], cnt(2)=1, cnt(1)=1
lfu.get(1);      // return 1
                 // cache=[1,2], cnt(2)=1, cnt(1)=2
lfu.put(3, 3);   // 2 is the LFU key because cnt(2)=1 is the smallest, invalidate 2.
&nbsp;                // cache=[3,1], cnt(3)=1, cnt(1)=2
lfu.get(2);      // return -1 (not found)
lfu.get(3);      // return 3
                 // cache=[3,1], cnt(3)=2, cnt(1)=2
lfu.put(4, 4);   // Both 1 and 3 have the same cnt, but 1 is LRU, invalidate 1.
                 // cache=[4,3], cnt(4)=1, cnt(3)=2
lfu.get(1);      // return -1 (not found)
lfu.get(3);      // return 3
                 // cache=[3,4], cnt(4)=1, cnt(3)=3
lfu.get(4);      // return 4
                 // cache=[4,3], cnt(4)=2, cnt(3)=3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= capacity&nbsp;&lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= key &lt;= 10<sup>5</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= value &lt;= 10<sup>9</sup></code></li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * 10<sup>5</sup></code>&nbsp;calls will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">get</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">put</code>.</li>
</ul>

<p>&nbsp;</p>
<span style="display: none;">&nbsp;</span></div>