#include <iostream>
using namespace std;

class parent{
    public:
    int data;

    //Constructor
    parent(int data){
        this->data = data;
        cout<<"constructor called"<<endl;
    }

    //Destructor
    ~parent(){
        cout<<"destructor called"<<endl; //or write something else
    }
};

int main(){

    // Making Object statically
    parent a(10);

    // Making Object dynamically
    parent* dyobj = new parent(10);
    // Manually dest called 
    delete dyobj;
    
}