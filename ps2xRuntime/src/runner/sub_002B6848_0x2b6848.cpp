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

// Function: sub_002B6848
// Address: 0x2b6848 - 0x2b6b88
void sub_002B6848_0x2b6848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6848_0x2b6848");
#endif

    switch (ctx->pc) {
        case 0x2b6884u: goto label_2b6884;
        case 0x2b6894u: goto label_2b6894;
        case 0x2b68a4u: goto label_2b68a4;
        case 0x2b68b4u: goto label_2b68b4;
        case 0x2b68c4u: goto label_2b68c4;
        case 0x2b6908u: goto label_2b6908;
        case 0x2b6930u: goto label_2b6930;
        case 0x2b6974u: goto label_2b6974;
        case 0x2b698cu: goto label_2b698c;
        case 0x2b6998u: goto label_2b6998;
        case 0x2b69acu: goto label_2b69ac;
        case 0x2b69ccu: goto label_2b69cc;
        case 0x2b69e8u: goto label_2b69e8;
        case 0x2b69f0u: goto label_2b69f0;
        case 0x2b6a20u: goto label_2b6a20;
        case 0x2b6a38u: goto label_2b6a38;
        case 0x2b6a5cu: goto label_2b6a5c;
        case 0x2b6a88u: goto label_2b6a88;
        case 0x2b6a94u: goto label_2b6a94;
        case 0x2b6ac4u: goto label_2b6ac4;
        case 0x2b6adcu: goto label_2b6adc;
        case 0x2b6b54u: goto label_2b6b54;
        default: break;
    }

    ctx->pc = 0x2b6848u;

    // 0x2b6848: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b6848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b684c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b6850: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b6854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6858: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b685c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b6860: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2b6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2b6864: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2b6864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2b6868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b686c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2b686cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b6870: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2b6870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b6874: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b6874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6878: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b6878u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b687c: 0xc088e48  jal         func_223920
    ctx->pc = 0x2B687Cu;
    SET_GPR_U32(ctx, 31, 0x2B6884u);
    ctx->pc = 0x2B6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B687Cu;
    // 0x2b6880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x2B687Cu, 0x2B6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6884u;
label_2b6884:
    // 0x2b6884: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6884u;
    {
        const bool branch_taken_0x2b6884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6884u;
        // 0x2b6888: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6884) {
            ctx->pc = 0x2B68ACu;
            goto label_2b68ac;
        }
    }
    ctx->pc = 0x2B688Cu;
    // 0x2b688c: 0xc08a024  jal         func_228090
    ctx->pc = 0x2B688Cu;
    SET_GPR_U32(ctx, 31, 0x2B6894u);
    ctx->pc = 0x2B6890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B688Cu;
    // 0x2b6890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x2B688Cu, 0x2B6894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6894u;
label_2b6894:
    // 0x2b6894: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6894u;
    {
        const bool branch_taken_0x2b6894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6894u;
        // 0x2b6898: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6894) {
            ctx->pc = 0x2B68ACu;
            goto label_2b68ac;
        }
    }
    ctx->pc = 0x2B689Cu;
    // 0x2b689c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B689Cu;
    SET_GPR_U32(ctx, 31, 0x2B68A4u);
    ctx->pc = 0x2B68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B689Cu;
    // 0x2b68a0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B689Cu, 0x2B68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68A4u;
label_2b68a4:
    // 0x2b68a4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2B68A4u;
    {
        const bool branch_taken_0x2b68a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68A4u;
        // 0x2b68a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68a4) {
            ctx->pc = 0x2B6B58u;
            goto label_2b6b58;
        }
    }
    ctx->pc = 0x2B68ACu;
label_2b68ac:
    // 0x2b68ac: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B68ACu;
    SET_GPR_U32(ctx, 31, 0x2B68B4u);
    ctx->pc = 0x2B68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B68ACu;
    // 0x2b68b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B68ACu, 0x2B68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68B4u;
label_2b68b4:
    // 0x2b68b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b68b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68bc: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x2B68BCu;
    SET_GPR_U32(ctx, 31, 0x2B68C4u);
    ctx->pc = 0x2B68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B68BCu;
    // 0x2b68c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2B68BCu, 0x2B68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B68C4u;
