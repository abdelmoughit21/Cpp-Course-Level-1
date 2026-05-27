#include <iostream>
using namespace std;

enum enColor{ Red , Blue , Green , Yellow };
enum enMaritalStatus{ Single , Married };
enum enGender { Male , Female };

struct stAddress {

    string streetName;
    string BuildingNo;
    string POBox;
    string ZipCode;

};

struct stContactInfo {

    string Phone;
    string Email;
    stAddress Address;

};

struct stPerson {

    string FirstName;
    string LastName;

    stContactInfo Contact;

    enColor FavoriteColor;
    enMaritalStatus MaritalStatus;
    enGender Gender;

};

int main()
{
    stPerson Person;

    Person.FirstName = "Abdelmoughit";
    Person.LastName = "Berdhi";
    Person.Contact.Phone = "24554454585";
    Person.Contact.Email = "akmkdkd@gmail.com";
    Person.Contact.Address.streetName = "JSJKJSKK SKKJKSK SKK";
    Person.Contact.Address.BuildingNo = "45";
    Person.Contact.Address.POBox = "745";
    Person.Contact.Address.ZipCode = "565656";

    Person.FavoriteColor = enColor::Blue;
    Person.Gender = enGender::Male;
    Person.MaritalStatus = enMaritalStatus::Married;

    return 0;
}

