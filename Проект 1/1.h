#pragma once
//#include "pch.h"
#include "1.h"
#include <windows.h>
#include <iostream>
#include <tchar.h>
#include <stdio.h>
#define INFO_BUFFER_SIZE 256
void Test()
{
	TCHAR infoBuf[INFO_BUFFER_SIZE];
	DWORD bufCharCount = INFO_BUFFER_SIZE;

	GetComputerName(infoBuf, &bufCharCount);
	wprintf(L"ComputerName=%s\n", infoBuf);

	GetUserName(infoBuf, &bufCharCount);
	wprintf(L"UserName=%s\n", infoBuf);

	GetSystemDirectory(infoBuf, bufCharCount);
	wprintf(L"SystemDirectory=%s\n", infoBuf);
}