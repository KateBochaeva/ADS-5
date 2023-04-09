// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size = 0>
class TStack {
  private:
    T arr[size]={0};
    int top;
 public:
    TStack() {
        top=-1;
    }
    void Push(const T& value){
        if (!isFull()){
            arr[++top]=value;
        }
    }
    T get() const{
        return arr[top];
    }
    T pop(){
        return arr[top--];
    }
    int GetTop() const { return top;
    }
    bool isEmpty() const{
        return top == -1;
    }
    bool isFull() const{
        return top == size;
    }
};

#endif 
