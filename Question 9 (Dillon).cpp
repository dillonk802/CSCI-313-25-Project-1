<html>
<head>
<title>main.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #bbb529;}
.s1 { color: #a9b7c6;}
.s2 { color: #6a8759;}
.s3 { color: #cc7832;}
.s4 { color: #6897bb;}
.s5 { color: #808080;}
</style>
</head>
<body bgcolor="#2b2b2b">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
main.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;iostream&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;vector&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;chrono&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;time.h&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;stdio.h&gt;</span>
<span class="s0">#include </span><span class="s2">&lt;stdlib.h&gt;</span>

<span class="s3">using namespace </span><span class="s1">std</span><span class="s3">;</span>

<span class="s3">int </span><span class="s1">main() {</span>
    <span class="s3">bool </span><span class="s1">b1</span><span class="s3">;</span>
    <span class="s1">srand(time(</span><span class="s4">0</span><span class="s1">))</span><span class="s3">;</span>
    <span class="s5">//Creates vector of size 100</span>
    <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s4">0</span><span class="s3">; </span><span class="s4">1 </span><span class="s1">&lt; </span><span class="s4">100</span><span class="s3">; </span><span class="s1">i++) {</span>
        <span class="s1">vector&lt;</span><span class="s3">int</span><span class="s1">&gt; v</span><span class="s3">;</span>
        <span class="s5">//Makes each vector a size of 3, and only consist of 1's and 0's</span>
        <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s4">0</span><span class="s3">; </span><span class="s1">i &lt; </span><span class="s4">3</span><span class="s3">; </span><span class="s1">i++) {</span>
            <span class="s1">v.push_back(rand() % </span><span class="s4">2</span><span class="s1">)</span><span class="s3">;</span>
            <span class="s1">cout &lt;&lt; v[i]</span><span class="s3">;</span>
        <span class="s1">}</span>

    <span class="s1">}</span>
    <span class="s5">//Uses a bool to determine if this is a De Bruijn sequence</span>
    <span class="s3">bool </span><span class="s1">b1(vector&lt;</span><span class="s3">int</span><span class="s1">&gt; v) {</span>
        <span class="s5">//These are the De Bruijn sequences that are possible</span>
        <span class="s3">int </span><span class="s1">ans[</span><span class="s4">8</span><span class="s1">][</span><span class="s4">3</span><span class="s1">] = {{</span><span class="s4">0</span><span class="s3">, </span><span class="s4">0</span><span class="s3">, </span><span class="s4">0</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">0</span><span class="s3">, </span><span class="s4">0</span><span class="s3">, </span><span class="s4">1</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">0</span><span class="s3">, </span><span class="s4">1</span><span class="s3">, </span><span class="s4">0</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">1</span><span class="s3">, </span><span class="s4">0</span><span class="s3">, </span><span class="s4">0</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">0</span><span class="s3">, </span><span class="s4">1</span><span class="s3">, </span><span class="s4">1</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">1</span><span class="s3">, </span><span class="s4">0</span><span class="s3">, </span><span class="s4">1</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">1</span><span class="s3">, </span><span class="s4">1</span><span class="s3">, </span><span class="s4">0</span><span class="s1">}</span><span class="s3">,</span>
                         <span class="s1">{</span><span class="s4">1</span><span class="s3">, </span><span class="s4">1</span><span class="s3">, </span><span class="s4">1</span><span class="s1">}}</span>
        <span class="s3">bool </span><span class="s1">db[</span><span class="s4">8</span><span class="s1">] = </span><span class="s3">false; </span><span class="s5">//Set to false</span>
        <span class="s5">//Nested for loop used to run through the whole array</span>
        <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s4">0</span><span class="s3">; </span><span class="s1">i &lt; v.size()</span><span class="s3">; </span><span class="s1">i++) {</span>
            <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">j = </span><span class="s4">0</span><span class="s3">; </span><span class="s1">j &lt; v.size()</span><span class="s3">; </span><span class="s1">j++) {</span>
                <span class="s5">//Compares answer in arrays to vector</span>
                <span class="s3">if </span><span class="s1">(ans[i][j] = v[i]) {</span>
                    <span class="s1">db[i] = </span><span class="s3">true;</span>
                <span class="s1">}</span>


            <span class="s1">}</span>
        <span class="s1">}</span>
        <span class="s5">//Prints out each De Bruijn's sequence found in the vector</span>
        <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s4">0</span><span class="s3">; </span><span class="s1">i &lt; v.size()</span><span class="s3">; </span><span class="s1">i++) {</span>
            <span class="s3">if </span><span class="s1">(db[i] = </span><span class="s3">true</span><span class="s1">) {</span>
                <span class="s1">cout &lt;&lt; db[i]</span><span class="s3">;</span>
            <span class="s1">} </span><span class="s3">else </span><span class="s1">{</span>
                <span class="s1">cout &lt;&lt; db[i] &lt;&lt; </span><span class="s2">&quot;is not a De Bruijn sequence.&quot;</span><span class="s3">;</span>
            <span class="s1">}</span>
        <span class="s1">}</span>
    <span class="s1">}</span>
<span class="s1">}</span></pre>
</body>
</html>