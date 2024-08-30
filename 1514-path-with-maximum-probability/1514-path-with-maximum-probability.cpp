class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int, vector<pair<int, double>>> mp;
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            mp[u].push_back({v, prob});
            mp[v].push_back({u, prob});  // Since the graph is undirected
        }

        priority_queue<pair<double, int>> pq;
        vector<double> result(n, 0);
        result[start_node] = 1.0;
        pq.push({1.0, start_node});

        while(!pq.empty()) {
            int currnode = pq.top().second;
            double currprob = pq.top().first;
            pq.pop();  // Pop the current node after processing it

            for(auto &temp : mp[currnode]) {
                int adjnode = temp.first;
                double adjprob = temp.second;
                if(result[adjnode] < currprob * adjprob) {
                    result[adjnode] = currprob * adjprob;
                    pq.push({result[adjnode], adjnode});
                }
            }
        }

        return result[end_node];
    }
};
