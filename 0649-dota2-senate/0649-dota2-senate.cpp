class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rq, dq;
        
        for(int i=0; i<senate.size(); i++)
            senate[i] == 'R' ? rq.push(i): dq.push(i);
        
        int a, b;
        while(!rq.empty() and !dq.empty()){
            a = rq.front(), b = dq.front();
            rq.pop(), dq.pop();
            if (a < b) // taking min and pushing it to queue again
                rq.push(a+senate.size());
            else
                dq.push(b+senate.size());
        }
        
		if (rq.size() > dq.size())
			return "Radiant";
		else
			return "Dire";
    }
};