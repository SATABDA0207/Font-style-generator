#include<iostream>
using namespace std;

void print_A(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_B(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i < 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            if(i < 4)
                cout << c;
            else
                cout << ' ';
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i < 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_C(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i > 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i > 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_D(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i < 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            if(i ==0 || i == 4)
                cout << c;
            else
                cout << ' ';
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i < 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_E(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            if(i ==0 || i == 1 || i == 2)
                cout << c;
            else
                cout << ' ';
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

void print_F(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            if(i ==0 || i == 1 || i == 2)
                cout << c;
            else
                cout << ' ';
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_G(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            if(i ==0 || i == 2 || i == 3 || i == 4)
                cout << c;
            else
                cout << ' ';
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

void print_H(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_I(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

void print_J(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 2 || i == 3 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_K(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 3 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 3 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_L(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

void print_M(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1 || i == 3 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 2 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_N(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 2 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 3 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_O(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_P(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_Q(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 2 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 2 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_R(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 1 || i == 2 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_S(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

void print_T(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_U(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i ==4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

void print_V(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_W(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 0 ||i == 2 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 0 ||i == 2 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_X(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_Y(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++){
            if(i == 0 || i == 4)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 1 || i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    }
}

void print_Z(int itr,char c){
    switch(itr){
    case 0:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    
    case 1:
        for(int i = 0; i < 5; i++){
            if(i == 3)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 2:
        for(int i = 0; i < 5; i++){
            if(i == 2)
                cout << c;
            else
                cout << ' ';
        }
        break;
    
    case 3:
        for(int i = 0; i < 5; i++){
            if(i == 1)
                cout << c;
            else
                cout << ' ';
        }
        break;

    case 4:
        for(int i = 0; i < 5; i++)
            cout << c;
        break;
    }
}

int main(){
    string input;
    char c = '.';
    cout << "Enter the text(ONLY A-Z, UPTO 35): ";
    getline(cin, input);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < input.length() + 1; j++){
            if(j < input.length()){
                switch(input[j]){
                case 'A':
                    print_A(i,c);
                    cout << " "; 
                    break;

                case 'B':
                    print_B(i,c);
                    cout << " ";
                    break;

                case 'C':
                    print_C(i,c);
                    cout << " ";
                    break;

                case 'D':
                    print_D(i,c);
                    cout << " ";
                    break;
                
                case 'E':
                    print_E(i,c);
                    cout << " ";
                    break;

                case 'F':
                    print_F(i,c);
                    cout << " ";
                    break;  

                case 'G':
                    print_G(i,c);
                    cout << " ";
                    break; 

                case 'H':
                    print_H(i,c);
                    cout << " ";
                    break;

                case 'I':
                    print_I(i,c);
                    cout << " ";
                    break;

                case 'J':
                    print_J(i,c);
                    cout << " ";
                    break;

                case 'K':
                    print_K(i,c);
                    cout << " ";
                    break;

                case 'L':
                    print_L(i,c);
                    cout << " ";
                    break;

                case 'M':
                    print_M(i,c);
                    cout << " ";
                    break;

                case 'N':
                    print_N(i,c);
                    cout << " ";
                    break;

                case 'O':
                    print_O(i,c);
                    cout << " ";
                    break;

                case 'P':
                    print_P(i,c);
                    cout << " ";
                    break;

                case 'Q':
                    print_Q(i,c);
                    cout << " ";
                    break;

                case 'R':
                    print_R(i,c);
                    cout << " ";
                    break;

                case 'S':
                    print_S(i,c);
                    cout << " ";
                    break;

                case 'T':
                    print_T(i,c);
                    cout << " ";
                    break;

                case 'U':
                    print_U(i,c);
                    cout << " ";
                    break;

                case 'V':
                    print_V(i,c);
                    cout << " ";
                    break;

                case 'W':
                    print_W(i,c);
                    cout << " ";
                    break;

                case 'X':
                    print_X(i,c);
                    cout << " ";
                    break;

                case 'Y':
                    print_Y(i,c);
                    cout << " ";
                    break;
                
                case 'Z':
                    print_Z(i,c);
                    cout << " ";
                    break;
                default:
                    for(int k = 0; k < 5; k++) cout << " ";
                }
            }
            else
                cout << "\n"; 
        }
    }
    return 0;
}