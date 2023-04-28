#include <iostream>

using namespace std;

int main()
{
    int p=50;
    int q=4;
    
    try{
        if(q==0){
            throw q;
        }
        else{
            cout << "Divide:"<< p/q << endl;
        }
    }
    catch(int n){
        cout << "Cannot divide by zero:"<< n;
    }

    return 0;
}

