<h2><a href="https://leetcode.com/problems/lru-cache/">146. LRU Cache</a></h2><h3>Medium</h3><hr><div><p>Design a data structure that follows the constraints of a <strong><a href="https://en.wikipedia.org/wiki/Cache_replacement_policies#LRU" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">Least Recently Used (LRU) cache</a></strong>.</p>

<p>Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">LRUCache</code> class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">LRUCache(int capacity)</code> Initialize the LRU cache with <strong>positive</strong> size <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">capacity</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">int get(int key)</code> Return the value of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> if the key exists, otherwise return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">-1</code>.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void put(int key, int value)</code> Update the value of the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> if the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key</code> exists. Otherwise, add the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">key-value</code> pair to the cache. If the number of keys exceeds the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">capacity</code> from this operation, <strong>evict</strong> the least recently used key.</li>
</ul>

<p>The functions <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">get</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">put</code> must each run in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(1)</code> average time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input</strong>
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
<strong>Output</strong>
[null, null, null, 1, null, -1, null, -1, 3, 4]

<strong>Explanation</strong>
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= capacity &lt;= 3000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= key &lt;= 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">0 &lt;= value &lt;= 10<sup>5</sup></code></li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 * 10<sup>5</sup></code> calls will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">get</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">put</code>.</li>
</ul>
</div>