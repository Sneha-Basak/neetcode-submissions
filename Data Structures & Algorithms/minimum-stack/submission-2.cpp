class MinStack {
public:
    long long int minVal;
    std::stack<long long int> st;
    MinStack() {

    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            minVal=val;
        }
        else if(val>=minVal){
            st.push(val);
        }
        else{
            st.push((long long)2*val-minVal);
            minVal = val;
        }
    }
    
    void pop() {
        if(st.top()<minVal){
            minVal=(long long)2*minVal - st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<minVal){
            return minVal;
        }
        else{
            return st.top();
        }
    }
    
    int getMin() {
        return minVal;
    }
};
