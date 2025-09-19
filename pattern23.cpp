#include<iostream>
using namespace std;
int main() {

    int n;
    cin>> n;

    int i = 1;
    while(i<=n) { 
        int j = 1;
        while(j<=n-i + 1) {
            cout<<j;
            j=j+1;
// check babbar solution crazy guy did it in just  3 phases

        }

        int star =  i-1;
        while(star) {

            cout<<"*";
            star = star-1;

        }


        int space =  i - 1;

    while(space) {

        cout<<"*";
        space = space - 1;
    }

    int a = n - i +1;
    while(a) {

        cout<< a;
        a=a-1;
    }
        cout<<endl;
        i=i+1;
        
    }
    

}