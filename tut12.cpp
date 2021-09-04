// // C++ code to illustrate return
// // statement
// #include <iostream>
// using namespace std;

// // non-void return type
// // function to calculate sum
// int SUM(int a, int b)
// {
// 	int s1 = a + b;
// 	return s1;
// }

// // returns void
// // function to print
// void Print(int s2)
// {
// 	cout << "The sum is "<< s2;
// 	return;
// }

// int main()
// {
// 	int num1 = 10;
// 	int num2 = 10;
// 	int sum_of = SUM(num1, num2);
// 	Print(sum_of);
//     cout<<sum_of;
// 	return 0;
// }

//*************************************************
//-------find the position of array element--------
//*************************************************
/*
#include <iostream>
using namespace std;

int main()
{
	int arr[]={11,2,23,54,65,86};
    int n=6 ,key;
    cout<<"enter the number: "<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        cout<<"the position is:"<<(i+1);
        break;
        }
        else{
            cout<<"the number is not in the array"<<endl;
            break;
        }
    }
    

// 	return 0;
// }
*/

//*****************************************
//------------fibonacci series-------------
//*****************************************
/*
#include<iostream>
using namespace std;

int main(){
    int n1=0,n2=1,n3,i,num;
    cout<<"enter the number of elements: ";
    cin>>num;
    cout<<n1<<" "<<n2<<" ";
    for(i=2;i<num;i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}
*/

//**************************
//--------palindrome--------
//**************************
/*
#include<iostream>
using namespace std;

int main(){
    int sum=0,r,i,temp;
    cout<<"enter the number: ";
    cin>>i;
    temp=i;
    while(i>0){
        r=i%10;
        sum=(sum*10)+r;
        i=i/10;
    }
    if(sum==temp)
    cout<<"the number is palindrome";
    else
    cout<<"the number is not palindrome";
    return 0;
}
*/

//******************************************
//----------------factorial-----------------
//******************************************
/*
#include<iostream>
using namespace std;

int main(){
    int a,i,j=1;
    cout<<"enter the value: ";
    cin>>a;
    for(i=1;i<=a;i++){
        j=j*i;
    }
    cout<<j;
    return 0;
}
*/



//******************************************************
//--------check whether the number is prime or not------
//******************************************************
/*
#include <iostream>
using namespace std;

int main()
{
    int x, i;
    cout << "enter the number: " << endl;
    cin >> x;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << "the number is not prime" << endl;
            break;
        }
    }
    if (i == x)
    {
        cout << "the number is prime" << endl;
    }
    return 0;
}
*/




//***************************************************
//---------prime number between given number---------
//***************************************************
/*
#include<iostream>
using namespace std;

int main(){
    int a,b,i,j;
    cin>>a>>b;
    for(i=a; i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){

                break;
            }
        }
        if(i==j){
            cout<<i<<endl;
        }
    }
    return 0;
}
*/




//***************************************
//---------Rectangular star pattern------
//***************************************
/*            * * * * *
              * * * * *
              * * * * *
              * * * * *
              * * * * *
              * * * * *
              
       */
/*
  #include<iostream>
  using namespace std;

  int main(){

      int row, col;
      cout<<"enter row & column: ";
      cin>>row>>col;

      for(int i=1;i<=row;++i){

          for(int j=1;j<=col;j++){
              cout<<"*";
          }
          cout<<"\n";
      }
      return 0;
  }
*/




//*******************************
//-------hollow rectangle--------
//*******************************
/*          * * * * *
            *       *
            *       *
            *       *
            *       *
            *       *
            * * * * *
                         */
/*
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"enter the row and column: ";
    cin>>row>>col;

    for(int i=1; i<=row; ++i)
    {

        for(int j=1; j<=col; ++j)
        {

            if(i==1 || i==row || j==1 || j==col)
            {

                cout<<"*"<<" ";
            }
             else
             {
                    cout<<" "<<" ";
                }

        }
        cout<<"\n";
    }
    return 0;
}
*/




//*****************************************
//-----------inverted star pyramid---------
//*****************************************
/*     * * * * *
                   * * * *
                   * * *
                   * *
                   * 
                          */

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of rows: ";
//     cin>>n;
//     for(int i=n; i>=1; --i){
//         for(int j=1; j<=i; ++j){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//*****************************************
//-------mirrored 90deg triangle---------
//*****************************************
/*
                     *
                   * *
                 * * *
               * * * *
             * * * * *
                           */
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/





//*****************************************
//-----------number triangle ---------
//*****************************************

/*               1
                 2 2
                 3 3 3
                 4 4 4 4
                 5 5 5 5 5
                             */
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/





//*****************************************
//-----------floyd's triangle---------
//*****************************************
/*
                 1
                 2  3
                 4  5  6 
                 7  8  9  10
                 11 12 13 14 15
                                 */
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//      int count=01;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count<<"  ";
//                 count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }