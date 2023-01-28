<h2><a href="https://leetcode.com/problems/data-stream-as-disjoint-intervals/">352. Data Stream as Disjoint Intervals</a></h2><h3>Hard</h3><hr><div><p>Given a data stream input of non-negative integers <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub></code>, summarize the numbers seen so far as a list of disjoint intervals.</p>

<p>Implement the <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">SummaryRanges</code> class:</p>

<ul>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">SummaryRanges()</code> Initializes the object with an empty stream.</li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">void addNum(int value)</code> Adds the integer <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">value</code> to the stream.</li>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">int[][] getIntervals()</code> Returns a summary of the integers in the stream currently as a list of disjoint intervals <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">[start<sub>i</sub>, end<sub>i</sub>]</code>. The answer should be sorted by <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">start<sub>i</sub></code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;"><strong>Input</strong>
["SummaryRanges", "addNum", "getIntervals", "addNum", "getIntervals", "addNum", "getIntervals", "addNum", "getIntervals", "addNum", "getIntervals"]
[[], [1], [], [3], [], [7], [], [2], [], [6], []]
<strong>Output</strong>
[null, null, [[1, 1]], null, [[1, 1], [3, 3]], null, [[1, 1], [3, 3], [7, 7]], null, [[1, 3], [7, 7]], null, [[1, 3], [6, 7]]]

<strong>Explanation</strong>
SummaryRanges summaryRanges = new SummaryRanges();
summaryRanges.addNum(1);      // arr = [1]
summaryRanges.getIntervals(); // return [[1, 1]]
summaryRanges.addNum(3);      // arr = [1, 3]
summaryRanges.getIntervals(); // return [[1, 1], [3, 3]]
summaryRanges.addNum(7);      // arr = [1, 3, 7]
summaryRanges.getIntervals(); // return [[1, 1], [3, 3], [7, 7]]
summaryRanges.addNum(2);      // arr = [1, 2, 3, 7]
summaryRanges.getIntervals(); // return [[1, 3], [7, 7]]
summaryRanges.addNum(6);      // arr = [1, 2, 3, 6, 7]
summaryRanges.getIntervals(); // return [[1, 3], [6, 7]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">0 &lt;= value &lt;= 10<sup>4</sup></code></li>
	<li>At most <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">3 * 10<sup>4</sup></code> calls will be made to <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">addNum</code> and <code style="background-color: rgb(27, 38, 43) !important; color: rgb(194, 207, 213) !important;">getIntervals</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> What if there are lots of merges and the number of disjoint intervals is small compared to the size of the data stream?</p>
</div>