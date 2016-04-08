
class ConjuntoTDA{
	data x;
	setTDA *hola;
	
	void agregar(Data x){
		return hola->insert(Data x);
	}
	
	void saca(){
		return hola->delete();
	}
	
	bool estaVacio(){
		return hola->isEmpty();
	}
	
	bool pertenece(Data x){
		setTDA *aux=hola;
		while(!aux->estaVacio()){
			if(aux->saca()==x){
			return true;
		}
		}
		return false;
		}
		
	 ConjuntoTDA interseccion(ConjuntoTDA *c){
	 	setTDA *aux=hola;
	 	ConjuntoTDA *chao;
	 	data rep;
		data rep1;	
	 		
	 	while(!c->estaVacio()){
	 		rep=c->delete();
	 		while(!aux->isEmpty()){
	 			rep1=aux->delete();
	 			if(rep==rep1){
	 				chao->agrega(rep);
				 }
			 }
	 		aux=hola;
		 }	
	 		return chao;
	}
	
	void intersecta(ConjuntoTDA *c){
		setTDA *aux=hola;
	 	ConjuntoTDA *chao;
	 	data rep;
		data rep1;	
	 		
	 	while(!c->estaVacio()){
	 		rep=c->delete();
	 		while(!aux->isEmpty()){
	 			rep1=aux->delete();
	 			if(rep==rep1){
	 				chao->agrega(rep);
				 }
			 }
	 		aux=hola;
		 }	
	 		hola=chao;
	}
	
	ConjuntoTDA union(ConjuntoTDA *c){
		setTDA *aux=hola;
	 	ConjuntoTDA *chao=hola;
	 	data rep;
		data rep1;	
		int suma=0;
	 		
	 	while(!c->estaVacio()){
	 		rep=c->delete();
	 		while(!aux->isEmpty()){
	 			rep1=aux->delete();
	 			if(rep==rep1){
	 				suma++;
				 }
				 if(suma==0){
				 	chao->agrega(rep)
				 }
			 }
			 suma=0;
	 		aux=hola;
		 }	
	 		return chao;
	}
	
	void une(ConjuntoTDA *c){
	    setTDA *aux=hola;
	 	ConjuntoTDA *chao=hola;
	 	data rep;
		data rep1;	
		int suma=0;
	 		
	 	while(!c->estaVacio()){
	 		rep=c->delete();
	 		while(!aux->isEmpty()){
	 			rep1=aux->delete();
	 			if(rep==rep1){
	 				suma++;
				 }
				 if(suma==0){
				 	chao->agrega(rep)
				 }
			 }
			 suma=0;
	 		aux=hola;
		 }	
	 		hola=chao;
	}
}

