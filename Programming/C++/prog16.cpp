// #include <iostream>
//
// using namespace std;
// class date {
//
//   private:
//     int day, month, year;
//
//   public:
//     date();
//     void initDate(int d, int m, int y);
//     bool setDay(int d);
//     bool setMonth(int m);
//     bool setYear(int y);
//     int getDay();
//     int getMonth();
//     int getYear();
//     void printDate();
//     virtual~date();
//   };
//
//   date::date() {
//     day = 1;
//     month = 1;
//     year = 1;
//   }
//
//   void date::initDate(int d, int m, int y) {
//     if (!setDay(d)) day = 1;
//     if (!setMonth(m)) month = 1;
//     if (!setYear(y)) year = 1;
//   }
//
//   bool date::setDay(int d) {
//     if (d < 0 || d > 31) return false;
//     day = d;
//     return true;
//   }
//
//   bool date::setMonth(int m) {
//     if (m < 0 || m > 12) return false;
//     day = m;
//     return true;
//   }
//
//   bool date::setYear(int y) {
//     if (y < 0) return false;
//     day = y;
//     return true;
//   }
//
//   int date::getDay() {
//     return day;
//   }
//
//   int date::getMonth() {
//     return month;
//   }
//
//   int date::getYear() {
//     return year;
//   }
//
//   void date::printDate() {
//
//     cout<<day<<"/"<<month<<"/"<<year<<endl;
//   }
//
//   date::~date() {
//
//   }
//
//   int main() {
//     date d1;
//     date d2;
//     date d3;
//     d1.initDate(10, 11, 2001);
//     d2.initDate(15, 19, 2011);
//     d3.initDate(17, 21, 2018);
//     cout<<"To d1 object"<<endl;
//     d1.printDate();
//
//     cout<<"To d2 object"<<endl;
//     d2.printDate();
//
//     cout<<"To d1 object"<<endl;
//     // cout<<d3.day<<"/"<<d3.month<<"/"<<d3.year<<endl; //einai private den exoume prosvash
//
//     d1.setDay(3);
//     cout<<"To d1 object"<<endl;
//     d1.printDate();
//
//     system("pause");
//     return 0;
//   }

  #include <iostream>
  using namespace std;
  class date{
    private:
      int day,month,year;
    public:
      date();
      date(int x,int y,int z);
      void initDate(int d,int m,int y);
      bool setDay(int d);
      bool setMonth(int m);
      bool setYear(int y);
      int getDay();
      int getMonth();
      int getYear();
      void printDate();
      virtual ~date();
    };

    date::date() {
      day=1;
      month=1;
      year=1;
    }

    date::date(int x,int y,int z) {
      day=x;
      month=y;
      year=z;
    }

    void date::initDate(int d,int m,int y) {
      if(!setDay(d)) day=1;
      if(!setMonth(m)) month=1;
      if(!setYear(y)) year=1;
    }

    bool date::setDay(int d) {
      if (d<0 || d>31) return false;
      day=d;
      return true;
    }

    bool date::setMonth(int m) {
      if (m<0 || m>12) return false;
      month=m;
      return true;
    }

    bool date::setYear(int y) {
      if (y<0) return false;
      year=y;
      return true;
    }

    int date::getDay() {
      return day;
    }

    int date::getMonth() {
      return month;
    }

    int date::getYear() {
      return year;
    }

    void date::printDate() {
      cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

    date::~date(){
    }

    int main(){

      date d1;
      date d2;
      date d3;
      date d4(22,22,22);

      d1.initDate(10,11,2001);
      d2.initDate(15,19,2011);
      d3.initDate(17,21,2018);

      cout<<"To d1 object"<<endl;
      d1.printDate();

      cout<<"To d2 object"<<endl;
      d2.printDate();

      cout<<"To d3 object"<<endl;
      cout<<d3.getDay()<<"/"<<d3.getMonth()<<"/"<<d3.getYear()<<endl;

      d1.setDay(3);
      cout<<"To d1 object"<<endl;
      d1.printDate();

      cout<<"To d4 object"<<endl;
      d4.printDate();

      system("pause");
      return 0;
    }
