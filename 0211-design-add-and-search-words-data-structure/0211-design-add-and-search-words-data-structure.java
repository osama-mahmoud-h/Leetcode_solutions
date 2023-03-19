class TrieNode{
    boolean isEnd;
    boolean hasChar;
    TrieNode []children;
    public TrieNode (){
        isEnd=false;
        hasChar=false;
        children=new TrieNode[26];
    }
}
class WordDictionary {
TrieNode root=new TrieNode() ;
    /** Initialize your data structure here. */
    public WordDictionary() {
       // root=new TrieNode();
    }
    
    /** Adds a word into the data structure. */
    public void addWord(String word) {
         TrieNode tmp=root;
        for(char c:word.toCharArray()){
            if(tmp.children[c-'a']==null)
                    {tmp.children[c-'a']=new TrieNode();
                    tmp.hasChar=true;
                    }
            tmp=tmp.children[c-'a'];
        }
        tmp.isEnd=true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    public boolean search(String word) {
         TrieNode tmp=root;
        return search(word.toCharArray(),0,root);
       
    }
    boolean search(char ch[],int pos,TrieNode tmp){
             
            if(tmp==null)return false;
            if(pos==ch.length)return tmp.isEnd;
            if(ch[pos]!='.')
            {

               return tmp.children[ch[pos]-'a']!=null&&search(ch,pos+1,tmp.children[ch[pos]-'a']);
            }
            else {
                     for(int j=0;j<26;j++)
                    if(tmp.children[j]!=null)
                    {
                        if( search(ch,pos+1,tmp.children[j]))return true;
                    }
                }
            
       return false;
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */