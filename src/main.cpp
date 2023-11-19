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
  v1 = v2 + v3;
  v1.set_active(true);
  cout << v1 << endl;
  v1 += v2;
  cout << v1 << endl;
  double vv{5.0};
  v1 *= vv;
  cout << v1 << endl;
  if (v1.is_active())
    cout << "vector [v1] is active" << endl;
  else
    cout << "vector [v1] is inactive" << endl;
  cout << endl;
  cout << "---------------------------------" << endl;
  cout << "= = = = = Program Stops = = = = =" << endl;
  return 0;
}
