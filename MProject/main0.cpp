#include <iostream>
#include "Student.h"
#include "Collage.h"
#include "Contact.h"

int main() {
 
    Contact contact("123-456-7890", "Kyiv", "Ukraine");

    Collage collage("Kyiv National University", "Phone: 123-456-7890", contact);

    Student student("John Doe", "01/01/2000", contact, collage);

    student.show();

    return 0;
}
