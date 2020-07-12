# Compare the Triplets

<p>Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from <em>1</em> to <em>100</em> for three categories: <em>problem clarity</em>, <em>originality</em>, and <em>difficulty</em>.
</p>
<p>The rating for Alice's challenge is the triplet <em>a = (a[0], a[1], a[2])</em>, and the rating for Bob's challenge is the triplet <em>b = (b[0], b[1], b[2])</em>.</p>
<p>The task is to find their <em>comparison points</em> by comparing <em>a[0]</em> with <em>b[0]</em>, <em>a[1]</em> with <em>b[1]</em>, and <em>a[2]</em> with <em>b[2]</em>. </p>
<ul>
  <li> If <em>a[i] &gt; b[i]</em>, then Alice is awarded <em>1</em> point. </li>
  <li> If <em>a[i] &lt; b[i]</em>, then Bob is awarded <em>1</em> point. </li>
  <li> If <em>a[i] = b[i]</em>, then neither person receives a point.</li>
</ul>
<p>Comparison points is the total points a person earned. </p>
<p>Given <em>a</em> and <em>b</em>, determine their respective comparison points. </p>
<p><strong>Example</strong> </p>
<p><em>a = [1, 2, 3]</em> <br><em>b = [3, 2, 1]</em> <br></p>
<ul>
  <li>For elements *0*, Bob is awarded a point because <em>a[0] . </em></li>
  <em>
    <li>For the equal elements <em>a[1]</em> and <em>b[1]</em>, no points are earned. </li>
    <li>Finally, for elements <em>2</em>, <em>a[2] &gt; b[2]</em> so Alice receives a point. </li>
  </em>
</ul>
<em>
  <p>The return array is <em>[1, 1]</em> with Alice's score first and Bob's second. </p>
  <p><strong>Function Description</strong> </p>
  <p>Complete the function <em>compareTriplets</em> in the editor below. </p>
  <p>compareTriplets has the following parameter(s): </p>
  <ul>
    <li><em>int a[3]</em>: Alice's challenge rating</li>
    <li><em>int b[3]</em>: Bob's challenge rating</li>
  </ul>
  <p><strong>Return</strong> </p>
</em>
<ul>
  <li><em>int[2]</em>: Alice's score is in the first position, and Bob's score is in the second. </li>
</ul>
<p><strong>Input Format</strong></p>
<p>The first line contains <em>3</em> space-separated integers, <em>a[0]</em>, <em>a[1]</em>, and <em>a[2]</em>, the respective values in triplet <em>a</em>. <br>
  The second line contains <em>3</em> space-separated integers, <em>b[0]</em>, <em>b[1]</em>, and <em>b[2]</em>, the respective values in triplet <em>b</em>.</p>
<p><strong>Constraints</strong></p>
<ul>
  <li> <em>1 ≤ a[i] ≤ 100</em></li>
  <li> <em>1 ≤ b[i] ≤ 100</em></li>
</ul>
<p><strong>Sample Input 0</strong></p>
<pre><code>5 6 7<br/>3 6 10</code></pre>
<p><strong>Sample Output 0</strong></p>
<pre><code>1 1</code></pre>
<p><strong>Explanation 0</strong></p>
<p>In this example: </p>
<ul>
  <li><strong>a = (a[0], a[1], a[2]) = (5, 6, 7)</strong></li>
  <li><strong>b = (b[0], b[1], b[2]) = (3, 6, 10)</strong></li>
</ul>
<p>Now, let's compare each individual score:</p>
<ul>
  <li><strong>a[0] &gt b[0]</strong>, so Alice receives <strong>1</strong> point.</li>
  <li><strong>a[1] = b[1]</strong>, so nobody receives a point.</li>
  <li><strong>a[2] &lt b[2]</strong>, so Bob receives <strong>1</strong> point.</li>
</ul>
<p>Alice's comparison score is <strong>1</strong>, and Bob's comparison score is <strong>1</strong>. Thus, we return the array <strong>[1,1]</strong>. </p>
<p><strong>Sample Input 1</strong></p>
<pre><code>17 28 30<br>99 16 8</code></pre>
<p><strong>Sample Output 1</strong></p>
<pre><code>2 1</code></pre>
<p><strong>Explanation 1</strong></p>
<p>Comparing the <strong>0<sup>th</sup></strong> elements, <strong>17 &lt 99</strong> so Bob receives a point. <br>
  Comparing the <strong>1<sup>st</sup></strong> and <strong>2<sup>nd</sup></strong> elements, <strong>28 &gt 16</strong> and <strong>30 &gt 8</strong> so Alice receives two points. <br>
  The return array is <strong>[2, 1]</strong>. </p>
