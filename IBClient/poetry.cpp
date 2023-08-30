#include "poetry.h"

poetry::poetry()
{


}

const QStringList poetry::poetries={
    "To be or not to be, that is the question.",
    "Two roads diverged in a wood, and I / I took the one less traveled by.",
    "I wandered lonely as a cloud / That floats on high o'er vales and hills.",
    "Hope is the thing with feathers / That perches in the soul." ,
    "Do not go gentle into that good night, / Old age should burn and rave at close of day.",
    "Because I could not stop for Death – / He kindly stopped for me." ,
    "How do I love thee? Let me count the ways.",
    "Shall I compare thee to a summer's day? / Thou art more lovely and more temperate.",
    "The woods are lovely, dark and deep, / But I have promises to keep.",
    "Water, water, everywhere, / Nor any drop to drink.",
    "The only thing we have to fear is fear itself.",
    "Not all those who wander are lost.",
    "It is a truth universally acknowledged, that a single man in possession of a good fortune, must be in want of a wife.",
    "The unexamined life is not worth living.",
    "I have a dream that one day this nation will rise up and live out the true meaning of its creed.",
    "The only way to do great work is to love what you do.",
    "The world breaks everyone, and afterward, some are strong at the broken places." ,
    "In three words I can sum up everything I've learned about life: it goes on.",
    "The road to hell is paved with good intentions.",
    "If you can dream it, you can achieve it.",
    "All the world's a stage, and all the men and women merely players.",
    "To thine own self be true, and it must follow, as the night the day, thou canst not then be false to any man.",
    "The better part of valour is discretion.",
    "The course of true love never did run smooth.",
    "What's in a name? That which we call a rose by any other name would smell as sweet.",
    "Cowards die many times before their deaths; the valiant never taste of death but once.",
    "Love looks not with the eyes, but with the mind, and therefore is winged Cupid painted blind.",
    "Good night, good night! Parting is such sweet sorrow, that I shall say good night till it be morrow.",
    "The fault, dear Brutus, is not in our stars, but in ourselves.",
    "All that glisters is not gold.",
    "Though she be but little, she is fierce.",
    "The lady doth protest too much, methinks.",
    "We are such stuff as dreams are made on, and our little life is rounded with a sleep.",
    "This above all: to thine own self be true.",
    "Is this a dagger which I see before me, the handle toward my hand?",
    "The quality of mercy is not strained; it droppeth as the gentle rain from heaven.",
    "Brevity is the soul of wit.",
    "The robbed that smiles, steals something from the thief.",
    "If music be the food of love, play on.",
    "Parting is such sweet sorrow.",
};
QString poetry::getRandomPoetry(int index){

    //int randomIndex = QRandomGenerator::global()->bounded(poetries.size());
    //return poetries.at(randomIndex);
    return poetries.at(index);
}
int poetry::getPoetryNumber(){
    return poetries.count();
}
