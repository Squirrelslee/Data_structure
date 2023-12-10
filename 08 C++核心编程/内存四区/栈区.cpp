// #include <iostream>
// using namespace std;
// #include <string>
// // 栈区的注意事项：栈区开辟的数据由编译器自动释放（不要返回局部变量的地址）
// int* func()//形参也会放在栈区
// {
//     int a = 10;//存放在栈区，栈区的数据在函数执行完后自动释放
//     cout << &a << endl;
//     return &a;//错误
// } 
// int main()
// {
//     int * p = func();

//     cout << p << endl;

//     system("sleep 1s");
//     return 0;
// }