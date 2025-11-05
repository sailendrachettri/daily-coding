class RandomizedSet {
public:
    RandomizedSet() {
        
    }

    unordered_map<int, int> mp;
    
    bool insert(int val) {
        auto it = mp.find(val);

        if(!(it != mp.end())){
            mp[val]++;

            return true;
        }

        return false;
    }
    
    bool remove(int val) {
        auto it = mp.find(val);

        if(!(it != mp.end())) return false;

        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int val = rand()%mp.size();
        auto it = (mp.begin());
        
        while(val--){
            it++;
        }

        return it->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */