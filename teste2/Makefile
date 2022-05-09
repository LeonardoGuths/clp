compile:
	gcc teste2_NaoOt.c -O0 -fno-tree-vectorize -o teste2_NaoOt_o0.out -fopt-info
	gcc teste2_Ot.c -O0 -o teste2_Ot_o0.out -fopt-info
	gcc teste2_NaoOt.c -O1 -fno-tree-vectorize -o teste2_NaoOt_o1.out -fopt-info
	gcc teste2_Ot.c -O1 -o teste2_Ot_o1.out -fopt-info
	gcc teste2_NaoOt.c -O2 -fno-tree-vectorize -o teste2_NaoOt_o2.out -fopt-info
	gcc teste2_Ot.c -O2 -o teste2_Ot_o2.out -fopt-info
	gcc teste2_NaoOt.c -O3 -fno-tree-vectorize -o teste2_NaoOt_o3.out -fopt-info
	gcc teste2_Ot.c -O3 -o teste2_Ot_o3.out -fopt-info
	gcc teste2_NaoOt.c -Ofast -fno-tree-vectorize -o teste2_NaoOt_ofast.out -fopt-info
	gcc teste2_Ot.c -Ofast -o teste2_Ot_ofast.out -fopt-info
	gcc teste2_NaoOt.c -Os -fno-tree-vectorize -o teste2_NaoOt_os.out -fopt-info
	gcc teste2_Ot.c -Os -o teste2_Ot_os.out -fopt-info
	gcc teste2_NaoOt.c -Og -fno-tree-vectorize -o teste2_NaoOt_og.out -fopt-info
	gcc teste2_Ot.c -Og -o teste2_Ot_og.out -fopt-info

run:
	./teste2_NaoOt_o0.out
	./teste2_Ot_o0.out
	./teste2_NaoOt_o1.out
	./teste2_Ot_o1.out
	./teste2_NaoOt_o2.out
	./teste2_Ot_o2.out
	./teste2_NaoOt_o3.out
	./teste2_Ot_o3.out
	./teste2_NaoOt_ofast.out
	./teste2_Ot_ofast.out
	./teste2_NaoOt_os.out
	./teste2_Ot_os.out
	./teste2_NaoOt_og.out
	./teste2_Ot_og.out

compileandrun:
	make compile
	make run