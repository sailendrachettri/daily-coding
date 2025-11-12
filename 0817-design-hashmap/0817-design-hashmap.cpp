class MyHashMap {
public:
    unordered_map<int, int> mp;

    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        auto it = mp.find(key);

        if(it != mp.end()){
            mp[key] = value;
        }else
            mp[key] = value;
    }
    
    int get(int key) {
        auto it = mp.find(key);

        if(it != mp.end()){
            return it->second;
        }

        return -1;
    }
    
    void remove(int key) {
        auto it = mp.find(key);

        if(it != mp.end()){
            mp.erase(key);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */