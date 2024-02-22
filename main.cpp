#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int home();
int base_conv();
int morse_eng_conv();
int audio_conv();
int image_conv();
int video_conv();
int bye();
void cls();


int main()
{
    while(true)
    {
        switch(home())
        {
            case 1:
                base_conv();
                break;
            case 2:
                morse_eng_conv();
                break;
            case 3:
                image_conv();
                break;
            case 4:
                audio_conv();
                break;
            case 5:
                video_conv();
                break;
            default:
                bye();
        }
    }
    

    return 0;
}

int home()
{
    cls();
    int t;
    cout <<  "Project Convoe - Convert anything to anything" << endl;
    cout <<  "Made By Rakibul Hasan" << endl << endl;

    cout << "-Available options-\n";
    cout << "1. Base Conversion" << endl;
    cout << "2. Morse Code-Text Conversion" << endl;
    cout << "3. Image Conversion" << endl;
    cout << "4. Audio Conversion" << endl;
    cout << "5. Video Conversion" << endl;

    cout << endl;
    cout << "-Choose your option-"<< endl;
    cout << ">> ";
    cin >> t;
    return t;
}

int image_conv()
{
    while(true)
    {
        cls();
        cout << "Image Conversion" << endl;
        cout << "--------------------------" << endl;
        cout << "\"Convert Any Image to Another Image Format\"" << endl;
        cout << endl;

        cout << "Input The Image File Path >> ";
        fflush(stdin);
        string s;
        getline(cin,s);

        ifstream ifile;
        ifile.open(s);
        if (!ifile) {
            cout << "Error opening input file: " << s << endl;

            cout << "Input The Image File Name >> ";
            getline(cin,s);
        }
        ifile.close();

        string o; 
        o = s.substr(0, s.find_last_of("."));
        cout << endl;
        int format_list_length = 13;
        cout << "Choose Format- " <<endl;
        cout << "1. JPG" << endl;
        cout << "2. PNG" << endl;
        cout << "3. BMP" << endl;
        cout << "4. GIF" << endl;
        cout << "5. TIFF" << endl;
        cout << "6. WEBP" << endl;
        cout << "7. TGA" << endl;
        cout << "8. PSD" << endl;
        cout << "9. PDF" << endl;
        cout << "10. EPS" << endl;
        cout << "11. AI" << endl;
        cout << "12. SVG" << endl;
        cout << "13. RAW" << endl;

        cout << "-- Enter '0' to go back --" << endl;
        cout << ">> ";
        int fchoice; cin >> fchoice;
        int flag = 0;
        while(fchoice > format_list_length || fchoice < 0)
        {
            cout << "Invalid Choice. Try again-" << endl;
            cout << ">> ";
            cin >> fchoice;
            if(fchoice == 0)
            {
                flag = 1;
                break;
            }
        }

        if(fchoice == 0 || flag == 1)
        {
            continue;
        }

        string programPath = ".\\requires\\";
        string command = programPath + "imagemagik_convert.exe \"" + s + "\" \"" + o;
        switch(fchoice)
        {
            case 1:
                command += ".jpg";
                break;

            case 2:
                command += ".png";
                break;
            
            case 3:
                command += ".bmp";
                break;

            case 4:
                command += ".gif";
                break;

            case 5:
                command += ".tiff";
                break;

            case 6:
                command += ".webp";
                break;

            case 7:
                command += ".tga";
                break;

            case 8:
                command += ".psd";
                break;

            case 9:
                command += ".pdf";
                break;
            
            case 10:
                command += ".eps";
                break;

            case 11:
                command += ".ai";
                break;

            case 12:
                command += ".svg";
                break;

            case 13:
                command += ".raw";
                break;
            
            default:
                cout << "-- Something Went Wrong --" << endl;
                command += ".mp4";
                break;
        }

        command += + "\"";

        cout << "Converting..." << endl;

        system(command.c_str());

        cout << "\n\n--- Convertion Process Executed ---" << endl;

        cout << "Choose Your Option (H for exit) -" << endl;
        char choice; cin >> choice;
        if(choice == 'H' || choice == 'h') 
        {
            break;
        }
    }
}

