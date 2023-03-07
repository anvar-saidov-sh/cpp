/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool niven(int n){
    int sum = 0, temp;
    for(temp = n; temp > 0; temp /= 10){
        sum += temp%10;
    }
    return ( n % sum == 0);
}

void star(int n, int j){
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;
    for(int n = 1; n <= num; n++){
        for(j = 1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void star1(int n, int i, int j){
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = n; i >= 0; i--){
        for(int j = i; j <= n; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void star2(int n, int i, int j){
    cout << "Enter the number of rows: ";
    cin >> n;
    for(i =n; i >= 0; i--){
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void star3(int n, int i, int j){
    cout << "Enter the number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
void star4(int n, int i, int j){
    cout << "Enter the number of rows: ";
    cin >> n;
    int  s;
    for(i = 1; i <= n; i++)
    {
        //for loop for displaying space
        for(s = i; s < n; s++){
            cout << " ";
        }
        //for loop to display star equal to row number
        for(j = 1; j <= (2 * i - 1); j++){
            cout << "*";
        }
        // ending line after each row
        cout << "\n";
    }

}
void star5(int n, int i, int j){
    int s;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = n; i >= 1; i--){
    //for loop to put space
        for(s = i; s < n; s++){
            cout << " ";
        }
        //for loop for displaying star
        for(j = 1; j <= (2 * i - 1); j++){
            cout << "* ";
        }
    // ending line after each row
    cout << "\n";
    }
}
void star6(int n, int i, int j){
    int s;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = n; i >= 1; i--){
        //for loop to put space
        for(s = i; s < n; s++){
            cout << " ";
            //for loop for displaying star   
        }
        for(j = 1; j <= i; j++){
            cout << "* ";
            // ending line after each row
        }
        cout << "\n";
    }
}
void star7(int i, int n, int j){
    int s;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        //for loop to put space
        for(s = i; s < n; s++){
            cout << " ";
            //for loop for displaying star
        }
        for(j = 1; j <= i; j++){
            cout << "* ";
            // ending line after each row
        }
        cout << "\n";
    }
}
void star8(int n, int i, int j){
    int s;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 0; i <= n; i++){
        for(s = n; s > i; s--){
            cout << " ";
        }
        for(j=0; j<i; j++){
            cout << "* ";
        }
    cout << "\n";
    }
    for(i = 1; i < n; i++){
        for(s = 0; s < i; s++){
            cout << " ";
        }
        for(j = n; j > i; j--){
            cout << "* ";
        // ending line after each row
        }
    cout << "\n";
    }
}
void star9(int n, int i, int j){
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout<<"\n";
    }
    for(i = n; i >= 1; i--){
        for(j = 1; j < i; j++){
        cout << "*" ;
    }
    // ending line after each row
        cout<<"\n"; 
    }
}
void star10(int n, int i, int j){
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = i; j < n; j++){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(i = n; i >= 1; i--){
        for(j = i; j <= n; j++){
            cout << " ";
        }
        for(j = 1; j < i; j++){
            cout<<"*";
        }
        // ending line after each row
        cout<<"\n";
    }
}
void star11(int i, int r, int j){
    int s;
    cout << "Enter number of rows: ";
    cin >> r;
    for(i = 1; i <= r; i++){
        //for loop to put space in pyramid
        for (s = i; s < r; s++){
            cout << " ";
            //for loop to print star
        }
        for(j = 1; j <= (2 * r - 1); j++){
            if(i == r || j == 1 || j == 2*i - 1){
             cout << "*";
            }
            else{
                cout << " ";
            }
        }
        //ending line after each row
        cout << "\n";
    }
}
void star12(int i, int j, int r){
    int s;
    cout << "Enter number of rows: ";
    cin >> r;
    for(i = r; i >= 1; i--){
        //for loop to put space in pyramid
        for (s = i; s < r; s++){
            cout << " ";
            //for loop to print star in pyramid
        }
        for(j = 1; j <= 2 * i - 1; j++){
            if(i == r || j == 1 || j == 2*i - 1){
                cout << "*";
            }    
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void star13(int n, int i, int j){
    cout << "Enter size of  Daimond:  ";
    int m = 1, k;
    cin >> n;
    for(i = 0; i <= n; i++){
        for(j = n; j > i; j--){
            cout << " ";
        }
        cout << "*";
        if (i > 0){
            for(k = 1; k <= m; k++){
                cout << " ";
            }
            m += 2;
            cout << "*";
        }
        cout << endl;
    }
    m -= 4;
    for(i = 0; i <= n-1; i++){
        for(j = 0; j <= i; j++){
            cout << " ";
        }
        cout << "*";
        for(k = 1; k <= m; k++){
            cout << " ";
        }
        m -= 2;
        if(i != n-1){
            cout << "*";
        }
        //ending line after each row
        cout << endl;
    }
}

int main()
{
    
    int a, b, c;
    cout << "Enter the number of program you'd like to see ";
    cin >> a;
    switch(a){
        case 1:
        cout << "Enter the number: ";
        cin >> a;
        niven(a) ? cout << "Yes" << endl : cout << "No" << endl;
        break;
        case 2:
        cout << "It is star patterns 1\n";
        star(a,b);
        break;
        case 3:
        star1(a,b,c);
        break;
        case 4:
        star2(a, b, c);
        break;
        case 5:
        star3(a, b, c);
        break;
        case 6:
        star4(a, b, c);
        case 7:
        star5(a, b, c);
        case 8:
        star6(a, b, c);
        case 9:
        star7(a, b, c);
        case 10:
        star8(a, b, c);
        case 11:
        star9(a, b, c);
        case 12: 
        star10(a, b, c);
        case 13:
        star11(a, b, c);
        case 14:
        star12(a, b, c);
        case 15: 
        star13(a, b, c);
    }
    
    
    
    return 0;
}
