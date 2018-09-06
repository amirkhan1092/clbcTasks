/*
*   Author  :   Aditya Dubey, B.Tech 1st year Section C, GLA University
*   Aim     :   To demonstrate the use of switch case
*/
#include<stdio.h>
void main()
{
    char ad;
    printf("Enter the first character of your name in Capital letter \n");
    scanf("%c", &ad);
    switch(ad)
    {
        case 'A' :
                    printf("Authentic = Be genuine and reliable, trustworthy, and always the same person");
                    break;
        case 'B' :
                    printf("Brave = Develop courage in the face of risks and bad outcomes");
                    break;
        case 'C' :
                    printf("Character-Driven = Character resonates with people and impels them to follow and trust.");
                    break;
        case 'D' :
                    printf("Decisive = Determination and daring make great leaders unshakable");
                    break;
        case 'E' :
                    printf("Engaging = Connect with enthusiasm, empowerment and encouragement; remember that everyone can make a positive contribution");
                    break;
        case 'F' :
                    printf("Fearless = If you are brave in your thinking and daring your actions, you can accomplish anything");
                    break;
        case 'G' :
                    printf("Goal-oriented = Goals provide governance to vision and mission, guiding people and organizations to a meaningful purpose");
                    break;
        case 'H' :
                    printf("Humble = Always being kind to others lead you towards success");
                    break;
        case 'I' :
                    printf("Inspiring = Leading with intuition and intelligence gives everyone around you to grow");
                    break;
        case 'J' :
                    printf("Just = Always seek to be guided by truth and reason; be a champion of quality and fairness");
                    break;
        case 'K' :
                    printf("Knowledgeable = Be so well informed, learned, and cultivated that people are drawn to you for their own enlightenment");
                    break;
        case 'L' :
                    printf("Listener = Good leaders speak; great leaders listen. When you're listening to others, you're learning from them");
                    break;
        case 'M' :
                    printf("Motivation = Mentor and encourage those around you. Inspire them to take chances");
                    break;
        case 'N' :
                    printf("Noble = To be a great leader, live in a way that draws others to emulate you");
                    break;
        case 'O' :
                    printf("Optimistic = To lead with optimism is to be confident, cheerful and positive, leading to openness and opportunity for all");
                    break;
        case 'P' :
                    printf("Progressive = Keep moving, increasing and growing, and pioneering new frontiers. Those around you will gain energy from being part of a dynamic enterprise");
                    break;
        case 'Q' :
                    printf("Qualitative = Always choose quality over quantity; hold yourself and those around you to the highest standard");
                    break;
        case 'R' :
                    printf("Reliable = Don't be in hurry, always be calm and do your work patiently");
                    break;
        case 'S' :
                    printf("Supportive = When you're encouraging, caring and sympathetic and helpful, offering feedback both positive and negative, you give those around you the confidence they need to persist");
                    break;
        case 'T' :
                    printf("Trustworthy = People are reassured by dependability, reliability, credibility and competence. Have faith in those you're leading, and they will have faith in you");
                    break;
        case 'U' :
                    printf("Unbiased = Be impartial and open-minded; hold to the value of listening, learning, giving chances and being open to opinions");
                    break;
        case 'V' :
                    printf("Visionary = Be innovative, imaginative, and perceptive. What differentiates great leaders from the rest is they not only have plenty of ideas but also commit to carrying them out");
                    break;
        case 'W' :
                    printf("Wise = Wisdom in leadership is more than just being wise--it's using that wisdom to give insight and inspiration to others");
                    break;
        case 'X' :
                    printf("Xcellent = Aim for distinction and virtuosity, motivate yourself to always give your highest quality effort");
                    break;
        case 'Y' :
                    printf("Yearning = One test of a true leader is a constant longing and hunger. Always be looking to be more, do more and make a difference in a big way");
                    break;
        case 'Z' :
                    printf("Zealous = A devout drive to be dedicated to something bigger than yourself fuels a fierce passing to be help others be successful. Embrace that intensity and put it to work to better the world");
                    break;
        default  : printf("Wrong choice! Please input the character in uppercase only!");
    }
}
