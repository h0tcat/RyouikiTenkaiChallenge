CC = g++
PGNAME = RyouikiTenkai
OBJS = Gojo.o Sukuna.o Human.o

$(PGNAME): $(OBJS)
	$(CC) $(OBJS) $(PGNAME).cpp -o $(PGNAME)

Gojo.o: Gojo.cpp
	$(CC) -c Gojo.cpp

Sukuna.o: Sukuna.cpp
	$(CC) -c Sukuna.cpp

Human.o: Human.cpp
	$(CC) -c Human.cpp

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS)