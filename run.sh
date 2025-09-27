#!/bin/bash

RED='\033[0;31m'
YELLOW='\033[1;33m'
GREEN='\033[0;32m'
NC='\033[0m'

print_color() {
    local color=$1
    local message=$2
    local no_newline=$3
    
    if [ "$no_newline" = "-n" ]; then
        echo -ne "${color}${message}${NC}"
    else
        echo -e "${color}${message}${NC}"
    fi
}

print_red() { print_color "$RED" "$1" "$2"; }
print_green() { print_color "$GREEN" "$1" "$2"; }
print_yellow() { print_color "$YELLOW" "$1" "$2"; }

# param reading & checking
path_to_problem=$1
path_to_solution=$2
if [ -z "$path_to_problem" ] || [ -z "$path_to_solution" ]; then
  echo "Usage: $0 <path_to_problem> <path_to_solution>"
  exit 1
fi

# compilation
g++ -o "sol" "$path_to_solution" 2> /dev/null
if [ $? -ne 0 ]; then
    print_yellow "COMPILATION ERROR"
    exit 1
fi
chmod +x "sol"

# tests execution
passed=0
total=0
for input_file in "$path_to_problem"/test_cases/*.in; do
    base_name="${input_file%.in}"
    output_file="cur.out"
    expected_file="${base_name}.out"
    
    echo -n "Test #$(basename "$input_file" .in): "
    "./sol" < "$input_file" > "$output_file"
    if diff -q "$output_file" "$expected_file" > /dev/null; then
        print_green "✓ PASSED"
        ((passed++))
    else
        print_red "✗ FAILED"
    fi
    ((total++))
done

# cleanup
rm -f "sol"
rm -f "$output_file"

# results
if [ $passed -eq $total ]; then
    print_green "ACCEPTED"
    exit 0
else
    print_red "WRONG ANSWER / RUNTIME ERROR"
fi
