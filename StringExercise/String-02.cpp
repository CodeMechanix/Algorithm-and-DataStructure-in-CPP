// String Input and Output
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100]; // Maximum 99 Char & One For '\0'
    scanf("%s",arr); // Input only Single Word When it found space it stop work
    scanf("%[a-z  A-Z0-9]",arr); // আমরা [] ব্র্যাকেট মধ্যে যে char গুলা দিবো ওইগুলা স্টোর করবে অন্য গুলা ফেলে কাজ করবে না
    scnaf("%[^a]",arr); // 'a' বাদে সবগুলো ইনপুট নিবে
    scnaf("%[^\n]",arr); // New Line বাদে সবগুলো ইনপুট নিবে
    // scanf & gets একসাথে ব্যাবহার করলে প্রবলেম হয় -
    //   - gets function টা New Line কেও char ইনপুট হিসেবে নেয়
    //   - scanf New Line পাইলে প্রোগ্রাম Terminate করে ওই নিউ-লাইন কে গ্রহন করে না
    // যদি আমরা scanf & gets একসাথে ্যাবহার করি তাহলে  scanf কে নিম্নের নিয়মে করতে হবে 
    scanf("%s%*c",arr);
    printf("%s\n",arr); // Output
    gets(arr);
    printf("%s\n",arr); // Output
    gets(arr);
    printf("%s\n",arr); // Output
    return 0;
}
