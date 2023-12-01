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

//! add test function of scalar multiplication double values
TEST(MyVectorLib, Vector_Multi_double)
{
  immutable::vector2d<double> v1{1.0, 1.0};
  EXPECT_DOUBLE_EQ((v1.multi(5.0).get_x()), 5.0);
  EXPECT_DOUBLE_EQ((v1.multi(5.0).get_y()), 5.0);
}

//! add test function for vectors multi integer values
TEST(MyVectorLib, Vector_Multi_int)
{
  immutable::vector2d<int> v1{2, 2};
  EXPECT_EQ((v1.multi(3)).get_x(), 6);
  EXPECT_EQ((v1.multi(3)).get_y(), 6);
}

//! add test function for vectors division double values
TEST(MyVectorLib, Vector_divide_double)
{
  immutable::vector2d<double> v1{4.0, 4.0};
  immutable::vector2d<double> v2{2.0, 2.0};
  EXPECT_DOUBLE_EQ((v1.divide(v2)).get_x(), 2.0);
  EXPECT_DOUBLE_EQ((v1.divide(v2)).get_y(), 2.0);
}

//! add test function for vectors divided integer values
TEST(MyVectorLib, Vector_divide_int)
{
  immutable::vector2d<int> v1{10, 10};
  immutable::vector2d<int> v2{3, 3};
  ASSERT_EQ((v1.divide(v2)).get_x(), 3)
      << "Error in Division of Integer values";
  ASSERT_EQ((v1.divide(v2)).get_y(), 3);
}

//! add test function for vector rotate 90 degree double values
TEST(MyVectorLib, Vector_rotate90_double)
{
  immutable::vector2d<double> v1{2.0, 2.0};
  v1.rotate(1.5708);
  EXPECT_DOUBLE_EQ(v1.get_x(), -2.0);
  EXPECT_DOUBLE_EQ(v1.get_y(), 2.0);
}

//! add test function for vector rotate 90 degree with integer values
TEST(MyVectorLib, Vector_rotate90_int)
{
  immutable::vector2d<int> v1{2, 1};
  v1.rotate(1.5708);
  ASSERT_EQ(v1.get_x(), -1)
      << "Error in vector rotation of integer type the X-value";
  ASSERT_EQ(v1.get_y(), 2)
      << "Error in vector rotation of integer type the Y-value";
}

//! add test function for vector normalize double values
TEST(MyVectorLib, Vector_normalize_double)
{
  immutable::vector2d<double> v1{2.5, 2.5};
  EXPECT_DOUBLE_EQ((v1.normalize()).get_x(), 0.706);
  EXPECT_DOUBLE_EQ((v1.normalize()).get_y(), 0.706);
}

//! add test function for vector normalize integer values
TEST(MyVectorLib, Vector_normalize_integer)
{
  immutable::vector2d<int> v1{5, 5};
  ASSERT_EQ((v1.normalize()).get_x(), 0) << "Error in Integer Values";
  ASSERT_EQ((v1.normalize()).get_y(), 0) << " Error in y Value";
}

//! add test function for test vector is normalize or not double values
TEST(MyVectorLib, Vector_is_normalize_double)
{
  immutable::vector2d<double> v1{3.5, 3.5};
  EXPECT_TRUE((v1.normalize()).is_normalized());
}

//! add test function for test vector is normalize or not integer values
TEST(MyVectorLib, Vector_is_normalize_int)
{
  immutable::vector2d<int> v1{10, 10};
  EXPECT_FALSE((v1.normalize()).is_normalized());
}

//! add test function for test position update of vector double values
TEST(MyVectorLib, Vector_update_double)
{
  immutable::vector2d<double> v1{1.0, 1.0};
  v1.update(10.5, 10.5);
  EXPECT_DOUBLE_EQ(v1.get_x(), 10.5);
  EXPECT_DOUBLE_EQ(v1.get_y(), 10.5);
}

//! add test function for test position update of vector with integer values
TEST(MyVectorLib, Vector_update_integer)
{
  immutable::vector2d<int> v1{3, 3};
  v1.update(50, 50);
  ASSERT_EQ(v1.get_x(), 50) << "Error in x value of integer";
  ASSERT_EQ(v1.get_y(), 50) << "Error in y value of integer";
}

//! add test function for test vector reflect on another vector double values
TEST(MyVectorLib, Vector_reflect_double)
{
  immutable::vector2d<double> v1{2.0, 2.0};
  immutable::vector2d<double> v2{6.0, 6.0};
  EXPECT_DOUBLE_EQ((v1.reflect(v2)).get_x(), -2.0);
  EXPECT_DOUBLE_EQ((v1.reflect(v2)).get_y(), -2.0);
}

//! add test function for test vector reflect on another vector integer values
TEST(MyVectorLib, Vector_reflect_int)
{
  immutable::vector2d<int> v1{1, 1};
  immutable::vector2d<int> v2{3, 3};
  ASSERT_EQ((v1.reflect(v2)).get_x(), -1) << "Error in x value";
  ASSERT_EQ((v1.reflect(v2)).get_y(), -1) << "Error in y value";
}

//! add test function for find the distance from vector to a point double values
TEST(MyVectorLib, Vector_distance_to_double)
{
  immutable::vector2d<double> v1{3.5, 4.5};
  EXPECT_DOUBLE_EQ(v1.distance_to(7.5, 7.5), 5.0);
}

//! add test function for vector projection on another vector double values
TEST(MyVectorLib, Vector_projection_double)
{
  immutable::vector2d<double> v1{1.0, 1.0};
  immutable::vector2d<double> v2{2.0, 2.0};
  immutable::vector2d<double> result;
  result = v1.projection(v2);
  EXPECT_DOUBLE_EQ(result.get_x(), 1.0);
  EXPECT_DOUBLE_EQ(result.get_y(), 1.0);
}

//! add test function for vector projection on another vector integer values
TEST(MyVectorLib, Vector_projection_integer)
{
  immutable::vector2d<int> v1{3, 3};
  immutable::vector2d<int> v2{6, 6};
  immutable::vector2d<int> result;
  result = v1.projection(v2);
  ASSERT_EQ(result.get_x(), 3) << "Error in the projection x-value integer";
  ASSERT_EQ(result.get_y(), 3) << "Error in the projection y-value integer";
}

//! add test function for the mutable::vector2d for the operator + double values
TEST(MyVectorLib, Vector_operator_plus)
{
  vector2d<double> v1{1.5, -2.5};
  vector2d<double> v2{3.5, 4.0};
  vector2d<double> result;
  result = v1 + v2;
  EXPECT_DOUBLE_EQ(result.get_x(), 5.0);
  EXPECT_DOUBLE_EQ(result.get_y(), 1.5);
}

//! add test function for the mutable::vector2d for the operator - integer
//! values
TEST(MyVectorLib, Vector_operator_minus)
{
  vector2d<int> v1{1, 4};
  vector2d<int> v2{4, 10};
  vector2d<int> result;
  result = v1 - v2;
  ASSERT_EQ(v1.get_x(), -3) << "Error in x-value integer";
  ASSERT_EQ(v1.get_y(), -6) << "Error in y-value integer";
}

int main(int argc, char** argv)
{
  ;
  ;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
