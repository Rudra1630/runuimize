#include<iostream>
using namespace std;

int main() {
        int queue[5];
        int front = 0;
        int rear = 0;

        //add orders
        cout<<"Enter 5 Customer Order Numbers: \n";

        for(int i = 0; i < 5; i++)
        {
                cin>> queue [rear];
                rear++;
        }


        //processing  order

        cout<<"\nProcessing order:\n";

        while(front < rear)
        {
                cout<<"Processing orders: " << queue[front] << endl;
                front++;
        }
        return 0;
}
