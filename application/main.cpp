#include "dataframe.h"
#include <string>
#include <fstream>
#include <iostream>

/* Comente as funcoes que não quer usar.
 Ou usa-se as funcoes read_file em conjunto com load_coluna(size_t)
 ou  Apenas read_col(size_t)
 */

int main(int argc, char **argv){
	Frame data("../data/data.csv");
	data.read_col(1, ';');
	data.read_col(2, ';');
	data.read_col(3, ';');
	data.read_col(4, ';');

return EXIT_SUCCESS;
}
