 #ifndef LCD_INT_H_
#define LCD_INT_H_
void LCD_VidIntialize (void);
void LCD_VidsendCommend (u8 COPY_U8Commend);
void LCD_VidsendData (u8 COPY_U8Data);
void LCD_VidsendDataString (u8* COPY_U8Arrdata );
void LCD_VidsendIntger (u32 COPY_U32NUM);
void LCD_SetCursor (u8 COPY_U8r,u8 COPY_U8c);
void LCD_Clear();





#endif
