#include <iostream>

using namespace std;

void print_hello(){
  cout << "Hello world" << endl;
}

int main(){
	int a, b;
  print_hello();
  cin >> a;
	cin >> b;
	cout << "Sum is: " << a + b << endl;
	return 0;
}