## Complex_rational_bitset_calculator
**Калькуляторы для работы с комплексными, рациональными числами, а также битовыми значениями. Последние два протестированы с помощью платформы doctest.**

Это учебный проект, что я сделала в институте. Каждый калькулятор содержит в себе 3 файла: header, cpp, тестовый.
```
class Rational {
public:
    Rational() {}
    Rational(const int num);
    Rational(const int num, const int denum);  
    bool operator==(const Rational& rhs) const {return (nu == rhs.nu) && (de == rhs.de); }
    bool operator!=(const Rational& rhs) const { return !operator==(rhs); }
    
    Rational& operator+=(const Rational& rhs);

    bool operator<(const Rational& rhs) const;

    static int Nok(int i1, int i2);
    static void Inv(int& nu, int& de);
    static int64_t Lcm(int64_t nu, int64_t de);

    std::ostream& writeTo(std::ostream& ostr) const;
    std::istream& readFrom(std::istream& istr);

    int nu{ 0 };
    int de{ 1 };

    static const char sep{ '/' };
};
```
