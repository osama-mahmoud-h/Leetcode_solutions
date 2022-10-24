<h2><a href="https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/">1239. Maximum Length of a Concatenated String with Unique Characters</a></h2><h3>Medium</h3><hr><div><p>You are given an array of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">arr</code>. A string <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code> is formed by the <strong>concatenation</strong> of a <strong>subsequence</strong> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">arr</code> that has <strong>unique characters</strong>.</p>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the <strong>maximum</strong> possible length</em> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">s</code>.</p>

<p>A <strong>subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = ["un","iq","ue"]
<strong>Output:</strong> 4
<strong>Explanation:</strong> All the valid concatenations are:
- ""
- "un"
- "iq"
- "ue"
- "uniq" ("un" + "iq")
- "ique" ("iq" + "ue")
Maximum length is 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = ["cha","r","act","ers"]
<strong>Output:</strong> 6
<strong>Explanation:</strong> Possible longest valid concatenations are "chaers" ("cha" + "ers") and "acters" ("act" + "ers").
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> arr = ["abcdefghijklmnopqrstuvwxyz"]
<strong>Output:</strong> 26
<strong>Explanation:</strong> The only string in arr has all 26 characters.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= arr.length &lt;= 16</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1 &lt;= arr[i].length &lt;= 26</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">arr[i]</code> contains only lowercase English letters.</li>
</ul>
</div>