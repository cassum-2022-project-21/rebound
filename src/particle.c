#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include "particle.h"
#include "main.h"

struct particle* particles;

void init_particles(int _N){	
	N = _N;
	N_active = _N;
	particles = malloc(sizeof(struct particle)*N);
}
