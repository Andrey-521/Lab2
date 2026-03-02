#ifndef BELL_H
#define BELL_H

class Bell {
public:
    Bell();
    void sound(); // печатает "ding" или "dong" по очереди, начиная с "ding"
private:
    bool nextIsDing;
};

#endif // BELL_H
