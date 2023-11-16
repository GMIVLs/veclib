#include "vector2d.h"

#include <iostream>

#include "vector.h"

namespace immutable
{

  //! this is implementation of class constructor
  template <class Gtype>
  vector2d<Gtype>::vector2d() : vector<Gtype>()
  {
  }

  template <class Gtype>
  vector2d<Gtype>::vector2d(Gtype x, Gtype y) : vector<Gtype>(x, y)
  {
  }
  //! this is the implementation of class copy constructor
  template <class Gtype>
  vector2d<Gtype>::vector2d(const vector2d<Gtype>& v) : vector<Gtype>(v.x, v.y)
  {
  }
  //! this is the implementation of class destructor
  template <class Gtype>
  vector2d<Gtype>::~vector2d()
  {
  }
  //! this is the operators overload implementation
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator+(vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x + v.x, this->y + v.y);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator()(Gtype x_new, Gtype y_new)
  {
    this->x = x_new;
    this->y = y_new;
    return (*this);
  }
  //! this is the implementation of vector math methods
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::add(const vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x + v.x, this->y + v.y);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::sub(const vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x - v.x, this->y - v.y);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::multi(const Gtype& scaler)
  {
    return vector2d<Gtype>(this->x * scaler, this->y * scaler);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::divide(const Gtype& scaler)
  {
    return vector2d<Gtype>(this->x / scaler, this->y / scaler);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::divide(const vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x / v.x, this->y / v.y);
  }

  template <class Gtype>
  Gtype vector2d<Gtype>::dot(const vector2d<Gtype>& v)
  {
    return (this->x * v.x + this->y * v.y);
  }
}  // namespace immutable
   //! this is the template class instantiation for various primitive data
template class immutable::vector2d<double>;
template class immutable::vector2d<float>;
template class immutable::vector2d<int>;
