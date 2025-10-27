class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> collisions;
        vector<int> answer;
        for (int &i : asteroids) {
            if (i < 0 && !collisions.empty()) {
                while (!collisions.empty()) {
                    int top = collisions.top();
                    if (top > 0 && abs(top) == abs(i)) {
                        collisions.pop();
                        break;
                    }
                    else if (top > 0 && abs(top) > abs(i)) {
                        break;
                    } else if (top > 0 && abs(top) < abs(i)) {
                        collisions.pop();
                    } else if (top < 0) {
                        collisions.push(i);
                        break;
                    }
                    if (collisions.empty()) {
                        collisions.push(i);
                        break;
                    }
                }

            } else {
                collisions.push(i);
            }
        }
        while (!collisions.empty()) {
            answer.push_back(collisions.top());
            collisions.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
