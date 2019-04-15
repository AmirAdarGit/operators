#pragma once
#include <iostream>
#include "Unit.h"

using namespace std;

namespace ariel{
class PhysicalNumber{

   friend bool operator > (const PhysicalNumber& l,const PhysicalNumber& r);
  friend bool operator < (const PhysicalNumber& l,const PhysicalNumber& r);
  friend bool operator >= (const PhysicalNumber& l,const PhysicalNumber& r);
  friend bool operator <= (const PhysicalNumber& l,const PhysicalNumber& r);
  friend bool operator == (const PhysicalNumber& l,const PhysicalNumber& r);
  friend bool operator != (const PhysicalNumber& l,const PhysicalNumber& r);
  friend PhysicalNumber operator + (const PhysicalNumber& l,const PhysicalNumber& r);
  friend PhysicalNumber operator += (PhysicalNumber& l,const PhysicalNumber& r);
  friend PhysicalNumber operator - (const PhysicalNumber& l,const PhysicalNumber& r);
  friend PhysicalNumber operator - (const PhysicalNumber& l);
  friend PhysicalNumber operator + (const PhysicalNumber& l);
  friend PhysicalNumber operator -= (PhysicalNumber& l,const PhysicalNumber& r);
  friend istream& operator >> (istream & is,PhysicalNumber& f);
  friend ostream& operator <<(ostream & os,const PhysicalNumber& f);

   private:
      Unit unit;
     double n;
  public:
      PhysicalNumber(double n,ariel::Unit unit);
      PhysicalNumber& operator ++();
     PhysicalNumber& operator --();
     PhysicalNumber operator ++(int);
     PhysicalNumber operator --( int);
      double cast(ariel::Unit to_type) const;
     string getStype(const PhysicalNumber& l); 
     Unit get_unit() const{return unit;} 
    //  double get_number() const{return n;} 
     void set_number(double number){n=number;}
     string getUnit(const PhysicalNumber& l); 
};
};