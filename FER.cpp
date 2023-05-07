#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    // Abrir el archivo
    ifstream file("coordenadas.txt");
    if (!file.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    // Leer el primer renglón para obtener el tamaño del tablero
    int rows, cols;
    string line;
    getline(file, line);
    stringstream(line) >> rows >> cols;

    // Crear la matriz dinámicamente
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i]= new int[cols];
    }
    for(int i=0;i<rows;i++){
    	for(int j=0;j<cols;j++){
    		matrix[i][j] =0;
		}
	}
   // Leer el resto del archivo para obtener las minas
    while (getline(file, line)) {
        // Separar la línea por ";"
        stringstream stream(line);
        string cell;
        while (getline(stream, cell, ';')) {
            // Separar cada celda por ","
            stringstream cell_stream(cell);
            int x, y;
            char ignore;
            cell_stream >> x >> ignore >> y;

            // Marcar la celda con una mina
            matrix[x][y] = -1;
        }
    }
    // Cerrar el archivo
    file.close();
    // Imprimir la matriz
    cout<<"#";
    
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++) {
        	 cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    cout<<"#";
        // Liberar la memoria dinámica
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;

}

