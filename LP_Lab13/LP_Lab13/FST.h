#define Graph 23, \
	FST::NODE(1, FST::RELATION('s', 1)), \
	FST::NODE(1, FST::RELATION('t', 2)), \
	FST::NODE(1, FST::RELATION('a', 3)), \
	FST::NODE(1, FST::RELATION('r', 4)), \
	FST::NODE(1, FST::RELATION('t', 5)), \
	FST::NODE(1, FST::RELATION(' ', 6)), \
	FST::NODE(5, FST::RELATION(' ', 6), FST::RELATION('s', 7), FST::RELATION('w', 10), FST::RELATION('s', 13), FST::RELATION(' ',18)), \
	FST::NODE(1, FST::RELATION('e', 8)), \
	FST::NODE(1, FST::RELATION('n', 9)), \
	FST::NODE(1, FST::RELATION('d', 16)), \
	FST::NODE(1, FST::RELATION('a', 11)), \
	FST::NODE(1, FST::RELATION('i', 12)), \
	FST::NODE(1, FST::RELATION('t', 16)), \
	FST::NODE(1, FST::RELATION('h', 14)), \
	FST::NODE(1, FST::RELATION('o', 15)), \
	FST::NODE(1, FST::RELATION('w', 16)), \
	FST::NODE(1, FST::RELATION(' ', 17)), \
	FST::NODE(5, FST::RELATION(' ', 17), FST::RELATION('s', 7), FST::RELATION('w', 10), FST::RELATION('s', 13), FST::RELATION(' ', 18)), \
	FST::NODE(2, FST::RELATION(' ', 18), FST::RELATION('s', 19)), \
	FST::NODE(1, FST::RELATION('t', 20)), \
	FST::NODE(1, FST::RELATION('o', 21)), \
	FST::NODE(1, FST::RELATION('p', 22)), \
	FST::NODE()
namespace FST
{
	struct RELATION   //�����:������->������� ����� ��������� ��
	{
		char symbol;  //������ ��������
		short nnode;  //����� ������� �������
		RELATION(char, short); //������ ��������, ����� ���������
	};
	struct NODE  //������� ����� ���������
	{
		short n_relation; //���������� ������������ �����
		RELATION *relations; //������������ �����
		NODE();
		NODE(short n, RELATION rel, ...);  //���������� ������������ �����, ������ �����
	};
	struct FST   //������������������� �������� �������
	{
		 char* string; //�������(������, ����������� 0�00)
		short position; //������� ������� � �������
		short nstates; //���������� ��������� ��������
		NODE* nodes; //���� ���������:[0]-��������� ���������, [nstate-1]-��������
		short* rstates; //��������� ��������� �������� �� ������ �������
		FST(char* s, short ns, NODE n, ...); //�������(������, ����������� 0�00), ���������� ��������� ��������, ������ ���������(���� ���������)
	};
	bool execute(FST& fst); //��������� ������������� �������, ������������������� �������� �������
}