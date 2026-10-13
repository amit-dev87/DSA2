class SpecialStack {
  public:
    vector<int>st;
    SpecialStack() {
        
    }

    void push(int x) {
        
        st.push_back(x);
    }

    void pop() {
        if(!st.empty()){
            st.pop_back();
        }
        
    }

    int peek() {
        if(st.empty()){return -1;}
        return st[st.size()-1];
    }

    bool isEmpty() {
        
       return st.empty();
    }

    int getMin() {
        if(st.empty()){return -1;}
        else{
            int m = INT_MAX;
            for(int i : st){
                if(i < m){
                    m=i;
                }
            }
            return m;
            
        }
    }
};