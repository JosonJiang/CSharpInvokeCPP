// Joson.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"


extern "C" __declspec(dllexport) int Adds(int x, int y) 
{ 
	return x + y+3; 
}