// Joson.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"


extern "C" __declspec(dllexport) int Adds(int x, int y) 
{ 
	return x + y+3; 
}