template <typename T>

class Pair{
    T first;
    T second;
public:
    void setF(T first){
        this->first = first;
    }
    T getF(){
        return first;
    }

    void setS(T second){
        this->second = second;
    }

    T getS(){
        return second;
    }
};

