class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int l = 0;
        int r = height.size()-1;
        int vol = 0;

        while(r > l)
        {
            vol = max(vol, min(height[l],height[r])*(r-l));
            height[l] > height[r] ? r-- : l++;
        }

        return vol;
    }
};
