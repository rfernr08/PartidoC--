class Partido{
    private:
        string resultado;
    public:
        Partido();
        void setResultado(string resultado);
        string getResultado();
        void jugarPartido();
        void acabarPartido();
};