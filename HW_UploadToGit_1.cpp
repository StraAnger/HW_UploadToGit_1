#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	char figureInput;
	cout << "Enter the figure letter in Russian (�-�): " << endl;
	cin >> figureInput;

	switch (figureInput) {

	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			for (int j = 0; j < 11; ++j) {
				if (i < j) {
					cout << "*" << " ";
				}
				else {
					cout << " " << " ";
				}
			}
			cout << "\n";
		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			for (int j = 0; j < i; ++j) {

				cout << "*" << " ";
			}
			cout << "\n";
		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			if (i <= 5) {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i < j) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}
					else {
						if (i + j < 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}

				}
			}
			else {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						cout << " " << " ";
					}
					else {
						cout << " " << " ";
					}

				}
			}
			cout << endl;

		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			if (i <= 5) {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						cout << " " << " ";
					}
					else {
						cout << " " << " ";
					}

				}
			}
			else {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i + j > 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}
					else {
						if (i - j > 0) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}

				}
			}
			cout << endl;

		}
		break;
	case'�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			if (i <= 5) {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i < j) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}
					else {
						if (i + j < 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}

				}
			}
			else {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i + j > 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}
					else {
						if (i - j > 0) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}

				}
			}
			cout << endl;

		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			if (i <= 5) {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i > j) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}
					else {
						if (i + j > 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}

				}
			}
			else {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i + j < 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}
					else {
						if (j - i > 0) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}

				}
			}
			cout << endl;

		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			if (i <= 5) {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i >= j) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}
					}
					else {
						cout << " " << " ";
					}

				}
			}
			else {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						if (i + j <= 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}
					else {
						cout << " " << " ";
					}

				}
			}
			cout << endl;

		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			if (i <= 5) {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						cout << " " << " ";
					}
					else {
						if (i + j > 10) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}

				}
			}
			else {
				for (int j = 0; j < 11; ++j) {
					if (j <= 5) {
						cout << " " << " ";
					}
					else {
						if (j - i >= 0) {
							cout << "*" << " ";
						}
						else {
							cout << " " << " ";
						}

					}

				}
			}
			cout << endl;

		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 10; i >= 0; --i) {
			for (int j = 0; j < i; ++j) {

				cout << "*" << " ";
			}
			cout << "\n";
		}
		break;
	case '�':
		cout << "Drawing \"�\"" << endl;

		for (int i = 0; i < 11; ++i) {
			for (int j = 10; j >= 0; --j) {
				if (i <= j) {
					cout << " " << " ";
				}
				else {
					cout << "*" << " ";
				}
			}
			cout << "\n";
		}
		break;
	default:
		cout << "Wrong input" << endl;
		break;
	}
}