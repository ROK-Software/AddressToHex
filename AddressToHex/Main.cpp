#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Please enter the address: ";
	string userI;
	getline(cin, userI);
	if (userI.length() % 2 == 1)
	{
		userI = "0" + userI ;
	}
	char modify[sizeof(userI)];
	strcpy_s(modify, userI.c_str());
	int loop = userI.length();
	userI = "";
	for (int i = loop; i > 0; i -= 2)
	{
		userI.append(R"(\)");
		userI.append("x");
		userI.append(string(1, modify[i - 2]));
		userI.append(string(1, modify[i - 1]));
	}
	cout << userI;
	exit(0);
}
















