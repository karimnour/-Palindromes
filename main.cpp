#include <iostream>

using namespace std;
char Palindromes(int n, char arr1[])
{

    char  arr2[n];
    for (int j=n-1;j>=0;j--)    // this is the reverse function
    {
           arr2[n-j-1]=arr1[j];
    };
                  //  0 ->2
                 //  1 ->1
                 //  2 ->0
                 /////
                 // 0 ->4
                 // 1->3
                 // 2_>2
                 // 3->1
                 // 4 ->0
     for (int i=0;i<n ;i++)
     {
         if (arr2[i]!=arr1[i])
         {
             cout<<"false"<<endl;
             break;
         }
         else
            cout <<"true  "<<endl;
            break;
     }

};

int main()
{
    cout<<"enter the size "<<endl;
    int a;
    cin >>a;
    char brr1[a];
    cout<<"enter the data elements "<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>brr1[i];
    }
    Palindromes(a,brr1);
    return 0;
}
