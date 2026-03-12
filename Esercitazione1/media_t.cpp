using namespace std;

#include <fstream>
#include <sstream>
#include <iostream>


int main(void) {
	string filename;
	cout << "Inserire nome del file: ";
	cin >> filename;
	
	ifstream ifs(filename);
	
	if (ifs.is_open()){
		string location;
		double temp1, temp2, temp3, temp4;
		
		while (ifs >> location >> temp1 >> temp2 >> temp3 >> temp4){
			double media = (temp1 + temp2 + temp3 + temp4)/4;
			cout << location << ' ' << media << '\n';
			}
			
			ifs.close();
		}else{
			cout << "Impossibile aprire il file";
		}
	return(0);
			
}