/* controllo che un char sia un carattere numerico */
/* isdigit() ????*/




/* controllo che gli argomenti siano numerici */
/* atoi ? */




/* controllo sulla creazione di un file */



/* contrllo che sia un singolo carattere */

	if(strlen(argv[argc-]) != 1){
		printf("Non hai inserito singolo carattere\n");
		exit(2);
	}

// controllo sulla scrittura/lettura da file/pipe:

	nr = read(pipes[n][0],tutteLinee,N*sizeof(lin));
	if(nr != N*sizeof(lin)){
		printf("Errore lettuar per figlio %d\n",n);
		exit(-1);
	}

	nw=write(fcreato,tutteLinee,N*sizeof(lin));
	/*controllo per sicurezza*/
	if(nw != N*sizeof(lin)){
		printf("Errore scrittura su fcreato\n");
		exit(-1);
	}
