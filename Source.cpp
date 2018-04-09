#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int input;

string adj[6] = { "Blue ", "Green ", "Yellow ", "Black ", "White ", "Red " };
string noun[6] = { "Right Arm ", "Left Arm ", "Nose ", "Ear ", "Foot", "Chest" };

int main() {
	srand(time(NULL));
	cout << "The teacher calls out a colour and a body part. Students must find an object in the room that has that colour and then touch the object with the selected body part. For example, if the teacher calls out “red nose”, students need to find an object that is red and touch it with their nose. The teacher continues calling colours and body parts. Press y then push enter " << endl;
	while (1) {
		cin >> input;

		int ad = rand() % 5;
		int nouns = rand() % 5;
		cout << adj[ad] << " " << noun[nouns] << endl;
		system("pause");
	}
}