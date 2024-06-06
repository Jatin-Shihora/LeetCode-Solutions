class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        // Map to store the count of each card value
        map<int, int> cardCount;
        for (int card : hand) {
            cardCount[card]++;
        }

        // Queue to keep track of the number of new groups starting with each card value
        queue<int> groupStartQueue;
        int lastCard = -1, currentOpenGroups = 0;

        for (auto& entry : cardCount) {
            int currentCard = entry.first;

            // Check if there are any discrepancies in the sequence or more groups are required than available cards
            if ((currentOpenGroups > 0 && currentCard > lastCard + 1) || currentOpenGroups > cardCount[currentCard]) {
                return false;
            }

            // Calculate the number of new groups starting with the current card
            groupStartQueue.push(cardCount[currentCard] - currentOpenGroups);
            lastCard = currentCard;
            currentOpenGroups = cardCount[currentCard];

            // Maintain the queue size to be equal to groupSize
            if (groupStartQueue.size() == groupSize) {
                currentOpenGroups -= groupStartQueue.front();
                groupStartQueue.pop();
            }
        }

        // All groups should be completed by the end
        return currentOpenGroups == 0;
    }
};
