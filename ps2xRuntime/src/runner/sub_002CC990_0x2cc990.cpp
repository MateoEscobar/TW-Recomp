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

// Function: sub_002CC990
// Address: 0x2cc990 - 0x2cce18
void sub_002CC990_0x2cc990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC990_0x2cc990");
#endif

    switch (ctx->pc) {
        case 0x2cc9ccu: goto label_2cc9cc;
        case 0x2cc9f8u: goto label_2cc9f8;
        case 0x2cca18u: goto label_2cca18;
        case 0x2cca28u: goto label_2cca28;
        case 0x2cca44u: goto label_2cca44;
        case 0x2cca50u: goto label_2cca50;
        case 0x2ccab0u: goto label_2ccab0;
        case 0x2ccae0u: goto label_2ccae0;
        case 0x2ccb08u: goto label_2ccb08;
        case 0x2ccb24u: goto label_2ccb24;
        case 0x2ccb58u: goto label_2ccb58;
        case 0x2ccb64u: goto label_2ccb64;
        case 0x2ccb74u: goto label_2ccb74;
        case 0x2ccb84u: goto label_2ccb84;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccbfcu: goto label_2ccbfc;
        case 0x2ccc4cu: goto label_2ccc4c;
        case 0x2ccca8u: goto label_2ccca8;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccc4u: goto label_2cccc4;
        case 0x2cccfcu: goto label_2cccfc;
        case 0x2ccd18u: goto label_2ccd18;
        case 0x2ccd24u: goto label_2ccd24;
        case 0x2ccd30u: goto label_2ccd30;
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd98u: goto label_2ccd98;
        case 0x2ccdacu: goto label_2ccdac;
        case 0x2ccdc4u: goto label_2ccdc4;
        case 0x2ccdd4u: goto label_2ccdd4;
        case 0x2ccde4u: goto label_2ccde4;
        default: break;
    }

    ctx->pc = 0x2cc990u;

    // 0x2cc990: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2cc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2cc994: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2cc994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2cc998: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2cc998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2cc99c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2cc99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2cc9a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cc9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9a4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2cc9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2cc9a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2cc9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2cc9ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cc9b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cc9b4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2cc9b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2cc9b8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2cc9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2cc9bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cc9c0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2cc9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc9c4: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2CC9C4u;
    SET_GPR_U32(ctx, 31, 0x2CC9CCu);
    ctx->pc = 0x2CC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9C4u;
    // 0x2cc9c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2CC9C4u, 0x2CC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9CCu;
label_2cc9cc:
    // 0x2cc9cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2cc9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2cc9d0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2cc9d4: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2cc9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2cc9d8: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2cc9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2cc9dc: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2cc9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cc9e0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2CC9E0u;
    {
        const bool branch_taken_0x2cc9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9E0u;
        // 0x2cc9e4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9e0) {
            ctx->pc = 0x2CCAF0u;
            goto label_2ccaf0;
        }
    }
    ctx->pc = 0x2CC9E8u;
    // 0x2cc9e8: 0x240561a8  addiu       $a1, $zero, 0x61A8
    ctx->pc = 0x2cc9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x2cc9ec: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2cc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2cc9f0: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2CC9F0u;
    SET_GPR_U32(ctx, 31, 0x2CC9F8u);
    ctx->pc = 0x2CC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9F0u;
    // 0x2cc9f4: 0x24066978  addiu       $a2, $zero, 0x6978 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CC9F0u, 0x2CC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9F8u;
label_2cc9f8:
    // 0x2cc9f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2cc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cc9fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cc9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cca00: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x2cca00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x2cca04: 0x906202d5  lbu         $v0, 0x2D5($v1)
    ctx->pc = 0x2cca04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 725)));
    // 0x2cca08: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2CCA08u;
    {
        const bool branch_taken_0x2cca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA08u;
        // 0x2cca0c: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca08) {
            ctx->pc = 0x2CCAF0u;
            goto label_2ccaf0;
        }
    }
    ctx->pc = 0x2CCA10u;
    // 0x2cca10: 0xc05a596  jal         func_169658
    ctx->pc = 0x2CCA10u;
    SET_GPR_U32(ctx, 31, 0x2CCA18u);
    ctx->pc = 0x2CCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA10u;
    // 0x2cca14: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2CCA10u, 0x2CCA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA18u;
