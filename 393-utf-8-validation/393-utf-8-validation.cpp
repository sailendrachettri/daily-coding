class Solution {
public:
    bool validUtf8(vector<int>& data) {
        
        int remBytes = 0;
        
        for(auto val : data)
        {
            if(remBytes == 0)
            {
                if( (val >> 7) == 0b0 )
                    remBytes = 0;
                
                 else if( (val >> 5) == 0b110)
                    remBytes = 1;
                
                 else if( (val >> 4) == 0b1110)
                    remBytes = 2;
                
                 else if( (val >> 3) == 0b11110)
                    remBytes = 3;
                
                else return false;
            }
            else
            {
                if( (val >> 6) == 0b10)
                    remBytes--;
                else
                    return false;
            }
        }
        
        if(remBytes == 0)
            return true;
        
        return false;
        
    }
};