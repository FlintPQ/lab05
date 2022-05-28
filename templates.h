#ifndef LAB05_TEMPLATES_H
#define LAB05_TEMPLATES_H

#include <algorithm>

template<typename T>
void my_swap(T &a, T &b){
    T buff = a;
    a = b;
    b = buff;
}


template<typename T, int N>
class QQ{
private:
    T *data;
    int tail = 0;
    int head = -1;
    int len;

public:
    QQ(): data(new T[N]), len(N){}

    int max_length(){
        return len;
    }

    int length(){
        int cs;

        if (head == -1) {
            return 0;
        } else if (head >= tail) {
            cs = head - tail + 1;
        } else {
            cs = len - tail + head + 1;
        }

        return cs;
    }

    void push(T x){
        if (length() == len){
            throw std::out_of_range("Roof is reached");
        }
        head = (head + 1) % len;
        data[head] = x;
    }

    T pop(){
        int ri = tail;
        if (head == -1){
            throw std::out_of_range("Floor is reached");
        } else if (tail == head) {
            head = -1;
            tail = 0;
        } else {
            tail = (tail + 1) % len;
        }

        return data[ri];
    }
};

#endif //LAB05_TEMPLATES_H