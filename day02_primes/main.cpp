#include "iostream"

int main() {
    for (int i=2; i<=100; i++) {
        int count = 0;
        for(int j=1; j<=i; j++) {
            if(i%j == 0 ){
                count++;
            }
            if(count > 2 ) break;
        }
        if(count==2) {
            std::cout << i << " Es Primo" << std::endl;
        }
    }

    return 0;
}
