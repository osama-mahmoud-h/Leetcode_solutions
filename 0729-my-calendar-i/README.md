<h2><a href="https://leetcode.com/problems/my-calendar-i/">729. My Calendar I</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">You are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a <strong style="border-color: rgb(91, 119, 134) !important;">double booking</strong>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">A <strong style="border-color: rgb(91, 119, 134) !important;">double booking</strong> happens when two events have some non-empty intersection (i.e., some moment is common to both events.).</p>

<p style="border-color: rgb(91, 119, 134) !important;">The event can be represented as a pair of integers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">start</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">end</code> that represents a booking on the half-open interval <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">[start, end)</code>, the range of real numbers <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">x</code> such that <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">start &lt;= x &lt; end</code>.</p>

<p style="border-color: rgb(91, 119, 134) !important;">Implement the <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">MyCalendar</code> class:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">MyCalendar()</code> Initializes the calendar object.</li>
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">boolean book(int start, int end)</code> Returns <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">true</code> if the event can be added to the calendar successfully without causing a <strong style="border-color: rgb(91, 119, 134) !important;">double booking</strong>. Otherwise, return <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">false</code> and do not add the event to the calendar.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input</strong>
["MyCalendar", "book", "book", "book"]
[[], [10, 20], [15, 25], [20, 30]]
<strong style="border-color: rgb(83, 109, 122) !important;">Output</strong>
[null, true, false, true]

<strong style="border-color: rgb(83, 109, 122) !important;">Explanation</strong>
MyCalendar myCalendar = new MyCalendar();
myCalendar.book(10, 20); // return True
myCalendar.book(15, 25); // return False, It can not be booked because time 15 is already booked by another event.
myCalendar.book(20, 30); // return True, The event can be booked, as the first event takes every time less than 20, but not including 20.</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">0 &lt;= start &lt; end &lt;= 10<sup style="border-color: rgb(83, 109, 121) !important;">9</sup></code></li>
	<li style="border-color: rgb(91, 119, 134) !important;">At most <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1000</code> calls will be made to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">book</code>.</li>
</ul>
</div>