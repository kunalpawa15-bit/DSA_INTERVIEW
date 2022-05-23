class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    stack<pair<int,int>>s;
    
    
    int next(int price) {
        int count = 1;
        while(!s.empty() && s.top().first<=price)
        {
            count += s.top().second;
            s.pop();
        }
        
        s.push({price,count});
        return count;
        
        
        
    }
};
