#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double salario, reajuste, aumento;

    cout << "Informe o salário: " << endl;
    cin >> salario;
    if(salario == 0 || salario <= 400.00){
        reajuste = salario * 1.15;
        aumento = salario * 0.15;
        cout << "- Novo salário: " << reajuste << "\n- Valor do reajuste: " << aumento << "\n- Percentual: 15%" << endl;
		}else if (salario == 400 || salario <= 800) {
		    reajuste = salario * 1.12;
		    aumento = salario * 0.12;
		    cout << "- Novo salário: " << reajuste << "\n- Valor do reajuste: " << aumento << "\n- Percentual: 12%" << endl;
		}else if (salario == 800.01 || salario <= 1200.00){
		    reajuste = salario * 1.10;
		    aumento = salario * 0.10;
		    cout << "- Novo salário: " << reajuste << "\n- Valor do reajuste: " << aumento << "\n- Percentual: 10%" << endl;
		}else if (salario == 1200.01 || salario <= 2000.00){
		    reajuste = salario * 1.7;
		    aumento = salario * 0.7;
		    cout << "- Novo salário: " << reajuste << "\n- Valor do reajuste: " << aumento << "\n- Percentual: 7%" << endl;
		}else{
		    reajuste = salario * 1.4;
		    aumento = salario * 0.4;
		    cout << "- Novo salário: " << reajuste << "\n- Valor do reajuste: " << aumento << "\n- Percentual: 4%" << endl;
		}
    
		return 0;
}
