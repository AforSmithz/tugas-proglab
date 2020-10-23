#include <iostream>
using namespace std;
int main()
{
    int i, max1, max2, min1, min2,temp, n;
    cout<<"masukkan banyak n : "<<endl;
    cin>>n;
    int A[n];
    for (i=0; i<n; i++)
    {
        cout<<" masukkan data dengan bilangan yang berbeda : "<<endl;
        cin>>A[i];
    }

    if(A[0] < A[1])
    {
        max1=A[1];
        max2 =A[0];
        min1 = A[0];
        min2 = A[1];        
    }
    else
    {
        max1 = A[0];
        max2 = A[1];
        min1 = A[1];
        min2 = A[0]; 
    }
    

    for (i=0; i<n; i++)
    {
        if(A[i] > max1)
        {
            max2 = max1;
            max1 = A[i];
        }

        else if (A[i] > max2 && A[i] != max1) 
        
        {
            max1 = A[i];
        }        

    } 

    for(i=0;i<n;i++)
    {
        if(A[i] < min1)
        {
            temp = min1;
            min1 = A[i];
            min2 = temp;
        }
        else if (A[i] < min2 && A[i] != min1)
        {
            min2 = A[i];            
        }
    }

    cout<<"bilangan terbesar kedua adalah: "<<max2 <<endl;
    cout<<"bilangan terkecil kedua adalah: "<<min2 <<endl;
    return 0;
}