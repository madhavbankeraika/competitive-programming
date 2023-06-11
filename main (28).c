#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if the character is an opening bracket
bool isOpeningBracket(char c) {
    return (c == '(' || c == '{' || c == '[');
}

// Function to check if the character is a closing bracket
bool isClosingBracket(char c) {
    return (c == ')' || c == '}' || c == ']');
}

// Function to check if the given brackets are of the same type
bool areSameType(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return true;
    if (opening == '{' && closing == '}')
        return true;
    if (opening == '[' && closing == ']')
        return true;
    return false;
}

// Function to check the validity of the string
bool isValidString(char* s) {
    int i, top = -1;
    char stack[100];

    for (i = 0; s[i] != '\0'; i++) {
        if (isOpeningBracket(s[i])) {
            stack[++top] = s[i];
        } else if (isClosingBracket(s[i])) {
            if
