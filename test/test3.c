

// Enum declaration
enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

// Structure declaration
struct Person {
    char name[50];
    int age;
    enum Days favorite_day;
};

// Union declaration
union Data {
    int i;
    float f;
    char str[20];
};

// Function with static variable
static int counter() {
    static int count = 0;
    return ++count;
}

int main() {
    // Enum usage
    enum Days today = WED;

    // Structure usage
    struct Person person1;
    

    // Union usage
    union Data data;
    

    
    return 0;
}
