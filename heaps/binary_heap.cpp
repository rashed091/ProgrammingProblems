#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
using namespace std;

int peek(vector<int> &heap)
{
	return heap[1];
}

int pop(vector<int> &heap)
{
	int key = heap[1];
	swap(heap[1], heap.back());
	heap.pop_back();
	siftDown(heap, 1);
	return key;
}

void insert(vector<int> &heap, int key)
{
	heap.push_back(key);
	siftUp(heap, (int)heap.size() - 1);
}

void siftUp(vector<int> &heap, int index)
{
	while (index > 1 && heap[index] > heap[index / 2])
	{
		swap(heap[index], heap[index / 2]);
		index /= 2;
	}
}

void siftDown(vector<int> &heap, int index)
{
	while (2 * index < (int)heap.size())
	{
		int child = 2 * index;
		if (child + 1 < heap.size() && heap[child + 1] > heap[child])
		{
			child += 1;
		}
		if (heap[child] > heap[index])
		{
			swap(heap[child], heap[index]);
			index = child;
		}
	}
}

int main()
{

	return 0;
}
