#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D7D8
// Address: 0x19d7d8 - 0x19d9d0
void sub_0019D7D8_0x19d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D7D8_0x19d7d8");
#endif

    switch (ctx->pc) {
        case 0x19d810u: goto label_19d810;
        case 0x19d920u: goto label_19d920;
        default: break;
    }

    ctx->pc = 0x19d7d8u;

    // 0x19d7d8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19d7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19d7dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19d7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19d7e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x19d7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19d7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7e8: 0x10a00076  beqz        $a1, . + 4 + (0x76 << 2)
    ctx->pc = 0x19D7E8u;
    {
        const bool branch_taken_0x19d7e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7E8u;
        // 0x19d7ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7e8) {
            ctx->pc = 0x19D9C4u;
            goto label_19d9c4;
        }
    }
    ctx->pc = 0x19D7F0u;
    // 0x19d7f0: 0x55042  srl         $t2, $a1, 1
    ctx->pc = 0x19d7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x19d7f4: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x19d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x19d7f8: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x19d7f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x19d7fc: 0x240d1d08  addiu       $t5, $zero, 0x1D08
    ctx->pc = 0x19d7fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7432));
    // 0x19d800: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x19d800u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d804: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x19d804u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x19d808: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x19d808u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x19d80c: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x19d80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_19d810:
    // 0x19d810: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x19D810u;
    {
        const bool branch_taken_0x19d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d810) {
            ctx->pc = 0x19D814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D810u;
            // 0x19d814: 0xa71023  subu        $v0, $a1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D88Cu;
            goto label_19d88c;
        }
    }
    ctx->pc = 0x19D818u;
    // 0x19d818: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D818u;
    {
        const bool branch_taken_0x19d818 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x19D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D818u;
        // 0x19d81c: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d818) {
            ctx->pc = 0x19D834u;
            goto label_19d834;
        }
    }
    ctx->pc = 0x19D820u;
    // 0x19d820: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x19d820u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d824: 0x0  nop
    ctx->pc = 0x19d824u;
    // NOP
    // 0x19d828: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d82c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D82Cu;
    {
        const bool branch_taken_0x19d82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d82c) {
            ctx->pc = 0x19D84Cu;
            goto label_19d84c;
        }
    }
    ctx->pc = 0x19D834u;
label_19d834:
    // 0x19d834: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x19d834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x19d838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d840: 0x0  nop
    ctx->pc = 0x19d840u;
    // NOP
    // 0x19d844: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d848: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d84c:
    // 0x19d84c: 0x5400006  bltz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D84Cu;
    {
        const bool branch_taken_0x19d84c = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x19d84c) {
            ctx->pc = 0x19D868u;
            goto label_19d868;
        }
    }
    ctx->pc = 0x19D854u;
    // 0x19d854: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x19d854u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d858: 0x0  nop
    ctx->pc = 0x19d858u;
    // NOP
    // 0x19d85c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d860: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D860u;
    {
        const bool branch_taken_0x19d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d860) {
            ctx->pc = 0x19D878u;
            goto label_19d878;
        }
    }
    ctx->pc = 0x19D868u;
label_19d868:
    // 0x19d868: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x19d868u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d86c: 0x0  nop
    ctx->pc = 0x19d86cu;
    // NOP
    // 0x19d870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d874: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19d874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19d878:
    // 0x19d878: 0x0  nop
    ctx->pc = 0x19d878u;
    // NOP
    // 0x19d87c: 0x0  nop
    ctx->pc = 0x19d87cu;
    // NOP
    // 0x19d880: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19d880u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19d884: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19D884u;
    {
        const bool branch_taken_0x19d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D884u;
        // 0x19d888: 0x46040082  mul.s       $f2, $f0, $f4 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d884) {
            ctx->pc = 0x19D8FCu;
            goto label_19d8fc;
        }
    }
    ctx->pc = 0x19D88Cu;
label_19d88c:
    // 0x19d88c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D88Cu;
    {
        const bool branch_taken_0x19d88c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D88Cu;
        // 0x19d890: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d88c) {
            ctx->pc = 0x19D8A8u;
            goto label_19d8a8;
        }
    }
    ctx->pc = 0x19D894u;
    // 0x19d894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d898: 0x0  nop
    ctx->pc = 0x19d898u;
    // NOP
    // 0x19d89c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d8a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D8A0u;
    {
        const bool branch_taken_0x19d8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d8a0) {
            ctx->pc = 0x19D8C0u;
            goto label_19d8c0;
        }
    }
    ctx->pc = 0x19D8A8u;
label_19d8a8:
    // 0x19d8a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19d8ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d8b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d8b4: 0x0  nop
    ctx->pc = 0x19d8b4u;
    // NOP
    // 0x19d8b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d8bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d8c0:
    // 0x19d8c0: 0x5400006  bltz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D8C0u;
    {
        const bool branch_taken_0x19d8c0 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x19d8c0) {
            ctx->pc = 0x19D8DCu;
            goto label_19d8dc;
        }
    }
    ctx->pc = 0x19D8C8u;
    // 0x19d8c8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x19d8c8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d8cc: 0x0  nop
    ctx->pc = 0x19d8ccu;
    // NOP
    // 0x19d8d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d8d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d8d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19D8D4u;
    {
        const bool branch_taken_0x19d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8D4u;
        // 0x19d8d8: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8d4) {
            ctx->pc = 0x19D8F0u;
            goto label_19d8f0;
        }
    }
    ctx->pc = 0x19D8DCu;
