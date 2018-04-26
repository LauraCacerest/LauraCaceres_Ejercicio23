graf_onda.png :graph onda.py  onda.txt
	python graph_onda.py
onda.txt : a.out
	./a.out > onda.txt
	rm  a.out
