/*
 * Virenschleuder Verbreitet in vorgegebene Verzeichnisse EICAR Testsignaturen
 *
 * (c) 2010 Oliver Strauss
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; only GPLv2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, if not, see http://www.gnu.org/licenses
 */


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream	file_write;
	ifstream	file_read;
	string		directory;
	string		temp_text;

	cout << "Virenschleuder V1.0 \nOliver Strauss (C) 2010\n";
    
	file_read.open("directory.txt", ios::in);

	if(file_read)
	{
		while(!file_read.eof())
		{
			getline(file_read, temp_text);
			file_write.open(temp_text.c_str(), ios::out);
			if(file_write)
			{
				cout << "Writing a Virus to " << temp_text << "\n";
				file_write << "X5O!P%@AP[4\\PZX54(P^)7CC)7}$EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*" << endl;
				file_write.close();
			}
			else
			{
				cout << "Unable to write a file: " << temp_text;
			}
		}
		file_read.close();
	}
	else
	{
		cout << "Unable to load the file!";
	}
	cout << "Done\n";
	system("PAUSE");
	return 0;
}