// #include<iostream>
//命名空间的作用域
// using namespace std;
// namespace Rzy
// {
//     int a = 10;
// }
// int a = 20;
// int main()
// {
//     int a = 30;
//     cout << a << endl;
//     cout << ::a << endl;
//     cout << Rzy::a << endl;
//     return 0;
// }
//命名空间的嵌套使用是可以使用相同名字的，但是如果存在同一个名字的变量，会导致在编译过程中无法识别。
//命名空间是可以进行合并的，即使不在一个头文件中，在编译器处理阶段也会进行合并。

#include<iostream>
using std::cout;
using std::endl;
int add(int x ,int y = 0)
{
	return 0;
}
int add(int x,int y)
{
	return 0;
}
int main()
{
    add(10,20);
    return 0;
}