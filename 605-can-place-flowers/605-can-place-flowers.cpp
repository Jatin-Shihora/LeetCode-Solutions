class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //Edge case 
        /*Because than we are checking if there are three empty plots in a row, 
        and in the case that the two first/last slots are empty we can place flowers there, 
        but it doesn't answer the condition. So we have to add an empty plot to make it three.
        */
        if(n==0) return true;
        if(flowerbed.size()==0) return false;
        if(flowerbed.size()==1) return flowerbed[0]==0;
        
        //Add empty pots in the background
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        
        //check if there are empty rows in the row
        int flowers = 0, i=0;
        while((i<flowerbed.size()-2) && (flowers<n)){
            if((flowerbed[i]==0) && (flowerbed[i+1]==0) && (flowerbed[i+2]==0)){
                flowers++;
                flowerbed[i+1]=1;
            }
            i++;
        }
        return flowers==n;
    }
};