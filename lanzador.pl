#!/usr/bin/perl
# // algoritmo 1
#Fichero para automatización de ejecucion por lotes de un ejecutable 
#dado parametros de entrada

$repeticiones = 30;
@ejecutables= ("mainmatricesApp");
@matrizSize= ("50","100","200","300","400","500","600","700","800");
$path= "/Users/valentinagomez/projects/separada04/";

foreach $exe (@ejecutables){
	foreach $size (@matrizSize){
		$fichero= "$path"."Soluciones/"."$exe"."-size"."$size";
		#print("$fichero \n");
		for($i=0; $i<$repeticiones; $i++){
			#print("$path$exe $size \n");
			system("$path$exe $size >> $fichero");
		}
	}
}
exit(1);