label_2cca18:
    // 0x2cca18: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2CCA18u;
    {
        const bool branch_taken_0x2cca18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cca18) {
            ctx->pc = 0x2CCA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCA18u;
            // 0x2cca1c: 0x9242003f  lbu         $v0, 0x3F($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCAF4u;
            goto label_2ccaf4;
        }
    }
    ctx->pc = 0x2CCA20u;
    // 0x2cca20: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2CCA20u;
    SET_GPR_U32(ctx, 31, 0x2CCA28u);
    ctx->pc = 0x2CCA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA20u;
    // 0x2cca24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2CCA20u, 0x2CCA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA28u;
label_2cca28:
    // 0x2cca28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2cca28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca2c: 0x56900031  bnel        $s4, $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2CCA2Cu;
    {
        const bool branch_taken_0x2cca2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        if (branch_taken_0x2cca2c) {
            ctx->pc = 0x2CCA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCA2Cu;
            // 0x2cca30: 0x9242003f  lbu         $v0, 0x3F($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCAF4u;
            goto label_2ccaf4;
        }
    }
    ctx->pc = 0x2CCA34u;
    // 0x2cca34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2cca38: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x2cca38u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2cca3c: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x2CCA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CCA44u);
    ctx->pc = 0x2CCA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA3Cu;
    // 0x2cca40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2CCA3Cu, 0x2CCA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA44u;
label_2cca44:
    // 0x2cca44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cca44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca48: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x2CCA48u;
    SET_GPR_U32(ctx, 31, 0x2CCA50u);
    ctx->pc = 0x2CCA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA48u;
    // 0x2cca4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x2CCA48u, 0x2CCA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA50u;
label_2cca50:
    // 0x2cca50: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2cca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2cca54: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2cca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cca58: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2cca58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cca5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2cca5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cca60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cca64: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCA64u;
    {
        const bool branch_taken_0x2cca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA64u;
        // 0x2cca68: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca64) {
            ctx->pc = 0x2CCA84u;
            goto label_2cca84;
        }
    }
    ctx->pc = 0x2CCA6Cu;
    // 0x2cca6c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCA6Cu;
    {
        const bool branch_taken_0x2cca6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA6Cu;
        // 0x2cca70: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca6c) {
            ctx->pc = 0x2CCA84u;
            goto label_2cca84;
        }
    }
    ctx->pc = 0x2CCA74u;
    // 0x2cca74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCA74u;
    {
        const bool branch_taken_0x2cca74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA74u;
        // 0x2cca78: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca74) {
            ctx->pc = 0x2CCA84u;
            goto label_2cca84;
        }
    }
    ctx->pc = 0x2CCA7Cu;
    // 0x2cca7c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CCA7Cu;
    {
        const bool branch_taken_0x2cca7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA7Cu;
        // 0x2cca80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca7c) {
            ctx->pc = 0x2CCAB8u;
            goto label_2ccab8;
        }
    }
    ctx->pc = 0x2CCA84u;
label_2cca84:
    // 0x2cca84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2cca88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cca8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cca8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cca90: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2cca90u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2cca94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca98: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2cca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2cca9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccaa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ccaa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccaa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccaa8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2CCAA8u;
    SET_GPR_U32(ctx, 31, 0x2CCAB0u);
    ctx->pc = 0x2CCAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAA8u;
    // 0x2ccaac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2CCAA8u, 0x2CCAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAB0u;
label_2ccab0:
    // 0x2ccab0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CCAB0u;
    {
        const bool branch_taken_0x2ccab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAB0u;
        // 0x2ccab4: 0x9242003f  lbu         $v0, 0x3F($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccab0) {
            ctx->pc = 0x2CCAF4u;
            goto label_2ccaf4;
        }
    }
    ctx->pc = 0x2CCAB8u;
label_2ccab8:
    // 0x2ccab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ccab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ccabc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ccabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ccac0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ccac0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2ccac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ccac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccac8: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x2ccac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2ccacc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ccaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ccad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccad4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ccad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccad8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2CCAD8u;
    SET_GPR_U32(ctx, 31, 0x2CCAE0u);
    ctx->pc = 0x2CCADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAD8u;
    // 0x2ccadc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2CCAD8u, 0x2CCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAE0u;
label_2ccae0:
    // 0x2ccae0: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x2ccae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x2ccae4: 0x8c648690  lw          $a0, -0x7970($v1)
    ctx->pc = 0x2ccae4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x598690u));
    // 0x2ccae8: 0x54440001  bnel        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CCAE8u;
    {
        const bool branch_taken_0x2ccae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ccae8) {
            ctx->pc = 0x2CCAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCAE8u;
            // 0x2ccaec: 0xa254003f  sb          $s4, 0x3F($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCAF0u;
            goto label_2ccaf0;
        }
    }
    ctx->pc = 0x2CCAF0u;
