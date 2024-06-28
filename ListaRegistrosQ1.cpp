#include <iostream>
#include <cstring>
#include <unistd.h>
#include <ctype.h>
 
using namespace std;

const int iTam = 3;


int iQtdRegistros = 0;


struct Categoria{
    int    iCodCategoria;
    string sNomeCategoria;
};

struct Setor{
    string sSetor;
};

struct Localizacao{
    int    iCodLocal;
    string sNomeLocal;
};

struct CadRamal{
   int         iNumRamal;   
   Categoria   VarCategoria;
   Setor       VarSetor;    
   Localizacao VarLocal;    
   string      sSalaRamal;  
   string      sRespRamal;  
   string      sRespAteste; 
};
    
    
void CadastroDeRamais(CadRamal *Ramal, CadRamal *pVetor); 


bool VerificaRamal(CadRamal *pVetor, int &pAux);


void ImprimirCadastroDeRamais(CadRamal *pVetor);

int main(){
    
    CadRamal VarCadRamal;
 
    CadRamal iVetor[5];
    
    CadRamal *pPonte;

    pPonte = &VarCadRamal;
        
    if (iQtdRegistros == iTam){
        cout << "\n=======================================================";                
        cout << "\nSr Usuário, não há espaço livre para novos Cadastros!..";
        cout << "\n=======================================================";
        sleep(4);
        return 0;
    }

    
    for (int i = 0; i < iTam; i++){
        
        CadastroDeRamais(pPonte, &iVetor[i]);
        iVetor[i] = VarCadRamal;
        iQtdRegistros += 1;
    }

    
    for (int i = 0; i < iTam; i++){
        system("clear");
        cout << "\n==============================================================";
        cout << "\nIMPRESSÃO DO CADASTRO DE RAMAIS DO MINISTÉRIO DO MEIO AMBIENTE";
        cout << "\n==============================================================\n";
        
        
        ImprimirCadastroDeRamais(&iVetor[i]);
    }
    
    return 0;
}


void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor){

    system("clear");
    
    cout << "\n=================================================";
    cout << "\nCADASTRO DE RAMAIS DO MINISTÉRIO DO MEIO AMBIENTE";
    cout << "\n=================================================\n";

    int iAux = 0;

    do{
        cout << "\nInforme o número do Ramal entre 1000 e 3000 = ";
        cin  >> iAux;
        
         
        if (iAux < 999 || iAux > 2999){
           cout << "\nNúmero do Ramal fora do intervalo 1000 até 2999\n";
           sleep(2);
        }

        pVetor = pRamal;

                
        if (!VerificaRamal(pVetor, iAux)){
           cout << "\nNúmero do Ramal já está cadastrado\n";
           sleep(1);
           iAux = -1;
        }

        if (iAux != -1){
           pRamal->iNumRamal = iAux;
        }
        
    }while(iAux < 999 || iAux > 2999);

    do{
        cout << "\nInforme o código da Categoria entre 0 e 6 = ";
        cin  >> pRamal->VarCategoria.iCodCategoria;
        cin.ignore();
         
        if (pRamal->VarCategoria.iCodCategoria < 0 || 
            pRamal->VarCategoria.iCodCategoria > 6){
           cout << "\nCódigo da Categoria fora do intervalo 0 até 6\n";
           sleep(2);
        }
        
    }while(pRamal->VarCategoria.iCodCategoria < 0 || 
           pRamal->VarCategoria.iCodCategoria > 6);
    
    cout << "\nInforme a descrição da Categoria = ";
    getline(cin, pRamal->VarCategoria.sNomeCategoria);
    
    
    for (auto &letra: pRamal->VarCategoria.sNomeCategoria){
        letra = toupper(letra); 
    }
 
    do{
        cout << "\nInforme a descrição do Setor = ";
        getline(cin, pRamal->VarSetor.sSetor);

         
        if (pRamal->VarSetor.sSetor == " "){
           cout << "\nDescrição do Setor deve ser preenchida\n";
           sleep(2);
        }
        
    }while(pRamal->VarSetor.sSetor == " ");
    
    
    for (auto &letra: pRamal->VarSetor.sSetor){
        letra = toupper(letra); 
    }

    do{

        cout << "\nInforme o código da Localização 500 ou 505 = ";
        cin  >> pRamal->VarLocal.iCodLocal;
        cin.ignore();
        
         
        if (pRamal->VarLocal.iCodLocal != 500 && pRamal->VarLocal.iCodLocal != 505){
           cout << "\nCódigo da Localização diferente de 500 ou 505\n";
           sleep(2);
        }
        
    }while(pRamal->VarLocal.iCodLocal != 500 && pRamal->VarLocal.iCodLocal != 505);
    
    cout << "\nInforme a descrição da Localização = ";
    getline(cin, pRamal->VarLocal.sNomeLocal);

    
    for (auto &letra: pRamal->VarLocal.sNomeLocal){
        letra = toupper(letra); 
    }

    do{
        cout << "\nInforme o número do andar + o número da sala = ";
        getline(cin, pRamal->sSalaRamal);

         
        if (pRamal->sSalaRamal == " "){
           cout << "\nNúmero do andar + o número da sala deve ser preenchido\n";
           sleep(2);
        }
        
    }while(pRamal->sSalaRamal == " ");

    do{
        cout << "\nInforme o nome do Responsável pelo Ramal = ";
        getline(cin, pRamal->sRespRamal);

         
        if (pRamal->sRespRamal == " "){
           cout << "\nO nome do Responsável pelo Ramal deve ser preenchido\n";
           sleep(2);
        }
        
    }while(pRamal->sRespRamal == " ");
    
    
    for (auto &letra: pRamal->sRespRamal){
        letra = toupper(letra); 
    }

    do{
        cout << "\nInforme o nome do Responsável pelo Ateste = ";
        getline(cin, pRamal->sRespAteste);

         
        if (pRamal->sRespAteste == " "){
           cout << "\nO nome do Responsável pelo Ateste deve ser preenchido\n";
           sleep(2);
        }
        
    }while(pRamal->sRespAteste == " ");
    
    
    for (auto &letra: pRamal->sRespAteste){
        letra = toupper(letra); 
    }

    return;
}


bool VerificaRamal(CadRamal *pVetor, int &pAux){

    for (int i = 0; i < iTam; i++){  
        if (pVetor[i].iNumRamal == pAux){
           return false;
        }
    }

    return true; 
    
}


void ImprimirCadastroDeRamais(CadRamal *pVetor){
    
    cout << "\nRamal                  : " << pVetor->iNumRamal;
    cout << "\nCategoria              : " << pVetor->VarCategoria.iCodCategoria
         << " - ";
    cout << pVetor->VarCategoria.sNomeCategoria;
    cout << "\nSetor                  : " << pVetor->VarSetor.sSetor;
    cout << "\nEdifício               : " << pVetor->VarLocal.iCodLocal
         << " - ";
    cout << pVetor->VarLocal.sNomeLocal;
    cout << "\nSala                   : " << pVetor->sSalaRamal;
    cout << "\nResponsável pelo Ramal : " << pVetor->sRespRamal;
    cout << "\nResponsável pelo Ateste: " << pVetor->sRespAteste;
    cout << "\n==============================================================\n";
    
    sleep(2);
    
    return; 

}


