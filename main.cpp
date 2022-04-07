#include <iostream>

using namespace std;

char* create_string(const char* templ){
    char* words = new char[20];
    char* rel_words = words;

    for(const char *rel_c = templ; *rel_c; rel_c++, rel_words++){
        *rel_words = *rel_c;
    }

    *rel_words = '\0';

    return words;
}
int main()
{
//    int a = 6;
//    int *a1;
//    a1 = &a;
//    cout << *a1;
//
//    int *b = new int();
//    *b = 10;
//    cout << *b;
//    char word[] = {'c','a','t', 0};
//    char* sword = word;
//    while(*sword){
//        cout << *sword;
//        ++sword;
//    }
//
//    cout << endl;

//    const  char* words = "Hello world";
//    const char* swords = words;
//    char words_array[] = "Hello world";
//    const char* templ = "Hello world";
//    char* words = new char[20];
////    char* words = create_string("Hello world");
////    words = "Hello world";
//    char *rel_words = words;
//    for(const char *rel_c = templ; *rel_c; rel_c++, rel_words++){
//        *rel_words = *rel_c;
//    }
//    char* swords = words;//_array;
//
//    swords[1] = 'a';

//    cout << words;
//
////    templ = "Bye word";
////    char* words_bye = new char[20];
////    rel_words = words_bye;
////    for(const char *rel_c = templ; *rel_c; rel_c++, rel_words++){
////        *rel_words = *rel_c;
////    }
////    *rel_words = '\0';
//    words_bye[1] = 'a';
//    cout << words_bye;

//    rel_words = words_bye;
//    while(*rel_words){
//        cout << *rel_words;
//        ++rel_words;
//    }

//    cout << "Hello world!" << endl;


////    const char* templ = "Hello word";
    char* words = create_string("Hello word");
    words[1] = 'a';
    cout << words << endl;

//    templ = "Bye word";
    words = create_string("Bye word");
    words[1] = 'a';
    cout << words;
    return 0;
}
