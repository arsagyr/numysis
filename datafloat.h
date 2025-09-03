#include <string>
#include <iostream>
using namespace std;

struct DataFloat {
    private:
        float number;
        float error;
    public:
        DataFloat (): number{0}, error{0}{ }
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
            cout << this->number << endl;
            cout << this->error << endl;
        }
        void printNumber(){
            cout << this->number << endl;
        }
        void printsError(){
            cout << this->number << endl;
        }
        DataFloat operator + (DataFloat df) {
            cout << this->number + df.number << endl;
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
            cout <<df.number  << endl;
            number = df.number;
            error = df.error; 
            return *this;
        }
};
