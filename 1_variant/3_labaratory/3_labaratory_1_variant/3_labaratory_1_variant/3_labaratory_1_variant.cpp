#include <iostream>
#include <vector>

/*
* if this variable is defined -> show created and deleted objects count
* it helps us to define that program manipulate objects correctly
*/
//#define DEBUG

using namespace std;

class CharSet {
private:
	// constants
	const int MAX_SET_SIZE = 5;
	const int NOT_FOUND = -1;

	// private fields
	char* charSet;
	const unsigned int maxSize = MAX_SET_SIZE;
	int currentSize;

#ifdef DEBUG
	// static variables for debug
	static int createdObjectsCount;
	static int deletedObjectsCount;
#endif // DEBUG

	void addSymbol(char sym) {
		// creating new empty char array
		char* tempCharSet = new char[currentSize + 1];

		// copy existing symbols and add new symbol
		for (int i = 0; i < currentSize; i++) {
			tempCharSet[i] = this->charSet[i];
		}
		tempCharSet[currentSize] = sym;

		// delete old char set
		delete[] this->charSet;

		// reasing
		this->charSet = tempCharSet;
		currentSize++;
	}

	bool hasFreeSpace() {
		return currentSize < maxSize;
	}

	int find(char sym) {
		for (int i = 0; i < currentSize; i++) {
			if (this->charSet[i] == sym) {
				return i;
			}
		}

		return NOT_FOUND;
	}
public:
	CharSet() {
		charSet = NULL;
		this->currentSize = 0;

#ifdef DEBUG
		CharSet::createdObjectsCount++;
		cout << "Konstruktor: " << CharSet::createdObjectsCount << endl;
#endif // DEBUG
	}

	CharSet(char* charArray, unsigned int size) {
		this->currentSize = 0;

		if (size >= maxSize) {
			this->charSet = new char[maxSize];
		}
		else {
			this->charSet = new char[size];
		}

		for (int i = 0; i < size && i < this->maxSize; i++) {
			if (this->find(charArray[i]) == NOT_FOUND) {
				this->addSymbol(charArray[i]);
			}
		}

#ifdef DEBUG
		CharSet::createdObjectsCount++;
		cout << "Konstruktor: " << CharSet::createdObjectsCount << endl;
#endif // DEBUG
	}

	CharSet(const CharSet& cs) {
		if (cs.currentSize != 0) {
			this->charSet = new char[cs.currentSize];

			for (int i = 0; i < cs.currentSize; i++) {
				this->charSet[i] = cs.charSet[i];
			}

			this->currentSize = cs.currentSize;
		}
		else {
			this->currentSize = 0;
			this->charSet = NULL;
		}

#ifdef DEBUG
		CharSet::createdObjectsCount++;
		cout << "Konstruktor: " << CharSet::createdObjectsCount << endl;
#endif // DEBUG
	}

	~CharSet() {
		if (charSet != NULL) {
			delete[] charSet;
		}

#ifdef DEBUG
		CharSet::deletedObjectsCount++;
		cout << "Destructor: " << CharSet::deletedObjectsCount << endl;
#endif // DEBUG
	}

	CharSet operator+(char sym) {
		CharSet tempCharSet(*this);

		if (tempCharSet.find(sym) == NOT_FOUND && tempCharSet.hasFreeSpace()) {
			tempCharSet.addSymbol(sym);
		}

		return tempCharSet;
	}

	CharSet operator+(const CharSet& r) {
		CharSet tempCharSet(*this);

		for (int i = 0; i < r.currentSize && this->hasFreeSpace(); i++) {
			if (tempCharSet.find(r.charSet[i]) == NOT_FOUND) {
				tempCharSet.addSymbol(r.charSet[i]);
			}
		}

		return tempCharSet;
	}

	void operator=(const CharSet& CS) {
		CharSet tempCharSet(CS);

		if (this->charSet != nullptr) {
			delete[] this->charSet;
		}

		this->charSet = new char[tempCharSet.currentSize];
		this->currentSize = 0;

		for (int i = 0; i < tempCharSet.currentSize; i++) {
			this->addSymbol(tempCharSet.charSet[i]);
		}
	}

	bool operator==(CharSet r) {
		for (int i = 0; i < this->currentSize; i++) {
			if (r.find(this->charSet[i]) == NOT_FOUND) {
				return false;
			}
		}

		return true;
	}

	friend ostream& operator<<(ostream& output, const CharSet& r) {
		if (r.charSet != NULL) {
			for (int i = 0; i < r.currentSize; i++) {
				output << r.charSet[i] << ' ';
			}
		}
		else {
			output << "empty";
		}
		return output;
	}
};
#ifdef DEBUG
int CharSet::createdObjectsCount = 0;
int CharSet::deletedObjectsCount = 0;
#endif // DEBUG

// driver main program
int main(void) {
	char xVector[] = { '1', '2', '3', '1' };
	char yVector[] = { '4', '2' };

	CharSet xCharSet(xVector, 4), yCharSet;

	cout << "x charset: " << xCharSet << endl;
	cout << "y charset: " << yCharSet << endl;

	for (int i = 0; i < 2; i++) {
		yCharSet = yCharSet + yVector[i];
	}

	xCharSet = xCharSet;
	xCharSet = xCharSet;
	xCharSet = xCharSet;

	cout << "x charset: " << xCharSet << endl;
	cout << "y charset: " << yCharSet << endl;

	CharSet zCharSet;

	zCharSet = xCharSet + '1';
	zCharSet = zCharSet + 'a';
	zCharSet = zCharSet + 'x';

	zCharSet = zCharSet + xCharSet;
	zCharSet = zCharSet + yCharSet;
	zCharSet = zCharSet + zCharSet;

	cout << "z charset: " << zCharSet << endl;

	if (xCharSet == xCharSet) {
		cout << "xCharSet equels xCharSet" << endl;
	}
	else {
		cout << "Error in == operator" << endl;
	}

	if (!(yCharSet == zCharSet)) {
		cout << "yCharSet not equels zCharSet" << endl;
	}
	else {
		cout << "Error in == operator" << endl;
	}

	return 0;
}