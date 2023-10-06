#include <iostream>
#include <cmath>


using namespace std;

int main() {
    
    long int bin, i, j, length, dec, result= 0, arr[50];
    cout<<"Enter any Binary: ";
    cin>>bin;
    
    for (i=0; bin > 0 ; i++)
    {
        arr[i] = bin%10;
        bin = bin/10;
        
        cout <<endl<<endl<< arr[i]<<endl;
        
    }
    
    length = i-1;
    
    cout<<pow(2,0);
    
    for(j = 0 ; j <= length ; j++ )
    {
        dec = arr[j]*(pow(2,j));
        result = result + dec;
        
       
    }
    
    cout << "The decimal of Binary is : "<<result;
}
