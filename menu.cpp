#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int opcion;
	{
		cout<<"menu de opciones de la fundacion ecohabitats"<<endl;
		cout<<"1- opcion 1: quienes somos"<<endl;
		cout<<"2- opcion 2: equipo de trabajo"<<endl;
		cout<<"3- opcion 3: proyectos desarrollados"<<endl;
		cout<<"4- opcion 4: realiza una donacion"<<endl;
		cout<<"5- opcion 5: contacto"<<endl;
		cout<<"6- opcion 6: informacion ambiental"<<endl;
		
		cout<<"ingrese una opcion:";
		cin>> opcion;
		
		switch(opcion){
			case 1:
			 cout<<"VISION:La visi�n de nuestra organizaci�n representada en el logo, muestra la integraci�n de ecosistemas, pobladores y biodiversidad en un esquema de sostenibilidad para garantizar los habitats que permiten la vida delos seres que habitamos nuestro planeta."<<endl;
			 cout<<"MISION:Somos una organizaci�n no gubernamental, constituida el 3 de marzo del a�o 2005 mediante registro de C�mara y Comercio del Cauca No. 12976. Nuestra misi�n es la de servir de mecanismo de apoyo al Estado, organizaciones no gubernamentales, sector privado, comunidades ind�genas, afro colombianas y campesinas, para establecer prioridades en el estudio y manejo de �reas destinadas a la conservaci�n o de abastecimiento de servicios ambientales y, en general, orientados a la conservaci�n del ambiente y la diversidad biol�gica con un enfoque de adaptaci�n a variabilidad y cambio clim�tico."<<endl;
			  system("pause>nul");
                break;
            case 2:
			cout<<"1-LILIANA PATRICIA PAZ BETANCOURT: Socia Fundadora de Ecohabitats. Es Ec�loga y actualmente desarrolla un doctorado en Ciencias Ambientales en la Universidad del Cauca en Colombia"<<endl;
			cout<<"2-LUIS ALFONSO ORTEGA FERNANDEZ: Socio Fundador de Ecohabitats. Licenciado en Biolog�a de la Universidad del Cauca � Colombia, especializado en Sistemas de Informaci�n Geogr�fica "<<endl;
			cout<<"3-ALEX CORTES DIAGO: Socio Fundador de Ecohabitats.  Bi�logo de la Universidad el Cauca, Magister en Ciencia (Mg.Sc.) de Facultad de Ciencias de la Universidad del Valle"<<endl;
			cout<<"4-ALVARO GOMEZ CERON:Socio activo de Ecohabitats., Antrop�logo de la Universidad del Cauca, con maestr�a en Estudios Contempor�neos Latino americanos en la Universidad Complutense"<<endl;
			cout<<"5-EDUARDO FUENTES DELGADO: Socio fundador de Ecohabitats. Doctorado de en geograf�a de la Universidad Aut�noma de Barcelona. Ha estado vinculado al estudio de las ciencias de la tierra y naturales"<<endl;
			cout<<"6-YOLANDA LOPEZ GARCIA: Socia fundadora de Ecohabitats. Ec�loga egresada de la Fundaci�n Universitaria los Robles. Cuenta con amplia experiencia en procesos de educaci�n ambiental"<<endl;
			cout<<"7-GLORIA MARIA MU�OZ MU�OZ: Administradora P�blica egresada de la Escuela Superior de Administraci�n P�blica del departamento del Meta, Profesional Administrativo"<<endl;
			cout<<"8-FERNANDO CUCALON SANCHEZ: Profesional de la Contadur�a P�blica de la Universidad del Cauca. Con especializaci�n en Administraci�n Financiera en la Universidad del Cauca y la Escuela de Negocios de Bogot�"<<endl;
			system("pause>nul");
                break;
			case 3:
			cout<<"zona reserva forestal pacifico en el municipio el tambo (cauca) INCODER"<<endl;
			cout<<"ordenamiento y manejo ambiental-reserva forestal rio magdalena"<<endl;
			cout<<"planes de conversacion- especies amenazada- CRC (cauca)"<<endl;
			cout<<"planificacion local- adaptacion a la variabilidad y cambio climatico en zonas rurales (cauca)"<<endl;
			cout<<"elaboracion estudios- reserva forestal serrania el pinche (cauca)"<<endl;
			cout<<"propuesta de sustraccion- reserva forestal rio magdalena para el desarrollo rural (INCODER)"<<endl;
			cout<<"evaluacion nuevas areas protegidas"<<endl;
			cout<<"territorio sostenible adaptado al clima TeSAC-cauca"<<endl;
			system("pause>nul");
                break;
			case 4:
			cout<<"solo tiene que seguir los pasos de la pagina de como debe donar"<<endl;
			system("pause>nul");
                break;    
			case 5:
			cout<<"llamenos: celular: +57 3137650562; telefono: +57 (2) 833 7840"<<endl;
			cout<<"escribanos: correos: ecohabitatsong@gmail.com ; info@fundacionescohabitats.org"<<endl;
			cout<<"estamos en: direccion: calle 78n #19-157|casa 24, porteria 1; urbanizacion: habitanya; region:popayan cauca,colombia."<<endl;
			system("pause>nul");
                break;
			case 6:
			cout<<"causas"<<endl;
			cout<<"contaminacion excesiva:Las grandes industrias han aumentado las emisiones de di�xido de carbono, de gases t�xicos y de otros contaminantes que desembocan en el aire, el agua y el suelo de nuestro planeta. Otras de las acciones que provocan la contaminaci�n del ambiente son la quema de basura, el uso excesivo de aerosoles, la contaminaci�n de mares, r�os y lagos, as� como el desecho de materiales t�xicos en la tierra."<<endl;
			cout<<"desarrollo industrial: El desarrollo de las industrias no necesariamente es una causa directa del deterioro del ambiente; sin embargo, la forma irresponsable y la falta de regulaci�n en el desecho de materiales hacia el medio ambiente, s� son un grave problema en nuestro planeta. El crecimiento industrial en las �ltimas d�cadas ha sido tan acelerado que los productos se procesan a gran velocidad y, por lo tanto, generan mayor cantidad de residuos."<<endl;
			cout<<"sobrepoblacion:Gracias a la tecnolog�a y al avance de la medicina, ahora es posible curar muchas enfermedades, prolongar la vida de las personas, lograr mayor n�mero de nacimientos y disminuir las muertes por causas que antes no se pod�an evitar; esto ha provocado que la poblaci�n aumente de manera importante en las �ltimas d�cadas. As� como aumenta la poblaci�n, tambi�n incrementan sus necesidades, por lo que, actualmente, se producen m�s alimentos y productos que exigen una sobreexplotaci�n de los recursos naturales de nuestro planeta y, por lo tanto, se genera m�s basura y m�s contaminantes."<<endl;
			cout<<"consumo excesivo de recursos naturales: Una de las causas de la sobreexplotaci�n de los recursos naturales es el aumento de la poblaci�n del mundo y la urgencia de satisfacer sus necesidades, lo que genera un grave problema para el medio ambiente, pues tengamos en cuenta que las necesidades de las personas son ilimitadas, mientras los recursos naturales de nuestro planeta son limitados. �sta es una de las razones por la cual, la tala excesiva de los bosques, la erosi�n de los suelos y la explotaci�n de bienes que nos ofrece la naturaleza representan un grave peligro para la conservaci�n del equilibrio natural de la Tierra."<<endl;
			cout<<"consecuencias:"<<endl;
			cout<<"calentamiento global:Es uno de los efectos principales que provoca la contaminaci�n del aire, as� como la emisi�n de gases t�xicos en el ambiente, lo que incrementa y acelera el calentamiento natural de nuestro planeta, generando cambios en su composici�n, as� como alteraci�n de los ecosistemas."<<endl;
			cout<<"efectos negativos en la salud:La emisi�n de di�xido de carbono y otros gases, aparte del da�o ambiental que provocan, tienen implicaciones muy peligrosas para nuestra salud, pues el aire y el agua contaminada provocan enfermedades y padecimientos que pueden llegar a ser mortales."<<endl;
			cout<<"reduccion de la biodiversidad: La tala excesiva, la contaminaci�n de r�os, lagos y mares, as� como la emisi�n de gases en la atm�sfera, ocasionan la p�rdida de ecosistemas completos y la transformaci�n del entorno, lo anterior puede hacer que la vida animal y vegetal se vea perjudicada, pues muchos seres vivos mueren y tambi�n, desaparecen especies de flora y fauna."<<endl;
			cout<<"agotamiento de recursos naturales: Debido a la sobreexplotaci�n de los recursos, por la gran demanda que existe por parte de las grandes industrias, los recursos naturales no renovables est�n acab�ndose, al igual que los recursos renovables, pues aunque podr�an regenerarse de forma natural con el paso del tiempo, su explotaci�n es tan r�pida y excesiva, que no hay tiempo suficiente para que estos se recuperen."<<endl;
			cout<<"escasez de recursos: Al agotarse los recursos renovables y no renovables, nos enfrentamos con grandes crisis econ�micas, hambrunas y sequ�as que ponen en peligro la vida de millones de personas en el planeta, as� como la supervivencia de todos los seres vivos."<<endl;
			system("pause>nul");
                break;
		}
	}
	return 0;
}
