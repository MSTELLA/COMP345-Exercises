// From notes: a cpp file should not be included as it effectively merges two compilation units together

#include "Orders.h"

//#include "Orders.cpp"

int main() {

	//Create OrderList object
	OrdersList player1List;
	cout << player1List << endl;

	//Deploy
	Deploy *deploy1 = new Deploy;
    cout << "Adding to the OrdersList the Order: "<< deploy1 << endl;
	player1List.addOrder(deploy1);
	cout << player1List << endl;

	// Advance
	Advance *advance1 = new Advance;
	cout << "Adding to the OrdersList, Order: "<< advance1 << endl;
	player1List.addOrder(advance1);
	cout << player1List << endl;

	// Bomb
	Bomb *bomb1 = new Bomb;
	cout << "Adding to the OrdersList, Order: "<< bomb1 << endl;
	player1List.addOrder(bomb1);
	cout << player1List << endl;

	// Blockade
	Blockade *blockade1 = new Blockade;
	cout << "Adding to the OrdersList, Order: "<< blockade1 << endl;
	player1List.addOrder(blockade1);
	cout << player1List << endl;

	// Airlift
	Airlift *airlift1 = new Airlift;
	cout << "Adding to the OrdersList, Order: "<< airlift1 << endl;
	player1List.addOrder(airlift1);
	cout << player1List << endl;

	//Negotiate
	Negotiate *negotiate1 = new Negotiate;
	cout << "Adding to the OrdersList, Order: "<< negotiate1 << endl;
	player1List.addOrder(negotiate1);
	cout << player1List << endl;


	//Create through copy constructor object
	OrdersList player1List2;
    player1List2 = OrdersList(player1List);
	cout << player1List2 << endl;

	//Create through assignment operator object
	OrdersList player1List3 = player1List;
	cout << player1List3 << endl;

	//Move()
	cout << "List before the switch" << endl;
	cout << player1List << endl;
	player1List.move(2,3);
	cout << "List after the switch" <<endl;
	cout << player1List << endl;

	//Remove()
	cout << "List before the removal of order 2" <<endl;
	cout << player1List << endl;
	player1List.remove(2);
	cout << "List after the removal of order 2" <<endl;
	cout << player1List << endl;

	//Delete orders lists and orders to free memory
	player1List.~OrdersList();
	cout << player1List << endl;

	// Check the deep copies
	cout << "Original, now modified list" << endl;
	cout << player1List << endl;

	cout << "Copy through the copy constructor" << endl;
	cout << player1List2 << endl;

	cout << "Copy through the assignment operator" << endl;
	cout << player1List3<< endl;

	cout << endl;

	//cout << "Orders test!" << endl;
	
	return 0;
}
