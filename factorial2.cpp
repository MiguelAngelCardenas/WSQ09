#include <iostream>
using namespace std;

int factorial (int n){
  if (n == 0){
    return 1;
  } else {
    int recurse = factorial (n-1);
    int result = n * recurse;
    return result;
  }
}

char ask (){
char r;
cout << "Would you like to do it again?" << endl;
cout << "If the answer if yes, please tipe 'y'" << endl;
cout << "If the answer if no, please type 'n'" << endl;
cin >> r;
return r;
}

int main (){
  int f;
cout << "Give a non-negative integer and I will tell you its factorial: "<<endl;
cin >>f;
int r = factorial (f);
cout << "The factorial of " << f << " is: " << r << endl;

char t = ask ();
if (t == 'y'){
  main ();
} else if (t == 'n'){
} else {
  cout << "Only type 'y' for yes, or 'n' for no." << endl;
  ask ();
}
return 0;
}
