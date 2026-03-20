#include "config.h"

float get_max(float data[], int len){
    float ans = data[0];
    for(int i = 1; i < len; ++i){
        if(data[i] > ans)
            ans = data[i];
    }
    return ans;
}

float get_min(float data[], int len){
    float ans = data[0];
    for (int i = 1; i<len; ++i){
        if(data[i] < ans)
            ans = data[i];
    }
    return ans;
}

float get_range(float max, float min){
    float ans = max-min;
    return ans;
}

float get_mean(float data[], int len){
    float ans = 0;
    for(int i = 0 ; i < len ; ++i ){
        ans += data[i];
    }
    ans = ans/len;
    return ans;
}

float get_median(float data[], int len){
    int i = len;
    float buf;
    while (i > 0){
        for (int j = 0; j<i-1 ;j++){
           if(data[j]>data[j+1]){
            buf = data[j+1];
            data[j+1] = data[j];
            data[j] = buf;
           }
        }
        --i;
    }
    float ans = data[len/2];
    return ans;
}

float get_desvest(float data[], int len, float mean){
    float ans = 0;
    for (int i = 0; i<len ; ++i){
        ans += (data[i]-mean)*(data[i]-mean);
    }
    ans = sqrt(ans/len);
    return ans;
}

int get_stats (stats *s, float data[], int len){
    s->max = get_max(data,len);
    s->min = get_min(data,len);
    s->range = get_range(s->max,s->min);
    s->mean = get_mean(data,len);
    s->median = get_median(data,len);
    s->dev = get_desvest(data,len,s->mean);
    return 0;
}

void swap(int *a, int *b){
    int buf = *a;
    *a = *b;
    *b = buf;
}

int lenght(char array[]){
    int i = 0;
    while( array[i] != '\0'){
        ++i;
    }
    return i;
}

void copy(char array[],char dest[]){
    int i = 0;
    while(array[i] != '\0'){
        dest[i]=array[i];
        i++;
    }
    dest[i]='\0';
}

int compare(char a[], char b[]){
    if(lenght(a)!=lenght(b))
        return 0;
    int i = 0;
    while( a[i]!='\0'){
        if (a[i] != b[i]){
            return 0;
        }
        ++i;
    }
    return 1;
}