label_19d8dc:
    // 0x19d8dc: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x19d8dcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d8e0: 0x0  nop
    ctx->pc = 0x19d8e0u;
    // NOP
    // 0x19d8e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d8e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19d8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x19d8ec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x19d8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_19d8f0:
    // 0x19d8f0: 0x0  nop
    ctx->pc = 0x19d8f0u;
    // NOP
    // 0x19d8f4: 0x0  nop
    ctx->pc = 0x19d8f4u;
    // NOP
    // 0x19d8f8: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x19d8f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_19d8fc:
    // 0x19d8fc: 0x24ec0001  addiu       $t4, $a3, 0x1
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19d900: 0x10c0002c  beqz        $a2, . + 4 + (0x2C << 2)
    ctx->pc = 0x19D900u;
    {
        const bool branch_taken_0x19d900 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D900u;
        // 0x19d904: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d900) {
            ctx->pc = 0x19D9B4u;
            goto label_19d9b4;
        }
    }
    ctx->pc = 0x19D908u;
    // 0x19d908: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x19d908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x19d90c: 0x30c90001  andi        $t1, $a2, 0x1
    ctx->pc = 0x19d90cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x19d910: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19d910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19d914: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19d914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19d918: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x19d918u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x19d91c: 0x1a44021  addu        $t0, $t5, $a0
    ctx->pc = 0x19d91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_19d920:
    // 0x19d920: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x19d920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19d924: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D924u;
    {
        const bool branch_taken_0x19d924 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x19D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D924u;
        // 0x19d928: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d924) {
            ctx->pc = 0x19D940u;
            goto label_19d940;
        }
    }
    ctx->pc = 0x19D92Cu;
    // 0x19d92c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x19d92cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d930: 0x0  nop
    ctx->pc = 0x19d930u;
    // NOP
    // 0x19d934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D938u;
    {
        const bool branch_taken_0x19d938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d938) {
            ctx->pc = 0x19D958u;
            goto label_19d958;
        }
    }
    ctx->pc = 0x19D940u;
label_19d940:
    // 0x19d940: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x19d940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x19d944: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d948: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d94c: 0x0  nop
    ctx->pc = 0x19d94cu;
    // NOP
    // 0x19d950: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d954: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d958:
    // 0x19d958: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D958u;
    {
        const bool branch_taken_0x19d958 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x19d958) {
            ctx->pc = 0x19D974u;
            goto label_19d974;
        }
    }
    ctx->pc = 0x19D960u;
    // 0x19d960: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19d960u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d964: 0x0  nop
    ctx->pc = 0x19d964u;
    // NOP
    // 0x19d968: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d96c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D96Cu;
    {
        const bool branch_taken_0x19d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d96c) {
            ctx->pc = 0x19D984u;
            goto label_19d984;
        }
    }
    ctx->pc = 0x19D974u;
label_19d974:
    // 0x19d974: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x19d974u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d978: 0x0  nop
    ctx->pc = 0x19d978u;
    // NOP
    // 0x19d97c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d980: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19d980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19d984:
    // 0x19d984: 0x0  nop
    ctx->pc = 0x19d984u;
    // NOP
    // 0x19d988: 0x0  nop
    ctx->pc = 0x19d988u;
    // NOP
    // 0x19d98c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19d98cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19d990: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x19d990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d994: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x19d994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x19d998: 0x25ad001c  addiu       $t5, $t5, 0x1C
    ctx->pc = 0x19d998u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 28));
    // 0x19d99c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x19d99cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19d9a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x19d9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19d9a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19d9a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19d9a8: 0xe500fff8  swc1        $f0, -0x8($t0)
    ctx->pc = 0x19d9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294967288), bits); }
    // 0x19d9ac: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19D9ACu;
    {
        const bool branch_taken_0x19d9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9ACu;
        // 0x19d9b0: 0x2508001c  addiu       $t0, $t0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9ac) {
            ctx->pc = 0x19D920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d920;
        }
    }
    ctx->pc = 0x19D9B4u;
label_19d9b4:
    // 0x19d9b4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x19d9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9b8: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x19d9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19d9bc: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x19D9BCu;
    {
        const bool branch_taken_0x19d9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9BCu;
        // 0x19d9c0: 0xea102b  sltu        $v0, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9bc) {
            ctx->pc = 0x19D810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d810;
        }
    }
    ctx->pc = 0x19D9C4u;
label_19d9c4:
    // 0x19d9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9C4u;
        // 0x19d9c8: 0xac8b32d0  sw          $t3, 0x32D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13008), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D9CCu;
    // 0x19d9cc: 0x0  nop
    ctx->pc = 0x19d9ccu;
    // NOP
    ctx->pc = 0x19d9d0u;
}
