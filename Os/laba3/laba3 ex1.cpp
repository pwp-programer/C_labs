#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <stdio.h>
#include <locale.h>


using namespace std;
int main(void)
{
    setlocale(LC_ALL, "RUS");
    int a = 1;
    if (a == 1)
    {
        STARTUPINFO w = { 0 };


        w.cb = sizeof(w);


        PROCESS_INFORMATION p;


        memset(&p, 0, sizeof(p));

        //string path1 = "C:\\Program Files\\Mozilla Firefox\\firefox.exe";
        
        string path = "C:\\Windows\\notepad.exe";
        
        //string path1 = "C:\\Program Files\\Mozilla Firefox\\firefox.exe";
        CreateProcess(NULL, const_cast<LPSTR>(path.c_str()), NULL, NULL, true, 0, NULL, NULL, &w, &p);


        //Указываем переменную как путь к файлу а после запускаем процесс этого файла(открытие)
        CreateProcess(NULL, const_cast<LPSTR>(path.c_str()), NULL, NULL, true, 0, NULL, NULL, &w, &p);


        //string path1 = "C:\\Program Files\\Mozilla Firefox\\firefox.exe";

        Sleep(5000);
        //system("TASKKILL /F /IM notepad.exe");

        //Sleep(1000);
        system("TASKKILL /F /IM notepad.exe");


        ExitProcess(0);
    }
    system("pause");
    return 0;
}