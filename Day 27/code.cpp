class RecentCounter {
    vector<int> times;
    int left;

public:
    RecentCounter() {
        left = 0;
    }
    
    int ping(int t) {
        times.push_back(t);
        while (times[left] < t - 3000) {
            left++;
        }
        return times.size() - left;
    }
};


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
