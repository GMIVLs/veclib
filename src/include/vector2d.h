/**
 *
 * @file vector2d.h
 * this header file is contain basic
 * math algebra of vector in 2d space
 * which is part of the graphic engine
 * this file contain class named vector2d
 * will inherit the class vector from
 * the vector.h
 * it's templated type class can accept
 * various type of primitive data, like
 * integer, float, double.
 */

#ifndef _VECTOR_2D_H_
#define _VECTOR_2D_H_

#include "vector.h"
//! the class vector2d contain namespace called immutable, which mean when used
//! any method the return will be a new vector object not update the called
//! object.
namespace immutable
{

  //! this the definition of templated type class which get Gtype data.
  template <class Gtype>
  //! the class vector2d inherit from the base class vector
  class vector2d : public vector<Gtype>
  {
   public:
    //! this is vector2d class default constructor definition.
    vector2d();
    //! this is the vector2d class Gtype constructor definition.
    vector2d(Gtype, Gtype);
    //! this is vector2d class destructor definition
    ~vector2d();
    //! this is vector2d class copy constructor definition
    vector2d(const vector2d&);

    //! this is operator+ overload definition
    vector2d operator+(vector2d&);
    //! this is operator- overload definition
    vector2d operator-(vector2d&);
    //! this is the operator* overload definition
    vector2d operator*(Gtype&);
    //! this is the operator/ overload definition
    vector2d operator/(Gtype&);
    //! this is the operator+= overload definition
    vector2d operator+=(vector2d&);
    //! this is the operator-= overload definition
    vector2d operator-=(vector2d&);
    //! this is the operator*= overload definition
    vector2d operator*=(Gtype&);
    //! this is the operator/= overload definition
    vector2d operator/=(Gtype&);
    //! this is the operator() overload definition, which make using the object
    //! call like a function.
    vector2d operator()(Gtype, Gtype);

    //! this is class method add definition
    vector2d add(const vector2d&);
    //! this is class method sub definition
    vector2d sub(const vector2d&);
    //! this is class method multi by scalier definition
    vector2d multi(const Gtype&);
    //! this is class method divide of two vectors definition
    vector2d divide(const vector2d&);
    //! this is the overload of method divide vector by scalier definition
    vector2d divide(const Gtype&);
    //! this is the class dot product method definition
    Gtype dot(const vector2d&);
    //! this is the class vector length method definition
    Gtype length();
    //! this is the class method to normalized the vector definition
    vector2d normalize();
    //! this is the class vector normaliz test method definition
    bool is_normalized();
    //! this is the class vector reflect method definition
    vector2d reflect(const vector2d&);
    //! this is the class method distance to vector method definition
    Gtype distance_to(const Gtype&, const Gtype&);
    //! this is the class rotate of vector about angle method definition
    void rotate(const double&);
    //! this is the class projection of vector method definition
    vector2d projection(const vector2d&);
    //! this is the class vector position update method definition
    vector2d update(const double&, const double&);

   private:
    //! code here
  };
}  // namespace immutable
#endif  // _VECTOR_2D_H_
