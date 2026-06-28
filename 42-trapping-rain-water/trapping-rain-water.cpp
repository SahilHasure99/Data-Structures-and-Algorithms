class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0;                        //i use two poiner approch this best timecomplexty is 0(n)
        int rightmax=0;
        int totalwater=0;
        int start=0;//start pointer index
        int end=height.size()-1;//end pointer index

        while(start<end)
        {
            leftmax=max(leftmax,height[start]);//find left maxmium postion
            rightmax=max(rightmax,height[end]);//find right maximun postion

            if(leftmax<rightmax)
            {
                totalwater=(totalwater+leftmax)-height[start];//this is formula
                start++;
            }else
            {
                totalwater=(totalwater+rightmax)-height[end];//this is also formula
                end--;
            }
        }
        return totalwater;
    }
};