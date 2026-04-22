#include <iostream>
#include <vector>
using namespace std;

void insertheap(vector<int>& maxheap){
    int index = maxheap.size() - 1;

    while(index > 0){
        int parent = (index - 1) / 2;

        if(maxheap[parent] < maxheap[index]){
            swap(maxheap[parent], maxheap[index]);
            index = parent;
        }
        else{
            break;
        }
    }
}
void heapify(vector<int>& maxheap,int index){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    int size = maxheap.size();
    if(left<size&&maxheap[left]>maxheap[largest]){
        largest = left;
    }
     if(right<size&&maxheap[right]>maxheap[largest]){
        largest = right;
    }
    if(largest!=index){
        swap(maxheap[largest],maxheap[index]);
        heapify(maxheap,largest);
    }
    return;
    
}
void deleteheap(vector<int>& maxheap){
    maxheap[0]=maxheap[maxheap.size()-1];
    maxheap.pop_back();
    heapify(maxheap,0);
}

int main() {
    vector<int> maxheap;
    int n, element;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> element;
        maxheap.push_back(element);
        insertheap(maxheap);
    }
    deleteheap(maxheap);
    for(int i = 0; i < maxheap.size(); i++){
        cout << maxheap[i] << " ";
    }

    return 0;
}