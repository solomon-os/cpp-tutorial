

bool is_collection_sorted(int numbers[], unsigned int collection_size) {


    // Don't modify anything above this line
    // Your code will go below this line
    int prev = 0;
    int current = 0;

    for (unsigned int i{0}; i < collection_size; ++i) {
        if (i == 0) {
            prev = numbers[i];
            continue;
        }

        current = numbers[i];
        if (prev > current) {
            return false;
        }
        prev = current;
    }

    return true;


    // Your code will go above this line
    // Don't modify anything below this line
}
