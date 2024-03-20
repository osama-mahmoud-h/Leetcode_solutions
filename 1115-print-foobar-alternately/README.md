<h2><a href="https://leetcode.com/problems/print-foobar-alternately/">1115. Print FooBar Alternately</a></h2><h3>Medium</h3><hr><div style="border-color: rgb(91, 119, 134) !important;"><p style="border-color: rgb(91, 119, 134) !important;">Suppose you are given the following code:</p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;">class FooBar {
  public void foo() {
    for (int i = 0; i &lt; n; i++) {
      print("foo");
    }
  }

  public void bar() {
    for (int i = 0; i &lt; n; i++) {
      print("bar");
    }
  }
}
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">The same instance of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">FooBar</code> will be passed to two different threads:</p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;">thread <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">A</code> will call <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">foo()</code>, while</li>
	<li style="border-color: rgb(91, 119, 134) !important;">thread <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">B</code> will call <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">bar()</code>.</li>
</ul>

<p style="border-color: rgb(91, 119, 134) !important;">Modify the given program to output <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">"foobar"</code> <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">n</code> times.</p>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 1
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "foobar"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> There are two threads being fired asynchronously. One of them calls foo(), while the other calls bar().
"foobar" is being output 1 time.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;"><strong class="example" style="border-color: rgb(91, 119, 134) !important;">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important; border-color: rgb(83, 109, 122) !important;"><strong style="border-color: rgb(83, 109, 122) !important;">Input:</strong> n = 2
<strong style="border-color: rgb(83, 109, 122) !important;">Output:</strong> "foobarfoobar"
<strong style="border-color: rgb(83, 109, 122) !important;">Explanation:</strong> "foobar" is being output 2 times.
</pre>

<p style="border-color: rgb(91, 119, 134) !important;">&nbsp;</p>
<p style="border-color: rgb(91, 119, 134) !important;"><strong style="border-color: rgb(91, 119, 134) !important;">Constraints:</strong></p>

<ul style="border-color: rgb(91, 119, 134) !important;">
	<li style="border-color: rgb(91, 119, 134) !important;"><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important; border-color: rgb(83, 109, 121) !important;">1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>