int video_conv()
{
    while(true)
    {
        cls();
        cout << "Video Conversion" << endl;
        cout << "--------------------------" << endl;
        cout << "\"Convert Any Video to Another Video Format\"" << endl;
        cout << endl;

        cout << "Input The Video File Path >> ";
        fflush(stdin);
        string s;
        getline(cin,s);

        ifstream ifile;
        ifile.open(s);
        if (!ifile) {
            cout << "Error opening input file: " << s << endl;

            cout << "Input The Video File Name >> ";
            getline(cin,s);
        }
        ifile.close();

        string o; 
        o = s.substr(0, s.find_last_of("."));
        cout << endl;
        int format_list_length = 13;
        cout << "Choose Format- " <<endl;
        cout << "1. MP4" << endl;
        cout << "2. AVI" << endl;
        cout << "3. MKV" << endl;
        cout << "4. FLV" << endl;
        cout << "5. WMV" << endl;
        cout << "6. MOV" << endl;
        cout << "7. 3GP" << endl;
        cout << "8. M4V" << endl;
        cout << "9. VOB" << endl;
        cout << "10. WEBM" << endl;
        cout << "11. TS" << endl;
        cout << "12. RM" << endl;
        cout << "13. MPG" << endl;

        cout << "-- Enter '0' to go back --" << endl;
        cout << ">> ";
        int fchoice; cin >> fchoice;
        int flag = 0;
        while(fchoice > format_list_length || fchoice < 0)
        {
            cout << "Invalid Choice. Try again-" << endl;
            cout << ">> ";
            cin >> fchoice;
            if(fchoice == 0)
            {
                flag = 1;
                break;
            }
        }

        if(fchoice == 0 || flag == 1)
        {
            continue;
        }

        string programPath = ".\\requires\\";
        string command = programPath + "ffmpeg.exe -i \"" + s + "\" \"" + o;
        switch(fchoice)
        {
            case 1:
                command += ".mp4";
                break;

            case 2:
                command += ".avi";
                break;

            case 3:
                command += ".mkv";
                break;
            
            case 4:
                command += ".flv";
                break;

            case 5:
                command += ".wmv";
                break;
            
            case 6:
                command += ".mov";
                break;

            case 7:
                command += ".3gp";
                break;
            
            case 8:
                command += ".m4v";
                break;
            
            case 9:
                command += ".vob";
                break;

            case 10:
                command += ".webm";
                break;

            case 11:
                command += ".ts";
                break;
            
            case 12:
                command += ".rm";
                break;
            
            case 13:
                command += ".mpg";
                break;
            
            default:
                cout << "-- Something Went Wrong --" << endl;
                command += ".mp4";
                break;
        }

        command += + "\"";

        cout << "Converting..." << endl;

        system(command.c_str());

        cout << "\n\n--- Convertion Process Executed ---" << endl;
        
        cout << "Choose Your Option (H for exit) -" << endl;
        char choice; cin >> choice;
        if(choice == 'H' || choice == 'h') 
        {
            break;
        }
    }

}

int audio_conv()
{
    while(true)
    {
        cls();
        cout << "Audio Conversion" << endl;
        cout << "--------------------------" << endl;
        cout << "\"Convert Any Audio to Another Audio Format\"" << endl;
        cout << endl;

        cout << "Input The Audio File Path >> ";
        fflush(stdin);
        string s; getline(cin,s);

        ifstream ifile;
        ifile.open(s);
        if (!ifile) {
            cout << "Error opening input file: " << s << endl;

            cout << "Input The Audio File Name >> ";
            getline(cin,s);
        }
        ifile.close();

        string o; 
        o = s.substr(0, s.find_last_of("."));
        cout << endl;
        int format_list_length = 13;
        cout << "Choose Format- " <<endl;
        cout << "1. MP3" << endl;
        cout << "2. WAV" << endl;
        cout << "3. FLAC" << endl;
        cout << "4. OGG" << endl;
        cout << "5. WMA" << endl;
        cout << "6. M4A" << endl;
        cout << "7. AIFF" << endl;
        cout << "8. AAC" << endl;
        cout << "9. AMR" << endl;
        cout << "10. MKA" << endl;
        cout << "11. AC3" << endl;
        cout << "12. DTS" << endl;
        cout << "13. RA" << endl;

        cout << "-- Enter '0' to go back --" << endl;
        cout << ">> ";
        int fchoice; cin >> fchoice;
        int flag = 0;
        while(fchoice > format_list_length || fchoice < 0)
        {
            cout << "Invalid Choice. Try again-" << endl;
            cout << ">> ";
            cin >> fchoice;
            if(fchoice == 0)
            {
                flag = 1;
                break;
            }
        }

        if(fchoice == 0 || flag == 1)
        {
            continue;
        }

        string programPath = ".\\requires\\";
        string command = programPath + "ffmpeg.exe -i \"" + s + "\" \"" + o;
        switch(fchoice)
        {
            case 1:
                command += ".mp3";
                break;
            
            case 2:
                command += ".wav";
                break;

            case 3:
                command += ".flac";
                break;

            case 4:
                command += ".ogg";
                break;

            case 5:
                command += ".wma";
                break;

            case 6:
                command += ".m4a";
                break;

            case 7:
                command += ".aiff";
                break;
            
            case 8:
                command += ".aac";
                break;

            case 9:
                command += ".amr";
                break;

            case 10:
                command += ".mka";
                break;

            case 11:
                command += ".ac3";
                break;

            case 12:
                command += ".dts";
                break;

            case 13:
                command += ".ra";
                break;
            
            default:
                cout << "-- Something Went Wrong --" << endl;
                command += ".mp3";
                break;
        }
        command += + "\"";

        cout << "Converting..." << endl;

        system(command.c_str());

        cout << "\n\n--- Convertion Process Executed ---" << endl;

        cout << "Choose Your Option (H for exit) -" << endl;
        char choice; cin >> choice;
        if(choice == 'H' || choice == 'h') 
        {
            break;
        }
    }
    
}

