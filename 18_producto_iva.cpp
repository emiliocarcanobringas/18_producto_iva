/*Este programa calcula el IVA, IVA por Iniciativa COVID-19 y el IVA en la región fronteriza*/

# include <iostream> //Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres

int main(){  //Inicio del programa
	
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para el manejo de caracteres, le asignamos el idioma español
	cout<<"Teclee el precio del producto"<<endl;//Solicitamos el valor del producto al usuario
	int precioproducto;//Declaramos la variable para el precio del producto
	int ivaprecioproducto10; //Declaramos la variable para el iva del 10% del producto (iniciativa COVID-19 en el año 2020)
	int ivaprecioproducto16; //Declaramos la variable para el iva del 16% del producto
	int ivaprecioproducto8; //Declaramos la variable para el iva del 8% del producto
		cin>>precioproducto; //Almacenamos el precio del producto
		
	int totalproducto10, totalproducto16, totalproducto8;//Declaramos las variables para el precio del producto mas IVA
	
	ivaprecioproducto10 = precioproducto*(.10);//Obtenemos el 10%
	ivaprecioproducto16 = precioproducto*(.16);//Obtenemos el 16%
	ivaprecioproducto8 = precioproducto*(.08); //Obtenemos el 8%
	
	cout<<"El IVA por la iniciatica COVID-19 (10%) es: "<<ivaprecioproducto10<<endl;//Imprimimos el valor del IVA del producto por la iniciativa COVID-19
	cout<<"El IVA del producto (16%) es: "<<ivaprecioproducto16<<endl;//Imprimimos el valor del IVA del producto
	cout<<"El IVA del producto en la región fronteriza (8%) es: "<<ivaprecioproducto8<<endl;//Imprimimos el valor del IVA del producto para la región fronteriza
	
	//Realizamos la suma del precio de producto por su respectivo IVA
	totalproducto10 = precioproducto+ivaprecioproducto10; totalproducto16 = precioproducto+ivaprecioproducto16; totalproducto8 = precioproducto+ivaprecioproducto8;
		
	cout<<"\nEl precio del producto con IVA por la iniciativa COVID-19 es: "<<totalproducto10<<endl;//Imprimimos el valor producto con IVA COVID-19 
	cout<<"El precio del producto con IVA es: "<<totalproducto16<<endl;//Imprimimos el valor del producto con IVA
	cout<<"El precio del producto con IVA de la región fonteriza es: "<<totalproducto8<<endl;//Imprimimos el valor del producto con IVA de la región fronteriza
		
		return 0;
}
