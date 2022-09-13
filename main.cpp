// =================================================================
//
// File: main.cpp
// Author: Uri Jared Gopar Morales
// Date: 12/09/2022
//
// =================================================================
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <time.h>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "bubble.h"

int main(int argc, char *argv[])
{
  ifstream input;
  ofstream output;

  if (argc != 3){
	cout<<"ERROR"<<endl;
	return -1;
  }

  input.open(argv[1]);
  if (!input.is_open()) {
	cout << argv[0] << ": File \"" << argv[1] << "\" not found\n";
     return -1;
    }
  output.open(argv[2]);


  int n;
  string busqueda, f, h, p, id;

  
  struct datos
  {
    int anio;
    int m;
    int d;
    string fecha;
    string hora;
    string puerto;
    string id;
  };

  vector<datos>bar ;


  input >> n;
  input >> busqueda;

  for (int i = 0; i < n; i++)
  {
 
    input >> f>> h >> p >> id;

    string d = f.substr(0, f.find("-"));
    string m = f.substr(3, f.find("-"));
    string anio = f.substr(6);


    size_t found = id.rfind(busqueda);
    if (found != string::npos)
    {

      bar.push_back({stoi(anio), stoi(m), stoi(d), f, h, p, id});
    }
  }

  bubbledia(bar);
  bubblemes(bar);


  for (int i = 0; i < bar.size(); i++)
  {
    output << bar[i].fecha << " " << bar[i].hora << " " << bar[i].puerto << " " << bar[i].id << "\n";
  }

  input.close();
  output.close();

  return 0;
  
}