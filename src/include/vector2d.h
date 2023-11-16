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

    // this is class methods for vector 2D math
    vector2d add(const vector2d&);
    vector2d sub(const vector2d&);
    vector2d multi(const Gtype&);
    vector2d divide(const vector2d&);
    vector2d divide(const Gtype&);
    Gtype dot(const vector2d&);
    Gtype length(const vector2d&);
    vector2d normaliz(const vector2d&);
    bool is_normalized();
    vector2d reflect(const vector2d&);
    Gtype distance_to(const vector2d&);
    void rotate(const double&);
    vector2d projection(const vector2d&);
    vector2d update(const double&, const double&);

   private:
    //! code here
  };
}  // namespace immutable
#endif  // _VECTOR_2D_H_
