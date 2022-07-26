#pragma once
#ifndef RATIONAL_RATIONAL_H_20220309
#define RATIONAL_RATIONAL_H_20220309

#include <iostream>
#include <limits>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <cstdlib> 

int Nok(int& i1, int& i2);


class Rational {
public:
    Rational() {}
    Rational(const int num);
    Rational(const int num, const int denum);  
    bool operator==(const Rational& rhs) const {return (nu == rhs.nu) && (de == rhs.de); }
    bool operator!=(const Rational& rhs) const { return !operator==(rhs); }
    Rational& operator+=(const Rational& rhs);
    Rational& operator-=(const Rational& rhs);
    Rational& operator*=(const Rational& rhs);
    Rational& operator/=(const Rational& rhs);

    bool operator<(const Rational& rhs) const;
    bool operator>(const Rational& rhs) const;
    bool operator<=(const Rational& rhs) const;
    bool operator>=(const Rational& rhs) const;
    

    Rational operator-() const {
        Rational s(*this);
        s.nu *= -1;
        return s;
    }
    Rational operator+() const {
        Rational s(*this);
        return s;
    }

    static int Nok(int i1, int i2);
    static void Inv(int& nu, int& de);
    static int64_t Lcm(int64_t nu, int64_t de);

    std::ostream& writeTo(std::ostream& ostr) const;
    std::istream& readFrom(std::istream& istr);

    int nu{ 0 };
    int de{ 1 };

    static const char sep{ '/' };
};

Rational operator+(const Rational& lhs, const Rational& rhs);
Rational operator-(const Rational& lhs, const Rational& rhs);
Rational operator*(const Rational& lhs, const Rational& rhs);
Rational operator/(const Rational& lhs, const Rational& rhs);

inline std::ostream& operator<<(std::ostream& ostr, const Rational& rhs) {
    return rhs.writeTo(ostr);
}
inline std::istream& operator>>(std::istream& istr, Rational& rhs) {
    return rhs.readFrom(istr);
}
#endif