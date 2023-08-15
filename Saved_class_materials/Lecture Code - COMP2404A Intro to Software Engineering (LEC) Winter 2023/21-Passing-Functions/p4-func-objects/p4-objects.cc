#include <iostream>
#include <string>
#include <functional>

using namespace std;

int add(int x, int y){
    return x+y;
}

int mult(int x, int y){
    return x * y;
}

int subtract(int x, int y){
    return x - y;
}

void invoke(int x, int y, int func (int, int)){
        cout<<"The result of your operation is "<<func(x,y)<<endl;
}

void invoke2(int x, int y, function<int(int, int)> func){
        cout<<"The result of your operation is "<<func(x,y)<<endl;
}

template <typename F>
void invoke3(int x, int y, F func){
        cout<<"invoke 3"<<endl;
        cout<<"The result of your operation is "<<func(x,y)<<endl;
}

template <typename T, typename F>
void invoke4(T x, T y, F func){
        cout<<"invoke 4"<<endl;
        cout<<"The result of your operation is "<<func(x,y)<<endl;
}

struct myadder{
    int operator()(int x, int y){return x + y;}
};

int main(){
    int x, y, op;
    cout<<"Input 2 integers: ";
    cin >> x >> y;
    cout<<"Input an operation: "<<endl;
    cout<<" 1) addition\n 2) multiplication \n 3) subtraction ";
    cin >> op;

    

    myadder adder;
    switch(op){
        case 1: invoke2(x, y, adder); break;
        case 2: invoke3(x, y, mult); break;
        case 3: invoke3(x, y, subtract); break;
    }

    

}