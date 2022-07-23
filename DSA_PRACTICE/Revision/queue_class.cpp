class Queue{
    int *data;
    int firstIndex;
    int nextIndex;
    int capacity;
   public:
      Queue(){
          data = new int[4];
          firstIndex = 0;
          nextIndex = 0;
          capacity =4;

      }
      
      void Enqueue(int element){
          if(nextIndex == capacity){
              int* newData = new int[2*capacity];
              for (int i = 0; i < nextIndex; i++)
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

      int Dequeue(){
          if(nextIndex == 0 && firstIndex ==0){
              cout<<"Stack Queue is Empty"<<endl;
          }
          //delete [firstIndex]data;
          else{
              firstIndex++;
              return data[firstIndex];}

        return data[firstIndex];
      }

      bool isEmpty(){
          return nextIndex == firstIndex;
      }

      int size(){
          return nextIndex-firstIndex;
      }
     
     int front(){
         if (isEmpty()){
            cout<<"Queue is empty"<<endl;
         }
        else return data[firstIndex];
        return 0;
    }

};