label_2b68c4:
    // 0x2b68c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68c8: 0x104300a2  beq         $v0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2B68C8u;
    {
        const bool branch_taken_0x2b68c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C8u;
        // 0x2b68cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68c8) {
            ctx->pc = 0x2B6B54u;
            goto label_2b6b54;
        }
    }
    ctx->pc = 0x2B68D0u;
    // 0x2b68d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b68d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b68d8: 0x54430016  bnel        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B68D8u;
    {
        const bool branch_taken_0x2b68d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b68d8) {
            ctx->pc = 0x2B68DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B68D8u;
            // 0x2b68dc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6934u;
            goto label_2b6934;
        }
    }
    ctx->pc = 0x2B68E0u;
    // 0x2b68e0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b68e4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b68e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B68E8u;
    {
        const bool branch_taken_0x2b68e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b68e8) {
            ctx->pc = 0x2B68ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B68E8u;
            // 0x2b68ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B68F0u;
            goto label_2b68f0;
        }
    }
    ctx->pc = 0x2B68F0u;
label_2b68f0:
    // 0x2b68f0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b68f0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b68f4: 0x1810  mfhi        $v1
    ctx->pc = 0x2b68f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b68f8: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B68F8u;
    {
        const bool branch_taken_0x2b68f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b68f8) {
            ctx->pc = 0x2B68FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B68F8u;
            // 0x2b68fc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6934u;
            goto label_2b6934;
        }
    }
    ctx->pc = 0x2B6900u;
    // 0x2b6900: 0xc08a158  jal         func_228560
    ctx->pc = 0x2B6900u;
    SET_GPR_U32(ctx, 31, 0x2B6908u);
    ctx->pc = 0x2B6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6900u;
    // 0x2b6904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2B6900u, 0x2B6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6908u;
label_2b6908:
    // 0x2b6908: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6908u;
    {
        const bool branch_taken_0x2b6908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6908) {
            ctx->pc = 0x2B690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6908u;
            // 0x2b690c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6934u;
            goto label_2b6934;
        }
    }
    ctx->pc = 0x2B6910u;
    // 0x2b6910: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2b6910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2b6914: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b6914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b691c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6928: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x2B6928u;
    SET_GPR_U32(ctx, 31, 0x2B6930u);
    ctx->pc = 0x2B692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6928u;
    // 0x2b692c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2B6928u, 0x2B6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6930u;
label_2b6930:
    // 0x2b6930: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b6934:
    // 0x2b6934: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b6934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b6938: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2b6938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2b693c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B693Cu;
    {
        const bool branch_taken_0x2b693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B693Cu;
        // 0x2b6940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b693c) {
            ctx->pc = 0x2B695Cu;
            goto label_2b695c;
        }
    }
    ctx->pc = 0x2B6944u;
    // 0x2b6944: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2b6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2b6948: 0x384200dd  xori        $v0, $v0, 0xDD
    ctx->pc = 0x2b6948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)221);
    // 0x2b694c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B694Cu;
    {
        const bool branch_taken_0x2b694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b694c) {
            ctx->pc = 0x2B695Cu;
            goto label_2b695c;
        }
    }
    ctx->pc = 0x2B6954u;
    // 0x2b6954: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2b6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x2b6958: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2b6958u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b695c:
    // 0x2b695c: 0x1480007e  bnez        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2B695Cu;
    {
        const bool branch_taken_0x2b695c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B695Cu;
        // 0x2b6960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b695c) {
            ctx->pc = 0x2B6B58u;
            goto label_2b6b58;
        }
    }
    ctx->pc = 0x2B6964u;
    // 0x2b6964: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b6964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b6968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b696c: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B696Cu;
    SET_GPR_U32(ctx, 31, 0x2B6974u);
    ctx->pc = 0x2B6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B696Cu;
    // 0x2b6970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B696Cu, 0x2B6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6974u;
label_2b6974:
    // 0x2b6974: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b6974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6978: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2b6978u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2b697c: 0x1c400076  bgtz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2B697Cu;
    {
        const bool branch_taken_0x2b697c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B697Cu;
        // 0x2b6980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b697c) {
            ctx->pc = 0x2B6B58u;
            goto label_2b6b58;
        }
    }
    ctx->pc = 0x2B6984u;
    // 0x2b6984: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6984u;
    SET_GPR_U32(ctx, 31, 0x2B698Cu);
    ctx->pc = 0x2B6988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6984u;
    // 0x2b6988: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6984u, 0x2B698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B698Cu;
label_2b698c:
    // 0x2b698c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6990: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B6990u;
    SET_GPR_U32(ctx, 31, 0x2B6998u);
    ctx->pc = 0x2B6994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6990u;
    // 0x2b6994: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B6990u, 0x2B6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6998u;
