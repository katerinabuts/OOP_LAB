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
	struct RELATION   //ребро:символ->вершина графа переходов КА
	{
		char symbol;  //символ перехода
		short nnode;  //номер смежной вершины
		RELATION(char, short); //символ перехода, новое состояние
	};
	struct NODE  //вершина графа переходов
	{
		short n_relation; //количество инциндентных ребер
		RELATION *relations; //инциндентные ребра
		NODE();
		NODE(short n, RELATION rel, ...);  //количество инциндентных ребер, список ребер
	};
	struct FST   //недетерминированный конечный автомат
	{
		 char* string; //цепочка(строка, завершается 0х00)
		short position; //текущая позиция в цепочке
		short nstates; //количество состояний автомата
		NODE* nodes; //граф переходов:[0]-начальное состояние, [nstate-1]-конечное
		short* rstates; //возможные состояния автомата на данной позиции
		FST(char* s, short ns, NODE n, ...); //цепочка(строка, завершается 0х00), количество состояний автомата, список состояний(граф переходов)
	};
	bool execute(FST& fst); //выполнить распознование цепочки, недетерминированный конечный автомат
}