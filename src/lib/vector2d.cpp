#include "vector2d.h"

#include <cmath>
#include <iostream>

#include "vector.h"

//! This is the class immutable vector in 2d space, contain basic vector algebra
namespace immutable
{

  //! this is default class constructor implementation, which create object of
  //! type vector (0,0)
  template <class Gtype>
  vector2d<Gtype>::vector2d() : vector<Gtype>()
  {
  }
  //! this is the class constructor take x,y of generic type and create object
  //! of type vector (x,y)
  template <class Gtype>
  vector2d<Gtype>::vector2d(Gtype x, Gtype y) : vector<Gtype>(x, y)
  {
  }
  //! this is the implementation of class copy constructor vector(v.x,v.y)
  template <class Gtype>
  vector2d<Gtype>::vector2d(const vector2d<Gtype>& v) : vector<Gtype>(v.x, v.y)
  {
  }
  //! this is class vector2d destructor implementation
  template <class Gtype>
  vector2d<Gtype>::~vector2d()
  {
  }
  //! this is the operator+ overload, which take object by reference added to
  //! call object (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator+(vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x + v.x, this->y + v.y);
  }
  //! this is the operator- overload, which take object by reference and
  //! subtract it from (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator-(vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x - v.x, this->y - v.y);
  }
  //! this is the operator* overload, which take var with Gtype and return
  //! object of type vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator*(Gtype& scalier)
  {
    return vector2d<Gtype>(this->x * scalier, this->y * scalier);
  }
  //! this is the operator/ overload, which take var of type Gtype and return a
  //! vector2d object
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator/(Gtype& scalier)
  {
    return vector2d<Gtype>(this->x / scalier, this->y / scalier);
  }
  //! this is the operator+= overload, which take object of type vector2d added
  //! to (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator+=(vector2d<Gtype>& v)
  {
    this->x += v.x;
    this->y += v.y;
    return (*this);
  }
  //! this is the operator-= overload, which take object of type vector2d
  //! subtract it from (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator-=(vector2d<Gtype>& v)
  {
    this->x -= v.x;
    this->y -= v.y;
    return (*this);
  }
  //! this is the operator*= overload, which take var of type Gtype and return
  //! an object of vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator*=(Gtype& scalier)
  {
    this->x *= scalier;
    this->y *= scalier;
    return (*this);
  }
  //! this is the operator/= overload, which take var of type Gtype and return
  //! object of type vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator/=(Gtype& scalier)
  {
    this->x /= scalier;
    this->y /= scalier;
    return (*this);
  }
  //! this is the operator() overload, which will make the object created like a
  //! function and update the caller object (this)
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
  //! this is the method of find magnitude of vector in 2d space
  template <class Gtype>
  Gtype vector2d<Gtype>::length()
  {
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
  }
  //! this is the method to find normal to the vector
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::normalize()
  {
    Gtype mag{this->length()};
    if (mag != 0)
      {
        this->x /= mag;
        this->y /= mag;
      }
    else
      {
        this->x = 0;
        this->y = 0;
      }
    return (*this);
  }
  //! this is the test method to evaluate the vector is normal or not
  template <class Gtype>
  bool vector2d<Gtype>::is_normalized()
  {
    if (this->length() == 1)
      return true;

    return false;
  }
  //! this is the method to find a vector reflection over a line represented by
  //! another vector in 2d space
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::reflect(const vector2d<Gtype>& v)
  {
    vector2d<Gtype> vect{this->projection(v)};
    return vector2d<Gtype>(vect.multi(2) - (*this));
  }
  //! this is the method to find the distance between a point(p1,p2) and vector
  //! in 2d space
  template <class Gtype>
  Gtype vector2d<Gtype>::distance_to(const Gtype& x1, const Gtype& y1)
  {
    Gtype numerator =
        std::abs((x1 - this->x) * this->y - (y1 - this->y) * this->x);
    return (numerator / this->length());
  }
  //! this is the method to find the rotation of vector about an angle in vector
  //! in 2d space
  template <class Gtype>
  void vector2d<Gtype>::rotate(const double& theta)
  {
    Gtype x_value = (this->x * cos(theta)) - (this->y * sin(theta));
    Gtype y_value = (this->x * sin(theta)) + (this->y * cos(theta));
    this->set_x(x_value);
    this->set_y(y_value);
  }
  //! this is the method to find the projection of vector on a normal vector in
  //! 2d space
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::projection(const vector2d<Gtype>& v)
  {
    Gtype dot_value = this->dot(v);
    Gtype mag_value = v.get_x() * v.get_x() + v.get_y() * v.get_y();
    this->x = dot_value * v.get_x() / mag_value;
    this->y = dot_value * v.get_y() / mag_value;
    return (*this);
  }
  //! this is the method to update the position of a vector in 2d space
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::update(const double& x1, const double& y1)
  {
    this->x = x1;
    this->y = y1;
    return (*this);
  }
}  // namespace immutable
   //! this is the template class instantiation for various primitive data (int,
   //! float, and double)
template class immutable::vector2d<double>;
template class immutable::vector2d<float>;
template class immutable::vector2d<int>;
