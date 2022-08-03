class MyCalendar {
public:
    
    map<int,int>m;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if((start>=it->first && start<it->second) || (end<=it->second && end > it->first) || (start<it->first && end>=it->second))
                return false;
        }
        
        m[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
