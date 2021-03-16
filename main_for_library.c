#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	test_strcpy()
{
	char	*src;
	char	*dst;
	char	*ft_src;
	char	*ft_dst;

	clock_t begin;
	clock_t end;
	double time_spent;

	errno = 0;
	printf("########################TEST1#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(11);
	src = strdup("0123456789");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	begin = clock();
	strcpy(dst, src);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	bzero(src, strlen(src) + 1);
	free(dst);
	free(src);
	dst = NULL;
	src = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(11);
	ft_src = strdup("0123456789");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	begin = clock();
	ft_strcpy(ft_dst, ft_src);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	bzero(ft_src, strlen(ft_src) + 1);
	free(ft_dst);
	free(ft_src);
	ft_dst = NULL;
	ft_src = NULL;


	printf("########################TEST2#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(1);
	src = strdup("");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	strcpy(dst, src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	bzero(src, strlen(src) + 1);
	free(dst);
	free(src);
	dst = NULL;
	src = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(1);
	ft_src = strdup("");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	ft_strcpy(ft_dst, ft_src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	bzero(ft_src, strlen(ft_src) + 1);
	free(ft_dst);
	free(ft_src);
	ft_dst = NULL;
	ft_src = NULL;


	printf("########################TEST3#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(10);
	src = strdup("tab			\\n\n");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	strcpy(dst, src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	bzero(src, strlen(src) + 1);
	free(dst);
	free(src);
	dst = NULL;
	src = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(10);
	ft_src = strdup("tab			\\n\n");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	ft_strcpy(ft_dst, ft_src);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	bzero(ft_src, strlen(ft_src) + 1);
	free(ft_dst);
	free(ft_src);
	ft_dst = NULL;
	ft_src = NULL;

	printf("########################TEST4#######################\n");
	printf("-----------------------strcpy----------------------\n");
	dst = (char *)malloc(strlen("Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов."));
	src = strdup("Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	begin = clock();
	strcpy(dst, src);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", src, dst);
	bzero(dst, 11);
	bzero(src, strlen(src) + 1);
	free(dst);
	free(src);
	dst = NULL;
	src = NULL;
	printf("-----------------------ft_strcpy-------------------\n");
	ft_dst = (char *)malloc(strlen("Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов."));
	ft_src = strdup("Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.Любопытно, что прошепчет Тутошкин кому-нибудь обо мне; я будто бы сколочен без особого изъяна и лицо в норме, но очкарик, без очков двух шагов не ступлю. Я долго форсил, и в десятом классе ходил еще без очков, у карты безнадежно плавал, тыча указкой наугад, но не подавал виду, что уже ничего не различаю. Видимо, этим себе основательно повредил. Паренек на кровати, что стоит к моей спинка в спинку, укладывается спать: уже давно свечерело, легла на парусину роса. В палатке прохладно. Он недавний школьник, этот круглощекий Володя Гришечкин. У него голубые глаза. И физика, не столько дух, сколько букву которой он усердно усваивал с шестого по десятый, как видно, пошла ему впрок. На ночь он \"заземляет\" себя какой-то проволокой, в прямом смысле привязывает за ногу к спинке кровати - по его понятиям, все то электричество, которое вобрано им за день, уйдет в землю и облегчит ему сон. Гришечкин смолоду бережется от перегрузок. Он далеко пойдет. Долго не могу заснуть. В соседней палатке знакомые мне латыши с устрашающим рыком исполняют на губах и на всяких подсобных инструментах импортные джазово-негритянские мотивы. Неунывающий народ! Нам бы в палатку такой накал, а то и впрямь дрожь пробирает. Утром заглядывает плотный симпатяга в кожаной куртке на \"молниях\" - такие парни успешно занимаются борьбой. Оказывается, он тоже занимался борьбой, но потянуло к \"интеллектуальному\" спорту. Хочет записаться к нам в отделение. Звать - Ким Попов.");
	printf("До:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	begin = clock();
	ft_strcpy(ft_dst, ft_src);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nsrc = |%s|\ndst = |%s|\n\n", ft_src, ft_dst);
	bzero(ft_dst, 11);
	bzero(ft_src, strlen(ft_src) + 1);
	free(ft_dst);
	free(ft_src);
	ft_dst = NULL;
	ft_src = NULL;

}

void	test_strcmp()
{
	char	*s1;
	char	*s2;
	char	*ft_s1;
	char	*ft_s2;

	clock_t	begin;
	clock_t	end;
	double	time_spent;

	printf("########################TEST1#######################\n");
	printf("-----------------------strcmp----------------------\n");
	s1 = strdup("0123456789");
	s2 = strdup("0123456780");
	printf("До:\ns1 = |%s|\ns2 = |%s|\n\n", s1, s2);
	begin = clock();
	printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));
	printf("strcmp(s2, s1) = %d\n\n", strcmp(s2, s1));
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\ns1 = |%s|\ns2 = |%s|\n\n", s1, s2);
	bzero(s1, strlen(s1) + 1);
	bzero(s2, strlen(s2) + 1);
	free(s1);
	free(s2);
	s1 = NULL;
	s2 = NULL;
	printf("-----------------------ft_strcmp-------------------\n");
	ft_s1 = strdup("0123456789");
	ft_s2 = strdup("0123456780");
	printf("До:\nft_s1 = |%s|\nft_s2 = |%s|\n\n", ft_s1, ft_s2);
	begin = clock();
	printf("strcmp(ft_s1, ft_s2) = %d\n", strcmp(ft_s1, ft_s2));
	printf("strcmp(ft_s2, ft_s1) = %d\n\n", strcmp(ft_s2, ft_s1));
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nft_s1 = |%s|\nft_s2 = |%s|\n\n", ft_s1, ft_s2);
	bzero(ft_s1, strlen(ft_s1) + 1);
	bzero(ft_s2, strlen(ft_s2) + 1);
	free(ft_s1);
	free(ft_s2);
	ft_s1 = NULL;
	ft_s2 = NULL;

	printf("########################TEST2#######################\n");
	printf("-----------------------strcmp----------------------\n");
	s1 = strdup("");
	s2 = strdup("");
	printf("До:\ns1 = |%s|\ns2 = |%s|\n\n", s1, s2);
	begin = clock();
	printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));
	printf("strcmp(s2, s1) = %d\n\n", strcmp(s2, s1));
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\ns1 = |%s|\ns2 = |%s|\n\n", s1, s2);
	bzero(s1, strlen(s1) + 1);
	bzero(s2, strlen(s2) + 1);
	free(s1);
	free(s2);
	s1 = NULL;
	s2 = NULL;
	printf("-----------------------ft_strcmp-------------------\n");
	ft_s1 = strdup("");
	ft_s2 = strdup("");
	printf("До:\nft_s1 = |%s|\nft_s2 = |%s|\n\n", ft_s1, ft_s2);
	begin = clock();
	printf("strcmp(ft_s1, ft_s2) = %d\n", strcmp(ft_s1, ft_s2));
	printf("strcmp(ft_s2, ft_s1) = %d\n\n", strcmp(ft_s2, ft_s1));
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nft_s1 = |%s|\nft_s2 = |%s|\n\n", ft_s1, ft_s2);
	bzero(ft_s1, strlen(ft_s1) + 1);
	bzero(ft_s2, strlen(ft_s2) + 1);
	free(ft_s1);
	free(ft_s2);
	ft_s1 = NULL;
	ft_s2 = NULL;

	printf("########################TEST3#######################\n");
	printf("-----------------------strcmp----------------------\n");
	s1 = strdup("\\n\n	\\n\n");
	s2 = strdup("\\n\n	\\r\r");
	printf("До:\ns1 = |%s|\ns2 = |%s|\n\n", s1, s2);
	begin = clock();
	printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));
	printf("strcmp(s2, s1) = %d\n\n", strcmp(s2, s1));
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\ns1 = |%s|\ns2 = |%s|\n\n", s1, s2);
	bzero(s1, strlen(s1) + 1);
	bzero(s2, strlen(s2) + 1);
	free(s1);
	free(s2);
	s1 = NULL;
	s2 = NULL;
	printf("-----------------------ft_strcmp-------------------\n");
	ft_s1 = strdup("\\n\n	\\n\n");
	ft_s2 = strdup("\\n\n	\\r\r");
	printf("До:\nft_s1 = |%s|\nft_s2 = |%s|\n\n", ft_s1, ft_s2);
	begin = clock();
	printf("strcmp(ft_s1, ft_s2) = %d\n", strcmp(ft_s1, ft_s2));
	printf("strcmp(ft_s2, ft_s1) = %d\n\n", strcmp(ft_s2, ft_s1));
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("--------\nВремя выполнения = %f\n--------\n", time_spent);
	printf("После:\nft_s1 = |%s|\nft_s2 = |%s|\n\n", ft_s1, ft_s2);
	bzero(ft_s1, strlen(ft_s1) + 1);
	bzero(ft_s2, strlen(ft_s2) + 1);
	free(ft_s1);
	free(ft_s2);
	ft_s1 = NULL;
	ft_s2 = NULL;
}

void	test_write()
{
	char	*str;
	int		out;
	char	*ft_str;
	int		ft_out;
	errno = 0;

	printf("########################TEST1#######################\n");
	printf("-----------------------write----------------------\n");
	str = strdup("1234567890");
	printf("str = %s\n", str);
	printf("write:\n");
	out = write(1, str, strlen(str));
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", out);
	free(str);
	str = NULL;
	errno = 0;

	printf("-----------------------ft_write----------------------\n");
	ft_str = strdup("1234567890");
	printf("str = %s\n", ft_str);
	printf("ft_write:\n");
	ft_out = ft_write(1, ft_str, strlen(ft_str));
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", ft_out);
	free(ft_str);
	ft_str = NULL;
	errno = 0;

	int	fd;
	int	ft_fd;
	fd = open("file.txt", O_WRONLY);
	ft_fd = open("ft_file.txt", O_WRONLY);

	printf("########################TEST2#######################\n");
	printf("-----------------------write----------------------\n");
	str = strdup("1234567890");
	printf("str = %s\n", str);
	printf("write:\n");
	out = write(fd, str, strlen(str));
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", out);
	free(str);
	str = NULL;
	errno = 0;

	printf("-----------------------ft_write----------------------\n");
	ft_str = strdup("1234567890");
	printf("str = %s\n", ft_str);
	printf("ft_write:\n");
	ft_out = ft_write(ft_fd, ft_str, strlen(ft_str));
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", ft_out);
	free(ft_str);
	ft_str = NULL;
	errno = 0;

	close(fd);
	close(ft_fd);

	printf("########################TEST3#######################\n");
	printf("-----------------------write----------------------\n");
	str = strdup("1234567890");
	printf("str = %s\n", str);
	printf("write:\n");
	out = write(fd, str, strlen(str));
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", out);
	free(str);
	str = NULL;
	errno = 0;

	printf("-----------------------ft_write----------------------\n");
	ft_str = strdup("1234567890");
	printf("str = %s\n", ft_str);
	printf("ft_write:\n");
	ft_out = ft_write(ft_fd, ft_str, strlen(ft_str));
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", ft_out);
	free(ft_str);
	ft_str = NULL;
	errno = 0;
}

void	test_read()
{
	char	buf[11];
	char	ft_buf[11];
	int		out;
	int		ft_out;

	buf[10] = '\0';
	ft_buf[10] = '\0';

	int	fd;
	int	ft_fd;
	fd = open("file.txt", O_RDONLY);
	ft_fd = open("ft_file.txt", O_RDONLY);

	printf("########################TEST1#######################\n");
	printf("-----------------------read----------------------\n");
	printf("read:\n");
	out = read(fd, buf, 10);
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", out);
	printf("buf = %s\n", buf);
	errno = 0;

	printf("-----------------------ft_read----------------------\n");
	printf("ft_read:\n");
	ft_out = ft_read(ft_fd, ft_buf, 10);
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", ft_out);
	printf("buf = %s\n", ft_buf);
	errno = 0;
	bzero(buf, 11);
	bzero(ft_buf, 11);

	close(fd);
	close(ft_fd);

	printf("########################TEST2#######################\n");
	printf("-----------------------read----------------------\n");
	printf("read:\n");
	out = read(fd, buf, 10);
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", out);
	printf("buf = %s\n", buf);
	errno = 0;

	printf("-----------------------ft_read----------------------\n");
	printf("ft_read:\n");
	ft_out = ft_read(ft_fd, ft_buf, 10);
	printf("\nОшибка: %s\n", strerror(errno));
	printf("\nout = %d\n", ft_out);
	printf("buf = %s\n", ft_buf);
	errno = 0;
}

void	test_strdup()
{
	char	*str;
	char	*out;

	str = strdup("123");
	out = ft_strdup(str);
	printf("ft_strdup = %s\n", out);
}

int main(void)
{

	test_strcpy();
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-Start test strcmp/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	test_strcmp();
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-Start test write/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	test_write();
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-Start test read/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	test_read();
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-Start test sstrdup/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	printf("-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n");
	test_strdup();
	return 0;
}
