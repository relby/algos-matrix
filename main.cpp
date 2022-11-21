// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// main.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

int main() {

  const int size = 3;
  TMatrix<int> m1(size), m2(size + 1), m3(size);
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      m1[i][j] = 1;
      m2[i][j] = 2;
    }
  }
  m3[0][0] = 2; m3[0][1] = 4; m3[0][2] = 6;
                m3[1][1] = 2; m3[1][2] = 4;
                              m3[2][2] = 2;

  std::cout << m1 * m2 << std::endl;
  // std::cout << m3 << std::endl;
}

int main1()
{
  TMatrix<int> a(5), b(5), c(5);
  int i, j;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
  // a[0][4] = 1;
  // a[0][3] = 1;
  // a[0][2] = 1;
  // a[0][1] = 1;
  // a[0][0] = 1;

  // a[1][4] = 1;
  // a[1][3] = 1;
  // a[1][0] = 1;
  for (i = 0; i < 5; i++)
    for (j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;

  c = a + b;  // Doens't work because it doesn't have = operator overrided
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;
  cin >> c;
  cout << "Matrix c = a + b" << endl << c << endl;
}
//---------------------------------------------------------------------------
