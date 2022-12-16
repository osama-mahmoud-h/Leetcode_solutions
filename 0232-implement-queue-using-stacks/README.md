<h2><a href="https://leetcode.com/problems/implement-queue-using-stacks/">232. Implement Queue using Stacks</a></h2><h3>Easy</h3><hr><div><p>Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (<code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">push</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">peek</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pop</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">empty</code>).</p>

<p>Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">MyQueue</code> class:</p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">void push(int x)</code> Pushes element x to the back of the queue.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">int pop()</code> Removes the element from the front of the queue and returns it.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">int peek()</code> Returns the element at the front of the queue.</li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">boolean empty()</code> Returns <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">true</code> if the queue is empty, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">false</code> otherwise.</li>
</ul>

<p><strong>Notes:</strong></p>

<ul>
	<li>You must use <strong>only</strong> standard operations of a stack, which means only <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">push to top</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">peek/pop from top</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">size</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">is empty</code> operations are valid.</li>
	<li>Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input</strong>
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
<strong>Output</strong>
[null, null, null, 1, 1, false]

<strong>Explanation</strong>
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= x &lt;= 9</code></li>
	<li>At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">100</code>&nbsp;calls will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">push</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pop</code>, <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">peek</code>, and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">empty</code>.</li>
	<li>All the calls to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">pop</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">peek</code> are valid.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow-up:</strong> Can you implement the queue such that each operation is <strong><a href="https://en.wikipedia.org/wiki/Amortized_analysis" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;">amortized</a></strong> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(1)</code> time complexity? In other words, performing <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">n</code> operations will take overall <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">O(n)</code> time even if one of those operations may take longer.</p>
</div>