#include<iostream>
#include<string>
using namespace std;
int main (){
 int i;
	do {
	
	cout << "Ingrese una opcion" <<endl << "1. Suma de matrices" <<endl << "2. Transpuesta de Matriz" << endl <<"3. Multiplicacion de Matrices"<< 
	endl <<"4. Buscar un numero en una matriz"<< endl <<"5. Contar palabras en una cadena" << endl <<"6. Ordenar letras de una cadena" << endl <<"7. Detectar subcadena" << endl <<"8. Verificar Palindromo" << endl <<"9. Salir" << endl;
	cin >> i;
	cin.ignore();
	switch (i) {
		case 1:{
			int rows, colums;
			cout << "Cuantas filas desea en la primera matriz: ";
			cin >> rows; 
			cout <<"cuantas columnas desea en la primera matriz: ";
			cin >> colums;
			int matrix [rows][colums];
			cout << "Ingrese los datos de la primera matriz" << endl;
			for (int i = 0;i < rows; i++)
			{
				for (int j = 0; j < colums; j++)
				{
					cout << "Ingrese numero [" << i + 1 << "," << j + 1 << "]: ";
					cin >> matrix[i][j];
				} 
			}
			
			cout << "\n Los datos de la matriz son: \n";
			for (int i = 0; i < rows;i++)
			{
				for (int j = 0; j < colums ; j++)
				{
					cout << matrix [i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			int rows2, colums2;
			cout << "Cuantas filas desea en la segunda matriz: "  ;
			cin >> rows2; 
			cout <<"cuantas columnas desea en la segunda matriz: " ;
			cin >> colums2;
			int matrix2 [rows2][colums2];
			cout << "Ingrese los datos de la segunda matriz" << endl;
			for (int k= 0; k < rows2; k++)
			{
				for (int l = 0; l < colums2; l++)
				{
					cout << "Ingrese numero [" << k + 1 << "," << l + 1 << "]: ";
					cin >> matrix2[k][l];
				} 
			}
	
			cout << "\n Los datos de la matriz 2 son: \n";
			for (int k = 0; k < rows2;k++)
			{
				for (int l = 0; l < colums2 ; l++)
				{
					cout << matrix [k][l] << "\t";
				}
				cout << endl;
				cout << endl;
			}
			
			if (rows == rows2 && colums == colums2){
				int sumamatrix[rows][colums];
				
				for (int r = 0; r < rows; r++){
					for (int c = 0; c < colums; c++){
					sumamatrix[r][c] = matrix[r][c] + matrix2[r][c];
				}
			}
			cout << "La suma de la matriz 1 y 2 es: " << endl;
			for (int r = 0; r < rows; r++) {
        		for (int c = 0; c < colums; c++) {	
            	cout << sumamatrix[r][c] << "\t";
        		}
        		cout << endl;
    		}
    		cout << endl;
    	}else {
    		cout << " Las matrices tienen que tener las mismas dimensiones";
		}
			break;
		}
		case 2:{
			int rows, colums;
			cout << "Cuantas filas desea en la matriz: ";
			cin >> rows; 
			cout <<"cuantas columnas desea en la matriz: ";
			cin >> colums;
			int matrix [rows][colums];
			cout << "Ingrese los datos de la matriz" << endl;
			for (int i = 0;i < rows; i++)
			{
				for (int j = 0; j < colums; j++)
				{
					cout << "Ingrese numero [" << i + 1 << "," << j + 1 << "]: ";
					cin >> matrix[i][j];
				} 
			}
			
			cout << "\n Los datos de la matriz son: \n";
			for (int i = 0; i < rows;i++)
			{
				for (int j = 0; j < colums ; j++)
				{
					cout << matrix [i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			
			cout << "\n La matriz transpuesta es: \n" ;
			for (int i = 0; i < colums; i++)
			{
				for (int j = 0; j < rows ; j++)
				{
					cout << matrix [j][i] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			
			break;
		}
		case 3:{
			int rows, colums;
			cout << "Cuantas filas desea en la primera matriz: ";
			cin >> rows; 
			cout <<"cuantas columnas desea en la primera matriz: ";
			cin >> colums;
			int matrix [rows][colums];
			cout << "Ingrese los datos de la primera matriz" << endl;
			for (int i = 0;i < rows; i++)
			{
				for (int j = 0; j < colums; j++)
				{
					cout << "Ingrese numero [" << i + 1 << "," << j + 1 << "]: ";
					cin >> matrix[i][j];
				} 
			}
			
			cout << "\n Los datos de la matriz son: \n";
			for (int i = 0; i < rows;i++)
			{
				for (int j = 0; j < colums ; j++)
				{
					cout << matrix [i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			int rows2, colums2;
			cout << "Cuantas filas desea en la segunda matriz: "  ;
			cin >> rows2; 
			cout <<"cuantas columnas desea en la segunda matriz: " ;
			cin >> colums2;
			int matrix2 [rows2][colums2];
			cout << "Ingrese los datos de la segunda matriz" << endl;
			for (int k= 0; k < rows2; k++)
			{
				for (int l = 0; l < colums2; l++)
				{
					cout << "Ingrese numero [" << k + 1 << "," << l + 1 << "]: ";
					cin >> matrix2[k][l];
				} 
			}
	
			cout << "\n Los datos de la matriz 2 son: \n";
			for (int k = 0; k < rows2;k++)
			{
				for (int l = 0; l < colums2 ; l++)
				{
					cout << matrix [k][l] << "\t";
				}
				cout << endl;
				cout << endl;
			}
			
			if (rows == rows2 && colums == colums2){
				int mulmatrix[rows][colums];
				
				for (int r = 0; r < rows; r++){
					for (int c = 0; c < colums; c++){
					mulmatrix[r][c] = matrix[r][c] * matrix2[r][c];
				}
			}
			cout << "La multiplicacion de la matriz 1 y 2 es: " << endl;
			for (int r = 0; r < rows; r++) {
        		for (int c = 0; c < colums; c++) {	
            	cout << mulmatrix[r][c] << "\t";
        		}
        		cout << endl;
    		}
    		cout << endl;
    	}else {
    		cout << " Las matrices tienen que tener las mismas dimensiones";
		}
			break;
		}
		case 4: {
			int rows, colums, num;
			cout << "Cuantas filas desea en la matriz: ";
			cin >> rows; 
			cout <<"cuantas columnas desea en la matriz: ";
			cin >> colums;
			int matrix [rows][colums];
			cout << "Ingrese los datos de la matriz" << endl;
			for (int i = 0;i < rows; i++)
			{
				for (int j = 0; j < colums; j++)
				{
					cout << "Ingrese numero [" << i + 1 << "," << j + 1 << "]: ";
					cin >> matrix[i][j];
				} 
			}
			
			cout << "\n Los datos de la matriz son: \n";
			for (int i = 0; i < rows;i++)
			{
				for (int j = 0; j < colums ; j++)
				{
					cout << matrix [i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			cout << "Que numero desea buscar: ";
			cin >> num;
			bool encontrado = false;
    		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < colums; j++) {
            if (matrix[i][j] == num) {
                cout << "\n El numero " << num << " se encontro en la posicion [" << i + 1 << "][" << j + 1 << "]!" << endl;
                encontrado = true;
                break; 
            }
        	}	
        	if (encontrado) {
            	break;
        	}
    		}

    		if (!encontrado) {
        	cout << "\n El numero " << num << " no se encontro en la matriz." << endl;
    		}
    		cout << endl;
			
			break;
		}
		
		case 5:{
			
			
			
			
			break;
		}
		
		case 6: {
			
			break;
		}
		
		case 7: {
			
			
			break;
		}
		
		case 8: {
			string sentence, sentence2 = "", sentence3 = "";
    		cout << "Ingrese texto y presione enter para continuar: ";
    		getline(cin, sentence);
    		for (int i = 0; i < sentence.length(); i++) {
        		if (sentence[i] != ' '){
        			sentence3 += tolower(sentence[i]);
    			}
    		}
    		for (int i = sentence3.length() - 1; i >= 0; i--) {
        		sentence2 += tolower(sentence3[i]);
    		}
    		if (sentence3 == sentence2) {
    			cout << sentence << "Es un palindromo" << endl;
			}else{
        	cout << sentence << " No es un palindromo" << endl;
        }
	
		break;
		}
			

			
	default:
	cout << "Escriba una de las opciones del 1 al 8 o 9 para salir" << endl;
	cout << endl;
	break;
}
}while (i != 9);

return 0;
}


