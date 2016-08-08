#ifndef CONFIG_H
#define CONFIG_H


class Config
{
    public:
        static int getWidth();
        static int getHeight();
        Config();
        virtual ~Config();
    protected:
    private:
};

#endif // CONFIG_H
