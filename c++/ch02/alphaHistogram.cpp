#include <iostream>
using namespace :: std;
#define MAX_SIZE 10000
int main(){
    char buff[MAX_SIZE];
    int cnt[26] = {0};
    int totalAlpha = 0;
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
    cin.getline(buff,MAX_SIZE,';');
    for(int i=0; i<strlen(buff); i++){
        //만약 알바펫이라면
        if(isalpha(buff[i])){
            totalAlpha++;
            //소문자로 변경
            buff[i] = tolower(buff[i]);
            //어떤 문자인지 확인
            int ascii = buff[i] - 97;
            //해당 소문자 등장 횟수 증가
            cnt[ascii]++;
        }
    }
    //결과 출력하기
    cout << "총 알파벳 수 " << totalAlpha << "\n\n";
    for(int i=0; i<26; i++){
        cout << (char)('a'+i) << " ("<< cnt[i]<<")  :" << " ";
        for(int j=0; j<cnt[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}