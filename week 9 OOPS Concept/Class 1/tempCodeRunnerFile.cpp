    // ctor w/o gf called
    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        cout << "Parameterized Ctor without gf Called" << endl;
    }