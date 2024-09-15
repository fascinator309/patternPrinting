/*
(1)
1 2 3
4 5 6
7 8 9
*/


/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n;j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
} */

/*
(2)
1 
2 3 
4 5 6 
7 8 9 10
*/


/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i;j++){
            cout << c<<" ";
            c++;
        }
        cout << endl;
    }
} */


/*
(3)
* 
* * 
* * * 
* * * *
*/

/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i;j++){
            cout << "*"<<" ";
            
        }
        cout << endl;
    }
} */


/*
(4)
1 
2 3 
3 4 5 
4 5 6 7 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int c = i;

        for (int j = 1; j <= i;j++){
            cout << c<<" ";
            c++;
                }
        cout << endl;
    }
}
*/
// without using extra variable c

/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++){
            cout << i + j -1 << " ";
        }
        cout << endl;
    }
} */

/*
(5)
1 
2 1 
3 2 1 
4 3 2 1 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int c = i;

        for (int j = 1; j <= i;j++){
            cout << c<<" ";
            c--;
            }
        cout << endl;
    }
}
*/

// without using c

/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i;j++){
            cout <<i-j+1 <<" ";
            
            }
        cout << endl;
    }
} */

/*
(6)
A A A 
B B B 
C C C




#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char c = 65;
    for (int i = 1; i <= n; i++)
    {
         
        for (int j = 1; j <= n;j++){
            cout << c<<" ";
           
                }
        cout << endl;
         c++;
    }
}
*/

/* method 2nd


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    for (int i = 1; i <= n; i++)
    {
         
        for (int j = 1; j <= n;j++){
            char c = 'A' + i - 1;
            cout << c << " ";
                }
        cout << endl;
        
    }
} */

/* 
(7)
A B C 
B C D 
C D E 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    for (int i = 1; i <= n; i++)
    {
         
        for (int j = 1; j <= n;j++){
            char c = 'A' + i + j - 2;
            cout << c << " ";
                }
        cout << endl;
        
    }

} */

/* 
(8)
D 
C D 
B C D 
A B C D 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    for (int i = 1; i <= n; i++)
    {
         
        for (int j = 1; j <= i;j++){
            char c = 'A' +n -i  + j -1;
            cout << c << " ";
                }
        cout << endl;
        
    }
} */

/* 
(9)
   *
  **
 ***
****

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

      int a = 5;

      for (int i = 1; i <= n;i++){
        int space = n - i;
              while (space--){
                  cout << " ";
              }
          for (int j = 1; j <= i;j++){
              
              cout << "*";
          }
          cout << endl;
      }
}
 */

/* 
****
*** 
**  
*   

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

      int a = 5;

      for (int i = 1; i <= n;i++){
        
          for (int j = 1; j <= n - i + 1;j++){
              
              cout << "*";
          }
          int space = i;
              while (--space){
                  cout << " ";
              }
          cout << endl;
      }
} */