void DecimaltoBinary(string n)
{
    string binary = "";
    int num = stoi(n);
    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num = num / 2;
    }
    cout << "Binary: " << binary << endl;
}

void DecimaltoOctal(string n)
{
    string octal = "";
    int num = stoi(n);
    while (num > 0)
    {
        octal = to_string(num % 8) + octal;
        num = num / 8;
    }
    cout << "Octal: " << octal << endl;
}

void DecimaltoHexa(string n)
{
    string hexa = "";
    int num = stoi(n);
    while (num > 0)
    {
        int rem = num % 16;
        if (rem < 10)
        {
            hexa = to_string(rem) + hexa;
        }
        else
        {
            hexa = char(rem + 55) + hexa;
        }
        num = num / 16;
    }
    cout << "Hexa: " << hexa << endl;
}

void BinarytoDecimal(string n)
{
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == '1')
        {
            decimal += base;
        }
        base = base * 2;
    }
    cout << "Decimal: " << decimal << endl;
}

void BinarytoOctal(string n)
{
    string octal = "";
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == '1')
        {
            decimal += base;
        }
        base = base * 2;
    }
    while (decimal > 0)
    {
        octal = to_string(decimal % 8) + octal;
        decimal = decimal / 8;
    }
    cout << "Octal: " << octal << endl;
}

void BinarytoHexa(string n)
{
    string hexa = "";
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == '1')
        {
            decimal += base;
        }
        base = base * 2;
    }
    while (decimal > 0)
    {
        int rem = decimal % 16;
        if (rem < 10)
        {
            hexa = to_string(rem) + hexa;
        }
        else
        {
            hexa = char(rem + 55) + hexa;
        }
        decimal = decimal / 16;
    }
    cout << "Hexa: " << hexa << endl;
}

void OctaltoDecimal(string n)
{
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        decimal += (n[i] - '0') * base;
        base = base * 8;
    }
    cout << "Decimal: " << decimal << endl;
}

void OctaltoBinary(string n)
{
    string binary = "";
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        decimal += (n[i] - '0') * base;
        base = base * 8;
    }
    while (decimal > 0)
    {
        binary = to_string(decimal % 2) + binary;
        decimal = decimal / 2;
    }
    cout << "Binary: " << binary << endl;
}

void OctaltoHexa(string n)
{
    string hexa = "";
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        decimal += (n[i] - '0') * base;
        base = base * 8;
    }
    while (decimal > 0)
    {
        int rem = decimal % 16;
        if (rem < 10)
        {
            hexa = to_string(rem) + hexa;
        }
        else
        {
            hexa = char(rem + 55) + hexa;
        }
        decimal = decimal / 16;
    }
    cout << "Hexa: " << hexa << endl;
}

void HexatoDecimal(string n)
{
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            decimal += (n[i] - 48) * base;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            decimal += (n[i] - 55) * base;
        }
        base = base * 16;
    }
    cout << "Decimal: " << decimal << endl;
}

void HexatoBinary(string n)
{
    string binary = "";
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            decimal += (n[i] - 48) * base;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            decimal += (n[i] - 55) * base;
        }
        base = base * 16;
    }
    while (decimal > 0)
    {
        binary = to_string(decimal % 2) + binary;
        decimal = decimal / 2;
    }
    cout << "Binary: " << binary << endl;
}

