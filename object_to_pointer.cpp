#include<iostream>

using namespace std;

class Demo{

    public:
    
        int x;

        void setvalueX(int x){
            this->x=x;
        }
        int getX(){
            return x;
        }
};

int main(){

    Demo d;    // object
    Demo *d1;  // pointer of that object

    d.setvalueX(12);
    cout<<d.getX()<<endl;

    d1 = &d;

    cout<<d1->getX()<<endl;

    return 0;
    
}