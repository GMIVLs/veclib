#include <iostream>

#include <gtest/gtest.h>

#include "vector.h"
#include "vector2d.h"
#include "vector2d_m.h"

//! Test function for the vector2d methods and math library

//! Vector2d Creation Test with double values
TEST(MyVectorLib, Vector_Double)
{
  immutable::vector2d<double> vect{1.0, 1.0};
  EXPECT_DOUBLE_EQ(vect.get_x(), 1.0);
  EXPECT_DOUBLE_EQ(vect.get_y(), 1.0);
}

//! Vector2d Creation Test with int values
TEST(MyVectorLib, Vector_Int)
{
  immutable::vector2d<int> vect{5, 5};
  EXPECT_EQ(vect.get_x(), 5);
  EXPECT_EQ(vect.get_y(), 5);
}

//! Vector2d addition test
TEST(MyVectorLib, Vector_add)
{
  immutable::vector2d<double> v1{1.0, 1.0};
  immutable::vector2d<double> v2{2.0, 2.0};
  EXPECT_DOUBLE_EQ((v1.add(v2).get_x()), (3.0));
  EXPECT_DOUBLE_EQ(((v1.add(v2)).get_y()), (3.0));
}

int main(int argc, char** argv)
{
  ;
  ;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
