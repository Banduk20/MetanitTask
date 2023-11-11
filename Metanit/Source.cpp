//1.1
//#include<iostream>
//#include<windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int meter;
//	cout << "ведіть відстань:\t";
//	cin>> meter;
//	const int mkm = 1000;
//	cout <<endl<< meter / mkm << "km\t" << meter % mkm<<"m";
//};


////1.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	double rad;
//	cout << "input radius:\t";
//	cin >> rad;
//	cout << endl<<"circle radius =\t"<<pow(rad,2)*M_PI;
//};

////1.3
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	float usd;
//	cout << "input ust:\t";
//	cin >> usd;
//	float count;
//	cout << "input count:\t";
//	cin >> count;
//	cout << endl << "convert into dolars=\t" << count/usd;
//};

////1.4
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	float weight;
//	cout << "input ur weight:\t";
//	cin >> weight;
//	float height;
//	cout << "input ur height:\t";
//	cin >> height;
//	cout << endl << "ur IMT=\t" << weight / pow(height/100, 2);
//};

////2.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	 int pac{};
//		 char num{};
//
//		cout << endl<<"input symb :\t";
//		cin >> num ;
//		pac |= num;
//	
//		cout << endl << "input symb :\t";
//		cin >> num;
//		pac <<= 8;
//		pac |= num;
//
//		cout << endl << "input symb :\t";
//		cin >> num;
//		pac <<= 8;
//		pac |= num;
//
//	cout << endl << "in binary\t" << pac<<endl;
//	
//	 int mask{ 0xFF };
//
//	num = pac & mask;
//	cout << num;
//	num = (pac>>8) & mask;
//	cout << num;
//	num = (pac >> 16) & mask;
//	cout << num;
//};
//
////2.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	unsigned int pac{};
//	unsigned int num{};
//
//	cout << endl << "input red :\t";
//	cin >> num;
//	pac |= num;
//		
//	cout << endl << "input green :\t";
//	cin >> num;
//	pac <<= 8;
//	pac |= num;
//
//	cout << endl << "input blue :\t";
//	cin >> num;
//	pac <<= 8;
//	pac |= num;
//
//	cout << endl << "ur color\t" << pac << endl;
//
//	
//};

////2.3
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	unsigned int color{ 0x04F1A2u };
//	unsigned int mask{ 0xFFu };
//	unsigned int red{ (color >> 16) & mask };
//	unsigned int green{ (color >> 8) & mask };
//	unsigned int blue{ color  & mask };
//	cout << "Red:" << red<<endl;
//	cout << "Green:" << green << endl;
//	cout << "Blue:" << blue << endl;
//
//
//	cout << "Red:" <<hex<< red << endl;
//	cout << "Green:" << hex << green << endl;
//	cout << "Blue:" << hex << blue << endl;
//};


////2.4
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int a,b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	a = a ^ b;      // 1000 ^ 1011 = 0011
//	b = a ^ b;      // 0011 ^ 1011 = 1000
//	a = a ^ b;      // 0011 ^ 1000 = 1011
//	/*swap(a, b);*/ /*або так*/
//	cout <<"a:" << a<<"b:" << b;
//};

////3.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int a,b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	if (a == b)
//		cout << "a:" << a << "b:" << b << "рівні";
//	else cout<< "не рівні";
//};


////3.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int a, b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	if (b == 0)cout << "на 0 не ділити";
//
//	if (a % b != 0)
//	{
//
//		std::cout << "a and not devisible" << std::endl;    // числа НЕ кратны
//	}
//	else
//	{
//		std::cout << "a and b devisible" << std::endl;  // числа кратны
//	}
//};


