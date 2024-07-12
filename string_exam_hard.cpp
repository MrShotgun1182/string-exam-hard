// the hard string exam ; www.quera.ir || code: 177665
#include <iostream>

using namespace std;

int main()
{
	int num ;
	bool answer = true;
	string _string, _index;
	cin >> num;
	cin >> _string;

	while (answer == true)
	{
		answer = false;
		for (int i = 0 ; i < _string.length()  ; i++)
		{	
			if (_string[i] == _string[i+1])
			{
				answer = true;
				for (int j = 0 ; j < _string.length(); j++)
				{
					if (j!=i && j!=i+1)
					{
						_index += _string[j];
					}
				}
				_string = "";
				_string = _index;
				_index = "";
				break;
			}
		}
	}

	cout << _string;
 
	return 0;
}