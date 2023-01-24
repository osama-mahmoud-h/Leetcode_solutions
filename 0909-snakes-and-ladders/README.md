<h2><a href="https://leetcode.com/problems/snakes-and-ladders/">909. Snakes and Ladders</a></h2><h3>Medium</h3><hr><div><p>You are given an <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n x n</code> integer matrix <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">board</code> where the cells are labeled from <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1</code> to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n<sup>2</sup></code> in a <a href="https://en.wikipedia.org/wiki/Boustrophedon" target="_blank" style="transition-property: -border-bottom-color !important; --link-color:rgb(161, 178, 190) !important; --link-color-hover:rgb(180, 193, 203) !important; --link-color-active:rgb(158, 175, 188) !important; --visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important; border-top-color: rgb(92, 119, 133) !important; border-right-color: rgb(92, 119, 133) !important; border-left-color: rgb(92, 119, 133) !important;"><strong style="--visited-color:rgb(160, 117, 234) !important; --visited-color-hover:rgb(179, 144, 238) !important; --visited-color-active:rgb(157, 113, 234) !important;">Boustrophedon style</strong></a> starting from the bottom left of the board (i.e. <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">board[n - 1][0]</code>) and alternating direction each row.</p>

<p>You start on square <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1</code> of the board. In each move, starting from square <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">curr</code>, do the following:</p>

<ul>
	<li>Choose a destination square <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">next</code> with a label in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[curr + 1, min(curr + 6, n<sup>2</sup>)]</code>.

	<ul>
		<li>This choice simulates the result of a standard <strong>6-sided die roll</strong>: i.e., there are always at most 6 destinations, regardless of the size of the board.</li>
	</ul>
	</li>
	<li>If <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">next</code> has a snake or ladder, you <strong>must</strong> move to the destination of that snake or ladder. Otherwise, you move to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">next</code>.</li>
	<li>The game ends when you reach the square <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n<sup>2</sup></code>.</li>
</ul>

<p>A board square on row <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">r</code> and column <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">c</code> has a snake or ladder if <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">board[r][c] != -1</code>. The destination of that snake or ladder is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">board[r][c]</code>. Squares <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n<sup>2</sup></code> do not have a snake or ladder.</p>

<p>Note that you only take a snake or ladder at most once per move. If the destination to a snake or ladder is the start of another snake or ladder, you do <strong>not</strong> follow the subsequent&nbsp;snake or ladder.</p>

<ul>
	<li>For example, suppose the board is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[[-1,4],[-1,3]]</code>, and on the first move, your destination square is <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">2</code>. You follow the ladder to square <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">3</code>, but do <strong>not</strong> follow the subsequent ladder to <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">4</code>.</li>
</ul>

<p>Return <em style="color: rgb(234, 238, 241) !important;">the least number of moves required to reach the square </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n<sup>2</sup></code><em style="color: rgb(234, 238, 241) !important;">. If it is not possible to reach the square, return </em><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/09/23/snakes.png" style="width: 500px; height: 394px; filter: saturate(0.9) brightness(0.8);">
<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> board = [[-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1],[-1,35,-1,-1,13,-1],[-1,-1,-1,-1,-1,-1],[-1,15,-1,-1,-1,-1]]
<strong>Output:</strong> 4
<strong>Explanation:</strong> 
In the beginning, you start at square 1 (at row 5, column 0).
You decide to move to square 2 and must take the ladder to square 15.
You then decide to move to square 17 and must take the snake to square 13.
You then decide to move to square 14 and must take the ladder to square 35.
You then decide to move to square 36, ending the game.
This is the lowest possible number of moves to reach the last square, so return 4.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;"><strong>Input:</strong> board = [[-1,-1],[-1,3]]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n == board.length == board[i].length</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">2 &lt;= n &lt;= 20</code></li>
	<li><code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">grid[i][j]</code> is either <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">-1</code> or in the range <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">[1, n<sup>2</sup>]</code>.</li>
	<li>The squares labeled <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">1</code> and <code style="background-color: rgb(20, 28, 32) !important; color: rgb(183, 198, 206) !important;">n<sup>2</sup></code> do not have any ladders or snakes.</li>
</ul>
</div>