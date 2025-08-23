#include <iostream>
#include <vector>
#include <string>
#include <numeric> // std::accumulate
#include <iomanip> // std::setprecision

class Student
{
private:
    std::string name_;
    int id_;
    std::vector<int> marks_;
    static int next_id_; // shared across all objects

public:
    // Constructors
    Student() : name_("Unnamed"), id_(next_id_++) {}
    explicit Student(std::string name) : name_(std::move(name)), id_(next_id_++) {}

    // Basic getters/setters
    int id() const { return id_; }
    const std::string &name() const { return name_; }
    void set_name(const std::string &n) { name_ = n; }

    // Behavior
    void add_mark(int m) { marks_.push_back(m); }

    double average() const
    {
        if (marks_.empty())
            return 0.0;
        int sum = std::accumulate(marks_.begin(), marks_.end(), 0);
        return static_cast<double>(sum) / marks_.size();
    }

    void print() const
    {
        std::cout << "Student{id=" << id_ << ", name=\"" << name_ << "\", avg="
                  << std::fixed << std::setprecision(2) << average() << "}\n";
    }
};

// Define static member
int Student::next_id_ = 1;

int main()
{
    Student alice("Alice");
    alice.add_mark(80);
    alice.add_mark(95);
    alice.add_mark(88);

    Student bob("Bob");
    bob.add_mark(70);
    bob.add_mark(76);

    alice.print();
    bob.print();

    // Update name to show setters working
    bob.set_name("Robert");
    bob.add_mark(90);
    bob.print();

    // Create a few more to see auto IDs
    Student s1, s2("Charlie");
    s1.add_mark(100);
    s2.add_mark(60);
    s1.print();
    s2.print();

    return 0;
}
