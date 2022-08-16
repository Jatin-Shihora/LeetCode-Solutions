class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};//initializes thee first element as 0 and by defualt it gives zzero to to the rest of the value
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
            //say s is aac    
            //arr[s[0]-'a']=arr['a'-'a']=0++  i.e arr[0]=1
            //arr['a'-'a']=0++      i.e arr[0]=1
            //arr['c'-'a']=2++      i.e arr[2]=3
        }
        for(int i=0;i<s.length();i++){
            if(arr[s[i]-'a'] == 1)
                //arr[0]
                return i;
        }
        return -1;
    }
};