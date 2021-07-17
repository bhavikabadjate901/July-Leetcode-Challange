class Solution {
public:
    vector<int> grayCode(int n) {
        // [0]
        // [0,1] => add 1 --> 1
        // [0,1,3,2] add 2 --> 2
        // [0,1,3,2,6,7,5,4] add 4 --> 3
        // [0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8]
        
        vector<int>v;
        v.push_back(0);
        int adding_fac = 1;
        for(int j = 0; j < n ; j++)
        {
           int sz = v.size();
            
            for(int i = sz - 1; i >= 0; i--)
            {
                v.push_back(v[i] + adding_fac);
                
            }
            adding_fac = adding_fac*2;
        }
        
        return v;
    }
};
