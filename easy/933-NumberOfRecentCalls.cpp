class RecentCounter {
public:
    RecentCounter() {

    }
    
    int ping(int t) {
        recentRequest.push(t);
        int newLow = t - 3000;

        int curLow = recentRequest.front();
        while (curLow < newLow) {
            recentRequest.pop();
            curLow = recentRequest.front();
        }

        return recentRequest.size();
    }

    queue<int> recentRequest;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
