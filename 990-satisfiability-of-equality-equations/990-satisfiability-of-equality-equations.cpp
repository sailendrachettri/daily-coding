class Solution {
    
    int fetchParent(int index, vector<int> parent)
    {
        if(parent[index] == index)
            return index;
        
        return fetchParent(parent[index], parent);
    }
    
public:
    bool equationsPossible(vector<string>& equations) {
        
        vector<int> parent(26);
        
        for(int i = 0; i < 26; i++)
        {
            parent[i] = i;
        }
        
        for(auto equation : equations)
        {
            char equality = equation.at(1);
            
            if(equality == '=')
            {
                int var1 = fetchParent(equation.at(0) - 'a', parent);
                int var2 = fetchParent(equation.at(3) - 'a', parent);
                
                if(var1 != var2)
                    parent[var2] = var1;
            }
        }
        
        for(auto equation : equations)
        {
            char equality = equation.at(1);
            
            if(equality == '!')
            {
                int var1 = fetchParent(equation.at(0) - 'a', parent);
                int var2 = fetchParent(equation.at(3) - 'a', parent);
                
                if(var1 == var2)
                    return false;
            }
        }
        
        return true;
        
    }
};







