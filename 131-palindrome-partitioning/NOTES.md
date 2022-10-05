if (index == s.size()) {
res.push_back(path);
return;
}
for (int i = index; i < s.size(); ++i) {
if (isPalindrome(s, index, i)) {
path.push_back(s.substr(index, i - index + 1));
partitionHelper(i + 1, s, path, res);
path.pop_back();
}
}
}
​
bool isPalindrome(string s, int start, int end) {
while (start <= end) {
if (s[start++] != s[end--])
return false;
}
return true;
}
};
```
***
***
**If you have some doubts feel free to bug me anytime or If you understood than don't forget to upvote ;)**