#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct nodo {
    int n;
    struct nodo *sig;
};

class simpList
{
private:
    nodo *pInicio;
    
public:
    void Inicio(int);
    void showList(void);
    void showListRecur(nodo*);
    void sum(void);
    simpList();
};


simpList::simpList(){
    this->pInicio = NULL;
}


void simpList::Inicio(int number){
    nodo *nuevo = new nodo;
    nuevo->n = number;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void simpList::showList(void){
    showListRecur(pInicio);
}
void simpList::showListRecur(nodo *r){
    if(r ==NULL){
    
    }else{
        cout<<r->n<<endl;
        showListRecur(r->sig);
    }
    
}

void simpList::sum(void){
    int counter = 0;
    int acum = 0;
    nodo *r = pInicio;
    
    while (r!=NULL){
        acum += r->n;
        r = r->sig;
        counter++;
    }
    r = pInicio;
    int promedio = acum/counter;
    while (r!=NULL){
        if(r->n >= promedio){
            cout<<r->n<<endl;
        }
        r = r->sig;
    }
    
    
}
int main() {
    simpList l1;
    l1.Inicio(6);
    l1.Inicio(7);
    l1.Inicio(8);
    l1.Inicio(9);
    l1.Inicio(10);
    l1.sum();
    return 0;
}