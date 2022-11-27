for(int i=0;i<s.size();i++){
vector<int> freq(26,0);
for(int j=i;j<s.size();j++){
freq[s[j]-'a']++;
ans+=findBeauty(freq);
}
}