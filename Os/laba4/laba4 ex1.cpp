#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

//  объявление 3-х потоков
HANDLE threads[3];
DWORD _stdcall thread1(CONST LPVOID lpParam);
DWORD _stdcall thread2(CONST LPVOID lpParam);
DWORD _stdcall thread3(CONST LPVOID lpParam);

int main()
{
#define INFINITY 10
	//  Создание потоков
	threads[0] = CreateThread(nullptr, 0, &thread1, nullptr, 0, nullptr);
	threads[1] = CreateThread(nullptr, 0, &thread2, nullptr, 0, nullptr);
	threads[3] = CreateThread(nullptr, 0, &thread3, nullptr, 0, nullptr);
	WaitForMultipleObjects(3, threads, TRUE, INFINITY);
	cout << endl;
	system("pause");
	return 0;
}

//  Вывод в диспетчер задач 
DWORD _stdcall thread1(CONST LPVOID lpParam)
{
	int i = 0;
	for (; ; )
	{
		i++;
	}
	cout << "1 thread\n";
	ExitThread(0);
}

DWORD _stdcall thread2(CONST LPVOID lpParam)
{
	int i = 0;
	for (; ; )
	{
		i++;
	}
	cout << "2 thread\n";
	ExitThread(0);
}
DWORD _stdcall thread3(CONST LPVOID lpParam)
{
	int i = 0;
	for (; ; )
	{
		i++;
	}
	cout << "3 thread\n";
	ExitThread(0);
}