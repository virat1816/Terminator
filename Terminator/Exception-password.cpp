#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char password[150];
    int p;
    cout<<"Enter password in uppercase : ";
    cin>>password;
	try{
	for (p=0;p<=50;p++){
        if (isupper(password[p])==1){
        goto n;			
        }
		if (p == 50){
           throw password;           
        }
    }
	n:
	cout<<"Your password is valid.";	
	}
	catch(...){
	 	cout<<"Try again , Enter valid password.";
	}
	
    return 0;
}
