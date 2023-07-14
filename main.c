#include <stdio.h>

int main() {
    //구글에 하루에 접속하는 횟수 예측 

    // 전체 인구
    long long allp;
    printf("전체 인구를 입력하세요: ");
    scanf("%lld", &allp);

    // 각 연령대별 인구
    long long p10, p20, p30, p40, otp;
    printf("10대 인구를 입력하세요: ");
    scanf("%lld", &p10);
    printf("20대 인구를 입력하세요: ");
    scanf("%lld", &p20);
    printf("30대 인구를 입력하세요: ");
    scanf("%lld", &p30);
    printf("40대 인구를 입력하세요: ");
    scanf("%lld", &p40);
    printf("그 이상 연령대 인구를 입력하세요: ");
    scanf("%lld", &otp);

    // 각 연령대별 접속 횟수
    long long x10, x20, x30, x40, xOT;
    printf("10대 접속 횟수를 입력하세요: ");
    scanf("%lld", &x10);
    printf("20대 접속 횟수를 입력하세요: ");
    scanf("%lld", &x20);
    printf("30대 접속 횟수를 입력하세요: ");
    scanf("%lld", &x30);
    printf("40대 접속 횟수를 입력하세요: ");
    scanf("%lld", &x40);
    printf("그 이상 연령대 접속 횟수를 입력하세요: ");
    scanf("%lld", &xOT);

    // 총 접속 횟수 계산
    long long totalAccess = (x10 * p10) + (x20 * p20) + (x30 * p30) + (x40 * p40) + (xOT * otp);

    // 결과 출력
    printf("10대 접속 횟수: %lld\n", x10 * p10); //10대 결과 출력 
    printf("20대 접속 횟수: %lld\n", x20 * p20); //20대 결과 출력 
    printf("30대 접속 횟수: %lld\n", x30 * p30); //30대 결과 출력 
    printf("40대 접속 횟수: %lld\n", x40 * p40); //40대 결과 출력 
    printf("그 이상 연령대 접속 횟수: %lld\n", xOT * otp); //그 이상 결과 출력 
    printf("총 접속 횟수: %lld\n", totalAccess); // 총합 결과 출력 

    return 0;
}
