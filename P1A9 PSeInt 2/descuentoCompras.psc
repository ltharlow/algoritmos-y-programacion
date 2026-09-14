//Leonardo Torres Harlow
Algoritmo descuentoCompras
	Definir compra Como Real
	
	Escribir "Ingresa el total de tu compra:"
	Leer compra
	
	Si compra >= 500000 Entonces
        descuento = 0.30
    SiNo
        Si compra >= 400000 Entonces
            descuento = 0.25
        SiNo
            Si compra >= 300000 Entonces
                descuento = 0.20
            SiNo
                Si compra >= 200000 Entonces
                    descuento = 0.15
                SiNo
                    Si compra >= 100000 Entonces
                        descuento = 0.10
                    SiNo
                        descuento = 0
                    FinSi
                FinSi
            FinSi
        FinSi
    FinSi
	
	Escribir "Su compra tiene un descuento del ", descuento * 100, "% ($", (compra * descuento), "). El precio final es de $", compra - (compra * descuento), "."
	
FinAlgoritmo
