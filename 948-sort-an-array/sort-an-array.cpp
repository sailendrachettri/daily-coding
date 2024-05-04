class Solution {
public:
    void merge(vector<int>& nums, int start,int end){

        int mid = start + (end - start)/ 2;
        int rp=mid+1;
        int lp=start;
        int s=start;

        int buffer[end-start+1];

        int index=0;

        while(lp<=mid && rp<=end){

            if(nums[lp]<nums[rp]){
                buffer[index++]=nums[lp++];
                
            }else {
                 buffer[index++]=nums[rp++];
                

            }
        
        }
        while(lp<=mid){
            buffer[index++]=nums[lp++];
            
        }
        while(rp<=end){

            buffer[index++]=nums[rp++];
            
        }

        for(int i=0;i<end-start+1;i++){
            nums[s++]=buffer[i];


        }
            

    }
        
           


           
            
            











        


        



    
    


     void mergeSort(vector<int>& nums, int start, int end){
        if (end <= start) return; //single element Already sorted.
        int mi = start + (end - start)/ 2;
        mergeSort(nums, start, mi);
        mergeSort(nums, mi+1, end);
        merge(nums,start,end);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;

    }
};


        


       
        