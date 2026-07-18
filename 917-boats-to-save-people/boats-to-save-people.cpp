class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
         int boats=0;

         sort(people.begin(), people.end());

         int start=0;
         int end=people.size()-1;

         while(start<=end)
         {
            if(people[end]+people[start]<=limit)
            {
                start++;
            }
            end--;
            boats++;
         }
         return boats;
    }
};