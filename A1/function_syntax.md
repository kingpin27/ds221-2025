## **Function:** `question_one`  

---

Given a list of parcels, each represented as $[id, weight]$, this function
identifies parcels with duplicate IDs and selects the one with the 
minimum weight for each such ID.  

$
\textbf{Input:}
$
- $ \texttt{parcels} $: vector of vectors where  
  - $ \texttt{parcels[i][0]} = $ ID of the $i$-th parcel  
  - $ \texttt{parcels[i][1]} = $ weight of the $i$-th parcel  

$
\textbf{Output:}
$
- $ \texttt{output} $: vector of vectors where each entry corresponds to a parcel  
  - $ \texttt{output[i][0]} = $ parcel ID that appears more than once in input  
  - $ \texttt{output[i][1]} = $ minimum weight among all parcels with ID $\texttt{output[i][0]}$  

**Function Signature:**  

```cpp
vector<vector<int>> question_one(const vector<vector<int>>& parcels);
```


<br><br>



## **Function:** `question_two`  

---

The warehouse conveyor belt network is structured as a binary tree:  
- Each node represents a junction where parcels may be routed left or right.  
...

$
\textbf{Input:}
$  
1. **Two vectors representing tree traversals**  
   - $ \texttt{preorder} $: preorder traversal of the binary tree formed by convyer belt network 
   - $ \texttt{inorder} $: inorder traversal of the binary tree formed by convyer belt network 
   <!-- - These uniquely determine the binary tree structure.   -->

2. **A mapping of parcels at leaf nodes**  
   - $ \texttt{leafParcels[i]} $: vector of parcel IDs at the $i$-th loading junction (leaf node)  
   - Parcels on internal nodes can be inferred from their subtrees.  

3. **A list of query lists of parcel IDs**  
   - $ \texttt{query} $: vector of vector of parcel IDs to check  
    - $ \texttt{query[i]} $: i-th vector of parcel IDs to check  

$
\textbf{Output:}
$  
- A vector of non-nef integers

**Function Signature:**  

```cpp
vector<int> question_three(
    const vector<int>& preorder,
    const vector<int>& inorder,
    const vector<vector<int>>& leafParcels,
    const vector<vector<int>>& query
);
```



<br><br>


## **Function:** `question_three`  

---

The road map of the country is represented as a weighted graph:  
- Each city is a node.  
- Each road between two cities is an edge with a weight representing time taken to travel the road with normal fuel.  
...

$
\textbf{Input:}
$  
1. **Graph of the country**  
   - $ \texttt{edges} $: a vector of vectors where  
     - $ \texttt{edges[i][0]} = $ starting city of the $i$-th road (positive integer)
     - $ \texttt{edges[i][1]} = $ destination city of the $i$-th road  (positive integer)
     - $ \texttt{edges[i][2]} = $ time taken to travel from $ \texttt{edges[i][0]} $ to $ \texttt{edges[i][1]} $ with normal fuel. 
     - Roads are bidirectional (undirected edges). (even positive integer)

2. **Metro cities**  
   - $ \texttt{metro_cities} $: a vector containing metro cities (node numbers of metro city)

$
\textbf{Output:}
$  
- A non-neg intger or -1 if it is not possible for two friends to meet

**Function Signature:**  

```cpp
int question_three(
    const vector<vector<int>>& edges,
    const vector<int>& metro_cities
);
```




