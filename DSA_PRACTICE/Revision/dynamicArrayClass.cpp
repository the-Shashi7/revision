class DynamicArray {
    private:
        int * arr ;
        int nextIndex;
        int capacity;
    public:
        DynamicArray(){
            arr = new int[5];
            capacity = 5;
            nextIndex = 0;
        }

        void add(int element){
            if(nextIndex == capacity){
                int * newArray = new int[2* capacity];
                for(int i = 0; i<capacity; i++){
                    newArray[i] = arr[i];
                }
                delete []arr;
                arr = newArray;
                capacity*=2;
            }
           arr[nextIndex] = element;
           nextIndex++; 
        }

        int Get(int i){
            if(i<nextIndex){
                return arr[i];
            }
            else{ 
                return -1;
            }
        }

        void Add(int i, int element){
            if(i<nextIndex){
                arr[i] = element;
            }
            else if(i==nextIndex){
                add(element);
            }
            else{
                return;
            }
        }

        void Display(){
            for (int i = 0; i < nextIndex; i++)
            {
                cout<<arr[i]<<" ";
            }
            
        }

};