void HexatoOctal(string n)
{
    string octal = "";
    int decimal = 0;
    int base = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            decimal += (n[i] - 48) * base;
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            decimal += (n[i] - 55) * base;
        }
        base = base * 16;
    }
    while (decimal > 0)
    {
        octal = to_string(decimal % 8) + octal;
        decimal = decimal / 8;
    }
    cout << "Octal: " << octal << endl;
}

int base_conv()
{
    while(true)
    {
        cls();
        cout << "Base Convertion" << endl;
        cout << "--------------------------" << endl;
        cout << "\"Convert Any Number to Decimal, Octal, Binary, Hexadecimal Base\"" << endl;
        cout << endl;

        cout << "Input The Number >> ";
        string input;
        cin >> input;
        int base_choice = -1;

        for(int i=0; i < input.size();i++)
        {
            if((input[i] < '0' || input[i] > '9') && (input[i] > 'F' || input[i] < 'A') )
            {
                cout << "Not a valid number. Try again-" << endl;
                cin >> input;
                i=0;
            }
        }

        cout << "What is the number's Base form? " << endl;
        cout << "1. Decimal " << endl;
        cout << "2. Binary " << endl;
        cout << "3. Octal " << endl;
        cout << "4. Hexa " << endl;
        cout << ">> ";
        cin >> base_choice;

        while(base_choice > 4 || base_choice < 1)
        {
            cout << "Invalid Choice. Try again-" << endl;
            cout << ">> ";
            cin >> base_choice;
        }

        if(base_choice == 1)
        {
            for(int i=0; i < input.size();i++)
            {
                if(input[i] < '0' || input[i] > '9')
                {
                    cout << "Not a valid number. Try again-" << endl;
                    cout << "Input The Number >> ";
                    cin >> input;
                    i = 0;
                }
            }
        }else if(base_choice == 2)
        {
            for(int i=0; i < input.size();i++)
            {
                if(input[i] < '0' || input[i] > '1')
                {
                    cout << "Not a valid number. Try again-" << endl;
                    cout << "Input The Number >> ";
                    cin >> input;
                    i = 0;
                }
            }
        }else if(base_choice == 3)
        {
            for(int i=0; i < input.size();i++)
            {
                if(input[i] < '0' || input[i] > '7')
                {
                    cout << "Not a valid number. Try again-" << endl;
                    cout << "Input The Number >> ";
                    cin >> input;
                    i = 0;
                }
            }
        }else if(base_choice == 4)
        {
            for(int i=0; i < input.size();i++)
            {
                if((input[i] < '0' || input[i] > '9') && (input[i] < 'A' && input[i] > 'F') && (input[i] < 'a' && input[i] > 'f'))
                {
                    cout << "Not a valid number. Try again-" << endl;
                    cout << "Input The Number >> ";
                    cin >> input;
                    i = 0;
                }
            }
        }

        cout << "\n\nWhich Base form you want it to convert? " << endl;
        int cbase_choice;
        switch (base_choice)
        {
            case 1:
                cout << "1. Binary " << endl;
                cout << "2. Octal " << endl;
                cout << "3. Hexa " << endl;
                cout << ">> ";
                cin >> cbase_choice;

                if(cbase_choice <1 || cbase_choice > 3)
                {
                    cout << "Invalid Choice. Try again-" << endl;
                    cout << ">> ";
                    cin >> cbase_choice;
                }

                if(cbase_choice == 1) 
                {
                    DecimaltoBinary(input);
                }else if(cbase_choice == 2)
                {
                    DecimaltoOctal(input);
                }else if(cbase_choice == 3)
                {
                    DecimaltoHexa(input);
                }

                break;

            case 2:
                cout << "1. Decimal " << endl;
                cout << "2. Octal " << endl;
                cout << "3. Hexa " << endl;
                cout << ">> ";
                cin >> cbase_choice;

                if(cbase_choice <1 || cbase_choice > 3)
                {
                    cout << "Invalid Choice. Try again-" << endl;
                    cout << ">> ";
                    cin >> cbase_choice;
                }

                if(cbase_choice == 1) 
                {
                    BinarytoDecimal(input);
                }else if(cbase_choice == 2)
                {
                    BinarytoOctal(input);
                }else if(cbase_choice == 3)
                {
                    BinarytoHexa(input);
                }
                break;
            
            case 3:
                cout << "1. Decimal " << endl;
                cout << "2. Binary " << endl;
                cout << "3. Hexa " << endl;
                cout << ">> ";
                cin >> cbase_choice;
                if(cbase_choice <1 || cbase_choice > 3)
                {
                    cout << "Invalid Choice. Try again-" << endl;
                    cout << ">> ";
                    cin >> cbase_choice;
                }

                if(cbase_choice == 1) 
                {
                    OctaltoDecimal(input);
                }else if(cbase_choice == 2)
                {
                    OctaltoBinary(input);
                }else if(cbase_choice == 3)
                {
                    OctaltoHexa(input);
                }
                break;

            case 4:
                cout << "1. Decimal " << endl;
                cout << "2. Binary " << endl;
                cout << "3. Octal " << endl;
                cout << ">> ";
                cin >> cbase_choice;
                if(cbase_choice <1 || cbase_choice > 3)
                {
                    cout << "Invalid Choice. Try again-" << endl;
                    cout << ">> ";
                    cin >> cbase_choice;
                }
                if(cbase_choice == 1) 
                {
                    HexatoDecimal(input);
                }else if(cbase_choice == 2)
                {
                    HexatoBinary(input);
                }else if(cbase_choice == 3)
                {
                    HexatoOctal(input);
                }
                break;
        
            default:
                break;
        }
        

        while(base_choice > 4 || base_choice < 1)
        {
            cout << "Invalid Choice. Try again-" << endl;
            cout << ">> ";
            cin >> base_choice;
        }
        

        cout << endl;

        cout << "Choose Your Option (H for exit) -" << endl;
        char choice; cin >> choice;
        if(choice == 'H' || choice == 'h') 
        {
            break;
        }
    }
    
}

