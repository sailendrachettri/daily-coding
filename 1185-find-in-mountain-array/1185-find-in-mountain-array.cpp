/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        int start = 0;
        int end = arr.length() - 1;
        int mid = start + (end - start) / 2;

        while(start < end){
            if(arr.get(mid) < arr.get(mid+1))
                start = mid + 1;
            else
                end = mid;
            
            mid = start + (end - start) / 2;
        }

        int peak = mid;
        int left = -1, right = -1;

        start = 0;
        end = peak;
        mid = start + (end - start) / 2;

        while(start <= end){
            int middle = arr.get(mid);
            if(middle == target)
                left = mid;
            if(middle < target)
                start = mid + 1;
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;
        }

        start = peak;
        end = arr.length() - 1;
        mid = start + (end - start) / 2;

        while(start <= end){
            int middle = arr.get(mid);
            if(middle == target)
                right = mid;
            if(middle > target)
                start = mid + 1;
            else
                end = mid - 1;
            
            mid = start + (end - start) / 2;
        }

        if(left == right)
            return left;
        else if(left != -1)
            return left;
        else
            return right;
    }
};