#include <iostream>
//#include<stdlib.h> //permite formatar casa decimais
#include <unistd.h> //permite utilizar a instrução sleep()

//esta declaração permite suprimir a sintaxe 
//std:: antes dos comandos da linguagem C++
//    std::cout<<"Hello World";
using namespace std;

//Declaração das variáveis
string sVet[11];

//Função para montar a linha a ser impressa
string MontaLinhaAB (int iNumero, int iCol){
    
   string sLinha = "";
   
   //montando a linha
   for (int i = 0; i < iNumero; i++){
       sLinha += "*";
   }

   //condição para inverter as colunas
   if (iCol != iNumero){  
       int iTam = sLinha.length();
       iTam = 13 - iTam;
       
       for (int i = iTam; i < 13; i++){
           sVet[iCol] += " ";
       }
   }
   
   //Carregando o vetor
   sVet[iCol] +=  sLinha;
 
   return sLinha;
}

//Função para montar a linha a ser impressa
string MontaLinhaCD (int iNumero, int iCol){
    
   string sLinha = "";
   
   //montando a linha
   for (int i = 0; i < iNumero; i++){
       sLinha += "*";
   }

   int iTam = sLinha.length();
   
   iTam = 10 - iTam;
   
   //completando a linha espaços
   for (int i = 0; i < iTam; i++){
       sLinha = " " + sLinha;
   }

   //condição para inverter as colunas
   if (iCol != iNumero){  
       int iTam = sVet[iCol].length();
       iTam = iTam - sLinha.length();
       
       for (int i = iTam; i < 13; i++){
           sVet[iCol] += " ";
       }
   }
   
   //Carregando o vetor
   sVet[iCol] +=  sLinha;
 
   return sLinha;
}

int main(){   

   system("clear"); //Este comando limpa a tela do Computador"); 

   cout << "\nA";
   for (int i = 1; i <= 10; i++){
      cout << "\n" << MontaLinhaAB (i,i);
    }
 
   cout << "\n\nB";
   for (int i = 10; i >= 1; i--){
      cout << "\n" << MontaLinhaAB (i,(11-i));
    }
 
   cout << "\n\nC";
   for (int i = 10; i >= 1; i--){
      cout << "\n" << MontaLinhaCD (i,(11-i));
    }
 
   cout << "\n\nD";
   for (int i = 1; i <= 10; i++){
      cout << "\n" << MontaLinhaCD (i,i);
    }

   cout << "\n====================================================\n";
          
    for (int j = 1; j <= 11; j++){
        cout << "\n" << sVet[j];
    }

    return 0;
}




