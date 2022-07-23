#include<vector>

class priorityQueue{
    vector<int> pq;
    public:
        priorityQueue(){

        }

bool isEmpty(){
    return pq.size() == 0;
}

int getMin(){
    if(isEmpyt()){
        return 0;
    }

    return pq[0];
}

void insert(int element){
    pq.push_back(element);
    int childIndex = pq.size()-1;
    while (childIndex > 0)
    {
        int parentIndex = (childIndex -1)/2;
        if (pq[childIndex] < pq[parentIndex])
        {
            int temp = pq[parentIndex];
            pq[childIndex] = pq[parentIndex];
            pq[parentIndex] = temp;
        }
        else{
            break;
        }
        childIndex = parentIndex;
    }
    
}

};
