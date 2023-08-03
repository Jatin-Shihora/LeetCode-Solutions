class Solution {
public:
vector<string> letterCombinations(string digits) {
	if(digits == "") return {};
	vector<string> mappings{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans{""};
	for(auto digit : digits){
		vector<string> extendCombination;
		for(auto& currentCombination : ans)
			for(auto newChar : mappings[digit - '2'])
				extendCombination.push_back(currentCombination + newChar);                            
		ans = move(extendCombination); // same as ans = extendCombination, just avoids copying each value. You Can also use swap(ans,extendCombination)
	}
	return ans;
}
};