#include <iostream>
#include <iomanip>

#include <chrono>
#include <vector>
#include <memory>

using namespace std;

class DynamicArray {
private:
	// Pointer to store array
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

	// user input for size
	DynamicArray(int capacity)
	{
		this->capacity = capacity;
		array = new int[capacity];
		size = 0;
	}

	// Returns array size
	int getSize() { return size; }

	// Returns container size
	int getCapacity() { return capacity; }

	// append 
	void append(int value)
	{
		//checks to see if there is room in the array for value
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

		// Creates a new array - twice the size
		int* temp = new int[capacity * 2];

		capacity = capacity * 2;
		// copies the old array elements into the new
		for (int i = 0; i < size; i++) {
			temp[i] = array[i];
		}

		// Delete old array
		delete[] array;

		// Assign newly created temp array to original array
		array = temp;
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

int main ()
{
  vector<vector<int32_t>> time_data;

  int32_t const num_runs  =      5;
  int32_t const num_elems = 10'000;

  for (int32_t run_idx=0; run_idx<num_runs; ++run_idx)
  {
    time_data.push_back(vector<int32_t>(num_elems, 0));

    
    DynamicArray container(num_elems);

    for (int32_t elem_idx=0; elem_idx<num_elems; ++elem_idx)
    {
      auto start = chrono::high_resolution_clock::now();

      container.append(elem_idx);

      auto end = chrono::high_resolution_clock::now();
      auto elapsed__ns = chrono::duration_cast<chrono::nanoseconds>(
        end-start
      ).count();

      time_data[run_idx][elem_idx] = elapsed__ns;
    }
  }

  for (int32_t elem_idx=0; elem_idx<num_elems; ++elem_idx)
  {
    cout << setw(10) << elem_idx << " ";

    for (int32_t run_idx=0; run_idx<num_runs; ++run_idx) {
      cout << setw(10) << time_data[run_idx][elem_idx] << " ";
    }

    cout << endl;
  }

  return 0;
}

