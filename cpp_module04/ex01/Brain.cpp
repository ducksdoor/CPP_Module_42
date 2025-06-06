
#include "Brain.hpp"

//canonical
Brain::Brain()
{
	std::cout << GREEN << "Brain constructor called" << std::endl;

	_ideas[0] = "¿Dónde está mi humano?";
	_ideas[1] = "¡Hora de jugar!";
	_ideas[2] = "¿Eso fue una puerta?";
	_ideas[3] = "¿Puedo oler eso?";
	_ideas[4] = "Comida... ¿ya?";
	_ideas[5] = "¡Esa ardilla otra vez!";
	_ideas[6] = "Este sofá huele a mí.";
	_ideas[7] = "¡Pelota! ¡PEL-LO-TA!";
	_ideas[8] = "¿Quién viene por ahí?";
	_ideas[9] = "Este es mi jardín. Solo mío.";
	_ideas[10] = "¿Por qué el gato me ignora?";
	_ideas[11] = "Amo los paseos.";
	_ideas[12] = "¿Puedo morder eso?";
	_ideas[13] = "¡Un palo! Mi tesoro.";
	_ideas[14] = "¿Me llamaron?";
	_ideas[15] = "¿Qué está cocinando?";
	_ideas[16] = "¡Bolsas! Eso significa salir.";
	_ideas[17] = "Necesito cavar.";
	_ideas[18] = "¿Ese coche es peligroso?";
	_ideas[19] = "¡Acaríciame!";
	_ideas[20] = "¿Y si ladro ahora?";
	_ideas[21] = "No me gusta ese cartero...";
	_ideas[22] = "Necesito seguir ese olor.";
	_ideas[23] = "¡Corre! ¡Corre más!";
	_ideas[24] = "¿Dónde enterré ese hueso?";
	_ideas[25] = "Eso huele interesante.";
	_ideas[26] = "Estoy aburrido...";
	_ideas[27] = "Quiero una galleta.";
	_ideas[28] = "¿Eso es queso?";
	_ideas[29] = "¿Y si salto al sillón?";
	_ideas[30] = "¿Me llevas contigo?";
	_ideas[31] = "¡Agua fresca!";
	_ideas[32] = "Me gusta ese zapato.";
	_ideas[33] = "¿Puedo dormir aquí?";
	_ideas[34] = "¿Quién se atrevió a tocar mi juguete?";
	_ideas[35] = "Estoy siendo un buen perro.";
	_ideas[36] = "¿Puedo ir al parque?";
	_ideas[37] = "¿Eso fue un trueno? ¡AAAH!";
	_ideas[38] = "Me pica la oreja...";
	_ideas[39] = "Necesito abrazos.";
	_ideas[40] = "¡Hay otro perro!";
	_ideas[41] = "¿Puedo ir en el auto?";
	_ideas[42] = "¿Por qué me dejaste solo?";
	_ideas[43] = "Ese arbusto es mío ahora.";
	_ideas[44] = "¿Y si finjo que tengo hambre otra vez?";
	_ideas[45] = "¡Ese olor! ¡Ese olor!";
	_ideas[46] = "¿Qué es eso que vuela?";
	_ideas[47] = "Odio ese sonido de la aspiradora.";
	_ideas[48] = "¿Me miraste? ¡TE QUIERO!";
	_ideas[49] = "¿Otra vez al veterinario?";
	_ideas[50] = "¿Ese es mi reflejo?";
	_ideas[51] = "Voy a proteger la casa.";
	_ideas[52] = "Amo a los niños.";
	_ideas[53] = "Este cojín es muy cómodo.";
	_ideas[54] = "¡Persigue la cola!";
	_ideas[55] = "Estoy tan feliz.";
	_ideas[56] = "No entiendo por qué no puedo comer eso.";
	_ideas[57] = "¿Por qué se fue tan pronto?";
	_ideas[58] = "¿Eso es lodo? ¡SÍ!";
	_ideas[59] = "Voy a rodar por el césped.";
	_ideas[60] = "Misión: proteger el hueso.";
	_ideas[61] = "Quiero aprender un truco nuevo.";
	_ideas[62] = "Me siento solo...";
	_ideas[63] = "¿Esa persona es amigable?";
	_ideas[64] = "¿Qué pasa si ladro al espejo?";
	_ideas[65] = "Estoy listo para la aventura.";
	_ideas[66] = "¡Olí a un perro nuevo!";
	_ideas[67] = "¿Dónde está mi pelota favorita?";
	_ideas[68] = "Nadie me entiende...";
	_ideas[69] = "Oí una bolsa abrirse.";
	_ideas[70] = "¿Eso es mantequilla de maní?";
	_ideas[71] = "¿Podemos dormir juntos?";
	_ideas[72] = "¿Qué significa \"no\"?";
	_ideas[73] = "¿Por qué estás triste?";
	_ideas[74] = "Quiero consolar a mi humano.";
	_ideas[75] = "Este es mi lugar secreto.";
	_ideas[76] = "Amo esta alfombra.";
	_ideas[77] = "¿Por qué huelen mis patas?";
	_ideas[78] = "¿Eso fue un gato?";
	_ideas[79] = "Este palo es mejor que el anterior.";
	_ideas[80] = "¿Vamos a la playa?";
	_ideas[81] = "Me gusta mi nombre.";
	_ideas[82] = "¿Qué es una “pelusa”?";
	_ideas[83] = "¡Estoy listo para una misión!";
	_ideas[84] = "¡Olí a mi mejor amigo!";
	_ideas[85] = "Odio estar mojado...";
	_ideas[86] = "Amo que me cepillen.";
	_ideas[87] = "Este humano es mío.";
	_ideas[88] = "¿Qué pasa si me escondo aquí?";
	_ideas[89] = "¡Hora del baño! ¡Corre!";
	_ideas[90] = "¿Por qué ese perro me gruñó?";
	_ideas[91] = "Quiero que me entiendas.";
	_ideas[92] = "Estoy bien así, solo acostado.";
	_ideas[93] = "Me gusta tu risa.";
	_ideas[94] = "¿Eso es una pelota nueva?";
	_ideas[95] = "¿Por qué no puedo ir al baño contigo?";
	_ideas[96] = "Necesito una siesta urgente.";
	_ideas[97] = "¡Ese olor es de otro planeta!";
	_ideas[98] = "Ya es hora de dormir cerca de ti.";
	_ideas[99] = "Gracias por quererme.";
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << GREEN << "new brain created (copy creator)" << RESET << std::endl;

}

Brain &Brain::operator=(const Brain &other)
{
	int x = 0;
	if (this != &other)
		while (x < 100)
		{
			this->_ideas[x] = other._ideas[x];
			x++;
		}
	return *this;
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destroid" << RESET << std::endl;	
}
