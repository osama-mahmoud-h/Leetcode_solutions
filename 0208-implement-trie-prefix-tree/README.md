<h2><a href="https://leetcode.com/problems/implement-trie-prefix-tree/">208. Implement Trie (Prefix Tree)</a></h2><h3>Medium</h3><hr><div><p>A <a href="https://en.wikipedia.org/wiki/Trie" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;"><strong style="--visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important;">trie</strong></a> (pronounced as "try") or <strong>prefix tree</strong> is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.</p>

<p>Implement the Trie class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">Trie()</code> Initializes the trie object.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void insert(String word)</code> Inserts the string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">word</code> into the trie.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">boolean search(String word)</code> Returns <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if the string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">word</code> is in the trie (i.e., was inserted before), and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code> otherwise.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">boolean startsWith(String prefix)</code> Returns <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if there is a previously inserted string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">word</code> that has the prefix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prefix</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code> otherwise.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input</strong>
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
<strong>Output</strong>
[null, null, true, false, true, null, true]

<strong>Explanation</strong>
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // return True
trie.search("app");     // return False
trie.startsWith("app"); // return True
trie.insert("app");
trie.search("app");     // return True
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= word.length, prefix.length &lt;= 2000</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">word</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">prefix</code> consist only of lowercase English letters.</li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">3 * 10<sup>4</sup></code> calls <strong>in total</strong> will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">insert</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">search</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">startsWith</code>.</li>
</ul>
</div>