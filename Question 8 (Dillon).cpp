<html>
<head>
<title>main.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #bbb529;}
.s1 { color: #a9b7c6;}
.s2 { color: #6a8759;}
.s3 { color: #cc7832;}
.s4 { color: #808080;}
.s5 { color: #6897bb;}
</style>
</head>
<body bgcolor="#2b2b2b">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
main.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;iostream&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;algorithm&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;stdlib.h&gt;</span>

<span class="s3">using namespace </span><span class="s1">std</span><span class="s3">;</span>

<span class="s3">int </span><span class="s1">main() {</span>
    <span class="s3">int </span><span class="s1">size</span><span class="s3">; </span><span class="s4">//Used to create a vector without definite size</span>
    <span class="s3">int </span><span class="s1">s</span><span class="s3">; </span><span class="s4">//Variable for what the array will add up to</span>
    <span class="s3">static int </span><span class="s1">counter = </span><span class="s5">0</span><span class="s3">; </span><span class="s4">//Not necessary but counts how many ways we have to add up to s</span>

    <span class="s1">cout &lt;&lt; </span><span class="s2">&quot;Please enter the size you want the vector to be: &quot;</span><span class="s3">;</span>
    <span class="s1">cin &gt;&gt; size</span><span class="s3">;</span>
    <span class="s3">int </span><span class="s1">*arr = </span><span class="s3">new int</span><span class="s1">[size]</span><span class="s3">; </span><span class="s4">//Gives array it's size</span>

    <span class="s4">//Creates array</span>
    <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s5">0</span><span class="s3">; </span><span class="s1">i &lt; size</span><span class="s3">; </span><span class="s1">i++) {</span>
        <span class="s1">arr[i] = rand() % </span><span class="s5">10</span><span class="s3">;</span>
    <span class="s1">}</span>

    <span class="s4">// Shows what the array is</span>
    <span class="s1">cout &lt;&lt; </span><span class="s2">&quot;Your array is: &quot;</span><span class="s3">;</span>
    <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s5">0</span><span class="s3">; </span><span class="s1">i &lt; size</span><span class="s3">; </span><span class="s1">++i) {</span>
        <span class="s1">cout &lt;&lt; arr[i] &lt;&lt; </span><span class="s2">&quot;, &quot;</span><span class="s3">;</span>
    <span class="s1">}</span>
    <span class="s1">cout &lt;&lt; </span><span class="s2">&quot;What number would you like to see the numbers add up to: &quot;</span><span class="s3">;</span>
    <span class="s1">cin &gt;&gt; s</span><span class="s3">;</span>

    <span class="s4">//Determines if which values are capable of adding up to s</span>
    <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s5">0</span><span class="s3">; </span><span class="s1">i &lt; size</span><span class="s3">; </span><span class="s1">i++) {</span>
        <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">j = i + </span><span class="s5">1</span><span class="s3">; </span><span class="s1">j &lt; size</span><span class="s3">; </span><span class="s1">j++) {</span>
            <span class="s3">if</span><span class="s1">(arr[i] + arr[j] == s){</span>
                <span class="s1">cout &lt;&lt; arr[i] &lt;&lt; </span><span class="s2">&quot;, &quot; </span><span class="s1">&lt;&lt; arr[j]</span><span class="s3">; </span><span class="s4">//Displays the array that adds up to s</span>
            <span class="s1">}</span>
        <span class="s1">}</span>
    <span class="s1">}</span>
    <span class="s3">return </span><span class="s5">0</span><span class="s3">;</span>
<span class="s1">}</span></pre>
</body>
</html>