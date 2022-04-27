#include "MyArray.h"

ostream& operator<<(ostream& os, const MyArray obj)
{
    if (obj.masiv) {
        for (auto i = 0; i < obj.size; i++) {
            os << obj.masiv[i] << " ";
        }
        return os;
    }
}

MyArray::MyArray()
{
    size = 0;
    index = -1;
    masiv = nullptr;
}

MyArray::MyArray(const size_t size) {
    this->size = size;
    index = -1;
    masiv = nullptr;
}

MyArray::MyArray(const MyArray& obj)
{
    if (this->masiv && obj.masiv) {
        this->size = obj.size;
        this->masiv = new int[obj.size];
        for (auto i = 0; i < obj.size; i++) {
            this->masiv[i] = obj.masiv[i];
        }
    }
}

MyArray::MyArray(MyArray&& obj)
{
    this->size = obj.size;
    this->masiv = obj.masiv;
    obj.masiv = nullptr;
}

MyArray MyArray::operator=(const MyArray& obj)
{
    this->size = obj.size;
    if (this->masiv) {
        delete[] this->masiv;
    }
    this->masiv = new int[obj.size];
    for (auto i = 0; i < obj.size; i++) {
        this->masiv[i] = obj.masiv[i];
    }
    return *this;
}

MyArray MyArray::operator=(MyArray&& obj)
{
    this->size = obj.size;
    if (this->masiv) {
        delete[] this->masiv;
    }
    this->masiv = obj.masiv;
    obj.masiv = nullptr;
    return *this;
}

MyArray MyArray::operator+(const MyArray& obj) const
{
    int* a = this->masiv; int size1 = this->size;
    int sum_size = this->size + obj.size;
    for (auto i = 0; i < sum_size; i++) {
        if (i < size1)this->masiv[i] = a[i];
        else this->masiv[i] = obj.masiv[i - size1];
    }
    delete[] a;
    return MyArray();
}

void MyArray::begin()
{
    this->index = 0;
}

bool MyArray::end() const
{
    if (this->index < this->size) return true;
    else return false;
}

void MyArray::next()
{
    this->index++;
}

int MyArray::get() const
{
    if (this->masiv) {
        if (this->index) { return this->masiv[index]; }
        else return 0;
    }    
}

void MyArray::set(const int data, const size_t pos)
{
    if(this->masiv) this->masiv[pos] = data;
}

void MyArray::resize(const size_t new_size)
{
    if (this->masiv) {
        int* a = this->masiv;
        this->masiv = new int[new_size];
        this->size = new_size;
        for (auto i = 0; i < new_size; i++)
            this->masiv[i] = a[i];
        delete[] a;
    }
}

void MyArray::revers()
{
    if (this->masiv) {
        int a = 0;
        for (auto i = 0; i < this->size / 2; i++) {
            a = this->masiv[i];
            this->masiv[this->size - i] = this->masiv[i];
            this->masiv[i] = a;
        }
    }
}

void MyArray::sort()
{
    if (this->masiv) {
        int a;
        for (auto i = 0; i < this->size - 1; i++) {
            for (auto j = 0; j < this->size; j++) {
                if (this->masiv[j] < this->masiv[j + 1]) {
                    a = this->masiv[j];
                    this->masiv[j] = this->masiv[j + 1];
                    this->masiv[j + 1] = a;
                }
            }
        }
    }
}

size_t MyArray::lenght() const
{
    return this->size;
}

MyArray::~MyArray()
{
    delete[] this->masiv;
}
