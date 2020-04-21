# Título del trabajo: SignGlove

SignGlove (guante de signos) va a consistir en poder traducir mensajes con lenguajes de signos a texto a traves de un guante con sensores flexibles y un ordenador.

## Integrantes del equipo

Álvaro Sequeira Bárcena (@AlvaroSequeira) y Laura Estela Polaira Solera (@lauraepolainasolera)

## Objetivos del trabajo

El objetivo principal es poder permitir que la gente que no puede hablar, se pueda comunicar de alguna forma con los demás que no entienden el Lenguaje de Signos. Para ello, utilizaremos como hardware un guante con sensores flexibles que con ayuda de Arduino y un ordenador, podremos medir, al pasarle corriente por esas barras flexibles, la resistencia que generan al doblarse y con eso, poder traducir un mensaje u otro. Ese mensaje saldrá por la pantalla del ordenador.

# Lenguajes de programación:
C y Arduino

# Subprogramas

  Función "lecturaflex":
  
    Esta función leerá la resitencia producida por el sensor y transformará el valor a grados.
    Los argumentos a los que se le asociarán las lecturas son las variables de: "resispulgar", "resiscorazon", "resismenique",   "resisanular", "resisindice". Usaremos estas variables para medir la resistencia del sensor de cada dedo.
    Se tomarían 5 nuevas variables: "gradospulgar", "gradoscorazon", "gradosmenique", "gradosanular", "gradosindice". Las nuevas variables estarían asociadas a un rango de grados que permite que no perdamos valores en la lectura de datos.
     
  Función "definirletra":
  
    Esta función permite determinar un rango de grados en cada dedo que permit diferenciar una letra respecto de otra. 
     
  Función "asociarletra":
  
    Esta función establecerá una relación entre grados y letras en el alfabeto de lenguaje de signos preestablecido. 
    
  Función "mostrarenpantalla":
  
    Esta función obtiene el valor de cada letra que se este leyendo en ese momento e imprimirlo en pantalla.
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
