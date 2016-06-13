#include <iostream>
using namespace std;
int main()
{
  try{
  throw 3.0f;
  } catch (float) {
  cout << "exception caught" << endl;
  }
 	cout << "I love C++" << endl;
 	return 0;
}
