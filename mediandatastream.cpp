class MedianFinder {

private:
    priprity_queue<int>maxh;
    priprity_queue<int,greater<int>>minh;
    int maxL;
    int maxR;
    int sizeL;
    int sizeR;
public:
    /** initialize your data structure here. */
    MedianFinder() {
        maxL=-1;
        maxR=-1;
        sizeR=0;
        sizeL=0;        
    }
    
    void addNum(int num) {

        if()



        
    }
    
    double findMedian() {
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */