﻿
// UNIR-2D :: Motor de juego mínimo para la programación de microjuegos en 2 dimensiones.
// 
// Copyright (C) 2022 UNIR-Universidad Internacional de La Rioja. 
// Todos los derechos reservados. 
// El sofware se entrega solo para uso educativo, sin ninguna garantía de adecuación para ningún 
// proposito particular.
// 
// Bibliotecas de código usadas: 
//   1) SFML - Simple and Fast Multimedia Library. Licencia: https://www.sfml-dev.org/license.php  
// 
// Archivo: BotonRaton.h
// Autor:   Miguel Angel Zurita Cortés
// Versión: 1.2 (10-Oct-2022)
// Estado:  Terminado. Revisado. Documentado.


#pragma once


/// @file


namespace unir2d {


	/// @brief Enumera los botones reconocidas por la clase Raton.
	enum class BotonRaton {
		/// @brief Botón izquierdo del ratón.
		izquierda,
		/// @brief Botón derecha del ratón.
		derecha,
		/// @brief Botón central del ratón (rueda).
		centro
	};


}


