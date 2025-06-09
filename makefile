# Nome do executável final
TARGET = empresa

# Compilador
CXX = g++
CXXFLAGS = -Wall -std=c++11 -I.  # Inclui diretório atual (para achar os .h)

# Fontes do projeto
SRCS = main.cpp\
       implementacao_m/funcionario.cpp \
       implementacao_m/desenvolvedor.cpp \
       implementacao_m/gerente.cpp \
       implementacao_m/estagiario.cpp

# Gera os arquivos .o correspondentes
OBJS = $(SRCS:.cpp=.o)

# Regra principal
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regra genérica para criar .o a partir de .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar tudo
clean:
	rm -f $(OBJS) $(TARGET)
