#include <iostream>
#include <limits>

using namespace std; 

int main (){
	
	int imin = numeric_limits<int>::min(); 
	 int imax = numeric_limits<int>::max();
	 
	 cout << "imin =" << imin << endl; 
	 cout << "imax =" << imax << "\n"; 
	 cout << "tamaño de int :  =" << sizeof(int) << endl;
	 
	 float fmin = std::numeric_limits<float>::min(); 
	 float fmax = std::numeric_limits<float>::max(); 
	  
	 cout << "fmin =" << fmin << endl; 
	 cout << "fmax =" << fmax << "\n"; 
	 cout << "tamaño de float :  =" << sizeof(float) << endl;
	 
	 char cmin = std::numeric_limits<char>::min(); 
	 char cmax = std::numeric_limits<char>::max(); 
	 
	 cout << "cmin =" << cmin << endl; 
	 cout << "cmax =" << cmax << "\n"; 
	 cout << "tamaño de char :  =" << sizeof(char) << endl;
	 
	 return 0; 
	  
}
