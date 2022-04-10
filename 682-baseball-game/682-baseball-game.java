class Solution {
public int calPoints(String[] ops) {
    int ans = 0;
    Stack<Integer> stk = new Stack<>();
    for (String op : ops) {
        if (op.equals("C")) { ans -= stk.pop (); continue; }
        else if (op.equals ("D")) stk.push (stk.peek () * 2);
        else if (op.equals ("+")) stk.push (stk.get(stk.size () - 1) + stk.get(stk.size () - 2));
        else stk.push (Integer.valueOf (op));
        ans += stk.peek(); 
    }
    return ans;
}
}