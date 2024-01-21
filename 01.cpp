# include<bits/stdc++.h>
using namespace std ;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
            }
    
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val ;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap( arr[parent ], arr[index]);
                index= parent ;
            }
            else{
                return ;
            }
        }

    }

    void print (){
        for( int i=1;i<=size;i++){
            cout<< arr[i]<<" ";

        }cout<<endl;

    }


    void deleteFromHeap(){

       if(size==0){
        cout<< "nothing to delete "<<endl;
        return ;

       }


       int i=1;


       arr[1]=arr[size];
       size--;
       while(i<size){


            int leftIndex= 2* i ;
            int RightIndex= 2* i +1 ;
            if( leftIndex<size&& arr[i]<arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i= leftIndex;
            }
         else   if( RightIndex<size&& arr[i]<arr[RightIndex]){
                swap(arr[i], arr[leftIndex]);
                i= RightIndex;
            }
            else{
                return ;
            }
       }

    }

};
int main(){

heap h ;
h.insert(5);
h.insert(50);
h.insert(45);
h.insert(65);
h.insert(65);
h.insert(75);




h.print();

h. deleteFromHeap();
h.print();





    return 0;
}