label_2ccaf0:
    // 0x2ccaf0: 0x9242003f  lbu         $v0, 0x3F($s2)
    ctx->pc = 0x2ccaf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
label_2ccaf4:
    // 0x2ccaf4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2CCAF4u;
    {
        const bool branch_taken_0x2ccaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAF4u;
        // 0x2ccaf8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccaf4) {
            ctx->pc = 0x2CCC0Cu;
            goto label_2ccc0c;
        }
    }
    ctx->pc = 0x2CCAFCu;
    // 0x2ccafc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ccb00: 0xc05959e  jal         func_165678
    ctx->pc = 0x2CCB00u;
    SET_GPR_U32(ctx, 31, 0x2CCB08u);
    ctx->pc = 0x2CCB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB00u;
    // 0x2ccb04: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CCB00u, 0x2CCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB08u;
label_2ccb08:
    // 0x2ccb08: 0x9243003f  lbu         $v1, 0x3F($s2)
    ctx->pc = 0x2ccb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x2ccb0c: 0x14710034  bne         $v1, $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2CCB0Cu;
    {
        const bool branch_taken_0x2ccb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB0Cu;
        // 0x2ccb10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb0c) {
            ctx->pc = 0x2CCBE0u;
            goto label_2ccbe0;
        }
    }
    ctx->pc = 0x2CCB14u;
    // 0x2ccb14: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x2ccb18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ccb1c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2CCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB24u);
    ctx->pc = 0x2CCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB1Cu;
    // 0x2ccb20: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2CCB1Cu, 0x2CCB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB24u;
label_2ccb24:
    // 0x2ccb24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccb28: 0x105100ae  beq         $v0, $s1, . + 4 + (0xAE << 2)
    ctx->pc = 0x2CCB28u;
    {
        const bool branch_taken_0x2ccb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB28u;
        // 0x2ccb2c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb28) {
            ctx->pc = 0x2CCDE4u;
            goto label_2ccde4;
        }
    }
    ctx->pc = 0x2CCB30u;
    // 0x2ccb30: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2ccb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2ccb34: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2ccb34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2ccb38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ccb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ccb3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ccb40: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ccb40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ccb44: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ccb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ccb48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ccb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ccb4c: 0xc4740140  lwc1        $f20, 0x140($v1)
    ctx->pc = 0x2ccb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ccb50: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2CCB50u;
    SET_GPR_U32(ctx, 31, 0x2CCB58u);
    ctx->pc = 0x2CCB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB50u;
    // 0x2ccb54: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CCB50u, 0x2CCB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB58u;
label_2ccb58:
    // 0x2ccb58: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ccb58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ccb5c: 0xc08a096  jal         func_228258
    ctx->pc = 0x2CCB5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB64u);
    ctx->pc = 0x2CCB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB5Cu;
    // 0x2ccb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2CCB5Cu, 0x2CCB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB64u;
label_2ccb64:
    // 0x2ccb64: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CCB64u;
    {
        const bool branch_taken_0x2ccb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb64) {
            ctx->pc = 0x2CCB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB64u;
            // 0x2ccb68: 0xa240003f  sb          $zero, 0x3F($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC0Cu;
            goto label_2ccc0c;
        }
    }
    ctx->pc = 0x2CCB6Cu;
    // 0x2ccb6c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2CCB6Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB74u);
    ctx->pc = 0x2CCB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB6Cu;
    // 0x2ccb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2CCB6Cu, 0x2CCB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB74u;
label_2ccb74:
    // 0x2ccb74: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CCB74u;
    {
        const bool branch_taken_0x2ccb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb74) {
            ctx->pc = 0x2CCB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB74u;
            // 0x2ccb78: 0xa240003f  sb          $zero, 0x3F($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC0Cu;
            goto label_2ccc0c;
        }
    }
    ctx->pc = 0x2CCB7Cu;
    // 0x2ccb7c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2CCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB84u);
    ctx->pc = 0x2CCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB7Cu;
    // 0x2ccb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CCB7Cu, 0x2CCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB84u;
