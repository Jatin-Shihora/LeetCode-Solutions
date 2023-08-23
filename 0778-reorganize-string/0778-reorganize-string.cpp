class Solution {
public:
 string reorganizeString(string S) {
	vector<int> cnt(26);
	int mostFreq = 0, i = 0;

	for(char c : S)
		if(++cnt[c - 'a'] > cnt[mostFreq])
			mostFreq = (c - 'a');

	if(2 * cnt[mostFreq] - 1 > S.size()) return "";

	while(cnt[mostFreq]) {
		S[i] = ('a' + mostFreq);
		i += 2;
		cnt[mostFreq]--;
	}

	for(int j = 0; j < 26; j++) {
		while(cnt[j]) {
			if(i >= S.size()) i = 1;
			S[i] = ('a' + j);
			cnt[j]--;
			i += 2;
		}
	}

	return S;
}
};