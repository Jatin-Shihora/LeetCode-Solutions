class Solution {
public:
    unordered_map<string,string> codeDB,urlDB;
    const string chars= "01234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    string getCode(){
        string code = "";
        for(int  i = 0; i<6;i++) code+=chars[rand()%62];
        return "http://tinyurl.com/" + code;
    }
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(urlDB.find(longUrl) != urlDB.end()) return urlDB[longUrl];
        string code = getCode();
        while(codeDB.find(code) != codeDB.end()) code = getCode();
        codeDB[code] = longUrl;
        urlDB[longUrl] = code;
        return code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return codeDB[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));