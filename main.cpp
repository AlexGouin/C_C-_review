#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct NomDeVotreStructure
{
    int variable1 = 0;
    int variable2 = 0;
    int autreVariable = 0;
    double nombreDecimal = 0.0;
};


//Base class
class Parent
{
    public:
      int id_parent;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
    public:
      int id_child;
};

int main(int argc, char *argv[])
{
//    taille en bits de tableaux
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("Hello World!\n");
    printf("%d\n", sizeof(tab));
    printf("%d\n", tab[1]);
    printf("%d\n", sizeof(int));
//    accéder à un élément d'une structure en C
    struct NomDeVotreStructure stru;
    stru.autreVariable = 1;
    printf("%d\n", stru.autreVariable);

// allouer de la mémoire en C
//Attention malloc à utiliser en C et non C++

//    int *tableau = NULL;
//    tableau = malloc(sizeof(int));

//    if (tableau != NULL)
//    {
//        printf("Malloc OK!\n");
//        free(tableau);
//    }
//    else
//    {
//        printf("Malloc rate!\n");
//    }
//Taille structure en C
    printf("%d\n", sizeof(stru)); // attention padding ajouté à la taille

// Heritage de classe en C++
    Child toto;

    // An object of class child has all data members
    // and member functions of class parent
    toto.id_child = 7;
    toto.id_parent = 91;
    cout << "Child id is " <<  toto.id_child << endl;
    cout << "Parent id is " <<  toto.id_parent << endl;
}
