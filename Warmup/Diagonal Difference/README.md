# Diagonal Difference

<p>Given a square matrix, calculate the absolute difference between the sums of its diagonals. </p>
<p>For example, the square matrix <strong>arr</strong> is shown below: </p>
<pre><code>1 2 3
4 5 6
9 8 9
</code></pre>
<p>The left-to-right diagonal = <strong>1 + 5 + 9 = 15</strong>. The right to left diagonal = <strong>3 + 5 + 9 = 17</strong>. Their absolute difference is <strong>|15 - 17| = 2</strong>. </p>
<p><strong>Function description</strong></p>
<p>Complete the <strong><em>diagonalDifference</em></strong> function in the editor below. It must return an integer representing the absolute diagonal difference.</p>
<p>diagonalDifference takes the following parameter: </p>
<ul>
  <li><em>arr</em>: an array of integers . </li>
</ul>
<p><strong>Input Format</strong></p>
<p>The first line contains a single integer, <strong>n</strong>, the number of rows and columns in the matrix <strong>arr</strong>. <br>
  Each of the next <strong>n</strong> lines describes a row, <strong>arr[i]</strong>, and consists of <strong>n</strong> space-separated integers <strong>arr[i][j]</strong>.</p>
<p><strong>Constraints</strong></p>
<ul>
  <li><strong>-100 &lt= arr[i][j] &lt= 100</strong></li>
</ul>
<p><strong>Output Format</strong></p>
<p>Print the absolute difference between the sums of the matrix's two diagonals as a single integer.</p>
<p><strong>Sample Input</strong></p>
<pre><code>3
11 2 4
4 5 6
10 8 -12
</code></pre>
<p><strong>Sample Output</strong></p>
<pre><code>15
</code></pre>
<p><strong>Explanation</strong></p>
<p>The primary diagonal is: </p>
<pre><code>11
   5
     -12
</code></pre>
<p>Sum across the primary diagonal: 11 + 5 - 12 = 4 </p>
<p>The secondary diagonal is:<br></p>
<pre><code>     4
   5
10
</code></pre>
<p>Sum across the secondary diagonal: 4 + 5 + 10 = 19 <br>
  Difference: |4 - 19| = 15</p>
<p><strong>Note:</strong> |x| is the <a href="https://www.mathsisfun.com/numbers/absolute-value.html">absolute value</a> of x</p>
