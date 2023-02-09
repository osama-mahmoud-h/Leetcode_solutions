<h2><a href="https://leetcode.com/problems/naming-a-company/">2306. Naming a Company</a></h2><h3>Hard</h3><hr><div><p>You are given an array of strings <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">ideas</code> that represents a list of names to be used in the process of naming a company. The process of naming a company is as follows:</p>

<ol>
	<li>Choose 2 <strong>distinct</strong> names from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">ideas</code>, call them <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>A</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>B</sub></code>.</li>
	<li>Swap the first letters of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>A</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>B</sub></code> with each other.</li>
	<li>If <strong>both</strong> of the new names are not found in the original <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">ideas</code>, then the name <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>A</sub> idea<sub>B</sub></code> (the <strong>concatenation</strong> of <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>A</sub></code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">idea<sub>B</sub></code>, separated by a space) is a valid company name.</li>
	<li>Otherwise, it is not a valid name.</li>
</ol>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the number of <strong>distinct</strong> valid names for the company</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> ideas = ["coffee","donuts","time","toffee"]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The following selections are valid:
- ("coffee", "donuts"): The company name created is "doffee conuts".
- ("donuts", "coffee"): The company name created is "conuts doffee".
- ("donuts", "time"): The company name created is "tonuts dime".
- ("donuts", "toffee"): The company name created is "tonuts doffee".
- ("time", "donuts"): The company name created is "dime tonuts".
- ("toffee", "donuts"): The company name created is "doffee tonuts".
Therefore, there are a total of 6 distinct company names.

The following are some examples of invalid selections:
- ("coffee", "time"): The name "toffee" formed after swapping already exists in the original array.
- ("time", "toffee"): Both names are still the same after swapping and exist in the original array.
- ("coffee", "toffee"): Both names formed after swapping already exist in the original array.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(182, 198, 206) !important;"><strong>Input:</strong> ideas = ["lack","back"]
<strong>Output:</strong> 0
<strong>Explanation:</strong> There are no valid selections. Therefore, 0 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">2 &lt;= ideas.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">1 &lt;= ideas[i].length &lt;= 10</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">ideas[i]</code> consists of lowercase English letters.</li>
	<li>All the strings in <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 205) !important;">ideas</code> are <strong>unique</strong>.</li>
</ul>
</div>