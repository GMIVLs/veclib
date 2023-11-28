#include <iostream>

#include <gtest/gtest.h>

#include "../build/Release/include/vector.h"
#include "../build/Release/include/vector2d.h"
#include "../build/Release/include/vector2d_m.h"

//! Test function for the vector2d methods and math library

//! Vector2d Creation Test with double values
TEST(MyVectorLib, Vector_creation)
{
  immutable::vector2d<double> vect{1.0, 1.0};
  EXPECT_DOUBLE_EQ(vect.get_x(), 1.0);
  EXPECT_DOUBLE_EQ(vect.get_y(), 1.0);
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
