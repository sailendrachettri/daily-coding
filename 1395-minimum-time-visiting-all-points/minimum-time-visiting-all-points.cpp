class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;

        for(int i = 0; i < points.size() - 1; i++){
            time += getDistanceBetweenPoints(points[i], points[i+1]);  
        }
        return time;
    }

    int getDistanceBetweenPoints(vector<int> &point1, vector<int> point2){
        return max(abs(point1[0] - point2[0]), abs(point1[1] - point2[1]));
    }
};