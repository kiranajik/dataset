#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    string Districts[] = {"Alappuzha",
                            "Ernakulam",
                            "Idukki",
                            "Kannur",
                            "Kasargod",
                            "Kollam",
                            "Kottayam",
                            "Kozhikode",
                            "Malappuram",
                            "Palakkad",
                            "pathanamthitta",
                            "Thiriuvananthapuram",
                            "Thrissur",
                            "Wayanad"};


    string Tvm[] = {"Neyyattinkara",
    	            "Kattakkada",
                    "Nedumangadu",
                    "Thiruvananthapuram",
                    "Chirayinkeezhu",
                    "Varkala"
                };
    string Klm[] = {"Kollam",
                    "Kunnathoor",
                    "Karunagappally",
                    "Kottarakkara",
                    "Punalur",
                    "Pathanapuram"
                    };
    string  Pt[] = {"Adoor",
                    "Konni",
                    "Kozhencherry",
                    "Ranni",
                    "Mallappally",
                    "Thiruvalla"
                    };
    string Alp[] = {"Chenganoor",
                    "Mavelikkara",
                    "Karthikappally",
                    "Kuttanad",
                    "Ambalappuzha",
                    "Cherthala"
                    };
    string Ktm[] = {"Changanasserry",
                    "Kottayam",
                    "Vaikom",
                    "Meenachil",
                    "Kanjirappally" 
                    };
    string Idk[] = {"Peermade",
                  "Udumbanchola",
                  "Idukki",
                  "Thodupuzha",
                  "Devikulam"
                };
    string Ekm[] = {"Kothamangalam",
                    "Muvattupuzha",
                    "Kunnathunad",
                    "Kanayannur",
                    "Kochi",
                    "North Paravur",
                    "Aluva"
                    };
    string Tsr[] = {"Chalakudy",
                    "Mukundapuram",
                    "Kodungallur"
                    "Thrissur",
                    "Chavakkad",
                    "Kunnamkulam",
                    "Thalapilly"
                    };
    string Pkd[] = {"Alathoor",
                    "Chittur",
                    "Palakkad",
                    "Pattambi",
                    "Ottappalam",
                    "Mannarkkad"};

    string Mlp[] = {"Perinthalmanna",
                  "Nilambur",
                  "Eranad",
                  "Kondotty",
                  "Ponnani",
                  "Tirur",
                  "Tirurangadi"
                };
    
    string Kkd[] = {"Kozhikode",
                    "Thamarassery",
                    "Koyilandy",
                    "Vatakara"};
    
    string Wyd[] = {"Vythiri",
                    "Sulthan Bathery",
                    "Mananthavady"
                    };
    string Knr[] = {"Thalassery",
                    "Iritty",
                    "Kannur",
                    "Taliparamba",
                    "Payyanur"
                    };
    string Ksd[] = {"Hosdurg",
                    "Vellarikundu",
                    "Kasaragod",
                    "Manjeswaram"
                   };

    string Symptom[] = {"Head ache",
                    "Fever",
                    "Dry Cough",
                    "Nousea",
                    "Sore Throat",
                    "Diarrhea",
                    "Tastlessness"
                   };

    string precond[] = {
                    "Diabetes",
                    "Blood Pressure",
                    "Asma",
                    "Thyroid",
                    "Polio",
                    "Allergy"
                   };

    string Bank[] = {"Axis","SBI","Canara","ICICI","PNB","Federal","Syrian","Syndicate","Union","Indian","Union"};

     char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z' };
    char status[] = {'P','N','D'};


            srand (time(NULL));
            
            fstream fout;
            fout.open("data.csv",ios::out);
            for(int i = 0;i<1000;i++)
            {
                int drandom = rand()%14;
                int srandom = rand()%7;
                int prandom = rand()%6;
                int strandom =rand()%3;
                int brandom = rand()%11;
                char stu = status[strandom];
                string dist = Districts[drandom];
                string res = "";
                string sympu = Symptom[srandom];
                string preu = precond[prandom];
                string bnk = Bank[brandom];
                int trandum;
                res = res + alphabet[rand() % 26];

                string taluk;
                switch(drandom)
                {
                    case 0 : 
                        trandum = rand()%6;
                        taluk=Alp[trandum];
                        break;
                    case 1 : 
                        trandum = rand()%7;
                        taluk=Ekm[trandum];
                        break;
                    case 2:
                        trandum = rand()%5;
                        taluk=Idk[trandum];
                        break;
                    case 3:
                        trandum = rand()%5;
                        taluk=Knr[trandum];
                        break;
                    case 4:
                        trandum = rand()%4;
                        taluk=Ksd[trandum];
                        break;
                    case 5:
                        trandum = rand()%6;
                        taluk=Klm[trandum];
                        break;
                    case 6:
                        trandum = rand()%5;
                        taluk=Ktm[trandum];
                        break;
                    case 7:
                        trandum = rand()%4;
                        taluk=Kkd[trandum];
                        break;
                    case 8:
                        trandum = rand()%7;
                        taluk=Mlp[trandum];
                        break;
                    case 9:
                        trandum = rand()%6;
                        taluk=Pkd[trandum];
                        break;
                    case 10:
                        trandum = rand()%6;
                        taluk=Pt[trandum];
                        break;
                    case 11:
                        trandum = rand()%6;
                        taluk=Tvm[trandum];
                        break;
                    case 12:
                        trandum = rand()%7;
                        taluk=Tsr[trandum];
                        break;
                    case 13:
                        trandum = rand()%3;
                        taluk=Wyd[trandum];
                        break;

                    
                }
                
                fout<<dist<<","<<taluk<<","<<bnk<<","<<"PANCHAYAT -"<<res<<" "<<","<<sympu<<","<<preu<<","<<stu<<"\n";
            
            }
            fout.close();

}