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

// Function: sub_001AE378
// Address: 0x1ae378 - 0x1ae4d8
void sub_001AE378_0x1ae378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE378_0x1ae378");
#endif

    switch (ctx->pc) {
        case 0x1ae4a8u: goto label_1ae4a8;
        default: break;
    }

    ctx->pc = 0x1ae378u;

    // 0x1ae378: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ae378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ae37c: 0x3402e050  ori         $v0, $zero, 0xE050
    ctx->pc = 0x1ae37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
    // 0x1ae380: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ae380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ae384: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ae388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ae38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae390: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1ae390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae394: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x1ae394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1ae398: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ae398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ae39c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE39Cu;
    {
        const bool branch_taken_0x1ae39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE39Cu;
        // 0x1ae3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae39c) {
            ctx->pc = 0x1AE3ACu;
            goto label_1ae3ac;
        }
    }
    ctx->pc = 0x1AE3A4u;
    // 0x1ae3a4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ae3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ae3a8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1ae3a8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ae3ac:
    // 0x1ae3ac: 0x54a00046  bnel        $a1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AE3ACu;
    {
        const bool branch_taken_0x1ae3ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3ac) {
            ctx->pc = 0x1AE3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE3ACu;
            // 0x1ae3b0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE4C8u;
            goto label_1ae4c8;
        }
    }
    ctx->pc = 0x1AE3B4u;
    // 0x1ae3b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ae3b8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1ae3bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ae3bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ae3c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ae3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ae3c4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1ae3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1ae3c8: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1ae3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x1ae3cc: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1ae3d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ae3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae3d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ae3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae3d8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ae3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ae3dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE3DCu;
    {
        const bool branch_taken_0x1ae3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3DCu;
        // 0x1ae3e0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3dc) {
            ctx->pc = 0x1AE424u;
            goto label_1ae424;
        }
    }
    ctx->pc = 0x1AE3E4u;
    // 0x1ae3e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE3E4u;
    {
        const bool branch_taken_0x1ae3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3e4) {
            ctx->pc = 0x1AE40Cu;
            goto label_1ae40c;
        }
    }
    ctx->pc = 0x1AE3ECu;
    // 0x1ae3ec: 0x3c013f8b  lui         $at, 0x3F8B
    ctx->pc = 0x1ae3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16267 << 16));
    // 0x1ae3f0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1ae3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1ae3f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ae3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ae3f8: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x1ae3fc: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1ae3fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1ae400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ae400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae404: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE404u;
    {
        const bool branch_taken_0x1ae404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae404) {
            ctx->pc = 0x1AE424u;
            goto label_1ae424;
        }
    }
    ctx->pc = 0x1AE40Cu;
label_1ae40c:
    // 0x1ae40c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1ae410: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ae410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ae414: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ae414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ae418: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1ae41c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1ae41cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1ae420: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ae420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ae424:
    // 0x1ae424: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae42c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ae42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ae430: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1ae430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ae434: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x1ae434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1ae438: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1ae438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1ae43c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1ae43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ae440: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1ae440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1ae444: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1ae444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ae448: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1ae448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1ae44c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1ae44cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae450: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1ae450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae454: 0x3404e050  ori         $a0, $zero, 0xE050
    ctx->pc = 0x1ae454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
    // 0x1ae458: 0xa04b0003  sb          $t3, 0x3($v0)
    ctx->pc = 0x1ae458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x1ae45c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1ae45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1ae460: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ae460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ae464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae468: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ae468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae46c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ae46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae470: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1ae470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x1ae474: 0x2409005c  addiu       $t1, $zero, 0x5C
    ctx->pc = 0x1ae474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1ae478: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1ae478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1ae47c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1ae47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1ae480: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ae480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ae484: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae488: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae48c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ae48cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae490: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1ae494: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1ae494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1ae498: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ae498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ae49c: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1ae49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1ae4a0: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1AE4A0u;
    SET_GPR_U32(ctx, 31, 0x1AE4A8u);
    ctx->pc = 0x1AE4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4A0u;
    // 0x1ae4a4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1AE4A0u, 0x1AE4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE4A8u;
label_1ae4a8:
    // 0x1ae4a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ae4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ae4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ae4b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ae4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ae4b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae4b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ae4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ae4bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ae4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae4c0: 0xe4401128  swc1        $f0, 0x1128($v0)
    ctx->pc = 0x1ae4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4392), bits); }
    // 0x1ae4c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ae4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ae4c8:
    // 0x1ae4c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ae4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4CCu;
        // 0x1ae4d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE4D4u;
    // 0x1ae4d4: 0x0  nop
    ctx->pc = 0x1ae4d4u;
    // NOP
    ctx->pc = 0x1ae4d8u;
}
