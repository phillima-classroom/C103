class Ponto{

    private:
        float px;
        float py;
    public:
        Ponto(float px, float py);
        float devolvePx(){return this->px;}
        float devolvePy(){return this->py;}
};