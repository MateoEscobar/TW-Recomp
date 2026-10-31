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

// Function: sub_001CB468
// Address: 0x1cb468 - 0x1cb6f0
void sub_001CB468_0x1cb468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB468_0x1cb468");
#endif

    ctx->pc = 0x1cb468u;

    // 0x1cb468: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1cb46c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1cb470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb474: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb478: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1cb478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cb47c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB47Cu;
    {
        const bool branch_taken_0x1cb47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB47Cu;
        // 0x1cb480: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb47c) {
            ctx->pc = 0x1CB53Cu;
            goto label_1cb53c;
        }
    }
    ctx->pc = 0x1CB484u;
    // 0x1cb484: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB4BCu;
            goto label_1cb4bc;
        }
    }
    ctx->pc = 0x1CB48Cu;
    // 0x1cb48c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1CB48Cu;
    {
        const bool branch_taken_0x1cb48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB48Cu;
        // 0x1cb490: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb48c) {
            ctx->pc = 0x1CB674u;
            goto label_1cb674;
        }
    }
    ctx->pc = 0x1CB494u;
    // 0x1cb494: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1cb494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1cb498: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cb49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4a0: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1cb4a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cb4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cb4a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb4ac: 0x2462ea90  addiu       $v0, $v1, -0x1570
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
    // 0x1cb4b0: 0xe460ea90  swc1        $f0, -0x1570($v1)
    ctx->pc = 0x1cb4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961808), bits); }
    // 0x1cb4b4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1CB4B4u;
    {
        const bool branch_taken_0x1cb4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4B4u;
        // 0x1cb4b8: 0xe4410030  swc1        $f1, 0x30($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4b4) {
            ctx->pc = 0x1CB674u;
            goto label_1cb674;
        }
    }
    ctx->pc = 0x1CB4BCu;
label_1cb4bc:
    // 0x1cb4bc: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1CB4BCu;
    {
        const bool branch_taken_0x1cb4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4BCu;
        // 0x1cb4c0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4bc) {
            ctx->pc = 0x1CB674u;
            goto label_1cb674;
        }
    }
    ctx->pc = 0x1CB4C4u;
    // 0x1cb4c4: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x1cb4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x1cb4c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb4c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb4cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4d0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cb4d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb4d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb4d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1cb4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb4dc: 0x2462ea90  addiu       $v0, $v1, -0x1570
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
    // 0x1cb4e0: 0x3c013d2c  lui         $at, 0x3D2C
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15660 << 16));
    // 0x1cb4e4: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1cb4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x1cb4e8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1cb4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1cb4ec: 0x3c01bd54  lui         $at, 0xBD54
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48468 << 16));
    // 0x1cb4f0: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cb4f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cb4f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb4f8: 0x3c01bd1b  lui         $at, 0xBD1B
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48411 << 16));
    // 0x1cb4fc: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x1cb4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
    // 0x1cb500: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cb500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb504: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1cb508: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cb508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cb50c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb510: 0xe460ea90  swc1        $f0, -0x1570($v1)
    ctx->pc = 0x1cb510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961808), bits); }
    // 0x1cb514: 0xe4430044  swc1        $f3, 0x44($v0)
    ctx->pc = 0x1cb514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1cb518: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x1cb518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1cb51c: 0xe4440038  swc1        $f4, 0x38($v0)
    ctx->pc = 0x1cb51cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1cb520: 0xe445003c  swc1        $f5, 0x3C($v0)
    ctx->pc = 0x1cb520u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1cb524: 0xe4420040  swc1        $f2, 0x40($v0)
    ctx->pc = 0x1cb524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1cb528: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x1cb528u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cb52c: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x1cb52cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1cb530: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x1cb530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1cb534: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1CB534u;
    {
        const bool branch_taken_0x1cb534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB534u;
        // 0x1cb538: 0xe4430014  swc1        $f3, 0x14($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb534) {
            ctx->pc = 0x1CB674u;
            goto label_1cb674;
        }
    }
    ctx->pc = 0x1CB53Cu;
label_1cb53c:
    // 0x1cb53c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cb53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1cb540: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CB540u;
    {
        const bool branch_taken_0x1cb540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB540u;
        // 0x1cb544: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb540) {
            ctx->pc = 0x1CB5BCu;
            goto label_1cb5bc;
        }
    }
    ctx->pc = 0x1CB548u;
    // 0x1cb548: 0x3c01be3d  lui         $at, 0xBE3D
    ctx->pc = 0x1cb548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48701 << 16));
    // 0x1cb54c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1cb54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1cb550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb554: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1cb554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1cb558: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cb558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1cb55c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb560: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cb564: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb568: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1cb568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1cb56c: 0x3c013d1b  lui         $at, 0x3D1B
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15643 << 16));
    // 0x1cb570: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x1cb570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
    // 0x1cb574: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cb574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb578: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
    // 0x1cb57c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1cb57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1cb580: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1cb580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb584: 0x3c01bd2c  lui         $at, 0xBD2C
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48428 << 16));
    // 0x1cb588: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1cb588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x1cb58c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1cb58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1cb590: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x1cb594: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1cb594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1cb598: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1cb598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1cb59c: 0x3c013b10  lui         $at, 0x3B10
    ctx->pc = 0x1cb59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15120 << 16));
    // 0x1cb5a0: 0x34212de0  ori         $at, $at, 0x2DE0
    ctx->pc = 0x1cb5a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11744);
    // 0x1cb5a4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1cb5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1cb5a8: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x1cb5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x1cb5ac: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1cb5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1cb5b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb5b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB5B4u;
    {
        const bool branch_taken_0x1cb5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5B4u;
        // 0x1cb5b8: 0x2462ea90  addiu       $v0, $v1, -0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5b4) {
            ctx->pc = 0x1CB62Cu;
            goto label_1cb62c;
        }
    }
    ctx->pc = 0x1CB5BCu;
