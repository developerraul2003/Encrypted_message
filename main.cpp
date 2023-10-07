#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string alpha{"qwertyuiopasdfghjklzxcvbnmMNBVCXZQWERTYUHGFDSAIOPLKJ789654321/><"};
    string key {"<>?/.,';!@$%^#Pa123456790ASDFGHJKLPOIUYTREWQZXCBNMasdfghjklmnbvcxzaqwe"};

    string secret_message{};
    cout<<"Enter secret message:";
    getline (cin, secret_message);
    string encrypted_message{};
    cout<<"Message is encrypted:";
    for (char a: secret_message)
    {
        size_t position= alpha.find(a);
        if (position!=string::npos)
        {
            char new_char{key.at(position)};
           encrypted_message+=new_char;
        }
        else {
            encrypted_message+=a;
        }
    }
    cout<<encrypted_message<<endl;
    // decrypted message
    string decrypted_message{};
    cout<<"Message is decrypted:";
    for (char a: encrypted_message)
    {
        size_t position= key.find(a);
        if (position!=string::npos)
        {
            char new_char{alpha.at(position)};
           decrypted_message+=new_char;
        }
        else {
            decrypted_message+=a;
        }
    }
    cout<<decrypted_message<<endl;
    return 0;
}
