class StockSpanner {
    stack<pair<int, int>> sck;

public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;
        while (!sck.empty() && sck.top().first <= price) {
            span += sck.top().second;
            sck.pop();
        }
        sck.push({price, span});
        return span;
    }
};