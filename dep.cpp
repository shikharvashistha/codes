//D'Escopo-Pape algorithm 
//single source shortest path algorithm
//don't work for negative cycles'
//it's is faster than dijkstra's and bellman-ford in most cases.
#include<vector>
#include<dqueue>
class Edge{
    int to, w;
};
int n;
vector<vector<Edge>> edges;
const int INF=1e9;
void dep(int start, vector<int>& d, vector<int>& p){
    d.assign(n, INF);
    d[start]=0;
    vector<int> m(n, 2);
    //more like dfs
    deque<int> q;
    q.push_back(start);
    p.assign(n, -1);
//https://cp-algorithms.com/graph/desopo_pape.html
//https://www.geeksforgeeks.org/desopo-pape-algorithm-single-source-shortest-path/
//https://www.geeksforgeeks.org/deque-cpp-stl/
}