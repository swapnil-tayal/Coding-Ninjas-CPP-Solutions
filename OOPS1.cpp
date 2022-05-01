/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
}
 
 ************/


class ComplexNumbers {
    // Complete this class
    
    int real;
    int img;
    
    public:
    
    ComplexNumbers(int r, int i){
        real = r;
        img = i;
    }
    
    void plus(ComplexNumbers c2){
        real = real + c2.real;
        img = img + c2.img;
    }
    void multiply(ComplexNumbers c2){
        int x=(real * c2.real)-(img * c2.img);
        int y=(real * c2.img)+(img * c2.real);
        real=x;
        img=y;
    } 
    void print(){
        cout << this->real << " " << "+" << " " << "i" << this->img;
    }
    
};
