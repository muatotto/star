out.png: out.pov
	povray out.pov

out.pov: generator
	./generator < xyz_mag_data.txt > out.pov

generator: generator.cpp
	g++ generator.cpp -o generator