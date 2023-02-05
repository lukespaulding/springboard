#include <iostream>
using namespace std;

class DynamicArray {
private:
	// Pointer to store array created
	// using new keyword
	int* array = NULL;
	// Size of array
	int size;

	// Container size
	int capacity;

public:
	// Default constructor with size 1
	DynamicArray()
	{
		capacity = 1;
		size = 0;
		array = new int[capacity];
	}

	// Taking size from the user
	DynamicArray(int capacity)
	{
		this->capacity = capacity;
		array = new int[capacity];
		size = 0;
	}

	// Returns the size of Array
	// i.e Total elements stored currently
	int getSize() { return size; }

	// Returns the size of container
	int getCapacity() { return capacity; }

	// Inserting element after last stored index
	void push_back(int value)
	{
		// check is array having size to store element or
		// not
		if (size == capacity) {

			// if not then grow the array by double
			growArray();
		}

		// insert element
		array[size] = value;
		// increment the size or last_index+1
		size++;
	}

	// Increase the array size by double of current capacity
	void growArray()
	{

		// Creating new array of double size
		int* temp = new int[capacity * 2];

		capacity = capacity * 2;
		// copy element of old array in newly created array
		for (int i = 0; i < size; i++) {
			temp[i] = array[i];
		}

		// Delete old array
		delete[] array;

		// Assign newly created temp array to original array
		array = temp;
	}

	// Insert element at given index
	void insertAt(int index, int value)
	{
		// check is array having size to store element or
		// not
		if (size == capacity) {

			// if not then grow the array by double
			growArray();
		}

		for (int i = size - 1; i >= index; i--) {
			array[i + 1] = array[i];
		}

		array[index] = value;
		size++;
	}

	bool isEmpty()
	{
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};