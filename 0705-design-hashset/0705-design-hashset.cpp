class MyHashSet {
public:
    vector <bool> x;
    MyHashSet() {
        x.resize(1000001, false);
    }
    
    void add(int key) {
        x[key] = true;
    }
    
    void remove(int key) {
        x[key] = false;
    }
    
    bool contains(int key) {
        return x[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */