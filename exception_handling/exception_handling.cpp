#include <iostream>
#include "exception.h"

#include <cassert>//Hata yakalama,içine koşul alır gerçekleşmezse çalışmaz

using namespace std;

int main()
{
    float divisor, dividend, result;

    /*
    cout << "Pay Degeri: " << endl;
    cin >> dividend;

    cout << "Payda Degeri: " << endl;
    cin >> divisor;

    //Koşul gerçekleşmezse çalışmaz
    //Payda 0 değilse
    assert(divisor != 0);

    result = dividend / divisor;
    cout << "Result: " << result;
    */

    string str = "Payda 0 Olamaz!";

    try
    {
        cout << "Pay Degeri: " << endl;
        cin >> dividend;

        cout << "Payda Degeri: " << endl;
        cin >> divisor;//Burası = olursa hata olur

        if (divisor == 0)//Payda 0 Olursa
        {
           //throw str;//Str mesajını fırlat
            throw divisionByZero();
        }

        else if (dividend == 0)
        {
            //throw dividend;
            throw zeroNumber("Pay");
        }

        else
        {
            throw 404;
        }
       

        result = dividend / divisor;
        cout << "Result: " << result;

    }

    //Catch blokları sırası önemlidir. Gönder al sırayla yapılır.

    catch (divisionByZero& divisionByZeroObject)
    {
        cout << divisionByZeroObject.what();
    }

    catch (zeroNumber& zeroNumberObject)
    {
        cout << zeroNumberObject.what();
    }

    catch (string x)//Hatayı yakala x=str hata string gönderildi string yakalanır
    {
        cout << x << endl;//Hata mesajını basar programa devam eder
    }

    catch (float x)
    {
        cout << x << endl;
    }

    //Her türlü çalışır
    catch (...)//Yakalama durumları çalışmazsa bu çalışır
    {
        cout << "Default" << endl;
    }



    
}



