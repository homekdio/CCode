class Solution {
public:
    vector<int> partitionLabels(string s) {
    int last[26];
    for(int i=0;i<s.size();i++)
    {
        last[s[i]-'a']=i;
    }
    vector<int> partition;
    int start=0,end=0;
    for(int i=start;i<s.size();i++)
    {
        end=max(end,last[s[i]-'a']);
        if(i==end)
        {
            int x=end-start+1;
            partition.push_back(x);
            start=end+1;
        }
    }
    return partition;
    }
};