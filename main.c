#include <stdio.h>

char arr[1024];
int index = 0;

int main(){

    printf("敏感字符管理系统\n");

    while(1){
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符\n");
        printf("3---查看敏感字符\n");
        printf("4---替换内容中的敏感字符\n");
        printf("5---退出\n");

        printf("请选择相应的功能\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index] = m;
            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            printf("退出系统\n");
            break;
        }
    }

    return 0;

}