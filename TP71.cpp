#include <iostream>
#include <string>
using namespace std;
string TraducirAP(string f);
int main()
{
    string frase;
    cout<<"Ingrese la frase: ";
    getline(cin, frase);
    cout<<"En P es: "<<TraducirAP(frase)<<endl;
	return 0;
}

string TraducirAP(string f)
{
	string vocal="AEIOUaeiou";
	string s="p";
	for (int i=0; i<f.size(); i++)
	{
		if (vocal.find(f[i]) != string::npos)
		{
			f.insert(i + 1, s + string(1, f[i]));
            i += 3;
		}
	}
	return f;
}