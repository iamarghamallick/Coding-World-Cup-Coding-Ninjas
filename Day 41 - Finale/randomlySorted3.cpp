int modInverse(long long number, long long modulus)
{
    vector<long long> multiplicativeInverse(number + 1);
    multiplicativeInverse[0] = multiplicativeInverse[1] = 1;

    for (int i = 2; i <= number; i++)
    {
        multiplicativeInverse[i] = multiplicativeInverse[modulus % i] * (modulus - modulus / i) % modulus;
    }

    return multiplicativeInverse[number];
}

void dfsFirstTraversal(int vertex, vector<vector<int>> &graph, vector<int> &visited, vector<int> &order)
{
    visited[vertex] = 1;

    for (int i = 0; i < graph[vertex].size(); i++)
    {
        int neighbor = graph[vertex][i];

        if (!visited[neighbor])
        {
            dfsFirstTraversal(neighbor, graph, visited, order);
        }
    }

    order.push_back(vertex);
}

void dfsSecondTraversal(int vertex, int representative, int &cycleSize, vector<vector<int>> &reverseGraph,
                        vector<int> &visited, vector<int> &placementlelo)
{
    visited[vertex] = 1;
    placementlelo[vertex] = representative;
    cycleSize++;

    for (int i = 0; i < reverseGraph[vertex].size(); i++)
    {
        int neighbor = reverseGraph[vertex][i];

        if (!visited[neighbor])
        {
            dfsSecondTraversal(neighbor, representative, cycleSize, reverseGraph, visited, placementlelo);
        }
    }
}

void dfsSuffixArray(int vertex, int modulo, int inverseK, int k, vector<vector<int>> &tree,
                    vector<vector<long long>> &dp, vector<vector<long long>> &suffixArray)
{
    for (int j = 0; j < k; j++)
    {
        dp[vertex][j] = inverseK;
    }

    for (int i = 0; i < tree[vertex].size(); i++)
    {
        int neighbor = tree[vertex][i];
        dfsSuffixArray(neighbor, modulo, inverseK, k, tree, dp, suffixArray);

        for (int j = 0; j < k; j++)
        {
            dp[vertex][j] = dp[vertex][j] * suffixArray[neighbor][j] % modulo;
        }
    }

    suffixArray[vertex][k - 1] = dp[vertex][k - 1];
    for (int j = k - 2; j >= 0; j--)
    {
        suffixArray[vertex][j] = (suffixArray[vertex][j + 1] + dp[vertex][j]) % modulo;
    }
}

int randomlySorted3(int numVertices, int numEdges, vector<vector<int>> &edges, int upperLimitRandom)
{
    int modulo = 1e9 + 7, inverseK = modInverse(upperLimitRandom, modulo);
    vector<long long> powers(numVertices);

    powers[0] = 1;
    for (int i = 1; i < numVertices; i++)
    {
        powers[i] = (powers[i - 1] * inverseK) % modulo;
    }

    vector<vector<int>> graph(numVertices), reverseGraph(numVertices);

    for (int i = 0; i < numEdges; i++)
    {
        int u = edges[i][0], v = edges[i][1];
        graph[u].push_back(v);
        reverseGraph[v].push_back(u);
    }

    vector<int> visited(numVertices);
    vector<int> order;

    for (int i = 0; i < numVertices; i++)
    {
        if (!visited[i])
        {
            dfsFirstTraversal(i, graph, visited, order);
        }
    }

    reverse(order.begin(), order.end());
    visited.assign(numVertices, 0);

    int cycleProduct = 1;
    vector<int> placementlelo(numVertices);

    for (int i = 0; i < numVertices; i++)
    {
        int vertex = order[i];

        if (!visited[vertex])
        {
            int cycleSize = 0;
            dfsSecondTraversal(vertex, vertex, cycleSize, reverseGraph, visited, placementlelo);
            cycleProduct = (cycleProduct * powers[cycleSize - 1]) % modulo;
        }
    }

    vector<vector<int>> tree(numVertices);

    for (int i = 0; i < numEdges; i++)
    {
        int u = edges[i][0], v = edges[i][1];

        if (placementlelo[u] != placementlelo[v])
        {
            tree[placementlelo[u]].push_back(placementlelo[v]);
        }
    }

    vector<vector<long long>> dp(numVertices, vector<long long>(upperLimitRandom));
    vector<vector<long long>> suffixArray(numVertices, vector<long long>(upperLimitRandom));

    dfsSuffixArray(placementlelo[order[0]], modulo, inverseK, upperLimitRandom, tree, dp, suffixArray);

    return (cycleProduct * suffixArray[placementlelo[order[0]]][0]) % modulo;
}

// https://www.codingninjas.com/studio/problems/day-41-ind-vs-aus-valid-worm-graphs_10441523?challengeSlug=coding-world-cup-2023-finale