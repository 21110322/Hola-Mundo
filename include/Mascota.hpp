#pragma once

class Mascota
{
private:
    /* data */
    int Energia;
    int Felicidad;
public:
    Mascota() {
        this->Energia = 0;
        this->Felicidad = 0;
    }
    ~Mascota() {}
    void Comer(Alimento alimento){
        Energia +=alimento.ExtraerEnergia();
    }

    void Jugar(){
        Energia-=1;
        Felicidad+=1;
    }
 int LeerFelicidad(){
    return this->Felicidad;
 }
 int LeerEnergia(){
    return this->Energia;
 }