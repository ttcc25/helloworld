// helloworld.cpp : main project file.

#include "stdafx.h"
#include <time.h>
#include <stdio.h>

using namespace System;

void printdate()
{
  time_t now;
	struct tm *d;
	char li[13];

	time(&now);
	d = localtime(&now);

	strftime(li, 15, "%d/%m/%Y", d);

	printf("%s\n", li);
	//scanf("%c", li);

}

int main(array<System::String ^> ^args)
{
	Console::WriteLine("Hello World\n");
	Console::WriteLine("Thomas Carr\n");
	printdate();
    return 0;
}

