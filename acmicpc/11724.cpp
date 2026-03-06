#include <iostream>
#include <vector>

using namespace std;


void dfs(vector<vector<int>>& neighbors, vector<bool>& visited, int start)
{
    visited[start] = true;

}

int main()
{
    int N, M;

    cin >> N >> M;

    vector<vector<int>> neighbors;

    vector<bool> visited (N+1, false);

    for(int i = 0; i < M ; i++)
    {
        int a,b;
        cin >> a>> b;

        neighbors[a].push_back(b);
        neighbors[b].push_back(a);
    }


}