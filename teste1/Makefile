compile:
	gcc teste1_NaoOt.c -O0 -o teste1_NaoOt_o0.out -fopt-info-all
	gcc teste1_Ot.c -O0 -o teste1_Ot_o0.out -fopt-info-all
	gcc teste1_NaoOt.c -O1 -o teste1_NaoOt_o1.out -fopt-info-all
	gcc teste1_Ot.c -O1 -o teste1_Ot_o1.out -fopt-info-all
	gcc teste1_NaoOt.c -O2 -o teste1_NaoOt_o2.out -fopt-info-all
	gcc teste1_Ot.c -O2 -o teste1_Ot_o2.out -fopt-info-all
	gcc teste1_NaoOt.c -O3 -o teste1_NaoOt_o3.out -fopt-info-all
	gcc teste1_Ot.c -O3 -o teste1_Ot_o3.out -fopt-info-all
	gcc teste1_NaoOt.c -Ofast -o teste1_NaoOt_ofast.out -fopt-info-all
	gcc teste1_Ot.c -Ofast -o teste1_Ot_ofast.out -fopt-info-all
	gcc teste1_NaoOt.c -Os -o teste1_NaoOt_os.out -fopt-info-all
	gcc teste1_Ot.c -Os -o teste1_Ot_os.out -fopt-info-all
	gcc teste1_NaoOt.c -Og -o teste1_NaoOt_og.out -fopt-info-all
	gcc teste1_Ot.c -Og -o teste1_Ot_og.out -fopt-info-all

run:
	./teste1_NaoOt_o0.out
	./teste1_Ot_o0.out
	./teste1_NaoOt_o1.out
	./teste1_Ot_o1.out
	./teste1_NaoOt_o2.out
	./teste1_Ot_o2.out
	./teste1_NaoOt_o3.out
	./teste1_Ot_o3.out
	./teste1_NaoOt_ofast.out
	./teste1_Ot_ofast.out
	./teste1_NaoOt_os.out
	./teste1_Ot_os.out
	./teste1_NaoOt_og.out
	./teste1_Ot_og.out

compileandrun:
	make compile
	make run