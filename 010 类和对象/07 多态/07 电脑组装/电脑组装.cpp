#include <iostream>

using namespace std;
//抽象CPU
class CPU
{
public:
    virtual void calculate() = 0;
};
//抽象显卡
class VideoCard
{
public:
    virtual void display() = 0;
};
//抽象内存条
class Memory
{
public:
    virtual void storage() = 0;
};
class Computer
{
public:
void work()
{
    m_cpu->calculate();
    m_vc->display();
    m_mem->storage();
}
    Computer(CPU *cpu,VideoCard *vc,Memory *mem)
    {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    ~Computer()
    {
        if(m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if(m_vc != NULL)
        {
            delete m_cpu;
            m_vc = NULL;
        }
        if(m_mem != NULL)
        {
            delete m_cpu;
            m_mem = NULL;
        }
    }
private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};
//Intel厂商
class IntelCPU:public CPU
{
public:
    void calculate()
    {
        cout << "Intet的CPU开始计算" << endl;
    }
};
class IntelVideoCard:public VideoCard
{
public:
    void display()
    {
        cout << "Intet的显卡开始显示" << endl;
    }
};
class IntelMemory:public Memory
{
public:
    void storage()
    {
        cout << "Intet的内存条开始存储" << endl;
    }
};
//联想
class LenovoCPU:public CPU
{
public:
    void calculate()
    {
        cout << "Lenovo的CPU开始计算" << endl;
    }
};
class LenovoVideoCard:public VideoCard
{
public:
    void display()
    {
        cout << "Lenovo的显卡开始显示" << endl;
    }
};
class LenovoMemory:public Memory
{
public:
    void storage()
    {
        cout << "Lenovo的内存条开始存储" << endl;
    }
};

void test01()
{
    //第一台电脑
    CPU *intelCPU = new IntelCPU;
    VideoCard *intelCard = new IntelVideoCard;
    Memory *memory = new IntelMemory;
    //创建第一台电脑
    Computer *computer1 = new Computer(intelCPU,intelCard,memory);
    computer1->work();
    delete computer1;
    //第二台电脑
    Computer *computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
    computer2->work();
    delete computer2;
}
int main()
{
    test01();
    return 0;
}
