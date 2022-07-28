## Complex_rational_bitset_calculator
**Калькуляторы для работы с комплексными, рациональными числами, а также битовыми значениями. Последние два протестированы с помощью платформы doctest.**

Это учебный проект, который был сделан мной в университете. Каждый калькулятор содержит в себе 3 файла: header, cpp, тестовый. 
*Представленный проект залит на CMake, вы можете прсмотреть [рациональные](https://mysvn.ru/svetlana_hm/svetlana_hm/hlobustova_s_m/prj.lab/rational/), [комплексные](https://mysvn.ru/svetlana_hm/svetlana_hm/hlobustova_s_m/prj.lab/complex/) и [бинарные](https://mysvn.ru/svetlana_hm/svetlana_hm/hlobustova_s_m/prj.lab/bitset/) числа.
Также [здесь](https://mysvn.ru/svetlana_hm/svetlana_hm/hlobustova_s_m/prj.lab/bitsett/) использованы шаблоны <template> при работе с битовыми значениями.*

*Пример кода в header класса рациональных чисел:*
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
Просмотреть и запустить весь проект можно по [этой ссылке](https://mysvn.ru/svetlana_hm/projects).                      
                        
