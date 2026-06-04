class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int MaholWavy=0;
        for(int i=num1;i<=num2;i++){
            if(i<100) continue;
            if(i>=100 && i<1000){
                int middle=(i/10)%10;
                if(middle>i%10 && middle>(i/100)) MaholWavy++;
                if(middle<i%10 && middle<(i/100)) MaholWavy++;
            }
            if(i>=1000 && i<10000){
                int middle1=(i/10)%10;
                int middle2=(i/100)%10;
                if(middle1>i%10 && middle1>(i/100)%10) MaholWavy++;
                if(middle1<i%10 && middle1<(i/100)%10) MaholWavy++;
                if(middle2>(i/10)%10 && middle2>(i/1000)) MaholWavy++;
                if(middle2<(i/10)%10 && middle2<(i/1000)) MaholWavy++;
            }
            if(i>=10000 && i<100000){
                int middle1=(i/10)%10;
                int middle2=(i/100)%10;
                int middle3=(i/1000)%10;
                if(middle1>i%10 && middle1>(i/100)%10) MaholWavy++;
                if(middle1<i%10 && middle1<(i/100)%10) MaholWavy++;
                if(middle2>(i/10)%10 && middle2>(i/1000)%10) MaholWavy++;
                if(middle2<(i/10)%10 && middle2<(i/1000)%10) MaholWavy++;
                if(middle3>(i/100)%10 && middle3>(i/10000)) MaholWavy++;
                if(middle3<(i/100)%10 && middle3<(i/10000)) MaholWavy++;
            }
            if(i>=100000 && i<1000000){
                int middle1=(i/10)%10;
                int middle2=(i/100)%10;
                int middle3=(i/1000)%10;
                int middle4=(i/10000)%10;
                if(middle1>i%10 && middle1>(i/100)%10) MaholWavy++;
                if(middle1<i%10 && middle1<(i/100)%10) MaholWavy++;
                if(middle2>(i/10)%10 && middle2>(i/1000)%10) MaholWavy++;
                if(middle2<(i/10)%10 && middle2<(i/1000)%10) MaholWavy++;
                if(middle3>(i/100)%10 && middle3>(i/10000)%10) MaholWavy++;
                if(middle3<(i/100)%10 && middle3<(i/10000)%10) MaholWavy++;
                if(middle4>(i/1000)%10 && middle4>(i/100000)) MaholWavy++;
                if(middle4<(i/1000)%10 && middle4<(i/100000)) MaholWavy++;
            }
            if(i>=1000000 && i<10000000){
                int middle1=(i/10)%10;
                int middle2=(i/100)%10;
                int middle3=(i/1000)%10;
                int middle4=(i/10000)%10;
                int middle5=(i/100000)%10;
                if(middle1>i%10 && middle1>(i/100)) MaholWavy++;
                if(middle1<i%10 && middle1<(i/100)) MaholWavy++;
                if(middle2>(i/10)%10 && middle2>(i/1000)%10) MaholWavy++;
                if(middle2<(i/10)%10 && middle2<(i/1000)%10) MaholWavy++;
                if(middle3>(i/100)%10 && middle3>(i/10000)%10) MaholWavy++;
                if(middle3<(i/100)%10 && middle3<(i/10000)%10) MaholWavy++;
                if(middle4>(i/1000)%10 && middle4>(i/100000)%10) MaholWavy++;
                if(middle4<(i/1000)%10 && middle4<(i/100000)%10) MaholWavy++;
                if(middle5>(i/10000)%10 && middle5>(i/1000000)) MaholWavy++;
                if(middle5<(i/10000)%10 && middle5<(i/1000000)) MaholWavy++;
            }
        }
        return MaholWavy;
    }
};