////3.3
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int a, b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	if (a >= 1 && a <= 100) {
//		if (a > 50)cout << "a>50; a= " << a;
//		if (a < 50)cout << "a<50; a= " << a;
//		if (a == 50)cout << "a=50; a= " << a;
//	}
//	else cout << "a<=0 or a>=100; a= " << a;
//};


////3.4
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int a, b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	cout<<(a > b ? "a>b" : (a < b ? "a<b" : "a=b"));
//};

////4.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int n=0;
//	cout << "input max\n";
//	cin >> n;
//	for (int i = 1;i <= n;i += 2)
//		cout<<pow(i,2)<<endl;
//	
//};

////4.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int count=0;
//	string a,b;
//	do {
//		cin >> a;
//		count++;
//		b += a;
//	} while (a != ".");
//	cout << b<<"\ncount="<<count--;
//
//};

////4.3
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	int sum=0;
//	while (true) {
//		cout << "input value\n";
//		int n;
//		cin >>n;
//		sum += n;
//		char c;
//		cout << "Finish? y/n\n";
//		cin >> c;
//		if (c == 'y' or c == 'Y') break;
//	}
//	cout <<" sum:"<< sum;
//};


////5.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	const int max{ 6 };
//	int arrays[max];
//	for (int i = 0;i<max;i++)
//	{
//		cout << "input value:" << endl;
//		cin >> arrays[i];
//	}
//	cout <<"end\n"<<"your arrays:\n";
//	for (int i = max-1;i >= 0;i--)
//		cout << arrays[i]<<" ";
//};

////6.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	const int max{ 100 };
//	char n[max];
//	cout << "enter string:";
//	cin.getline(n,max);
//	int count{};
//	for(;count<max&&n[count]!='\0';++count){}
//	cout << "count=" << count<<endl;
//	for (int i = 1;i <= count;++i)
//		cout << n[count-i];
//};

//7.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	const unsigned arrays{20};
//	unsigned odds[arrays] ;
//	/*заповнення масиву*/
//	for (unsigned i{};i < arrays;i++)
//	{
//		odds[i] = i * 2 + 1;
//	}
//	const unsigned perline{ 5 };
// /*вивід на консоль*/
//	for (unsigned i{};i < arrays;i++)
//	{
//		cout << *(odds + i) << "\t";
//		if ((i + 1) % perline == 0)
//			cout << endl;
//	}
//	cout << endl;
//
//	for (int i {arrays-1};i >=0;i--)
//	{
//		cout << *(odds + i) << "\t";
//		if (i % perline == 0)
//		{
//			std::cout << std::endl;
//		}
//	}
//};


////7.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	const unsigned arrays{ 20 };
//	unsigned odds[arrays];
//	/*заповнення масиву*/
//	for (unsigned i{};i < arrays;i++)
//	{
//		odds[i] = i * 2 + 1;
//	}
//	const unsigned perline{ 5 };
//
//	unsigned* ptr = odds;
//	/*вивід на консоль*/
//	for (unsigned i{};i < arrays;i++)
//	{
//		cout << *ptr++ << "\t";
//		if ((i + 1) % perline == 0)
//			cout << endl;
//	}
//	cout << endl;
//
//	for (int i{ arrays - 1 };i >= 0;i--)
//	{
//		cout << *--ptr << "\t";
//		if (i % perline == 0)
//		{
//			std::cout << std::endl;
//		}
//	}
//};


////8.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//std::string reverse(std::string str)
//{
//    const size_t length{ str.length() };
//    // проходим по всем символам строки и меняем их местами с противоположными
//    for (size_t i{}; i < length / 2; ++i)
//    {
//        swap(str[i], str[length - i - 1]);
//    }
//    return str;
//}
//
//int main()
//{
//   string text;
//    cout << "Enter a string: "; // вводим строку
//    getline(cin, text);
//
//    cout << "\nString in reverse order: ";
//    cout << reverse(text) << endl;
//}




////8.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//double spow(double num, double step)
//{
//
//    return(pow(num, step));
//}
//
//int main()
//{
//    double a, b;
//    cout << "input number:";
//    cin >> a;
//    cout << "\ninput step:";
//    cin >> b;
//   cout<<"\nresult:\t" << spow(a, b);
//
//}


////9.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
////перегрузка
//int add(int a, int b)
//{
//    return(a + b);
//}
//
//double add(double a, double b)
//{
//    return(a + b);
//}
//
//string add(string a,string b)
//{
//    return(a + b);
//}
//
//
//int main()
//{
//    int a{ 3 }, b{ 4 };
//    const int c{ add(a, b) };
//    cout << a << " + " << b << " = " << c << endl;
//
//    double x{ 3.1 }, y{ 4.2 };
//    const double z{ add(x, y) };
//   cout << x << " + " << y << " = " << z << endl;
//
//    // сложение строк std::string
//    const string s1{ "aaa" };
//    const string s2{ "bbb" };
//    const string s3{ add(s1, s2) };
// cout << s1 << " + " << s2 << " = " << s3 << endl;
//
//    // сложение строковых литералов
//    const string s4{ add("he", "llo") };
//   cout << "he + llo = " << s4 << endl;
//
//}


////10.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//
//int main()
//{
//    unsigned n;
//    cin >> n;
//    auto *arrays{new int [n] };
//
//    for (unsigned i{};i < n;i++)
//    {
//        *(arrays + i) = i * i;
//    }
//
//    double sum{};
//    for (unsigned i{};i < n;i++)
//        sum += arrays[i];
//    cout << "sum:" << sum;
//    delete[] arrays;
//
//}



////11.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//
//int main()
//{
//    unsigned n;
//    cin >> n;
//    auto arrays{ make_unique<int[]>(n)};
//
//    for (unsigned i{};i < n;i++)
//    {
//        arrays[i] = i * i;
//    }
//
//    double sum{};
//    for (unsigned i{};i < n;i++)
//        sum += arrays[i];
//    cout << "sum:" << sum;
// 
//
//}



////12.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class integer
//{
//
//public:
//	integer(int number)
//	{
//		value = number;
//		cout << "object cteated:\n";
//	}
//	int getValue() { return value; }
//	void setvalue(int number)
//	{
//		value = number;
//	}
//	void print()
//	{
//		cout << "\nValue:" << value;
//	}
//private:
//	int value;
//};
//
//int main()
//{
//	integer n{ 10 };
//	n.print();
//	n.setvalue(15);
//	n.print();
//	n.setvalue(n.getValue() * 2);
//	n.print();
//}



////12.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class integer
//{
//
//public:
//	integer(int number);
//	int getValue();
//	void setvalue(int number);
//	void print();
//
//private:
//	int value;
//
//};
//
// integer::integer(int number)
//{
//	value = number;
//	cout << "object cteated:\n";
//};
//
// int integer::getValue() { return value; }
//
//void integer::setvalue(int number) { value = number; }
//
//void integer::print() { cout << "\nvalue" << value; }
//
//int main()
//{
//	integer n{ 10 };
//	n.print();
//	n.setvalue(15);
//	n.print();
//	n.setvalue(n.getValue() * 2);
//	n.print();
//}



////13.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Integer
//{
//public:
//    Integer(int number)
//    {
//        value = number;
//    }
//    void print() const
//    {
//        std::cout << "Value: " << value << std::endl;
//    }
//
//    Integer(const Integer& p)
//    {
//        value = p.value;
//    }
//private:
//    int value;
//};
//int main()
//{
//	
//    Integer n{ 10 };
//    Integer na{ n };
//    n.print();
//    na.print();
//
//}


////14.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Integer
//{
//public:
//    Integer(int number);
//    int getValue() const;
//    void setValue(int number);
//    void print() const;
//private:
//    int value;
//};
//Integer::Integer(int number)
//{
//    value = number;
//    std::cout << "Object created" << std::endl;
//}
//int Integer::getValue() const  { return value; }
//void Integer::setValue(int number) { value = number; }
//void Integer::print() const
//{
//    std::cout << "Value: " << value << std::endl;
//}
//
//
//int main()
//{
//
//    Integer n{ 10 };
//    n.print();
//    n.setValue(n.getValue() * 2);
//    n.print();
//
//
//
//    const Integer m{ 50 };
//    //m.setValue(n.getValue() * 2);   // нельзя изменить
//    std::cout << m.getValue() << std::endl; // можно только получить
//    m.print();
//}

////15.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Integer
//{
//public:
//    Integer(int number)
//    {
//        value = number;
//    }
//    void print() const
//    {
//        std::cout << "Value: " << value << std::endl;
//    }
//    
//    int compare(const Integer& obj) const
//    {
//        return value - obj.value;
//
//}
//
//private:
//    int value;
//};
//
//void print(const Integer& num1,const Integer& num2)
//{
//    auto result = num1.compare(num2);
//    if (result > 0) cout << "num1>num2\n";
//
//        else if (result < 0) cout << "num1<num2\n";
//
//    
//        else cout << "num1==num2\n";
//
//}
//
//int main()
//{
//    print(Integer{ 10 }, Integer{ 20 });  // num1 less than num2
//    print(Integer{ 30 }, Integer{ 20 });  // num1 greater than num2
//    print(Integer{ 10 }, Integer{ 10 });  // num1 is equal to num2
//    
//}

////15.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Integer
//{
//public:
//    Integer(int number)
//    {
//        value = number;
//    }
//
//    friend int compare(const Integer& obj1, const Integer& obj2);
//    void print() const
//    {
//        std::cout << "Value: " << value << std::endl;
//    }
//
//private:
//    int value;
//};
//
//int compare(const Integer& obj1, const Integer& obj2)
//{
//    return obj1.value - obj2.value;
//
//}
//void print(const Integer& num1, const Integer& num2)
//{
//    auto result = compare(num1,num2);
//    if (result > 0) cout << "num1>num2\n";
//
//    else if (result < 0) cout << "num1<num2\n";
//
//
//    else cout << "num1==num2\n";
//
//}
//
//int main()
//{
//    print(Integer{ 10 }, Integer{ 20 });  // num1 less than num2
//    print(Integer{ 30 }, Integer{ 20 });  // num1 greater than num2
//    print(Integer{ 10 }, Integer{ 10 });  // num1 is equal to num2
//
//}



////16.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Animal
//{
//public:
//    Animal(string name, unsigned weight) : name{ name }, weight(weight)
//    {  }
//    void print() const
//    {
//        cout << "animal:" << name << "  and weight:" << weight;
//    }
//private:
//    unsigned weight;
//    string name;
//};
//
//class cat :public Animal
//{
//public:
//
//    cat(std::string name, unsigned weight) : Animal{ name, weight } {}
//
//};
//
//class dog :public Animal
//{
//public:
//
//    dog(std::string name, unsigned weight) : Animal{ name, weight } {}
//
//};
//
//int main()
//{
//   
//    cat p{ "maf",12 };
//    p.print();
//    dog m{"fw",13 };
//    m.print();
//}

////17.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Animal
//{
//public:
//    Animal(string name, unsigned weight) : name{ name }, weight(weight)
//    {  }
//    void print() const
//    {
//        cout << "animal:" << name << "  and weight:" << weight<<endl;
//    }
//    virtual void makeSound() const = 0;
//private:
//    unsigned weight;
//    string name;
//};
//
//class cat :public Animal
//{
//public:
//
//    cat(std::string name, unsigned weight) : Animal{ name, weight } {}
//    virtual void makeSound() const
//    {
//        std::cout << "Miau, miau. I am a cool kote" << endl;
//    }
//};
//
//class dog :public Animal
//{
//public:
//
//    dog(std::string name, unsigned weight) : Animal{ name, weight } {}
//    virtual void makeSound() const
//    {
//        std::cout << "gav" << endl;
//    }
//};
//
//int main()
//{
//
//    cat p{ "maf",12 };
//    p.print();
//    p.makeSound();
//    dog m{ "fw",13 };
//    m.print();
//    m.makeSound();
//}


////18.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Integer
//{
//public:
//    Integer(double n)
//    {
//        value = n;
//    }
//
//    void print()  const
//    {
//        std::cout << "value: " << value << std::endl;
//    }
//
//    Integer operator *(double n) const
//    {
//        return Integer(value * n);
//    }
//    Integer operator *(int n) const
//    {
//        return Integer(value * n);
//    }
//private:
//    double value;
//};
//
//int main()
//{
//
//    Integer i1{ 22 };
//    Integer i2{ i1 * 5 };
//    Integer i3{ i1 * 5.5 };
//    i2.print();     // value: 110
//    i3.print();     // value: 121
//}


////18.2
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//class Rational
//{
//
//public:
//    Rational(int num, int denom)
//    {
//        numerator = num;
//        // если знаменатель равен 0 
//        if (denom == 0) denom = 1;
//        denominator = denom;
//    };
//
//
//    Rational operator +(const Rational& other) const
//    {
//        int denom{ denominator };
//        int num{ numerator+other.numerator };
//        if(denominator!=other.denominator)
//        {
//            num = numerator * other.denominator + other.numerator * denominator;
//            denom = denominator * other.denominator;
//        }
//        return Rational{ num,denom };
//    }
//
//    Rational operator *(const Rational& other) const
//    {
//        int denom{ denominator*other.denominator };
//        int num{ numerator * other.numerator };
//      
//        return Rational{ num,denom };
//    }
//
//    int getNumerator() const { return numerator; }
//    int getDenominator() const { return denominator; }
//
//private:
//    int numerator, denominator;
//};
//
//inline std::ostream& operator<<(std::ostream& stream, const Rational& r)
//{
//    return stream << r.getNumerator() << "/" << r.getDenominator();
//}
//
//int main()
//{
//    Rational r1{ 3, 4 };      // 3/4
//    Rational r2{ 1, 2 };      // 1/2
//    Rational r3{ r1 + r2 };
//    std::cout << r3 << std::endl;   // 10/8
//
//    Rational r4{ r1 * r2 };
//    std::cout << r4 << std::endl;   // 3/8
//
//    Rational r5{ 1, 4 };      // 1/4
//    Rational r6{ r1 + r5 };  // 3/4 + 1/4 
//    std::cout << r6 << std::endl;   // 4/4
//
//    Rational r7{ 4,0 };   // 4/1
//    std::cout << r7 << std::endl;   // 4/1
//    
//}


////19.1 vector
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//
//
//int main()
//{
//	unsigned N{};
//	cout << "input N:\n";
//	cin >> N;
//	vector<int> f;
//	int value;
//	for (unsigned i {};i < N;i++)
//	{
//		cout << "input number #" << i + 1 << ":";
//		
//		cin >> value;
//		f.push_back(value);
//	}
//
//	for (unsigned i{1};i <= N;++i)
//	{
//		cout << f[N - i]<<" ";
//	}
//}


////19.2 vector
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//
//
//int main()
//{
//	unsigned N{};
//	cout << "input N:\n";
//	cin >> N;
//	auto numbers{ make_unique <vector<int>>(N) };
//	for (unsigned i{};i < N;i++)
//	{
//
//		(*numbers)[i] = i * i;
//	}
//	int sum{};
//	for (auto n : *numbers )
//	{
//		sum += n;
//	}
//	cout << "sum=" << sum;
//}

////20.1 span
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//double average(span<double> data)
//{
//	double sum {};
//	for (double val:data)
//	{
//		sum += val;
//
//	}
//	return sum / data.size();
//}
//
//int main()
//{
//	double num_array[]{ 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
//	std::cout << "Average of num_array: " << average(num_array) << std::endl;
//
//	// используем вектор
//	std::vector<double> num_vector{ 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
//	std::cout << "Average of num_vector: " << average(num_vector) << std::endl;
//}



////21.1 
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//
//int main()
//{
//	vector<string> names;
//	vector<double> grades;
//
//
//	size_t max_length{  };
//	double average_grade{};
//	while(true)
//	{
//		cout << "enter student name:";
//		string name;
//		getline(cin, name);
//		names.push_back(name);
//
//		if (max_length < name.length())
//			max_length < name.length();
//			cout << "Enter " << name << "'s grade: ";
//		double grade{};                        // вводим оценку студента
//		cin >> grade;
//		grades.push_back(grade); 
//
//		average_grade += grade;
//
//		cout << "Finish (y/n): ";          // спрашиваем, закончить ли ввод
//		char answer{};
//		cin >> answer;
//
//		cin.ignore();
//		if (answer == 'Y' or answer == 'y')break;
//	}
//
//	average_grade /= grades.size();
//	cout << "\nAverage grade:" << average_grade << endl;
//	cout << "Name\tGrade" << endl;
//	for(size_t i{};i<names.size();i++)
//		cout << names[i] << "\t" << grades[i] <<endl;
//
//}



////22.1 
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//
//int main()
//{
//	string text;
//	cout << "enter text:\n";
//	getline(cin, text);
//	const string separators{" ,;:.\"!?'\n"};
//	vector<string> words;
//	vector<size_t> counts;
//	size_t start{ text.find_first_not_of(separators)};
//	while (start != string::npos)
//	{
//		size_t end{ text.find_first_of(separators, start + 1) };
//		if (end == string::npos)
//		{
//			end = text.length();
//		}
//		string word{ text.substr(start, end - start) };
//
//		bool isExists{ false };
//		for (unsigned i{};i < words.size();i++)
//		{
//			if (words[i] == word) {
//				++counts[i];
//				isExists = true;
//				break;
//			}
//		}
//		if(!isExists)
//		{
//			words.push_back(word);
//			counts.push_back(1);
//		}
//		start = text.find_first_not_of(separators, end + 1);
//	}
//	cout << "\nWords" << endl;
//	for (unsigned i{};i < words.size();++i)
//		cout << words[i] << ": " << counts[i] << endl;
//}



////23.1 
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//
//int main()
//{
//	string text;
//	string word;
//	cout << "enter text:\n";
//	getline(cin, text);
//	cout << "enter word\n";
//	getline(cin, word);
//
//	string lower_word;
//	for (char ch : word)
//	{
//		lower_word += tolower(ch);
//	}
//	const string separators{ " ,;:.\"!?'\n" };
//
//	size_t start{ text.find_first_not_of(separators) };
//	while (start != string::npos)
//	{
//		auto end{ text.find_first_of(separators,start + 1) };
//		if (end == string::npos)
//		{
//			end = text.length();
//		}
//
//		if (end - start == word.length())
//		{
//			bool is_same_word{ true };
//			for (size_t i{ start };i < end;i++)
//			{
//				if (lower_word[i - start] != tolower(text[i]))
//				{
//					is_same_word = false;
//					break;
//				}
//			}
//
//			if(is_same_word)
//			{
//				for (size_t i{ start };i<end; i++)
//				{
//					text[i] = '*';
//				}
//			}
//		}
//		start = text.find_first_not_of(separators, end + 1);
//	}
//	cout <<endl<< text << endl;
//
//}



////23.2 
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//
//int main()
//{
//	string word1, word2;
//	cout << "enter first word:";
//		getline(cin, word1);
//		cout << "\nenter second word:";
//		getline(cin, word2);
//
//
//		if(word1.length() != word2.length())
//		{
//			cout<<endl << word1 << " and " << word2 << " are not anagrams\n";
//				return 0;
//		}
//
//		string word2_copy{ word2 };
//		for(char c:word1)
//		{
//			for (size_t i{};i<word2_copy.length();++i)
//			{
//				if(tolower(word2_copy[i])==tolower(c))
//				{
//					word2_copy.erase(i, 1);
//					break;
//				}
//			
//			}
//		}
//		if (word2_copy.empty())
//		{
//			cout << word1 << "and " << word2 << " are anagrams" << endl;
//		}
//		else{ cout << endl << word1 << " and " << word2 << " are not anagrams\n"; }
//}



////23.3 
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//
//int main()
//{
//	string text;
//	char  ch;
//	cout << "input text:\n";
//	getline(cin, text);
//	cout << "\ninput char: ";
//	cin >> ch;
//	const string separators{ " ,;:.\"!?'\n" };
//	vector<string> words;
//	size_t start{ text.find_first_not_of(separators) };
//	while (start != string::npos)
//	{
//		auto end{ text.find_first_of(separators,start + 1) };
//		if (end == string::npos)
//		{
//			end = text.length();
//		}
//
//		auto word{ text.substr(start,end - start) };
//		if (toupper(word[0]) == toupper(ch))
//		{
//			words.push_back(word);
//		}
//		start = text.find_first_not_of(separators, end + 1);
//	}
//	cout << "\nWords beginning with '" << ch << "' are:\n";
//	for (auto& word : words)
//	{
//		cout << word << endl;
//	}
//}


//
////24.1
//#define _USE_MATH_DEFINES
//#include<cmath>
//#include<iostream>
//#include<windows.h>
//#include<cmath>
//#include<string>
//#include<vector>
//#include <span>
//
//using namespace std;
//
//
//int main()
//{
//	vector<string> names{ "Tom", "Sam", "Bob", "Tim", "Sandra", "Alice" };
//	cout << "Names:";
//	for (const auto& name : names)
//	{
//		cout << name << "\t";
//	}
//	cout << endl;
//
//	auto count{ [&names](char letter)
//		{
//			unsigned n{};
//			for (auto& name : names)
//				if (letter == name[0])++n;
//			return n;
//	    }
//	};
//	char ch{ ' T' };
//	cout << count(ch) << " names begin(s) with" << ch << endl;
//}




//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//int solve(std::vector<int> v) {
//
//
// 
//        return std::accumulate(v.begin(), v.end(), 0);
//    
//}
//int main() {
//    std::vector <int> a{ 1, -1, 2, -2, 3 };
//    std::cout << solve(a);
//}



//Перевірка коду для Q,з тестами множення
//#include <iostream>
//#include <bitset> 
//#include <Windows.h>  
//#include <cstdlib>  
//#include <string> 
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення 
//    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення 
//
//    int day, month;
//
//    // Введіть день народження (позитивне або від'ємне) 
//    cout << "Введіть день народження: ";
//    cin >> day;
//
//    // Введіть місяць народження (позитивний або від'ємний) 
//    cout << "Введіть місяць народження: ";
//    cin >> month;
//
//    bitset<8> dayBinary(day);
//    bitset<8> monthBinary(month);
//
//    // Перетворення дня та місяця на двійкову форму (8 бітів) 
//    if (day >= -128 && day <= 127 && month >= -128 && month <= 127) {
//
//
//        // Вивід двійкових представлень дня та місяця 
//        cout << "День у двійковій формі: " << dayBinary << endl;
//        cout << "Місяць у двійковій формі: " << monthBinary << endl;
//    }
//    else {
//        cout << "Введені значення дня та місяця не влізають у 8 бітів." << endl;
//    }
//
//    string dayBinaryStr = dayBinary.to_string();
//    string monthBinaryStr = monthBinary.to_string();
//
//    string c;
//    // Перебираємо символи у вхідному рядку 'a'. 
//    for (int i = 0; i < dayBinaryStr.size(); i++) {
//        // Перевіряємо, чи поточний символ '1'. 
//        if (dayBinaryStr[i] == '1') {
//            // Якщо так, то додаємо до рядка 'c' значення, яке вказує на позицію розряду, та крапку. 
//            c += to_string(dayBinaryStr.size() - i - 1) + ".";
//        }
//    }
//
//    string r;
//    // Перебираємо символи у вхідному рядку 'a'. 
//    for (int i = 0; i < monthBinaryStr.size(); i++) {
//        // Перевіряємо, чи поточний символ '1'. 
//        if (monthBinaryStr[i] == '1') {
//            // Якщо так, то додаємо до рядка 'c' значення, яке вказує на позицію розряду, та крапку. 
//            r += to_string(monthBinaryStr.size() - i - 1) + ".";
//        }
//    }
//
//    cout << "День у вигляді РЛ-коду: " << c << endl;
//    cout << "Місяць у вигляді РЛ-коду: " << r << endl;
//
//    // завдання 4
//    double a, b;
//    double doubleDay = static_cast<double>(day);
//    double doubleMonth = static_cast<double>(month);
//
//    a = (1 / (doubleDay + doubleMonth));
//    b = ((doubleDay + doubleMonth) / (doubleDay * doubleMonth));
//
//    //a = (1 / (day + month));
//    //b = ((day + month) / (day * month));
//
//    cout << "Значення А: " << a << endl;
//    cout << "Значення B: " << b << endl;
//
//    // Переведення дробового числа у двійковий код
//    int integerPartA = static_cast<int>(a); // Ціла частина числа A
//    double fractionalPartA = a - integerPartA; // Дробова частина числа A
//
//    // Переведення цілої частини у двійковий код
//    bitset<8> binaryIntegerPartA(integerPartA);
//    cout << "Ціла частина A у двійковому коді: " << binaryIntegerPartA << endl;
//
//    // Переведення дробової частини у двійковий код
//    bitset<8> binaryFractionalPartA;
//    for (int i = 0; i < 8; i++)
//    {
//        fractionalPartA *= 2;
//        if (fractionalPartA >= 1) {
//            cout << "    " << fractionalPartA << "    1"<<endl;
//            binaryFractionalPartA[i] = 1;
//            fractionalPartA -= 1;
//        }
//        else {
//            cout << "    " << fractionalPartA << "    0" << endl;
//            binaryFractionalPartA[i] = 0;
//        }
//    }
//    cout << "Дробова частина A у двійковому коді: ";    for (int i{};i < 8;i++)
//        cout << binaryFractionalPartA[i];    cout << endl;
//    int integerPartB = static_cast<int>(b); // Ціла частина числа B
//    double fractionalPartB = b - integerPartB; // Дробова частина числа B
//
//    bitset<8> binaryIntegerPartB(integerPartB);
//    cout << "Ціла частина B у двійковому коді: " << binaryIntegerPartB << endl;
//
//    bitset<8> binaryFractionalPartB;
//    for (int i = 0; i < 8; i++)
//    {
//        
//        fractionalPartB *= 2;
//        if (fractionalPartB >= 1) {
//            cout <<"    "<< fractionalPartB<< "    1" << endl;
//            binaryFractionalPartB[i] = 1;
//            fractionalPartB -= 1;
//        }
//        else {
//            cout << "    " << fractionalPartB << "    0" << endl;
//            binaryFractionalPartB[i] = 0;
//        }
//    }
//    cout << "Дробова частина B у двійковому коді: ";
//    for (int i{};i < 8;i++)
//        cout << binaryFractionalPartB[i];    cout << endl;
//
//    return 0;
//}



#include <iostream> 
#include <bitset> 
#include <iomanip> 
#include <sstream> 
#include <Windows.h>
using namespace std;

void calculation1(double A, string& b)
{
    int integerPartA = static_cast<int>(A); // Ціла частина числа 
    // Переведення цілої частини у двійковий код 
    bitset<8> binaryIntegerPartA(integerPartA);
    cout << "Ціла частина у двійковому коді: " << binaryIntegerPartA << endl;
    for (int i = 7;i >=0;i--)
        b += to_string(binaryIntegerPartA[i]);
    cout << b;
}

void calculation2(double A, string& b)
{

    // Переведення дробового числа у двійковий код 
    int integerPartA = static_cast<int>(A); // Ціла частина числа  
    double fractionalPartA = A - integerPartA; // Дробова частина числа  
    string c;

    bitset<8> binaryFractionalPartA;
    for (int i = 0; i < 8; i++)
    {
        fractionalPartA *= 2;
        if (fractionalPartA >= 1)
        {
            binaryFractionalPartA[i] = 1;
            fractionalPartA -= 1;
        }
        else
        {
            binaryFractionalPartA[i] = 0;
        }
    }

    cout << "Дробова частина у двійковому коді: ";
    for (int i{};i < 8;i++)
    {
        b += to_string(binaryFractionalPartA[i]);
        cout << binaryFractionalPartA[i];
    }
    cout << endl;
}

void intRl(string a, string& b)
{
    int d = a.find('1');
  
 
    a = a.substr(d,a.size() - d);
   
    // Перебираємо символи у вхідному рядку 'a'.  
    for (int i = 0; i < a.size(); i++) {
        // Перевіряємо, чи поточний символ '1'.  
        if (a[i] == '1') {
            // Якщо так, то додаємо до рядка 'c' значення, яке вказує на позицію розряду, та крапку.  
            b += to_string(a.size() - i - 1) + ".";
        }
    }
    cout << b;
}

void intRL(string a, string& c)
{
    for (int i = 0;i < a.size();i++)
        if (a[i] == '1') {
            cout << "-" << i + 1 << ".";
        }
}

int main()
{
    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення 
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення

    double a;
    string binA1, binA2, rlA1, rlA2;
    cout << "Введіть число : ";
    cin >> a;

    cout << endl;
    if (a > 0)
    calculation1(a, binA1);
  
    cout << endl;

    calculation2(a, binA2);

    cout << endl;

    cout << "Число у вигляді РЛ-коду : ";

    intRl(binA1, rlA1);


    intRL(binA2, rlA2);
}