# TC1030_2024_A01712184
El proyecto consiste en un sistema de gestión de reservas diseñado para hoteles pequeños o aquellos que están empezando su actividad. Este sistema permite a los clientes realizar múltiples reservas y proporciona una gestión eficiente de las reservas y la información del cliente.
## Clases que utiliza y funciones:
1. Hotel: Esta clase funcionaría como una clase como tipo principal la cual tendrá una composición de 1 a más habitaciones dentro de el y ahi mismo se otorgara su nombre y ubicación del hotel.
2. Habitación: Dentro de está clase tendremos los atributos básicos que tiene una habitación de hotel, los cuales son: número de habitación, tipo de habitación, capacidad, precio base por noche y si la habitación se encuentra disponible en ese momento. Lo que sucede en esta clase es que se calculará el precio de la habitación dependiendo de las fechas de la reserva y al igual se sabrá si la habitación se encuentra disponible.
3. Suite: La clase suite es un tipo de habitación que existirpia la cual llegaría a tener un precio extra por su lujo y al igual se calculara el precio pero ahora contando el precio extra. Esta clase es hija de la clase Habitación por compartir atributos como el número de habitación.
4. Reserva: La siguiente clase es la reserva la cual se encargara de almacenar los datos de las fechas en las que se quiere hacer la reservación .
5. Cliente: La clase cliente almacenará los datos del cliente con el que estemos tratando el cual tendrá su nombre y su correo y al igual tendrá un vector de reservas por el hecho de que podrá tener más de una reserva agregando si se solicita al vector.
## Consideraciones
Por el momento la idea del proyecto es un poco simple y sin embargo a futuro se podrán ir agregando nuevas características al proyecto, como lo serían más tipos de habitaciones y al igual la manera de generar facturas dependiendo del gasto.
