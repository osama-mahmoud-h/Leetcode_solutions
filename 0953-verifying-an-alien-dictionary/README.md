<h2><a href="https://leetcode.com/problems/verifying-an-alien-dictionary/">953. Verifying an Alien Dictionary</a></h2><h3>Easy</h3><hr><div><p>In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">order</code>. The <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">order</code> of the alphabet is some permutation of lowercase letters.</p>

<p>Given a sequence of <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">words</code> written in the alien language, and the <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">order</code> of the alphabet, return <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">true</code> if and only if the given <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">words</code> are sorted lexicographically in this alien language.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 214) !important;"><strong>Input:</strong> words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
<strong>Output:</strong> true
<strong>Explanation: </strong>As 'h' comes before 'l' in this language, then the sequence is sorted.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 214) !important;"><strong>Input:</strong> words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
<strong>Output:</strong> false
<strong>Explanation: </strong>As 'd' comes after 'l' in this language, then words[0] &gt; words[1], hence the sequence is unsorted.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 214) !important;"><strong>Input:</strong> words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"
<strong>Output:</strong> false
<strong>Explanation: </strong>The first three characters "app" match, and the second string is shorter (in size.) According to lexicographical rules "apple" &gt; "app", because 'l' &gt; '∅', where '∅' is defined as the blank character which is less than any other character (<a href="https://en.wikipedia.org/wiki/Lexicographical_order" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(179, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(178, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(91, 119, 132) !important; border-right-color: rgb(91, 119, 132) !important; border-left-color: rgb(91, 119, 132) !important;">More info</a>).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">1 &lt;= words.length &lt;= 100</code></li>
	<li><code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">1 &lt;= words[i].length &lt;= 20</code></li>
	<li><code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">order.length == 26</code></li>
	<li>All characters in <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">words[i]</code> and <code style="background-color: rgb(27, 38, 44) !important; color: rgb(194, 207, 213) !important;">order</code> are English lowercase letters.</li>
</ul>
</div>