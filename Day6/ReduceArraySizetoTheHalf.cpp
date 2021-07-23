class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int>mp;
        for (int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        
        vector<int>freq;
        
        for (auto x : mp)
        {
            freq.push_back(x.second);
        }
        
        sort(freq.begin(), freq.end(), greater<int>());
        int sz = arr.size();
        int count =0;
        int i = 0;
        while(sz > arr.size()/2)
        {
            sz = sz - freq[i];
            i++;
            count++;
        }
        
        
        
        return count;
        
    }
};