void MorseToText(string s)
{
    cout << "\n\nText >> ";
    vector<string> alphabetMorse = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",     // A-I
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",   // J-R
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."            // S-Z
    };

    // Define Morse code sequences for numbers
    vector<string> numberMorse = {
        "-----", ".----", "..---", "...--", "....-",     // 0-4
        ".....", "-....", "--...", "---..", "----."      // 5-9
    };

    // Define Morse code sequences for extra characters
    vector<string> extraMorse = {
        ".-.-.-", "--..--", "..--..", ".----.",          // . , ? '
        "-.-.--", "-....-", "-..-.", "---...",            // ! - / :
        "-.-.-.", "-...-", "..--.-", ".-..-.",           // ; = _ "
        "...-..-", ".-...", ".--.-.", "......."                      // $ & @  
    };

    for(int i =0 ; i<s.size(); i++)
    {
        string temp = "";
        while(i < s.size() && (s[i] != ' ' || s[i] != '\n' || s[i] != EOF))
        {
            //cout << s[i] << endl;
            if(s[i] == ' ') break;
            temp+=s[i];
            //cout << temp << endl;
            i++;
        }

        int flag = 0;

        for(int i =0; i <alphabetMorse.size(); i++)
        {
            if(temp == alphabetMorse[i])
            {
                cout << (char) ('A'+i);
                flag = 1;
            }
        }

        if(flag != 1)
        {
            for(int i =0; i <numberMorse.size(); i++)
            {
                if(temp == numberMorse[i])
                {
                    cout << (char) ('0'+i);
                    flag = 1;
                }
            }
        }

        if(flag != 1)
        {
            for(int i =0; i <extraMorse.size(); i++)
            {
                if(temp == extraMorse[i])
                {
                    switch(i)
                    {
                        case 0:
                            cout << ".";
                            break;

                        case 1:
                            cout << ",";
                            break;

                        case 2:
                            cout << "?";
                            break;

                        case 3:
                            cout << "\'";
                            break;

                        case 4:
                            cout << "!";
                            break;

                        case 5:
                            cout << "-";
                            break;

                        case 6:
                            cout << "/";
                            break;

                        case 7:
                            cout << ":";
                            break;
                        
                        case 8:
                            cout << ";";
                            break;

                        case 9:
                            cout << "=";
                            break;

                        case 10:
                            cout << "_";
                            break;
                        
                        case 11:
                            cout << "\"";
                            break;

                        case 12:
                            cout << "$";
                            break;

                        case 13:
                            cout << "&";
                            break;

                        case 14:
                            cout << "@";
                            break;
                        
                        case 15:
                            cout << " ";
                            break;

                    }
                }
            }
        }

        flag = 0;
    }
    cout << "\n\n\n";
}

