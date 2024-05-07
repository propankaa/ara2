#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
if (n<=1)
	return n;
return fib (n-1) + fib (n-2);
}
int main()
{
	setlocale (LC_ALL, "");
int n;
wcout<<L"введите число:"; cin>>n;
wcout<<fib(n);
getchar();
	return 0;
}