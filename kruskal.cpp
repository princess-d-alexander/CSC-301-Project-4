/*
 * CSC-301
 * kruskal.cpp
 * Spring 2025
 *
 * Partner 1: Princess Alexander
 * Partner 2: Livia Stein Freitas
 * Date: 04/23/25
 */

#include "kruskal.hpp"

using namespace std;

/*
 * find
 * 
 * Find what set vertex v belongs to.
 * 
 * input: an integer v, an integer vector pi
 * output: an integer
 */
int find(int v, vector<int> &pi) {
    if (v != pi[v]){ // if not in the root
        pi[v] = find(pi[v], pi); // set v's parent to be the root
    }
    return pi[v]; // return the root, our new parent
}

/*
 * union_by_rank
 * 
 * Merges the sets containing vertices u and v.
 * 
 * input: integers u and v , integer vector rank, integer vector pi
 * output: nothing
 */
void union_by_rank(int u, int v, vector<int> &rank, vector<int> &pi) {
    if (rank[u] == rank[v]){ 
        //if heights are equal, make u's root to be v's root
        pi[u] = pi[v];
        //v's root's height increases
        rank[v] += 1;
    } else if (rank[u] >= rank[v]){
        // make v's root to be u
        pi[v] = pi[u];
    } else{
        // make u's root to be v's root
        pi[u] = pi[v];
    }
    return;
}

/*
 * kruskal
 */
vector<Edge> kruskal(vector<Vertex> &adjList, vector<Edge> &edgeList) {
    // Initialize the empty MST.
    vector<Edge> mst;
    
    // For each vertex, we need rank values and pi pointers (ints) for the
    // Disjoint Sets. Initialize the rank to 0 and pi to be the vertex labels.
    int n = adjList.size();
    vector<int> rank(n, 0);
    vector<int> pi(n);
    for (int i=0; i<pi.size(); i++) {
        pi[i] = i;
    }

    return mst;
}