#include <iostream>
using namespace std;
 class mashina{
   public :
   string nomi;
   float narxi;
  };
    class bmw : private mashina {
   public:
    int yili;
    string davlati;
   };
    class nexia:public bmw  {
    public:
    int ogirligi=2000;
    string rangi="sariq";

    void chiqar()
    {
        cout<<ogirligi<<" "<<rangi<<"  "<<yili<<" "<<nomi;
    }
   };
int main()
{   nexia a;
     a.yili=2009;
     a.nomi="Nexia3";
    a.chiqar();
    return 0;
}
