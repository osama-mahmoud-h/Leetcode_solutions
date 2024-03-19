<h2><a href="https://leetcode.com/problems/task-scheduler/">621. Task Scheduler</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are given an array of CPU <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">tasks</code>, each represented by letters&nbsp;A&nbsp;to Z, and a cooling time, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code>. Each cycle or interval allows the completion of one task. Tasks can be completed in any order, but there's a constraint: <strong style="border-color: rgb(91, 119, 134) !important;">identical</strong> tasks must be separated by at least <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> intervals due to cooling time.</p>

<p style="border-color: rgb(91, 119, 134) !important;">​Return the <em style="color: rgb(234, 238, 241) !important; border-color: rgb(91, 119, 134) !important;">minimum number of intervals</em> required to complete all tasks.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<div class="example-block" style="border-color: rgba(140, 122, 115, 0.08) !important; border-left-width: 2px; color: rgba(232, 229, 227, 0.55) !important; font-size: 0.875rem; margin-bottom: 1rem; margin-top: 1rem; overflow: visible; padding-left: 1rem;">
<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Input:</strong> <span class="example-io" style="font-family: Menlo, sans-serif; font-size: 0.85rem; border-color: rgba(140, 122, 115, 0.55) !important;">tasks = ["A","A","A","B","B","B"], n = 2</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Output:</strong> <span class="example-io" style="font-family: Menlo, sans-serif; font-size: 0.85rem; border-color: rgba(140, 122, 115, 0.55) !important;">8</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Explanation:</strong> A possible sequence is: A -&gt; B -&gt; idle -&gt; A -&gt; B -&gt; idle -&gt; A -&gt; B.</p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;">After completing task A, you must wait two cycles before doing A again. The same applies to task B. In the 3<sup style="border-color: rgba(140, 122, 115, 0.55) !important;">rd</sup> interval, neither A nor B can be done, so you idle. By the 4<sup style="border-color: rgba(140, 122, 115, 0.55) !important;">th</sup> cycle, you can do A again as 2 intervals have passed.</p>
</div>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<div class="example-block" style="border-color: rgba(140, 122, 115, 0.08) !important; border-left-width: 2px; color: rgba(232, 229, 227, 0.55) !important; font-size: 0.875rem; margin-bottom: 1rem; margin-top: 1rem; overflow: visible; padding-left: 1rem;">
<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Input:</strong> <span class="example-io" style="font-family: Menlo, sans-serif; font-size: 0.85rem; border-color: rgba(140, 122, 115, 0.55) !important;">tasks = ["A","C","A","B","D","B"], n = 1</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Output:</strong> <span class="example-io" style="font-family: Menlo, sans-serif; font-size: 0.85rem; border-color: rgba(140, 122, 115, 0.55) !important;">6</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Explanation:</strong> A possible sequence is: A -&gt; B -&gt; C -&gt; D -&gt; A -&gt; B.</p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;">With a cooling interval of 1, you can repeat a task after just one other task.</p>
</div>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 3:</strong></p>

<div class="example-block" style="border-color: rgba(140, 122, 115, 0.08) !important; border-left-width: 2px; color: rgba(232, 229, 227, 0.55) !important; font-size: 0.875rem; margin-bottom: 1rem; margin-top: 1rem; overflow: visible; padding-left: 1rem;">
<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Input:</strong> <span class="example-io" style="font-family: Menlo, sans-serif; font-size: 0.85rem; border-color: rgba(140, 122, 115, 0.55) !important;">tasks = ["A","A","A", "B","B","B"], n = 3</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Output:</strong> <span class="example-io" style="font-family: Menlo, sans-serif; font-size: 0.85rem; border-color: rgba(140, 122, 115, 0.55) !important;">10</span></p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;"><strong style="border-color: rgba(140, 122, 115, 0.55) !important;">Explanation:</strong> A possible sequence is: A -&gt; B -&gt; idle -&gt; idle -&gt; A -&gt; B -&gt; idle -&gt; idle -&gt; A -&gt; B.</p>

<p style="border-color: rgba(140, 122, 115, 0.55) !important;">There are only two types of tasks, A and B, which need to be separated by 3 intervals. This leads to idling twice between repetitions of these tasks.</p>
</div>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= tasks.length &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">4</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">tasks[i]</code> is an uppercase English letter.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= n &lt;= 100</code></li>
</ul>
</div>