void TextToMorse(string s)
{
    cout << "\n\nMorse >> ";
    vector<string> alphabetMorse = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",     // A-I
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",   // J-R
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."            // S-Z
    };

    // Define Morse code sequences for numbers
    vector<string> numberMorse = {
        "-----", ".----", "..---", "...--", "....-",     // 0-4
        ".....", "-....", "--...", "---..", "----."      // 5-9
    };

    // Define Morse code sequences for extra characters
    vector<string> extraMorse = {
        ".-.-.-", "--..--", "..--..", ".----.",          // . , ? '
        "-.-.--", "-....-", "-..-.", "---...",            // ! - / :
        "-.-.-.", "-...-", "..--.-", ".-..-.",           // ; = _ "
        "...-..-", ".-...", ".--.-.", "......."                      // $ & @  
    };

    for(int i =0 ; i<s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') 
        {
            cout << alphabetMorse[s[i] - 'A'] << " ";
            continue;
        }

        if(s[i] >= 'a' && s[i] <= 'z')
        {
            cout << alphabetMorse[s[i] - 'a'] << " ";
            continue;
        }

        if(s[i] >= '0' && s[i] <= '0')
        {
            cout << numberMorse[s[i] - '0'] << " ";
            continue;
        }

        switch(s[i])
        {
            case '.':
                cout << extraMorse[0] << " ";
                break;

            case ',':
                cout << extraMorse[1] << " ";
                break;

            case '?':
                cout << extraMorse[2] << " ";
                break;

            case '\'':
                cout << extraMorse[3] << " ";
                break;

            case '!':
                cout << extraMorse[4] << " ";
                break;
            
            case '-':
                cout << extraMorse[5] << " ";
                break;

            case '/':
                cout << extraMorse[6] << " ";
                break;

            case ':':
                cout << extraMorse[7] << " ";
                break;

            case ';':
                cout << extraMorse[8] << " ";
                break;

            case '=':
                cout << extraMorse[9] << " ";
                break;

            case '_':
                cout << extraMorse[10] << " ";
                break;

            case '\"':
                cout << extraMorse[11] << " ";
                break;

            case '$':
                cout << extraMorse[12] << " ";
                break;

            case '&':
                cout << extraMorse[13] << " ";
                break;

            case '@':
                cout << extraMorse[14] << " ";
                break;
        }
    }
    cout << "\n\n\n";
}

int morse_eng_conv()
{
    while(true)
    {
        cls();
        cout << "Morse Code to Text Convertion" << endl;
        cout << "--------------------------" << endl;
        cout << "\"Convert Morse Code to English Text\"" << endl;
        cout << endl;

        cout << "Enter Choice-" << endl;
        cout << "1. Morse to Text" << endl;
        cout << "2. Text to Morse" << endl;
        cout << ">> ";
        int fchoice; cin >> fchoice;
        while(fchoice > 2 || fchoice < 1)
        {
            cout << "Invalid Choice. Try again-" << endl;
            cout << ">> ";
            cin >> fchoice;
        }

        string s;

        if(fchoice == 1)
        {
            cout << "Enter Morse >> ";
            fflush(stdin);
            getline(cin, s);
            MorseToText(s);
        }else
        {
            cout << "Enter Text >> ";
            fflush(stdin);
            getline(cin, s);
            TextToMorse(s);
        }

        cout << "Choose Your Option (H for exit) -" << endl;
        char choice; cin >> choice;
        if(choice == 'H' || choice == 'h') 
        {
            break;
        }
    }

}

int bye()
{
    cls();
    cout << "Exiting...\n" <<endl;
    cout << "-- THANKS FOR USING THIS SOFTWARE --" <<endl;
    exit(0);
}

//// CLEARSCREEN FUNCTION ////
void cls()
{
    //defined using macros and conditions to find os using clear command based on os
    #ifdef _WIN32
        system("CLS");

    #elif __APPLE__
        system("clear");

    #elif __linux__
        system("clear");

    #elif TARGET_OS_EMBEDDED
        system("clear");

    #elif TARGET_IPHONE_SIMULATOR
        system("clear");

    #elif TARGET_OS_IPHONE
        system("clear");

    #elif TARGET_OS_MAC
        system("clear");

    #elif__ANDROID__
        system("clear");

    #elif __unix__
        system("clear");

    #elif _POSIX_VERSION
        printf("\e[3J\033c");

    #else
        printf("Sorry, unknown operating system. This program will not support clearscreen now \n\n\n\n\n");
    #endif
        ;
}

