#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <cstdio>
#include "Class.h"
using namespace std;

void prepr(ifstream* filename, List *lst, string name);                      /*первые 2 функции отвечают за обработку входного файла и размещение пар "имя- значение" в список                     */
void sprtr(string* str, int num, List *lst, string name);
void mnplt_review(List *lst); //отвечает за вывод настроек на экран
void start(); //хранит список, в ней запускаются все другие функции
void open_file(List *lst); //открывает файл по имени с клавиатуры
void vyvod_menu(); // вывод список возможных действий
void menu(List *lst); //меню
void obrabotka(List *lst); //заменяет $par$ на значение, соответствующее par
void znach_po_im(List *lst); //выводит значение по введенному имени
void nachalo_raboty();
void autotest();