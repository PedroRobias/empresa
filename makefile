# Nome do executável final
TARGET = empresa

# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Fontes do projeto
SRCS = main.cpp \
       funcionario.cpp \
       desenvolvedor.cpp \
       gerente.cpp \
       estagiario.cpp

# Arquivos objeto (convertendo .cpp em .o)
OBJS = $(SRCS:.cpp=.o)

# Regra padrão: construir tudo
all: $(TARGET)

# Como compilar o executável
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Regra para limpar arquivos gerados (.o e o executável)
clean:
	rm -f $(OBJS) $(TARGET)