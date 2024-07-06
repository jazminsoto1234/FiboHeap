#include <iostream>
#include "FiboHeap.h"
using namespace  std;
//Testing

// CASO EN DONDE ELIMINO EL MENOR Y SOLO ES UNA CLAVE
// CASO DE INSERCION

/*int main() {
    std::cout << "Hello, World!" << std::endl;
    Fiboheap<int> fh;
    Fiboheap<int> fh2;
    fh.insert(10);
    fh.insert(20);
    fh.insert(30);
    fh.insert(40);

    fh2.insert(10);
    fh2.insert(20);
    fh2.insert(30);

    cout<<fh.findMin()<<endl;
    cout<<fh.size()<<endl;
    Fiboheap<int> fh3 = Union(fh, fh2);
    cout<<"AA"<<endl;
    fh.ExtractMin();
    fh.print();


    return 0;
}
*/


int main(){
    std::cout << "Hello, World!" << std::endl;
    Fiboheap<int> fh;
    Fiboheap<int> fh2;
    // Assuming you have methods to insert elements
    fh.insert(10);
    fh.insert(20);
    fh.insert(30);
    fh.insert(40);
    fh.insert(10);
    fh.insert(20);
    fh.insert(30);

    fh2.insert(10);
    fh2.insert(20);
    fh2.insert(30);

    fh.print();
    cout<<"---------------------"<<endl;
    fh.ExtractMin();
    fh.print();

    cout<<"---------------------"<<endl;
    auto n = fh.findNode(40);
    cout<<n->data<<endl;
    fh.Decrase_key(n,5);
    fh.print();

    cout<<"SS: "<<n->data<<endl;

    auto p = fh.findNode(10);
    cout<<"PP"<<p->data<<endl;
    fh.delete_key(p);

    fh.print();



    auto h = fh.findNode(20);
    cout<<"PP"<<h->data<<endl;
    fh.delete_key(h);


    fh.print();

    //cout<<"UNION-----------------------"<<endl;
    //Fiboheap<int> fh3 = Union(fh, fh2);
    //fh3.display();

    /*cout<<"---------------------"<<endl;
    fh.ExtractMin();
    fh.print();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.print();

    //fh3.ExtractMin();
    //fh3.display();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.print();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.print();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.print();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    cout<<"KK"<<endl;
    fh.print();

    //fh3.ExtractMin();
    //fh3.display();


    /*fh.display();
    cout<<"----------------------"<<endl;
    //cout<<"A"<<endl;
    //cout<<fh.findMin()<<endl;
    //cout<<fh.size()<<endl;
    //Fiboheap<int> fh3 = Union(fh, fh2);
    //fh3.display();
    cout<<"---------------------"<<endl;
    fh.ExtractMin();
    fh.display();

    //cout<<"UNION-----------------------"<<endl;
    //Fiboheap<int> fh3 = Union(fh, fh2);
    //fh3.display();

    cout<<"---------------------"<<endl;
    fh.ExtractMin();
    fh.display();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.display();

    //fh3.ExtractMin();
    //fh3.display();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.display();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.display();

    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    fh.display();
    cout<<"-----------------------"<<endl;
    fh.ExtractMin();
    cout<<"KK"<<endl;
    fh.display();
    //fh3.ExtractMin();
    //fh3.display();

    cout<<"-----------------------"<<endl;
    //Fiboheap<int> fh3 = Union(fh, fh2);
    //fh3.display();
    */

    return 0;
}