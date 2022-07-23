class StackUsingArray
{
private:
    int*data;
    int nextIndex;
    int capacity;
public:
    StackUsingArray(){
        data = new int[2];
        nextIndex = 0;
        capacity = 2;
    };

int size(){
    return nextIndex;
}

bool isEmpty(){
    return nextIndex == 0;
}

void push(int element){
    if (nextIndex == capacity)
    {
        int * newData = new int[2*capacity];
        for (int i = 0; i < capacity; i++)
        {
            newData[i] = data[i];
        }
        capacity*=2;
        delete []data;
        data = newData;

        data[nextIndex] = element;
        nextIndex++;
        
    }
    else{
        data[nextIndex] = element;
        nextIndex++;
    }
}

int pop(){
    if (nextIndex==0)
    {
        cout<<" Stack Is Empty "<<endl;
    }
    nextIndex--;
    return data[nextIndex];
}
int top(){
    if (isEmpty())
    {
        cout<<"Stack Is Empty"<<endl;
        return INT_MIN;
    }
    return data[nextIndex-1]; 
  }

};
