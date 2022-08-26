#include<bits/stdc++.h>
using namespace std;
class heap{
    private:
    int* arr;
    int totalSize;
    int size;
    public:
    heap(int x){
        totalSize=x;
        arr=new int[totalSize];
        size=0;
    }

    void insert(int x)
    {
        if(size>=totalSize)
        {
            cout<<"heap overflow!"<<endl;
            return;
        }
        arr[size]=x;
        size++;
        int index=size-1;
        while(index!=0 && arr[index]>arr[(index)/2])
        {
            swap(arr[index],arr[(index)/2]);
            int parent=(index)/2;
            index=parent;
        }
    }

    void print()
    {
        if(size==0)
        {
            return;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    void deleteHeap()
    {
        if(size<=0)
        {
            cout<<"Heap is empty!"<<endl;
            return;
        }
        arr[0]=arr[size-1];
        size--;
        int index=0;
        while(index<size)
        {
            int left=2*index+1;
            int right=2*index+2;
            if(left<=size && arr[index]<arr[left])
            {
                swap(arr[index],arr[left]);
                index=left;
            }
            else if(right<=size && arr[index]<arr[right])
            {
                swap(arr[index],arr[right]);
                index=right;
            }
            else
            {
                return;
            }
        }
        
    }
    
};
int main()
{
    heap h1(500);
    h1.insert(23);
    h1.insert(36);
    h1.insert(67);
    h1.insert(69);
    h1.insert(200);
    h1.insert(0);

    h1.print();

    h1.deleteHeap();
    h1.print();
    return 0;
}