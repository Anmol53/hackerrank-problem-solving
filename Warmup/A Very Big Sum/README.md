# A Very Big Sum

<p>Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.</p>
<p><strong>Function Description</strong></p>
<p>Complete the <em>aVeryBigSum</em> function in the editor below. It must return the sum of all array elements.</p>
<p>aVeryBigSum has the following parameter(s):</p>
<ul>
  <li><em>ar</em>: an array of integers . </li>
</ul>
<p><strong>Input Format</strong> </p>
<p>The first line of the input consists of an integer <strong><em>n</em></strong>. <br>
  The next line contains <strong><em>n</em></strong> space-separated integers contained in the array. </p>
<p><strong>Output Format</strong></p>
<p>Print the integer sum of the elements in the array.</p>
<p><strong>Constraints</strong> <br>
  <ul>
    <li><strong>1 &lt= n &lt= 10</strong> <br></li>
    <li><strong>0 &lt= ar[i] &lt= 10<sup>10</sup></strong></li>
  </ul>
</p>
<p><strong>Sample Input</strong> </p>
<pre><code>5
1000000001 1000000002 1000000003 1000000004 1000000005
</code></pre>
<p><strong>Output</strong> </p>
<pre><code>5000000015
</code></pre>
<p><strong>Note:</strong> </p>
<p>The range of the 32-bit integer is <strong>(-2<sup>31</sup>) <em>to</em> (2<sup>31</sup> - 1) <em>or</em> [-2147483648, 2147483647]</strong>.<br> </p>
<p>When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums. </p>
