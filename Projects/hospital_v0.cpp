#include <iostream>
using namespace std;

// Global variables
const int MAX_SPECIALIZATION = 20; // 20 different specialization
const int MAX_QUEUE = 5;		   // the maximum number of people in the queue

string names[MAX_SPECIALIZATION][MAX_QUEUE];
int status[MAX_SPECIALIZATION][MAX_QUEUE]; // 0 for regular patients, and 1 urgent patients
int queue_length[MAX_SPECIALIZATION + 1];  // for each specialization: how many patients so far

int menu(){
	int choice = -1;
	while (choice == -1)
	{
		cout << "\nChoices:\n";
		cout << "1) Add new patient\n";
		cout << "2) Print all patients\n";
		cout << "3) Get next patient\n";
		cout << "4) Exit\n";
		cout << "\nEnter your choice: ";
		cin >> choice;

		// Invalid choice
		if (!(choice >= 1 && choice <= 4))
		{
			cout << "Invalid choice. Try again\n";
			choice = -1; // loop keep working
		}
	}
	return choice;
}

// Move each patient to the left. E.g if patient in position 5, it will be in 4
// Help in removing patient
void shift_left(int specialization, string names_sp[], int status_sp[])
{
	int len = queue_length[specialization];
	for (int i = 1; i < len; ++i)
	{
		names_sp[i - 1] = names_sp[i];
		status_sp[i - 1] = status_sp[i];
	}
	queue_length[specialization]--;
}

// Move each patient to the right. E.g if patient in position 5, it will be in 6
// Help in adding patient
void shift_right(int specialization, string names_sp[], int status_sp[])
{
	int len = queue_length[specialization];
	for (int i = len - 1; i >= 0; --i)
	{ // critical to start from END
		names_sp[i + 1] = names_sp[i];
		status_sp[i + 1] = status_sp[i];
	}
	queue_length[specialization]++;
}

bool add_patient()
{
	int specialization;
	string name;
	int status;

	cout << "****************************\nEnter specialization(from 1-20)\nName\nStatus(0 for regular patients, and 1 urgent patients)\n****************************\n";
	cin >> specialization >> name >> status;

	int pos = queue_length[specialization];
	if (pos >= MAX_QUEUE)
	{
		cout << "Sorry we can't add more patients for this specializationialization\n";
		return false;
	}

	if (status == 0){ // regular, add to end
		names[specialization][pos] = name;
		status[specialization][pos] = status;
		queue_length[specialization]++;
	}
	else{
		// urgent, add to begin. Shift, then add
		shift_right(specialization, names[specialization], status[specialization]);
		names[specialization][0] = name;
		status[specialization][0] = status;
	}

	return true;
}

void print_patient(int specialization, string names_sp[], int status_sp[]){
	int len = queue_length[specialization];
	if (len == 0)
		return;

	cout << "There are " << len << " patients in specialization " << specialization << "\n";
	for (int i = 0; i < len; ++i)
	{
		cout << names_sp[i] << " ";
		if (status_sp[i])
			cout << "Urgent\n";
		else
			cout << "Regular\n";
	}
	cout << "\n";
}

void print_patients()
{
	cout << "****************************\n";
	for (int specialization = 0; specialization < MAX_SPECIALIZATION; ++specialization)
	{
		print_patient(specialization, names[specialization], status[specialization]);
	}
	cout << "****************************\n";
}

void get_next_patients()
{
	int specialization;
	cout << "Enter specialization: ";
	cin >> specialization;

	int len = queue_length[specialization];

	if (len == 0)
	{
		cout << "No patients at the moment. Have rest...\n";
		return;
	}

	// Let patient goes to dr
	cout << names[specialization][0] << " Please go to the Doctor\n";

	// delete the patient in position 0
	shift_left(specialization, names[specialization], status[specialization]);
}

void hospital_system()
{
	while (true)
	{
		int choice = menu(); // takes a choice from the user

		if (choice == 1)
			add_patient();
		else if (choice == 2)
			print_patients();
		else if (choice == 3)
			get_next_patients();
		else
			break;
	}
}

int main(){
	// freopen("c.in", "rt", stdin);
	hospital_system();
	return 0;
}
