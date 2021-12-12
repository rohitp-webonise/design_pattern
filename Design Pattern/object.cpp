#ifdef __io__
#define __io__


#include<iostream>
using namespace std;

#endif
#include "paymentMethod.cpp"

class phone{
    protected:
        string company;
        string model;
        string iemi;

        public:
            phone(
                string _company,
                string _model,
                string _iemi
            ):company(_company),model(_model),iemi(_iemi){}

};

class Samsung : public phone{
    protected:
        int price;
        int camera;
        string simType;

    public:
        Samsung(
            int _price,
            int _camera,
            string _simType,
            string _company,
            string _model,
            string _iemi
            ): phone(_company,_model,_iemi),price(_price),camera(_camera),simType(_simType){}

    void Dial(string number)
    {
        cout<<"Dialing a "<<number<<endl;
    }
    void Receive(string number)
    {
        cout<<"Received call from "<<number<<endl;
    }
    void SendMessage(string number,string message)
    {
        cout<<"Sent message to "<<number;
    }
    void ReceiveMessage(string number,string message)
    {
        cout<<"Received Message :"<<message<<endl;
        cout<<"Number :"<<number<<endl;
    }

    int getPrice()
     {
        return this->price;
    }
    int getCamera()
    {
        return this->camera;
    }
    string getsimType()
    {
        return this->simType;
    }
};
class Apple : public phone{
    protected:
        int price;
        int camera;
        string simType;

    public:
        Apple(
            int _price,
            int _camera,
            string _simType,
            string _company,
            string _model,
            string _iemi
            ): phone(_company,_model,_iemi),price(_price),camera(_camera),simType(_simType){}

    void Dial(string number)
    {
        cout<<"Dialing a "<<number<<endl;
    }
    void Receive(string number)
    {
        cout<<"Received call from "<<number<<endl;
    }
    void SendMessage(string number,string message)
    {
        cout<<"Sent message to "<<number;
    }
    void ReceiveMessage(string number,string message)
    {
        cout<<"Received Message :"<<message<<endl;
        cout<<"Number :"<<number<<endl;
    }

    int getPrice()
     {
        return this->price;
    }
    int getCamera()
    {
        return this->camera;
    }
    string getsimType()
    {
        return this->simType;
    }
};
class MI : public phone{
    protected:
        int price;
        int camera;
        string simType;

    public:
        MI(
            int _price,
            int _camera,
            string _simType,
            string _company,
            string _model,
            string _iemi
            ): phone(_company,_model,_iemi),price(_price),camera(_camera),simType(_simType){}

    void Dial(string number)
    {
        cout<<"Dialing a "<<number<<endl;
    }
    void Receive(string number)
    {
        cout<<"Received call from "<<number<<endl;
    }
    void SendMessage(string number,string message)
    {
        cout<<"Sent message to "<<number;
    }
    void ReceiveMessage(string number,string message)
    {
        cout<<"Received Message :"<<message<<endl;
        cout<<"Number :"<<number<<endl;
    }

    int getPrice()
     {
        return this->price;
    }
    int getCamera()
    {
        return this->camera;
    }
    string getsimType()
    {
        return this->simType;
    }
};

class phoneSetting{
    static phoneSetting* _instance;
    int brightness;
    //1 will be for ON and 0 will be for OFF
    bool wifi;
    bool bluetooth;
    bool internet;
    public:
        phoneSetting():brightness(6),wifi(false),bluetooth(false),internet(false){}
        static phoneSetting* getInstance(){
            if(_instance==NULL)
                    _instance = new phoneSetting();

            return _instance; 
        }

        void setBrightness(int level)
        {
            brightness = level;
        }
        void setWifi()
        {
            wifi = !wifi;
        }
        void setBluetooth()
        {
            bluetooth = !bluetooth;
        }
        void setInternet()
        {
            internet = !internet;
        }

