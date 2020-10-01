#include "std_lib_facilities.h"


int main()
{
	vector<string> words;
	string disliked1 = "Broccoli";

	//take input
	for (string input; cin >> input; )
		words.push_back(input);


	//check if the word is disliked or not
	for (int i = 0; i < words.size(); ++i)
	{
		if (disliked1 == words[i])
			cout << "BLEEP" << endl;
		else
			cout << words[i] << endl;
	}


	return 0;
}