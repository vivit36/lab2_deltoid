// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../2sem_lab_2_gtest/deltoid.h"
#include "input.h"
#include "menu.h"

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

int main() {

	double r;

	Deltoid deltoid{};

	int d;
	do {
		d = menu(deltoid);
	} while (d != 0);

	_CrtDumpMemoryLeaks();
	return 0;

}