#ifndef __io__
#define __io__


#include<iostream>
using namespace std;

#endif
#include "../Design Pattern/object.cpp"

int main()
{

    int type;

    SamsungJ7 *phone = new SamsungJ7();

    while(true)
    {
        cout<<"1. Dial \n 2. Send Message \n 3. Show Setting \n 4. Change Setting \n 5. Order Food";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
                {
                    string num;
                    cin>>num;
                    phone->Dial(num);
                    break;
                }
            case 2:
            {
                string num;
                string mess;
                cout<<"Enter Number : "<<endl;
                cin>>num;
                cout<<"Enter Message : "<<endl;
                cin>>mess;
                phone->SendMessage(num,mess);
                break;
            }
            case 3:
                phone->show_setting();
                break;
            case 4:
                cout<<"1. Change Brightness \n  2.Set WiFi \n 3.Set Bluetooth \n 4.Set Internet";
                int choose;
                cin>>choose;
                switch(choose)
                {
                    case 1:
                        {
                            cout<<"Enter Brightness level";
                            int b;
                            cin>>b;
                            phone->setBrightness(b);
                            break;
                        }
                        case 2:
                        {
                            phone->setWifi();
                            break;
                        }
                        case 3:
                        {
                            phone->setBluetooth();
                            break;
                        }
                        case 4:
                        {
                            phone->setInternet();
                            break;
                        }
                        
                }
                break;
                case 5:
                    {
                        phone->orderFood();
                        break;
                    }
                default:
                    break;

        }
    }

    cout<<"Exit.."<<endl;
    return 0;

}