label_1cb5bc:
    // 0x1cb5bc: 0x3c013c44  lui         $at, 0x3C44
    ctx->pc = 0x1cb5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15428 << 16));
    // 0x1cb5c0: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1cb5c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x1cb5c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb5c8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1cb5cc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cb5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1cb5d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb5d4: 0x2462ea90  addiu       $v0, $v1, -0x1570
    ctx->pc = 0x1cb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
    // 0x1cb5d8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cb5dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb5dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb5e0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1cb5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1cb5e4: 0x3c013d1b  lui         $at, 0x3D1B
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15643 << 16));
    // 0x1cb5e8: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x1cb5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
    // 0x1cb5ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cb5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cb5f0: 0x3c01bd61  lui         $at, 0xBD61
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48481 << 16));
    // 0x1cb5f4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1cb5f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1cb5f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1cb5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb5fc: 0x3c01bd2c  lui         $at, 0xBD2C
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48428 << 16));
    // 0x1cb600: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x1cb600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x1cb604: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1cb604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1cb608: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1cb608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1cb60c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1cb60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1cb610: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1cb610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1cb614: 0x3c013aeb  lui         $at, 0x3AEB
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15083 << 16));
    // 0x1cb618: 0x3421edfa  ori         $at, $at, 0xEDFA
    ctx->pc = 0x1cb618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60922);
    // 0x1cb61c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1cb61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1cb620: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1cb624: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1cb624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1cb628: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb62c:
    // 0x1cb62c: 0xe460ea90  swc1        $f0, -0x1570($v1)
    ctx->pc = 0x1cb62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961808), bits); }
    // 0x1cb630: 0xe448005c  swc1        $f8, 0x5C($v0)
    ctx->pc = 0x1cb630u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x1cb634: 0xe4470038  swc1        $f7, 0x38($v0)
    ctx->pc = 0x1cb634u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1cb638: 0xe443003c  swc1        $f3, 0x3C($v0)
    ctx->pc = 0x1cb638u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1cb63c: 0xe4440040  swc1        $f4, 0x40($v0)
    ctx->pc = 0x1cb63cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1cb640: 0xe4450044  swc1        $f5, 0x44($v0)
    ctx->pc = 0x1cb640u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1cb644: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x1cb644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1cb648: 0xe4460034  swc1        $f6, 0x34($v0)
    ctx->pc = 0x1cb648u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1cb64c: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x1cb64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1cb650: 0xe4470008  swc1        $f7, 0x8($v0)
    ctx->pc = 0x1cb650u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cb654: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1cb654u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1cb658: 0xe4440010  swc1        $f4, 0x10($v0)
    ctx->pc = 0x1cb658u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1cb65c: 0xe4450014  swc1        $f5, 0x14($v0)
    ctx->pc = 0x1cb65cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1cb660: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x1cb660u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cb664: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x1cb664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1cb668: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x1cb668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1cb66c: 0xe448002c  swc1        $f8, 0x2C($v0)
    ctx->pc = 0x1cb66cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1cb670: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x1cb670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1cb674:
    // 0x1cb674: 0x8c82cdb4  lw          $v0, -0x324C($a0)
    ctx->pc = 0x1cb674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
    // 0x1cb678: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1cb67c: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1cb680: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cb680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1cb684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb688: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cb688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1cb68c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb690: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1cb694: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1cb698: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cb698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1cb69c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb6a0: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1cb6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb6a4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6ac: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cb6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cb6b0: 0xe481eaf0  swc1        $f1, -0x1510($a0)
    ctx->pc = 0x1cb6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EAF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EAF0u, _value); } while (0); }
    // 0x1cb6b4: 0xe4c0eaf8  swc1        $f0, -0x1508($a2)
    ctx->pc = 0x1cb6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EAF8u, _value); } while (0); }
    // 0x1cb6b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB6B8u;
    {
        const bool branch_taken_0x1cb6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6B8u;
        // 0x1cb6bc: 0xe4a2eaf4  swc1        $f2, -0x150C($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6b8) {
            ctx->pc = 0x1CB6E8u;
            goto label_1cb6e8;
        }
    }
    ctx->pc = 0x1CB6C0u;
    // 0x1cb6c0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cb6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1cb6c4: 0x3c013c44  lui         $at, 0x3C44
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15428 << 16));
    // 0x1cb6c8: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1cb6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x1cb6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6d0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cb6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1cb6d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb6d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb6dc: 0xe480eaf0  swc1        $f0, -0x1510($a0)
    ctx->pc = 0x1cb6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961904), bits); }
    // 0x1cb6e0: 0xe4a1eaf4  swc1        $f1, -0x150C($a1)
    ctx->pc = 0x1cb6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961908), bits); }
    // 0x1cb6e4: 0xe4c2eaf8  swc1        $f2, -0x1508($a2)
    ctx->pc = 0x1cb6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294961912), bits); }
label_1cb6e8:
    // 0x1cb6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB6F0u;
}
