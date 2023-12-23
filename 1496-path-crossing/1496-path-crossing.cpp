#include <string>

class Solution {
public:
    bool isPathCrossing(std::string path) {
        int a = 0;
        int b = 0;
        std::set<std::pair<int, int>> visited;
        visited.insert({a, b});

        for (int i = 0; i < path.length(); i++) {
            if (path[i] == 'N') {
                b++;
            } else if (path[i] == 'S') {
                b--;
            } else if (path[i] == 'W') {
                a--;
            } else {
                a++;
            }
            if (visited.count({a, b}) > 0) {
                return true;
            }
            visited.insert({a, b});
        }
        return false;
    }
};