label_2ccb84:
    // 0x2ccb84: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2ccb84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
    // 0x2ccb88: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ccb88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ccb8c: 0x5471001f  bnel        $v1, $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CCB8Cu;
    {
        const bool branch_taken_0x2ccb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ccb8c) {
            ctx->pc = 0x2CCB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB8Cu;
            // 0x2ccb90: 0xa240003f  sb          $zero, 0x3F($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC0Cu;
            goto label_2ccc0c;
        }
    }
    ctx->pc = 0x2CCB94u;
    // 0x2ccb94: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2ccb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2ccb98: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ccb98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccb9c: 0x0  nop
    ctx->pc = 0x2ccb9cu;
    // NOP
    // 0x2ccba0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2CCBA0u;
    {
        const bool branch_taken_0x2ccba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBA0u;
        // 0x2ccba4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccba0) {
            ctx->pc = 0x2CCC08u;
            goto label_2ccc08;
        }
    }
    ctx->pc = 0x2CCBA8u;
    // 0x2ccba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ccbac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ccbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ccbb0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2ccbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbb8: 0x240500ce  addiu       $a1, $zero, 0xCE
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x2ccbbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ccbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ccbc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ccbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccbc8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2CCBC8u;
    SET_GPR_U32(ctx, 31, 0x2CCBD0u);
    ctx->pc = 0x2CCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBC8u;
    // 0x2ccbcc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2CCBC8u, 0x2CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBD0u;
label_2ccbd0:
    // 0x2ccbd0: 0x9243003f  lbu         $v1, 0x3F($s2)
    ctx->pc = 0x2ccbd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x2ccbd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ccbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ccbd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CCBD8u;
    {
        const bool branch_taken_0x2ccbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBD8u;
        // 0x2ccbdc: 0xa243003f  sb          $v1, 0x3F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbd8) {
            ctx->pc = 0x2CCC0Cu;
            goto label_2ccc0c;
        }
    }
    ctx->pc = 0x2CCBE0u;
label_2ccbe0:
    // 0x2ccbe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ccbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccbe4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CCBE4u;
    {
        const bool branch_taken_0x2ccbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccbe4) {
            ctx->pc = 0x2CCBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCBE4u;
            // 0x2ccbe8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC10u;
            goto label_2ccc10;
        }
    }
    ctx->pc = 0x2CCBECu;
    // 0x2ccbec: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x2ccbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2ccbf0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2ccbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2ccbf4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2CCBF4u;
    SET_GPR_U32(ctx, 31, 0x2CCBFCu);
    ctx->pc = 0x2CCBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBF4u;
    // 0x2ccbf8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2CCBF4u, 0x2CCBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBFCu;
label_2ccbfc:
    // 0x2ccbfc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccc00: 0x10510079  beq         $v0, $s1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2CCC00u;
    {
        const bool branch_taken_0x2ccc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC00u;
        // 0x2ccc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc00) {
            ctx->pc = 0x2CCDE8u;
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCC08u;
label_2ccc08:
    // 0x2ccc08: 0xa240003f  sb          $zero, 0x3F($s2)
    ctx->pc = 0x2ccc08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 0));
label_2ccc0c:
    // 0x2ccc0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ccc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ccc10:
    // 0x2ccc10: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2ccc14: 0x1c400073  bgtz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2CCC14u;
    {
        const bool branch_taken_0x2ccc14 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC14u;
        // 0x2ccc18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc14) {
            ctx->pc = 0x2CCDE4u;
            goto label_2ccde4;
        }
    }
    ctx->pc = 0x2CCC1Cu;
    // 0x2ccc1c: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x2ccc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2ccc20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ccc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ccc24: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2ccc24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ccc28: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2ccc28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ccc2c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2ccc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ccc30: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2ccc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2ccc34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2ccc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2ccc38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ccc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ccc3c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ccc40: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ccc40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc44: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2CCC44u;
    SET_GPR_U32(ctx, 31, 0x2CCC4Cu);
    ctx->pc = 0x2CCC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC44u;
    // 0x2ccc48: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CCC44u, 0x2CCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC4Cu;
