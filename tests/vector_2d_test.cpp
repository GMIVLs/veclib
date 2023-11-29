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

//! add subtract function of vectors
TEST(MyVectorLib, Vector_sub_double)
{
  immutable::vector2d<double> v1{3.0, 3.0};
  immutable::vector2d<double> v2{1.0, 1.0};
  immutable::vector2d<double> v;
  v = v1.sub(v2);
  EXPECT_EQ(v.get_x(), 2.0);
  EXPECT_EQ(v.get_y(), 2.0);
}

//! add subtract function of vectors
TEST(MyVectorLib, Vector_sub_int)
{
  immutable::vector2d<int> v1{3, 3};
  immutable::vector2d<int> v2{1, 1};
  immutable::vector2d<int> v;
  v = v1.sub(v2);
  EXPECT_EQ(v.get_x(), 2);
  EXPECT_EQ(v.get_y(), 2);
}
//! Add test for the is_active method of vector 2d
TEST(MyVectorLib, Vector_is_active)
{
  immutable::vector2d<double> v1{4.0, 4.0};
  v1.set_active(true);
  EXPECT_TRUE(v1.is_active());
}

//! Add test for vectors dot product for double values
TEST(MyVectorLib, Vector_dot_double)
{
  immutable::vector2d<double> v1{2.0, 2.0};
  immutable::vector2d<double> v2{3.0, 3.0};
  EXPECT_DOUBLE_EQ(v1.dot(v2), 12.0);
}

//! Add test for vectors dot product for int values
TEST(MyVectorLib, Vector_dot_int)
{
  immutable::vector2d<int> v1{1, 1};
  immutable::vector2d<int> v2{2, 2};
  ASSERT_EQ(v1.dot(v2), 4) << "error in integer dot product";
}

//! add test function for vector length with double values
TEST(MyVectorLib, Vector_Length_double)
{
  immutable::vector2d<double> v1{2.0, 2.0};
  std::cout << "Vector Length is: " << v1.length() << std::endl;
  ASSERT_DOUBLE_EQ(v1.length(), 2.83) << "Error in Vector Length";
}

//! add test function for vector length with int values
TEST(MyVectorLib, Vector_length_int)
{
  immutable::vector2d<int> v1{1, 1};
  ASSERT_EQ(v1.length(), 1);
}

int main(int argc, char** argv)
{
  ;
  ;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
