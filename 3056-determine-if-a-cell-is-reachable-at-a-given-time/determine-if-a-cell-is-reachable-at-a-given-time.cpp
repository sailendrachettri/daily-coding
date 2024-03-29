class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx == fx && sy == fy)
            return (t > 1 || t == 0);
        
        int heightDifference = abs(sy-fy);
        int widthDifference = abs(sx - fx);

        int extraTime = abs(heightDifference - widthDifference);

        return (min(heightDifference, widthDifference) + extraTime) <= t;
    }
};