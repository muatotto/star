out.png: out.pov
	povray out.pov

out.pov: out_1.pov out_2.pov
	cat out_1.pov out_2.pov > out.pov

out_1.pov: generator_1
	./generator_1 > out_1.pov

out_2.pov: generator_2
	./generator_2 < xyz_mag_data.txt > out_2.pov

generator_1: generator_1.cpp
	g++ generator_1.cpp -o generator_1

generator_2: generator_2.cpp
	g++ generator_2.cpp -o generator_2