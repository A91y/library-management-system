// library_system.h
#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define ENTER 13
#define TAB 9
#define BKSP 8

void password(void);
void menu(void);
void userPanel(void);
void bookPanel(void);
void endScreen(void);

void addUser(void);
void modifyUser(void);
void listUser(void);
int searchUser(int);
void rentList(void);
void deleteUser(void);

void addBook(void);
int modifyBook(int);
void listBook(void);
void rentBook(void);
int searchBook(int);
void deleteBook(void);

#endif // LIBRARY_SYSTEM_H
