#include <string>
#include <iostream>
#include <math.h>
using namespace std;

struct DataFloat {
    private:
        float number;
        float error;
    public:
        DataFloat (): number{0}, error{0}{ }
        DataFloat (float n){
            this->number = n, this->error = 0;
            int size;
            bool b = true;
            string s;
            s = to_string(n);
            size = s.length();
            for (int i =0 ; i < size; i++){
                if ((s[i] == ',')||(s[i] == '.')){
                    s[i] = '.';
                    b = false;
                    for (int j =0 ; j < size - i - 2; j++){
                        this->error /= 10;
                        }
                    break;
                }
            }
            if (b) for (int j =0 ; j < size - 2; j++) this->error *= 10;
            this->error /= 2;
        }
        DataFloat (float number, float error): number{number}, error{error}{ }
        void input(){
            this->number = NULL, this->error = 1;
            int size;
            bool b = true;
            string s;
            cin >> s;
            size = s.length();
            for (int i =0 ; i < size; i++){
                if ((s[i] == ',')||(s[i] == '.')){
                    s[i] = '.';
                    b = false;
                    for (int j =0 ; j < size - i - 2; j++){
                        this->error /= 10;
                        }
                    break;
                }
            }
            this->number = stof(s);
            if (b) for (int j =0 ; j < size - 2; j++) this->error *= 10;
            this->error /= 2;
        }
        void print(){
            cout << "Number :" << this->number << endl;
            cout << "Error :" << this->error << endl;
        }
        void printNumber(){
            cout << this->number;
        }
        void printsError(){
            cout << this->error;
        }
        DataFloat operator + (DataFloat df) {
                return DataFloat(this->number + df.number, this->error + df.error);
            }
        DataFloat operator - (DataFloat df) {
            return DataFloat(this->number - df.number, this->error + df.error);
        }
        DataFloat operator * (DataFloat df) {
            return DataFloat(this->number * df.number, this->error * df.number + this->number * df.error + this->error * df.error);
        }
        DataFloat operator / (DataFloat df)  {
            return DataFloat(this->number / df.number, abs(this->error * df.number - this->number * df.error) / df.number / (df.number - df.error));
        }
        DataFloat& operator = (DataFloat df){
            number = df.number;
            error = df.error; 
            return *this;
        }
        DataFloat functionVar5(DataFloat x, DataFloat y, DataFloat z){
            DataFloat a, b, c, d(12), f;
            a.number = log(x.error);
            a.error = x.error/(x.number-x.error);
            b = y + z;
            c = a * b;
            f = c / d;
            return f;
        }
};
