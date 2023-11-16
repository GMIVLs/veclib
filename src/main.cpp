#include <iostream>

#include "vector2d.h"
using std::cout, std::endl;

int main()
{
  immutable::vector2d<double> v1;
  immutable::vector2d<double> v2{1, 1};
  immutable::vector2d<double> v3{2, 2};
  cout << "= = = = = Program Start = = = = =" << endl;
  cout << "---------------------------------" << endl;
  cout << endl;
  v1 = v2.add(v3);
  cout << v2 << endl;
  v2.set_active(true);
  cout << v2 << endl;
  cout << v1 << endl;
  v1.set_active(true);
  cout << v1 << endl;
  cout << endl;
  cout << "---------------------------------" << endl;
  cout << "= = = = = Program Stops = = = = =" << endl;
  return 0;
}
