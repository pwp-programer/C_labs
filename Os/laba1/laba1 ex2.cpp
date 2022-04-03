#include <iostream>
#include <windows.h>
#include "ShellAPI.h"
using namespace std;
int main()
{
ShellExecuteA(0, NULL, "C:\\image\\unknown.png", NULL, NULL, SW_HIDE);
return 0;
}
