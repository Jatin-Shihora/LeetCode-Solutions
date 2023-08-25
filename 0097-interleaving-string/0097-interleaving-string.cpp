class Solution {
	bool validateHelper(string s1, string s2, string s3,int i,int j,int k,vector<vector<int>> &table){
		if(i>s1.size() || j>s2.size() || k>s3.size()){
			return 1;
		}

		if(i==s1.size() && j==s2.size() && k==s3.size())
			return 1;
		
		if(table[i][j]!=-1)
			return table[i][j];

		bool ans = 0;
		if(s1[i]==s2[j] && s1[i]==s3[k] && s2[j]==s3[k]){
			ans = validateHelper(s1,s2,s3,i+1,j,k+1,table) || validateHelper(s1,s2,s3,i,j+1,k+1,table);
		}
		else if(s1[i]==s3[k]){
			ans = validateHelper(s1,s2,s3,i+1,j,k+1,table);
		}
		else if(s2[j]==s3[k]){
			ans = validateHelper(s1,s2,s3,i,j+1,k+1,table);
		}

		table[i][j] = ans;

		return ans;
	}
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size() + s2.size()!= s3.size())
        	return 0;

   	  vector<vector<int>> table(s1.size()+1,vector<int>(s2.size()+1,-1));

        return validateHelper(s1,s2,s3,0,0,0,table);
    }
};