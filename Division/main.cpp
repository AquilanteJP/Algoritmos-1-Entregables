void division(int &dividendo, int &divisor, int &cociente, int &resto){
	if(dividendo>=0 && divisor>0){
	  cociente=0;
	  while(dividendo>=divisor){
	    dividendo=dividendo-divisor;
	    cociente++;
	  }
	resto=dividendo;  
	} else {
	    
	}
}

using namespace std;
int main() {
    /* No hace falta modificar el main */
    //Leo la entrada
    int divisor,dividendo,cociente,resto;
    cin >> dividendo>>divisor;
    
    //Calculo la division
    division(dividendo,divisor,cociente,resto);
    
    //Salida
    cout << cociente << " " << resto;
    
    return 0;
}
