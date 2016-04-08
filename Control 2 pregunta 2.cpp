class item{
public:
    string valor
    int cant_llamados;
};

class nodo{
    item *i;
    nodo *next;
};

class lista{
public:
    nodo *head;

    lista(){
        head == NULL;
    }

    void agregar(item *i){
        if(head==NULL){
            head = new nodo();
            head->Item=i;
        }
        else{
            nodo *nuevo = new nodo();
            nuevo->item=i;
            nuevo->next(head);
            head = nuevo;
        }
    }

    float probabiliadad(string valor){
        if(head==NULL){
            return 0;
        }
        else{
            int suma=0;
            nodo *aux=head;
            while(aux->next!=NULL){
                suma++;
            }
            return (1/suma);
        }
    }

};

























