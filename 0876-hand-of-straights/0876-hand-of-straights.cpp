class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) {
            return false;
        }

        // Map to store the count of each card value
        unordered_map<int, int> cardCount;
        for (int card : hand) {
            cardCount[card]++;
        }
        
        for (int card : hand) {
            int startCard = card;
            // Find the start of the potential straight sequence
            while (cardCount[startCard - 1]) {
                startCard--;
            }
            
            // Process the sequence starting from startCard
            while (startCard <= card) {
                while (cardCount[startCard]) {
                    // Check if we can form a consecutive sequence of groupSize cards
                    for (int nextCard = startCard; nextCard < startCard + groupSize; nextCard++) {
                        if (!cardCount[nextCard]) {
                            return false;
                        }
                        cardCount[nextCard]--;
                    }
                }
                startCard++;
            }
        }
        
        return true;
    }
};