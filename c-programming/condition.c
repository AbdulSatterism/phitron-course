// ধরো তোমার এক বন্ধু তোমাকে বলেছে সে একটি Gucci Bag কিনবে যদি তার কাছে ১০ হাজার টাকা বা এর বেশি থাকে। নাহলে যদি তার কাছে ৫ হাজার বা এর বেশি টাকা থাকে তাহলে সে Levis Bag কিনবে। আর নাহলে সে নিউ মার্কেট থেকে কিছু (Something) কিনে নিবে। সে তোমাকে আরও বললো যে, যদি সে Gucci Bag কিনতে পারে এবং তার কাছে যদি ২০ হাজার টাকা এর বেশি থাকে তাহলে সে আরও একটি Gucci Belt কিনবে।
// এখন ধরো তুমি জানো তোমার বন্ধুর কাছে কত টাকা আছে, তুমি কি বলতে পারবে সে কোন কোন জিনিস গুলো কিনবে?
// আরও বোঝার জন্য নীচে দেওয়া ইনপুট এবং আউটপুট গুলো খেয়াল করো।

#include <stdio.h>

int main()
{

    int money;
    printf("Enter the amount of money your friend has: ");
    scanf("%d", &money);

    if (money >= 10000)
    {
        printf("Gussi bag kinbo\n");

        if (money > 20000)
        {
            printf("Aro akti Gussi belt kinbo\n");
        }
    }
    if (money >= 5000)
    {
        printf("Levies bag kinbo\n");
    }
    else
    {
        printf("will buy something from new market\n");
    }

    return 0;
}