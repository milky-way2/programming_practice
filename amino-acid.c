#include <stdio.h>
#include <stdlib.h>
void npal()
{
    printf("Total 7 amino acid presents.\n");
    printf("1.Glycine-G\n2.Alanine-A\n3.Proline-P\n4.Valine-V\n5.Leucine-L\n6.Isoleucine-I\n7.Methionine-M\n");
}
void npar()
{
    printf("Total 3 amino acid presents.\n");
    printf("1.Phenylalanine-F\n2.Tyrocin-Y\n3.Tryptophan-W\n");
}
void puc()
{
    printf("Total 5 amino acid presents.\n");
    printf("1.Serine-S\n2.Threonine-T\n3.Asparagine-N\n4.Cystenine-C\n5.Glutamine-Q\n");
}
void ppc()
{
    printf("Total 3 amino acid presents.\n");
    printf("1.Lysine-K\n2.Histidine-H\n3.Arginine-R\n");
}
void pnc()
{
    printf("Total 2 amino acid presents.\n");
    printf("1.Aspartate-D\n2.Glutamate-E\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("~~~\tWELLCOME\t~~~\n");
        printf("1.Non-Polar_(Aliphatic)\n2.Non-Polar_(Aromatic)\n3.Polar_(Uncharged)\n4.Polar_(+ve charged)\n5.Polar_(-ve charged)\n6.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            npal();
            break;
        case 2:
            npar();
            break;
        case 3:
            puc();
            break;
        case 4:
            ppc();
            break;
        case 5:
            pnc();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Wrong choice...Try again\n");
        }
    }
    return 0;
}
