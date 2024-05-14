#include "Quadruples.h"
using namespace std;

Quadruples::Quadruples() {
    head = new Quadruple(Operator::LAB, "Hello", "", "");
    tail = head;
}

Quadruples::~Quadruples() {
    while (head != NULL) {
        tail = head->sucnode;
        delete head;
        head = tail;
    }
}

ostream& operator<< (ostream& os, Operator op) {
#define case(op) case Operator::op: \
    os << #op; break
    switch (op) {
        case(ADD);    
        case(SUB);    
        case(MUL);    
        case(DIV);    
        case(NEG);    
        case(ASS);    
        case(GA);     
        case(ASFA);   
        case(ASTA);   
        case(FAS);   
        case(CUT);    
        case(LAB);    
        case(CMP);    
        case(JG);     
        case(JGE);
        case(JL);     
        case(JLE);    
        case(JE);     
        case(JNE);    
        case(JMP);    
        case(CALP);   
        case(CALF);   
        case(RTN);    
        case(PUSH);   
        case(RI);     
        case(RC);     
        case(WS);     
        case(WI);     
        case(WC);     
        case(NL);     
        default:
            break;
    }
    return os;
#undef case
}

void Quadruples::addTail(Quadruple* quadruple) {
    quadruple->prenode = tail;
    quadruple->sucnode = tail->sucnode;
    tail->sucnode = quadruple;
    tail = quadruple;
}

void Quadruples::output(ofstream& ofs) {
    Quadruple* pq;
    for (pq = head->sucnode; pq != NULL; pq = pq->sucnode) {
        ofs << pq->op << " ";
        bool out = false;
        if (!pq->oper1.empty()) {
            ofs << pq->oper1;
            out = true;
        }
        if (!pq->oper2.empty()) {
            ofs << (out ? ", " : "");
            ofs << pq->oper2;
            out = true;
        }
        if (!pq->dest.empty()) {
            ofs << (out ? ", " : "");
            ofs << pq->dest;
        }
        ofs << endl;
    }
}