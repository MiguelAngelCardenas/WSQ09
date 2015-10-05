#include <iostream>
using namespace std;

char ask (){
char r;
cout << "Would you like to do it again?" << endl;
cout << "If the answer if yes, please tipe 'y'" << endl;
cout << "If the answer if no, please type 'n'" << endl;
cin >> r;
return r;
}

int main () {
  int f,a, b;
cout << "Give a non-negative integer and I will tell you its factorial: "<<endl;
cin >>f;
a = f;
b = f;

while (a>1){
  a = a-1;
  f = f*a;
}
cout << "The factorial of " << b << " is: " << f << endl;

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
