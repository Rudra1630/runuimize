using namespace std;

int main() {
        int stack[5];
        int top = -1;

        //add cancelled orders
        cout<<"Enter 5 cancelled order numbers: \n";

        for(int i = 0; i < 5; i++)
        {
                cin>> stack[++top];

        }

        //most recent cancelled order
        cout<<"\nMost recent cancelled orders:\n";

        while(top >= 0)
        {
                cout<< stack[top] << endl;
                top--;
        }
        return 0;
}