label_2b6998:
    // 0x2b6998: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b6998u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b699c: 0x12a0006e  beqz        $s5, . + 4 + (0x6E << 2)
    ctx->pc = 0x2B699Cu;
    {
        const bool branch_taken_0x2b699c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B699Cu;
        // 0x2b69a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b699c) {
            ctx->pc = 0x2B6B58u;
            goto label_2b6b58;
        }
    }
    ctx->pc = 0x2B69A4u;
    // 0x2b69a4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B69A4u;
    SET_GPR_U32(ctx, 31, 0x2B69ACu);
    ctx->pc = 0x2B69A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69A4u;
    // 0x2b69a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B69A4u, 0x2B69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69ACu;
label_2b69ac:
    // 0x2b69ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b69acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B69B0u;
    {
        const bool branch_taken_0x2b69b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69b0) {
            ctx->pc = 0x2B69E8u;
            goto label_2b69e8;
        }
    }
    ctx->pc = 0x2B69B8u;
    // 0x2b69b8: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B69B8u;
    {
        const bool branch_taken_0x2b69b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69B8u;
        // 0x2b69bc: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69b8) {
            ctx->pc = 0x2B69E8u;
            goto label_2b69e8;
        }
    }
    ctx->pc = 0x2B69C0u;
    // 0x2b69c0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b69c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b69c4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B69C4u;
    SET_GPR_U32(ctx, 31, 0x2B69CCu);
    ctx->pc = 0x2B69C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69C4u;
    // 0x2b69c8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B69C4u, 0x2B69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69CCu;
label_2b69cc:
    // 0x2b69cc: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x2b69ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2b69d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B69D0u;
    {
        const bool branch_taken_0x2b69d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69D0u;
        // 0x2b69d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69d0) {
            ctx->pc = 0x2B69E8u;
            goto label_2b69e8;
        }
    }
    ctx->pc = 0x2B69D8u;
    // 0x2b69d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b69d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b69dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b69dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69e0: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B69E0u;
    SET_GPR_U32(ctx, 31, 0x2B69E8u);
    ctx->pc = 0x2B69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69E0u;
    // 0x2b69e4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B69E0u, 0x2B69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69E8u;
label_2b69e8:
    // 0x2b69e8: 0xc08a024  jal         func_228090
    ctx->pc = 0x2B69E8u;
    SET_GPR_U32(ctx, 31, 0x2B69F0u);
    ctx->pc = 0x2B69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69E8u;
    // 0x2b69ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x2B69E8u, 0x2B69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69F0u;
label_2b69f0:
    // 0x2b69f0: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x2b69f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b69f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b69f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b69f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b69fc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2b69fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b6a00: 0x10440054  beq         $v0, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2B6A00u;
    {
        const bool branch_taken_0x2b6a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A00u;
        // 0x2b6a04: 0xa2430010  sb          $v1, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a00) {
            ctx->pc = 0x2B6B54u;
            goto label_2b6b54;
        }
    }
    ctx->pc = 0x2B6A08u;
    // 0x2b6a08: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2b6a0c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6a10: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b6a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b6a14: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b6a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b6a18: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B6A18u;
    SET_GPR_U32(ctx, 31, 0x2B6A20u);
    ctx->pc = 0x2B6A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A18u;
    // 0x2b6a1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B6A18u, 0x2B6A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A20u;
label_2b6a20:
    // 0x2b6a20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b6a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a24: 0x3a62002d  xori        $v0, $s3, 0x2D
    ctx->pc = 0x2b6a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)45);
    // 0x2b6a28: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B6A28u;
    {
        const bool branch_taken_0x2b6a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A28u;
        // 0x2b6a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a28) {
            ctx->pc = 0x2B6B54u;
            goto label_2b6b54;
        }
    }
    ctx->pc = 0x2B6A30u;
    // 0x2b6a30: 0xc08c466  jal         func_231198
    ctx->pc = 0x2B6A30u;
    SET_GPR_U32(ctx, 31, 0x2B6A38u);
    ctx->pc = 0x2B6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A30u;
    // 0x2b6a34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x2B6A30u, 0x2B6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A38u;
label_2b6a38:
    // 0x2b6a38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b6a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b6a3c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b6a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b6a40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b6a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a44: 0x3a62001f  xori        $v0, $s3, 0x1F
    ctx->pc = 0x2b6a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)31);
    // 0x2b6a48: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B6A48u;
    {
        const bool branch_taken_0x2b6a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A48u;
        // 0x2b6a4c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a48) {
            ctx->pc = 0x2B6ABCu;
            goto label_2b6abc;
        }
    }
    ctx->pc = 0x2B6A50u;
    // 0x2b6a50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6a54: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B6A54u;
    SET_GPR_U32(ctx, 31, 0x2B6A5Cu);
    ctx->pc = 0x2B6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A54u;
    // 0x2b6a58: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B6A54u, 0x2B6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A5Cu;
