#include<iostream> 
#include<string.h>
using namespace std;

void myreversestr(string &s) {
    int n = s.size();
    if(n <=1) return;
    int left = 0,right = n-1;
    while(left < right) {
        std::swap(s[left++],s[right--]);
    }
}
char* mystrcpy(char *dst, const char* src) {
    assert(dst != NULL && src != NULL);
    char* temp = dst;
    while((*temp++ = *src++) != '\0');
    return dst;
}

char* mystrncpy(char *dst, const char* src, int n) {
    assert(dst != NULL && src != NULL);
    char* temp = dst;
    while(n-- > 0 && (*temp++ = *src++) != '\0');
    while(n-- > 0)*temp++ = '\0';
    return dst;
}

int mystrcmp(const char* str1, const char* str2) {
    assert(str1 != NULL && str2 != NULL);
    while(*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

char* mystrcat(char* dst, const char* src) {
    assert(dst != NULL && src != NULL);
    char* temp = dst;
    while(*temp != '\0') ++temp;
    while((*temp++ = *src++) != '\0');
    return dst;
}

unsigned int mystrlen(char *str) {
    assert(str != NULL);
    int len = 0;
    while(*str++ != '\0')++len;
    return len;
}

void *mymemset(void* s, int c, unsigned int n ) {
    assert(s != NULL); 
    void* temp = s;
    while(n--) {
        *((char *)temp) = (char)c;
        temp = (char *)temp + 1;
    }
    return s;
}
void *mymemcpy(void *dst, const void *src, size_t n) {
    assert(dst != NULL && src != NULL);
    void* temp = dst;
    int i=0;
    while(i<n) {
        *((char *)temp + i) = *((char *)src + i);
        ++i;
    }
    return dst;
}



int main() {
    char str[10];
    memcpy(str, "12345\0", 6);
    cout <<str<<endl;
    memmove(str+1, str, 6);
    cout <<str<<endl;
    memmove(str, str+1, 6);
    cout <<str<<endl;
    mymemcpy(str+1, str, 6);
    cout <<str<<endl;
    memcpy(str, str+1, 6);
    return 0;
}
