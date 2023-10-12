/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/
#include <stdio.h> 
#include <string.h>

struct Score {
    char Name1[20];
    float number; 
};

int main() {
    struct Score S[4];
    
    for (int i = 0; i < 4; i++) {
        char personChar = 'A' + i; 
        printf("Student %c\n", personChar);
        printf("Name: ");
        scanf("%s", S[i].Name1);
        printf("Score: ");
        scanf("%f", &S[i].number);
    }
     for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (S[i].number < S[j].number) {
                struct Score temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("%s", S[i].Name1);
        printf( " " );
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2f", S[i].number);
        printf( " " );
    }
    printf("\n");

    return 0;
}