label_2b6a5c:
    // 0x2b6a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a60: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2b6a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b6a64: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2B6A64u;
    {
        const bool branch_taken_0x2b6a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A64u;
        // 0x2b6a68: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a64) {
            ctx->pc = 0x2B6B3Cu;
            goto label_2b6b3c;
        }
    }
    ctx->pc = 0x2B6A6Cu;
    // 0x2b6a6c: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x2b6a6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2b6a70: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b6a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b6a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a78: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b6a7c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b6a80: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2B6A80u;
    SET_GPR_U32(ctx, 31, 0x2B6A88u);
    ctx->pc = 0x2B6A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A80u;
    // 0x2b6a84: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2B6A80u, 0x2B6A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A88u;
label_2b6a88:
    // 0x2b6a88: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2b6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b6a8c: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x2B6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6A94u);
    ctx->pc = 0x2B6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A8Cu;
    // 0x2b6a90: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2B6A8Cu, 0x2B6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A94u;
label_2b6a94:
    // 0x2b6a94: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2b6a94u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6a98: 0x0  nop
    ctx->pc = 0x2b6a98u;
    // NOP
    // 0x2b6a9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6aa0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2b6aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2b6aa4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b6aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2b6aa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6aac: 0x0  nop
    ctx->pc = 0x2b6aacu;
    // NOP
    // 0x2b6ab0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6ab4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B6AB4u;
    {
        const bool branch_taken_0x2b6ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AB4u;
        // 0x2b6ab8: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ab4) {
            ctx->pc = 0x2B6B3Cu;
            goto label_2b6b3c;
        }
    }
    ctx->pc = 0x2B6ABCu;
label_2b6abc:
    // 0x2b6abc: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x2B6ABCu;
    SET_GPR_U32(ctx, 31, 0x2B6AC4u);
    ctx->pc = 0x2B6AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6ABCu;
    // 0x2b6ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2B6ABCu, 0x2B6AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6AC4u;
label_2b6ac4:
    // 0x2b6ac4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2b6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2b6ac8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2b6ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2b6acc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ad4: 0xc088ade  jal         func_222B78
    ctx->pc = 0x2B6AD4u;
    SET_GPR_U32(ctx, 31, 0x2B6ADCu);
    ctx->pc = 0x2B6AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6AD4u;
    // 0x2b6ad8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2B6AD4u, 0x2B6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6ADCu;
label_2b6adc:
    // 0x2b6adc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b6adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6ae0: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2b6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2b6ae4: 0x384200dd  xori        $v0, $v0, 0xDD
    ctx->pc = 0x2b6ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)221);
    // 0x2b6ae8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6AE8u;
    {
        const bool branch_taken_0x2b6ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ae8) {
            ctx->pc = 0x2B6B0Cu;
            goto label_2b6b0c;
        }
    }
    ctx->pc = 0x2B6AF0u;
    // 0x2b6af0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6af8: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x2b6af8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2b6afc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b6afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b6b00: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2b6b00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b6b04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6B04u;
    {
        const bool branch_taken_0x2b6b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6b04) {
            ctx->pc = 0x2B6B10u;
            goto label_2b6b10;
        }
    }
    ctx->pc = 0x2B6B0Cu;
label_2b6b0c:
    // 0x2b6b0c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b6b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2b6b10:
    // 0x2b6b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b6b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6b14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6b1c: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x2b6b1cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6b20: 0x0  nop
    ctx->pc = 0x2b6b20u;
    // NOP
    // 0x2b6b24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b6b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b6b28: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x2b6b28u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
    // 0x2b6b2c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b6b2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b6b30: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b6b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b6b34: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b6b38: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x2b6b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_2b6b3c:
    // 0x2b6b3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6b40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2b6b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b6b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b48: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b6b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b4c: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B54u);
    ctx->pc = 0x2B6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B4Cu;
    // 0x2b6b50: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B6B4Cu, 0x2B6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B54u;
label_2b6b54:
    // 0x2b6b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6b58:
    // 0x2b6b58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b6b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b6b5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b6b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b6b60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b6b60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6b64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b6b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6b68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b6b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6b6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b6b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b74: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2b6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6b78: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2b6b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B7Cu;
        // 0x2b6b80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6B84u;
    // 0x2b6b84: 0x0  nop
    ctx->pc = 0x2b6b84u;
    // NOP
    ctx->pc = 0x2b6b88u;
}
