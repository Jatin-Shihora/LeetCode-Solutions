class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        # Initialize list of N friends, labeled from 1 to N
        circle = list(range(1, n + 1))
        
        # Maintain the index of the friend to start the count on
        startIndex = 0
        
        # Perform eliminations while there is more than 1 friend left
        while len(circle) > 1:
            # Calculate the index of the friend to be removed
            removalIndex = (startIndex + k - 1) % len(circle)
            
            # Remove the friend at removalIndex
            circle.pop(removalIndex)
            
            # Update startIndex for the next round
            startIndex = removalIndex
        
        # Return the last remaining friend
        return circle[0]