label_2ccc4c:
    // 0x2ccc4c: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x2ccc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x2ccc50: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCC50u;
    {
        const bool branch_taken_0x2ccc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC50u;
        // 0x2ccc54: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc50) {
            ctx->pc = 0x2CCC60u;
            goto label_2ccc60;
        }
    }
    ctx->pc = 0x2CCC58u;
    // 0x2ccc58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ccc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ccc5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ccc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ccc60:
    // 0x2ccc60: 0x0  nop
    ctx->pc = 0x2ccc60u;
    // NOP
    // 0x2ccc64: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2ccc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2ccc68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ccc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ccc6c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ccc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccc70: 0x0  nop
    ctx->pc = 0x2ccc70u;
    // NOP
    // 0x2ccc74: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2CCC74u;
    {
        const bool branch_taken_0x2ccc74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC74u;
        // 0x2ccc78: 0xc4410140  lwc1        $f1, 0x140($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc74) {
            ctx->pc = 0x2CCD04u;
            goto label_2ccd04;
        }
    }
    ctx->pc = 0x2CCC7Cu;
    // 0x2ccc7c: 0x904202d5  lbu         $v0, 0x2D5($v0)
    ctx->pc = 0x2ccc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
    // 0x2ccc80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccc80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccc84: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCC84u;
    {
        const bool branch_taken_0x2ccc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC84u;
        // 0x2ccc88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc84) {
            ctx->pc = 0x2CCCA0u;
            goto label_2ccca0;
        }
    }
    ctx->pc = 0x2CCC8Cu;
    // 0x2ccc8c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2ccc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ccc90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ccc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccc94: 0x0  nop
    ctx->pc = 0x2ccc94u;
    // NOP
    // 0x2ccc98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CCC98u;
    {
        const bool branch_taken_0x2ccc98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccc98) {
            ctx->pc = 0x2CCC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC98u;
            // 0x2ccc9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCCA0u;
            goto label_2ccca0;
        }
    }
    ctx->pc = 0x2CCCA0u;
label_2ccca0:
    // 0x2ccca0: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2CCCA0u;
    SET_GPR_U32(ctx, 31, 0x2CCCA8u);
    ctx->pc = 0x2CCCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCA0u;
    // 0x2ccca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2CCCA0u, 0x2CCCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCA8u;
label_2ccca8:
    // 0x2ccca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cccac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCCACu;
    {
        const bool branch_taken_0x2cccac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cccac) {
            ctx->pc = 0x2CCCBCu;
            goto label_2cccbc;
        }
    }
    ctx->pc = 0x2CCCB4u;
    // 0x2cccb4: 0xc08c050  jal         func_230140
    ctx->pc = 0x2CCCB4u;
    SET_GPR_U32(ctx, 31, 0x2CCCBCu);
    ctx->pc = 0x2CCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCB4u;
    // 0x2cccb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x2CCCB4u, 0x2CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCBCu;
label_2cccbc:
    // 0x2cccbc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2CCCBCu;
    SET_GPR_U32(ctx, 31, 0x2CCCC4u);
    ctx->pc = 0x2CCCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCBCu;
    // 0x2cccc0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CCCBCu, 0x2CCCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCC4u;
label_2cccc4:
    // 0x2cccc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccc8: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CCCC8u;
    {
        const bool branch_taken_0x2cccc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCC8u;
        // 0x2ccccc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccc8) {
            ctx->pc = 0x2CCDE4u;
            goto label_2ccde4;
        }
    }
    ctx->pc = 0x2CCCD0u;
    // 0x2cccd0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cccd4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2cccd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cccd8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2cccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cccdc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2cccdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2ccce0: 0x70380a  movz        $a3, $v1, $s0
    ctx->pc = 0x2ccce0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x2ccce4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ccce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccce8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ccce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cccec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cccecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cccf0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cccf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cccf4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2CCCF4u;
    SET_GPR_U32(ctx, 31, 0x2CCCFCu);
    ctx->pc = 0x2CCCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCF4u;
    // 0x2cccf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CCCF4u, 0x2CCCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCFCu;