        void show_setting()
        {
            cout<<"Brightness "<<brightness<<endl;
            cout<<"Wifi - "<<wifi<<endl;
            cout<<"Bluetooth - "<<bluetooth<<endl;
            cout<<"Internet - "<<internet<<endl;
        }
};
    phoneSetting * phoneSetting :: _instance;

    class redmiNote : public MI, public phoneSetting{
        public:
            redmiNote():MI(12000,15,"Dual Sim","MI","redmiNote","546542354"){}
            phoneSetting *setting = phoneSetting::getInstance();
   
            void orderFood()
            {
                 string dishname,price;
            cout<<"Enter Dish"<<endl;
            cin>> dishname;
            cout<<"Enter price"<<endl;
            cin>>price;

            cout<<"Select the Payment method \n 1. Pay through UPI \n 2. Pay using debit"<<endl;
            int type;
            cin>>type;
            
            paymentMethod * p_method = payment::makePayment(type);

            if(type)
            {
                delete p_method;
            } 
            }
    };
class Redmi5 : public MI, public phoneSetting{

        public:
        
        Redmi5():MI(9000,16,"Dual SIM","Xiomi","Redmi5","12387563"){}
        phoneSetting *setting = phoneSetting::getInstance();

         void orderFood()
        {
            string dishname,price;
            cout<<"Enter Dish"<<endl;
            cin>> dishname;
            cout<<"Enter price"<<endl;
            cin>>price;

            cout<<"Select the Payment method \n 1. Pay through UPI \n 2. Pay using debit"<<endl;
            int type;
            cin>>type;
            
            paymentMethod * p_method = payment::makePayment(type);

            if(type)
            {
                delete p_method;
            } 
        }    
        

};
class Iphone10 : public Apple, public phoneSetting{

        public:
        
        Iphone10():Apple(70000,48,"Single SIM","Apple","Iphone10","42387623"){}
        phoneSetting *setting = phoneSetting::getInstance();
      
         void orderFood()
        {
            string dishname,price;
            cout<<"Enter Dish"<<endl;
            cin>> dishname;
            cout<<"Enter price"<<endl;
            cin>>price;

            cout<<"Select the Payment method \n 1. Pay through UPI \n 2. Pay using debit"<<endl;
            int type;
            cin>>type;
            
            paymentMethod * p_method = payment::makePayment(type);

            if(type)
            {
                delete p_method;
            } 
        }    

};



class Iphone12 : public Apple, public phoneSetting{

        public:
        
        Iphone12():Apple(90000,48,"Single SIM","Apple","Iphone12","45687623"){}
        phoneSetting *setting = phoneSetting::getInstance();

         void orderFood()
        {
            string dishname,price;
            cout<<"Enter Dish"<<endl;
            cin>> dishname;
            cout<<"Enter price"<<endl;
            cin>>price;

            cout<<"Select the Payment method \n 1. Pay through UPI \n 2. Pay using debit"<<endl;
            int type;
            cin>>type;
            
            paymentMethod * p_method = payment::makePayment(type);

            if(type)
            {
                delete p_method;
            }  
        }   

};
class SamsungJ7 : public Samsung , public phoneSetting{

        public:

        SamsungJ7():Samsung(15000,16,"Dual SIM","Samsung","SamsungJ7","12387623"){}
        phoneSetting *setting = phoneSetting::getInstance();

         void orderFood()
        {
            string dishname,price;
            cout<<"Enter Dish"<<endl;
            cin>> dishname;
            cout<<"Enter price"<<endl;
            cin>>price;

            cout<<"Select the Payment method \n 1. Pay through UPI \n 2. Pay using debit"<<endl;
            int type;
            cin>>type;
            
            paymentMethod * p_method = payment::makePayment(type);

            if(type)
            {
                delete p_method;
            } 
        }    
     
};


class SamsungA5 : public Samsung , public phoneSetting{

        public:
        
        SamsungA5():Samsung(22000,22,"Dual SIM","Samsung","SamsungA5","12987387"){}
        phoneSetting *setting = phoneSetting::getInstance();
           
         void orderFood()
        {
            string dishname,price;
            cout<<"Enter Dish"<<endl;
            cin>> dishname;
            cout<<"Enter price"<<endl;
            cin>>price;

            cout<<"Select the Payment method \n 1. Pay through UPI \n 2. Pay using debit"<<endl;
            int type;
            cin>>type;
            
            paymentMethod * p_method = payment::makePayment(type);

            if(type)
            {
                delete p_method;
            }  
        }   

        

};