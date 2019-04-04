#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED


class No
{
    public:
        No(int id);
        ~No();
        int getPeso();
        void setPeso(int val);
        int getGrau();
        void setGrau(int val);
        int getVisitado();
        void setVisitado(bool val);
        No* getProx();
        void setProx(No* val);

    private:
        int id;
        int peso;
        int grau;
        No *prox;
        bool visitado;

};

#endif // NO_H_INCLUDED