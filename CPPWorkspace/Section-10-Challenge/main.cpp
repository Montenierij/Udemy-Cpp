/**
 * Jacob Montenieri
 * Section 10 Challenge - Udemy C++
 * This code acts as an encoder/decoder for messages.
 * The user will enter a message and all of the characters
 * will be changed from the alphabet string to the same
 * position in the key string. After encoding the message,
 * it will print and then decode the message and print it
 * again, revealing the original message.
 */
#include <iostream>
#include <string>

using namespace std;
int main(){
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message {};
    cout << "Enter secret message: ";
    getline(cin,secret_message);
    
    
    /************************************************************************
     * This for loop will go through each spot of the array and see if it 
     * is in the alphabet string. If it is, the code will copy the same 
     * position value in key and place it in the encrypted message string.
     * If the value is not in the alphabet string, it will simply copy 
     * the value over to the encrypted message string.
     * *********************************************************************/
    string encrypted_message {};
    for(char c:secret_message)
    {
        size_t position=alphabet.find(c);
        if(position != string::npos)
        {
            char new_char { key.at(position) };
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message+=c;
        }
    }
    cout << "Encrypted message: " << encrypted_message << endl;
 

    /************************************************************************
     * This for loop will act the same as the previous one but instead
     * of encrypting by going from the alphabet string to key string, it
     * will decrypt by going from the key string to the alphabet string.
     * *********************************************************************/   
    string decrypted_message {};
    for(char c: encrypted_message)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {
            char new_char2 { alphabet.at(position) };
            decrypted_message += new_char2;
        }
        else
        {
            decrypted_message+=c;
        }
    }
    cout<<"Decrypted message: " << decrypted_message << endl;
    return 0;
    
} 