label_2cccfc:
    // 0x2cccfc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2CCCFCu;
    {
        const bool branch_taken_0x2cccfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCFCu;
        // 0x2ccd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccfc) {
            ctx->pc = 0x2CCDE8u;
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCD04u;
label_2ccd04:
    // 0x2ccd04: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2ccd04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ccd08: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ccd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ccd0c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2ccd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2ccd10: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2CCD10u;
    SET_GPR_U32(ctx, 31, 0x2CCD18u);
    ctx->pc = 0x2CCD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD10u;
    // 0x2ccd14: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CCD10u, 0x2CCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD18u;
label_2ccd18:
    // 0x2ccd18: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2ccd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2ccd1c: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2CCD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD24u);
    ctx->pc = 0x2CCD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD1Cu;
    // 0x2ccd20: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2CCD1Cu, 0x2CCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD24u;
label_2ccd24:
    // 0x2ccd24: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ccd24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ccd28: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2CCD28u;
    SET_GPR_U32(ctx, 31, 0x2CCD30u);
    ctx->pc = 0x2CCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD28u;
    // 0x2ccd2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2CCD28u, 0x2CCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD30u;
label_2ccd30:
    // 0x2ccd30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ccd30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ccd34: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2CCD34u;
    SET_GPR_U32(ctx, 31, 0x2CCD3Cu);
    ctx->pc = 0x2CCD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD34u;
    // 0x2ccd38: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2CCD34u, 0x2CCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD3Cu;
label_2ccd3c:
    // 0x2ccd3c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2ccd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2ccd40: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ccd40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2ccd44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ccd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccd48: 0x0  nop
    ctx->pc = 0x2ccd48u;
    // NOP
    // 0x2ccd4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ccd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccd50: 0x0  nop
    ctx->pc = 0x2ccd50u;
    // NOP
    // 0x2ccd54: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2CCD54u;
    {
        const bool branch_taken_0x2ccd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccd54) {
            ctx->pc = 0x2CCDCCu;
            goto label_2ccdcc;
        }
    }
    ctx->pc = 0x2CCD5Cu;
    // 0x2ccd5c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2ccd5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ccd60: 0x7a450020  lq          $a1, 0x20($s2)
    ctx->pc = 0x2ccd60u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2ccd64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ccd68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ccd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ccd6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ccd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ccd70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ccd70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccd74: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ccd74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ccd78: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2ccd78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2ccd7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ccd7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ccd80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ccd80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ccd84: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2ccd84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2ccd88: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2ccd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2ccd8c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2ccd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2ccd90: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2CCD90u;
    SET_GPR_U32(ctx, 31, 0x2CCD98u);
    ctx->pc = 0x2CCD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD90u;
    // 0x2ccd94: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CCD90u, 0x2CCD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD98u;
label_2ccd98:
    // 0x2ccd98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ccd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd9c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CCD9Cu;
    {
        const bool branch_taken_0x2ccd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD9Cu;
        // 0x2ccda0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd9c) {
            ctx->pc = 0x2CCDE8u;
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCDA4u;
    // 0x2ccda4: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2CCDA4u;
    SET_GPR_U32(ctx, 31, 0x2CCDACu);
    ctx->pc = 0x2CCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDA4u;
    // 0x2ccda8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CCDA4u, 0x2CCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDACu;
label_2ccdac:
    // 0x2ccdac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ccdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ccdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdb4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ccdb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ccdb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ccdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdbc: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2CCDBCu;
    SET_GPR_U32(ctx, 31, 0x2CCDC4u);
    ctx->pc = 0x2CCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDBCu;
    // 0x2ccdc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CCDBCu, 0x2CCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDC4u;
label_2ccdc4:
    // 0x2ccdc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCDC4u;
    {
        const bool branch_taken_0x2ccdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDC4u;
        // 0x2ccdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdc4) {
            ctx->pc = 0x2CCDE8u;
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCDCCu;
label_2ccdcc:
    // 0x2ccdcc: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2CCDCCu;
    SET_GPR_U32(ctx, 31, 0x2CCDD4u);
    ctx->pc = 0x2CCDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDCCu;
    // 0x2ccdd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2CCDCCu, 0x2CCDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDD4u;
label_2ccdd4:
    // 0x2ccdd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCDD4u;
    {
        const bool branch_taken_0x2ccdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDD4u;
        // 0x2ccdd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdd4) {
            ctx->pc = 0x2CCDE8u;
            goto label_2ccde8;
        }
    }
    ctx->pc = 0x2CCDDCu;
    // 0x2ccddc: 0xc08bfe2  jal         func_22FF88
    ctx->pc = 0x2CCDDCu;
    SET_GPR_U32(ctx, 31, 0x2CCDE4u);
    ctx->pc = 0x2CCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDDCu;
    // 0x2ccde0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF88u, 0x2CCDDCu, 0x2CCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDE4u;
label_2ccde4:
    // 0x2ccde4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ccde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccde8:
    // 0x2ccde8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2ccde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ccdec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2ccdecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ccdf0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2ccdf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ccdf4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2ccdf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccdf8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ccdf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccdfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ccdfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cce00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cce00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cce04: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2cce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cce08: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2cce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE0Cu;
        // 0x2cce10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCE14u;
    // 0x2cce14: 0x0  nop
    ctx->pc = 0x2cce14u;
    // NOP
    ctx->pc = 0x2cce18u;
}
