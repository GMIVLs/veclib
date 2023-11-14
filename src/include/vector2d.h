/**
 *
 * @file vector2d.h
 * this header file is contain basic
 * math algebra of vector in 2d,
 * which is part of the graphic engine
 * this file contain class named vector2d
 * will inherit the class vector from
 * the vector.h
 * it's templated type class can accept
 * various type of primitive data.
 *
 */

#ifndef _VECTOR_2D_H_
#define _VECTOR_2D_H_
// the base class for the vector2d header file.
#include "vector.h"

namespace immutable
{

  //! using of templated type class
  template <class Gtype>
  class vector2d : public vector<Gtype>
  {  // class immutable::vector2d inherit from class vector
   public:
    //! this is vector2d class constructor definition
    vector2d();
    vector2d(Gtype, Gtype);
    //! this is vector2d class destructor definition
    ~vector2d();
    // this is vector2d class copy constructor definition
    vector2d(const vector2d&);

    // this is class operators overload definition
    vector2d operator+(vector2d&);
    vector2d operator()(Gtype, Gtype);

    // this is class methods for vector 2D math
    vector2d add(const vector2d&);
    vector2d sub(const vector2d&);
    vector2d multi(const Gtype&);
    vector2d divide(const vector2d&);
    vector2d divide(const Gtype&);
    Gtype dot(const vector2d&);

   private:
    //! code here
  };
}  // namespace immutable
#endif  // _VECTOR_2D_H_
