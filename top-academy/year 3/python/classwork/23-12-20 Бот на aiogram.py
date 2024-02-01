import asyncio
import logging
import random
from aiogram import types, Dispatcher, Bot
from aiogram.filters.command import Command
TOKEN = ''
bot = Bot(token=TOKEN)
dp = Dispatcher()

@dp.message(Command('start'))
async def begin(message:types.Message):
    await message.answer("https://youtu.be/jfKfPfyJRdk")

async def main():
    await dp.start_polling(bot)

if  __name__ == "__main__":
    asyncio.run(main())

