class Trie {
    private:
unordered_set<string> words;
public:


    Trie() {
        
        
    }
    
    void insert(string word) {
        
            words.insert(word);
        
        
    }
    
    bool search(string word) {
        return words.count(word);
        
    }
    
    bool startsWith(string prefix) {
        for( const auto& word : words)
        {
            if(word.substr(0, prefix.size()) == prefix)
            {
                return true;
            }
        }

        return false;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */