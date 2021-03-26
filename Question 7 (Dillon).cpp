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
<span class="s0">#include </span><span class="s2">&lt;ctime&gt;</span>
<span class="s3">using namespace </span><span class="s1">std</span><span class="s3">;</span>

<span class="s3">int </span><span class="s1">main() {</span>

    <span class="s4">//Array</span>
    <span class="s3">int </span><span class="s1">arr[</span><span class="s5">100</span><span class="s1">]</span><span class="s3">;</span>
    <span class="s1">srand(time(</span><span class="s5">0</span><span class="s1">))</span><span class="s3">;</span>
    <span class="s4">//Randomizes an array of 100 values</span>
    <span class="s3">for </span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s5">0</span><span class="s3">; </span><span class="s1">i &lt; </span><span class="s5">100</span><span class="s3">; </span><span class="s1">i++) {</span>
        <span class="s1">arr[i] = rand() % </span><span class="s5">100</span><span class="s3">;</span>
        <span class="s1">cout &lt;&lt; arr[i] &lt;&lt; </span><span class="s2">&quot;, &quot;</span><span class="s3">;</span>
    <span class="s1">}</span>

    <span class="s4">//Vector</span>
    <span class="s1">vector&lt;</span><span class="s3">int</span><span class="s1">&gt; v1</span><span class="s3">; </span><span class="s4">//Creates vector</span>

    <span class="s3">for</span><span class="s1">(</span><span class="s3">int </span><span class="s1">i = </span><span class="s5">0</span><span class="s3">; </span><span class="s1">i &lt; </span><span class="s5">100</span><span class="s3">; </span><span class="s1">i++){</span>
        <span class="s1">v1.push_back(i * i)</span><span class="s3">; </span><span class="s4">//Keeps pushing back to add 100 values</span>
    <span class="s1">}</span>
    <span class="s1">v1.pop_back()</span><span class="s3">;</span>
    <span class="s4">//Creates beginning sequence</span>
    <span class="s1">vector&lt;</span><span class="s3">int</span><span class="s1">&gt;::iterator it</span><span class="s3">;</span>
    <span class="s3">for </span><span class="s1">(it = v1.begin()</span><span class="s3">; </span><span class="s1">it !=v1.end()</span><span class="s3">; </span><span class="s1">it++){</span>
        <span class="s1">cout &lt;&lt; *it &lt;&lt; endl</span><span class="s3">;</span>
    <span class="s1">}</span>

    <span class="s4">//Linked List</span>
    <span class="s3">int </span><span class="s1">info</span><span class="s3">;</span>
    <span class="s1">node* link</span><span class="s3">;</span>

    <span class="s1">node* first = </span><span class="s3">new </span><span class="s1">node</span><span class="s3">;</span>
    <span class="s1">node* second = </span><span class="s3">new </span><span class="s1">node</span><span class="s3">;</span>
    <span class="s1">node* third = </span><span class="s3">new </span><span class="s1">node</span><span class="s3">;</span>
    <span class="s4">//Give each node a value</span>
    <span class="s1">first -&gt; info = </span><span class="s5">1</span><span class="s3">;</span>
    <span class="s1">second -&gt; info = </span><span class="s5">2</span><span class="s3">;</span>
    <span class="s1">third -&gt; info = </span><span class="s5">3</span><span class="s3">;</span>
    <span class="s4">//Link nodes together</span>
    <span class="s1">first -&gt; link = second</span><span class="s3">;</span>
    <span class="s1">second -&gt; link = third</span><span class="s3">;</span>
    <span class="s1">third -&gt; link = </span><span class="s3">nullptr;</span>

    <span class="s1">node* current = </span><span class="s3">new </span><span class="s1">node</span><span class="s3">;</span>
    <span class="s1">current = first</span><span class="s3">;</span>

    <span class="s3">while </span><span class="s1">(current != </span><span class="s3">nullptr</span><span class="s1">) {</span>
        <span class="s1">cout &lt;&lt; current -&gt; info &lt;&lt; </span><span class="s2">&quot; &quot;</span><span class="s3">;</span>
        <span class="s1">current = current-&gt;link</span><span class="s3">;</span>
    <span class="s1">}</span>
    <span class="s4">//Insertion between 1 and 2</span>
    <span class="s1">node* newNode = </span><span class="s3">new </span><span class="s1">node</span><span class="s3">;</span>
    <span class="s1">newNode -&gt; info = </span><span class="s5">100</span><span class="s3">;</span>

    <span class="s3">int </span><span class="s1">counter = </span><span class="s5">0</span><span class="s3">;</span>
    <span class="s4">//Transverse to correct position</span>
    <span class="s1">node* next = first</span><span class="s3">;</span>
    <span class="s3">while </span><span class="s1">(next != </span><span class="s3">nullptr</span><span class="s1">) {</span>
        <span class="s3">if </span><span class="s1">(counter == </span><span class="s5">1</span><span class="s1">) {</span>
            <span class="s1">newNode -&gt; link = next -&gt; link</span><span class="s3">;</span>
            <span class="s1">next -&gt; link = newNode</span><span class="s3">;</span>
        <span class="s1">}</span>
        <span class="s1">cout  &lt;&lt; </span><span class="s2">&quot;The info here is &quot; </span><span class="s1">&lt;&lt; next -&gt; info &lt;&lt; endl</span><span class="s3">;</span>
        <span class="s1">next = next -&gt; link</span><span class="s3">;</span>
        <span class="s1">counter++</span><span class="s3">;</span>
    <span class="s1">}</span>

<span class="s1">}</span></pre>
</body>
</html>