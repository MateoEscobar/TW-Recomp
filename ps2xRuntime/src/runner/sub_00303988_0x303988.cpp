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

// Function: sub_00303988
// Address: 0x303988 - 0x303db8
void sub_00303988_0x303988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303988_0x303988");
#endif

    switch (ctx->pc) {
        case 0x303a24u: goto label_303a24;
        case 0x303a34u: goto label_303a34;
        case 0x303a44u: goto label_303a44;
        case 0x303a54u: goto label_303a54;
        case 0x303a84u: goto label_303a84;
        case 0x303a94u: goto label_303a94;
        case 0x303ad4u: goto label_303ad4;
        case 0x303aecu: goto label_303aec;
        case 0x303af8u: goto label_303af8;
        case 0x303b54u: goto label_303b54;
        case 0x303b90u: goto label_303b90;
        case 0x303bc8u: goto label_303bc8;
        case 0x303be4u: goto label_303be4;
        case 0x303c0cu: goto label_303c0c;
        case 0x303c54u: goto label_303c54;
        case 0x303c70u: goto label_303c70;
        case 0x303c80u: goto label_303c80;
        case 0x303d20u: goto label_303d20;
        case 0x303d28u: goto label_303d28;
        case 0x303d4cu: goto label_303d4c;
        case 0x303d58u: goto label_303d58;
        case 0x303d90u: goto label_303d90;
        default: break;
    }

    ctx->pc = 0x303988u;

    // 0x303988: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x303988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30398c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303990: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x303990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x303994: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x303994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x303998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30399c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x30399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3039a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3039a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3039a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3039a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3039a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3039a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3039ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3039acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3039b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3039b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3039b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3039b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3039b8: 0x90a203ac  lbu         $v0, 0x3AC($a1)
    ctx->pc = 0x3039b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x3039bc: 0x144300f6  bne         $v0, $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x3039BCu;
    {
        const bool branch_taken_0x3039bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3039C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039BCu;
        // 0x3039c0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039bc) {
            ctx->pc = 0x303D98u;
            goto label_303d98;
        }
    }
    ctx->pc = 0x3039C4u;
    // 0x3039c4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3039c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3039c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3039cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3039CCu;
    {
        const bool branch_taken_0x3039cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039cc) {
            ctx->pc = 0x3039D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3039CCu;
            // 0x3039d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3039D4u;
            goto label_3039d4;
        }
    }
    ctx->pc = 0x3039D4u;
label_3039d4:
    // 0x3039d4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x3039d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3039d8: 0x1810  mfhi        $v1
    ctx->pc = 0x3039d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3039dc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3039DCu;
    {
        const bool branch_taken_0x3039dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3039E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039DCu;
        // 0x3039e0: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039dc) {
            ctx->pc = 0x303A00u;
            goto label_303a00;
        }
    }
    ctx->pc = 0x3039E4u;
    // 0x3039e4: 0x922202e4  lbu         $v0, 0x2E4($s1)
    ctx->pc = 0x3039e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x3039e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3039E8u;
    {
        const bool branch_taken_0x3039e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3039ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039E8u;
        // 0x3039ec: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039e8) {
            ctx->pc = 0x303A04u;
            goto label_303a04;
        }
    }
    ctx->pc = 0x3039F0u;
    // 0x3039f0: 0x80a301b0  lb          $v1, 0x1B0($a1)
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x3039f4: 0x8ea2489c  lw          $v0, 0x489C($s5)
    ctx->pc = 0x3039f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x3039f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3039f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3039fc: 0xa040042e  sb          $zero, 0x42E($v0)
    ctx->pc = 0x3039fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1070), (uint8_t)GPR_U32(ctx, 0));
label_303a00:
    // 0x303a00: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x303a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_303a04:
    // 0x303a04: 0x90620431  lbu         $v0, 0x431($v1)
    ctx->pc = 0x303a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1073)));
    // 0x303a08: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x303A08u;
    {
        const bool branch_taken_0x303a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A08u;
        // 0x303a0c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a08) {
            ctx->pc = 0x303D90u;
            goto label_303d90;
        }
    }
    ctx->pc = 0x303A10u;
    // 0x303a10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x303a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303a14: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x303a14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x303a18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x303a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303a1c: 0xc08a01c  jal         func_228070
    ctx->pc = 0x303A1Cu;
    SET_GPR_U32(ctx, 31, 0x303A24u);
    ctx->pc = 0x303A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A1Cu;
    // 0x303a20: 0x9050041a  lbu         $s0, 0x41A($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1050)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x303A1Cu, 0x303A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A24u;
label_303a24:
    // 0x303a24: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x303A24u;
    {
        const bool branch_taken_0x303a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a24) {
            ctx->pc = 0x303A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A24u;
            // 0x303a28: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303A60u;
            goto label_303a60;
        }
    }
    ctx->pc = 0x303A2Cu;
    // 0x303a2c: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x303A2Cu;
    SET_GPR_U32(ctx, 31, 0x303A34u);
    ctx->pc = 0x303A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A2Cu;
    // 0x303a30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x303A2Cu, 0x303A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A34u;
label_303a34:
    // 0x303a34: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x303A34u;
    {
        const bool branch_taken_0x303a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a34) {
            ctx->pc = 0x303A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A34u;
            // 0x303a38: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303A60u;
            goto label_303a60;
        }
    }
    ctx->pc = 0x303A3Cu;
    // 0x303a3c: 0xc08a170  jal         func_2285C0
    ctx->pc = 0x303A3Cu;
    SET_GPR_U32(ctx, 31, 0x303A44u);
    ctx->pc = 0x303A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A3Cu;
    // 0x303a40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C0u, 0x303A3Cu, 0x303A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A44u;
label_303a44:
    // 0x303a44: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x303A44u;
    {
        const bool branch_taken_0x303a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a44) {
            ctx->pc = 0x303A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A44u;
            // 0x303a48: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303A60u;
            goto label_303a60;
        }
    }
    ctx->pc = 0x303A4Cu;
    // 0x303a4c: 0xc08a17e  jal         func_2285F8
    ctx->pc = 0x303A4Cu;
    SET_GPR_U32(ctx, 31, 0x303A54u);
    ctx->pc = 0x303A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A4Cu;
    // 0x303a50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x303A4Cu, 0x303A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A54u;
label_303a54:
    // 0x303a54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303A54u;
    {
        const bool branch_taken_0x303a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A54u;
        // 0x303a58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a54) {
            ctx->pc = 0x303A64u;
            goto label_303a64;
        }
    }
    ctx->pc = 0x303A5Cu;
    // 0x303a5c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x303a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303a60:
    // 0x303a60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x303a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_303a64:
    // 0x303a64: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x303a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x303a68: 0x16000063  bnez        $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x303A68u;
    {
        const bool branch_taken_0x303a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x303A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A68u;
        // 0x303a6c: 0x8c720048  lw          $s2, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a68) {
            ctx->pc = 0x303BF8u;
            goto label_303bf8;
        }
    }
    ctx->pc = 0x303A70u;
    // 0x303a70: 0x5660000b  bnel        $s3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x303A70u;
    {
        const bool branch_taken_0x303a70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a70) {
            ctx->pc = 0x303A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A70u;
            // 0x303a74: 0x8e2201e8  lw          $v0, 0x1E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303AA0u;
            goto label_303aa0;
        }
    }
    ctx->pc = 0x303A78u;
    // 0x303a78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a7c: 0xc0c0f6e  jal         func_303DB8
    ctx->pc = 0x303A7Cu;
    SET_GPR_U32(ctx, 31, 0x303A84u);
    ctx->pc = 0x303A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A7Cu;
    // 0x303a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303DB8u, 0x303A7Cu, 0x303A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A84u;
label_303a84:
    // 0x303a84: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x303A84u;
    {
        const bool branch_taken_0x303a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a84) {
            ctx->pc = 0x303A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A84u;
            // 0x303a88: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B00u;
            goto label_303b00;
        }
    }
    ctx->pc = 0x303A8Cu;
    // 0x303a8c: 0xc0c0f9a  jal         func_303E68
    ctx->pc = 0x303A8Cu;
    SET_GPR_U32(ctx, 31, 0x303A94u);
    ctx->pc = 0x303A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303A8Cu;
    // 0x303a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303E68u, 0x303A8Cu, 0x303A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A94u;
label_303a94:
    // 0x303a94: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x303A94u;
    {
        const bool branch_taken_0x303a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a94) {
            ctx->pc = 0x303A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A94u;
            // 0x303a98: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B00u;
            goto label_303b00;
        }
    }
    ctx->pc = 0x303A9Cu;
    // 0x303a9c: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x303a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_303aa0:
    // 0x303aa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303AA0u;
    {
        const bool branch_taken_0x303aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AA0u;
        // 0x303aa4: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303aa0) {
            ctx->pc = 0x303ABCu;
            goto label_303abc;
        }
    }
    ctx->pc = 0x303AA8u;
    // 0x303aa8: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x303aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x303aac: 0x13100b  movn        $v0, $zero, $s3
    ctx->pc = 0x303aacu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x303ab0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x303ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x303ab4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x303AB4u;
    {
        const bool branch_taken_0x303ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AB4u;
        // 0x303ab8: 0xae2201e8  sw          $v0, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ab4) {
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303ABCu;
label_303abc:
    // 0x303abc: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x303ABCu;
    {
        const bool branch_taken_0x303abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303ABCu;
        // 0x303ac0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303abc) {
            ctx->pc = 0x303D98u;
            goto label_303d98;
        }
    }
    ctx->pc = 0x303AC4u;
    // 0x303ac4: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x303AC4u;
    {
        const bool branch_taken_0x303ac4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x303AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AC4u;
        // 0x303ac8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ac4) {
            ctx->pc = 0x303AE0u;
            goto label_303ae0;
        }
    }
    ctx->pc = 0x303ACCu;
    // 0x303acc: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x303ACCu;
    SET_GPR_U32(ctx, 31, 0x303AD4u);
    ctx->pc = 0x303AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303ACCu;
    // 0x303ad0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x303ACCu, 0x303AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AD4u;
label_303ad4:
    // 0x303ad4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x303AD4u;
    {
        const bool branch_taken_0x303ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AD4u;
        // 0x303ad8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ad4) {
            ctx->pc = 0x303AE0u;
            goto label_303ae0;
        }
    }
    ctx->pc = 0x303ADCu;
    // 0x303adc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x303adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303ae0:
    // 0x303ae0: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x303ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x303ae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303ae8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x303ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_303aec:
    // 0x303aec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x303aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303af0: 0xc107138  jal         func_41C4E0
    ctx->pc = 0x303AF0u;
    SET_GPR_U32(ctx, 31, 0x303AF8u);
    ctx->pc = 0x303AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AF0u;
    // 0x303af4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x303AF0u, 0x303AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AF8u;
label_303af8:
    // 0x303af8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x303AF8u;
    {
        const bool branch_taken_0x303af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AF8u;
        // 0x303afc: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303af8) {
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303B00u;
label_303b00:
    // 0x303b00: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x303b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x303b04: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303B04u;
    {
        const bool branch_taken_0x303b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b04) {
            ctx->pc = 0x303B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B04u;
            // 0x303b08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B0Cu;
            goto label_303b0c;
        }
    }
    ctx->pc = 0x303B0Cu;
label_303b0c:
    // 0x303b0c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x303b0cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x303b10: 0x1810  mfhi        $v1
    ctx->pc = 0x303b10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x303b14: 0x5460009f  bnel        $v1, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x303B14u;
    {
        const bool branch_taken_0x303b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303b14) {
            ctx->pc = 0x303B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B14u;
            // 0x303b18: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303B1Cu;
    // 0x303b1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x303b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303b20: 0x3c090071  lui         $t1, 0x71
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)113 << 16));
    // 0x303b24: 0x25294b00  addiu       $t1, $t1, 0x4B00
    ctx->pc = 0x303b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19200));
    // 0x303b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b2c: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x303b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x303b30: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x303b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x303b34: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x303b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x303b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x303b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b3c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x303b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x303b40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x303b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b44: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x303b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x303b48: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x303b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b4c: 0xc105df6  jal         func_4177D8
    ctx->pc = 0x303B4Cu;
    SET_GPR_U32(ctx, 31, 0x303B54u);
    ctx->pc = 0x303B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B4Cu;
    // 0x303b50: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x303B4Cu, 0x303B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B54u;
label_303b54:
    // 0x303b54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b58: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
    ctx->pc = 0x303B58u;
    {
        const bool branch_taken_0x303b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B58u;
        // 0x303b5c: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b58) {
            ctx->pc = 0x303D90u;
            goto label_303d90;
        }
    }
    ctx->pc = 0x303B60u;
    // 0x303b60: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x303b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x303b64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303b68: 0x0  nop
    ctx->pc = 0x303b68u;
    // NOP
    // 0x303b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303b70: 0x0  nop
    ctx->pc = 0x303b70u;
    // NOP
    // 0x303b74: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x303B74u;
    {
        const bool branch_taken_0x303b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x303B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B74u;
        // 0x303b78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b74) {
            ctx->pc = 0x303D90u;
            goto label_303d90;
        }
    }
    ctx->pc = 0x303B7Cu;
    // 0x303b7c: 0x920500d8  lbu         $a1, 0xD8($s0)
    ctx->pc = 0x303b7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x303b80: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x303b84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b88: 0xc0e6960  jal         func_39A580
    ctx->pc = 0x303B88u;
    SET_GPR_U32(ctx, 31, 0x303B90u);
    ctx->pc = 0x303B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B88u;
    // 0x303b8c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A580u, 0x303B88u, 0x303B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303B90u;
label_303b90:
    // 0x303b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x303b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303b98: 0x5482007e  bnel        $a0, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x303B98u;
    {
        const bool branch_taken_0x303b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x303b98) {
            ctx->pc = 0x303B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303B98u;
            // 0x303b9c: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303BA0u;
    // 0x303ba0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x303ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303ba4: 0x904305b7  lbu         $v1, 0x5B7($v0)
    ctx->pc = 0x303ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1463)));
    // 0x303ba8: 0x3902b  sltu        $s2, $zero, $v1
    ctx->pc = 0x303ba8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303bac: 0x56440079  bnel        $s2, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x303BACu;
    {
        const bool branch_taken_0x303bac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x303bac) {
            ctx->pc = 0x303BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303BACu;
            // 0x303bb0: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303BB4u;
    // 0x303bb4: 0x92220152  lbu         $v0, 0x152($s1)
    ctx->pc = 0x303bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 338)));
    // 0x303bb8: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x303BB8u;
    {
        const bool branch_taken_0x303bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303bb8) {
            ctx->pc = 0x303BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303BB8u;
            // 0x303bbc: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303BC0u;
    // 0x303bc0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x303BC0u;
    SET_GPR_U32(ctx, 31, 0x303BC8u);
    ctx->pc = 0x303BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BC0u;
    // 0x303bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x303BC0u, 0x303BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BC8u;
label_303bc8:
    // 0x303bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x303bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x303bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x303bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303bdc: 0xc09381e  jal         func_24E078
    ctx->pc = 0x303BDCu;
    SET_GPR_U32(ctx, 31, 0x303BE4u);
    ctx->pc = 0x303BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BDCu;
    // 0x303be0: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x303BDCu, 0x303BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BE4u;
label_303be4:
    // 0x303be4: 0x5452006b  bnel        $v0, $s2, . + 4 + (0x6B << 2)
    ctx->pc = 0x303BE4u;
    {
        const bool branch_taken_0x303be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x303be4) {
            ctx->pc = 0x303BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303BE4u;
            // 0x303be8: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303BECu;
    // 0x303bec: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x303becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x303bf0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x303BF0u;
    {
        const bool branch_taken_0x303bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BF0u;
        // 0x303bf4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bf0) {
            ctx->pc = 0x303D7Cu;
            goto label_303d7c;
        }
    }
    ctx->pc = 0x303BF8u;
label_303bf8:
    // 0x303bf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x303bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303bfc: 0x16050011  bne         $s0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x303BFCu;
    {
        const bool branch_taken_0x303bfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x303C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BFCu;
        // 0x303c00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bfc) {
            ctx->pc = 0x303C44u;
            goto label_303c44;
        }
    }
    ctx->pc = 0x303C04u;
    // 0x303c04: 0xc059688  jal         func_165A20
    ctx->pc = 0x303C04u;
    SET_GPR_U32(ctx, 31, 0x303C0Cu);
    ctx->pc = 0x303C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C04u;
    // 0x303c08: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A20u, 0x303C04u, 0x303C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C0Cu;
label_303c0c:
    // 0x303c0c: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x303C0Cu;
    {
        const bool branch_taken_0x303c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c0c) {
            ctx->pc = 0x303C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C0Cu;
            // 0x303c10: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C14u;
    // 0x303c14: 0x922202d4  lbu         $v0, 0x2D4($s1)
    ctx->pc = 0x303c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 724)));
    // 0x303c18: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x303C18u;
    {
        const bool branch_taken_0x303c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c18) {
            ctx->pc = 0x303C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C18u;
            // 0x303c1c: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C20u;
    // 0x303c20: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x303c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x303c24: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x303C24u;
    {
        const bool branch_taken_0x303c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C24u;
        // 0x303c28: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c24) {
            ctx->pc = 0x303C9Cu;
            goto label_303c9c;
        }
    }
    ctx->pc = 0x303C2Cu;
    // 0x303c2c: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x303C2Cu;
    {
        const bool branch_taken_0x303c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C2Cu;
        // 0x303c30: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c2c) {
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C34u;
    // 0x303c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x303c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303c3c: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x303C3Cu;
    {
        const bool branch_taken_0x303c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C3Cu;
        // 0x303c40: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c3c) {
            ctx->pc = 0x303AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303aec;
        }
    }
    ctx->pc = 0x303C44u;
label_303c44:
    // 0x303c44: 0x1602001e  bne         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x303C44u;
    {
        const bool branch_taken_0x303c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x303C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C44u;
        // 0x303c48: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c44) {
            ctx->pc = 0x303CC0u;
            goto label_303cc0;
        }
    }
    ctx->pc = 0x303C4Cu;
    // 0x303c4c: 0xc059688  jal         func_165A20
    ctx->pc = 0x303C4Cu;
    SET_GPR_U32(ctx, 31, 0x303C54u);
    ctx->pc = 0x303C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C4Cu;
    // 0x303c50: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A20u, 0x303C4Cu, 0x303C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C54u;
label_303c54:
    // 0x303c54: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x303C54u;
    {
        const bool branch_taken_0x303c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c54) {
            ctx->pc = 0x303C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C54u;
            // 0x303c58: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C5Cu;
    // 0x303c5c: 0x922202d4  lbu         $v0, 0x2D4($s1)
    ctx->pc = 0x303c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 724)));
    // 0x303c60: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x303C60u;
    {
        const bool branch_taken_0x303c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c60) {
            ctx->pc = 0x303C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C60u;
            // 0x303c64: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C68u;
    // 0x303c68: 0xc088edc  jal         func_223B70
    ctx->pc = 0x303C68u;
    SET_GPR_U32(ctx, 31, 0x303C70u);
    ctx->pc = 0x303C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C68u;
    // 0x303c6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x303C68u, 0x303C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C70u;
label_303c70:
    // 0x303c70: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x303C70u;
    {
        const bool branch_taken_0x303c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c70) {
            ctx->pc = 0x303C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C70u;
            // 0x303c74: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C78u;
    // 0x303c78: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x303C78u;
    SET_GPR_U32(ctx, 31, 0x303C80u);
    ctx->pc = 0x303C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C78u;
    // 0x303c7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x303C78u, 0x303C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C80u;
label_303c80:
    // 0x303c80: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x303C80u;
    {
        const bool branch_taken_0x303c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c80) {
            ctx->pc = 0x303C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C80u;
            // 0x303c84: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C88u;
    // 0x303c88: 0x56600042  bnel        $s3, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x303C88u;
    {
        const bool branch_taken_0x303c88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c88) {
            ctx->pc = 0x303C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303C88u;
            // 0x303c8c: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303C90u;
    // 0x303c90: 0x8e2201e8  lw          $v0, 0x1E8($s1)
    ctx->pc = 0x303c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x303c94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303C94u;
    {
        const bool branch_taken_0x303c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C94u;
        // 0x303c98: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c94) {
            ctx->pc = 0x303CA8u;
            goto label_303ca8;
        }
    }
    ctx->pc = 0x303C9Cu;
label_303c9c:
    // 0x303c9c: 0x264205dc  addiu       $v0, $s2, 0x5DC
    ctx->pc = 0x303c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
    // 0x303ca0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x303CA0u;
    {
        const bool branch_taken_0x303ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CA0u;
        // 0x303ca4: 0xae2201e8  sw          $v0, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ca0) {
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303CA8u;
label_303ca8:
    // 0x303ca8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x303CA8u;
    {
        const bool branch_taken_0x303ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CA8u;
        // 0x303cac: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ca8) {
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303CB0u;
    // 0x303cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303cb4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x303cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303cb8: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
    ctx->pc = 0x303CB8u;
    {
        const bool branch_taken_0x303cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CB8u;
        // 0x303cbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cb8) {
            ctx->pc = 0x303AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303aec;
        }
    }
    ctx->pc = 0x303CC0u;
label_303cc0:
    // 0x303cc0: 0x56020034  bnel        $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x303CC0u;
    {
        const bool branch_taken_0x303cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x303cc0) {
            ctx->pc = 0x303CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303CC0u;
            // 0x303cc4: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303CC8u;
    // 0x303cc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x303cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303ccc: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x303cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x303cd0: 0x804401b0  lb          $a0, 0x1B0($v0)
    ctx->pc = 0x303cd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x303cd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303cd8: 0x9062042c  lbu         $v0, 0x42C($v1)
    ctx->pc = 0x303cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x303cdc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303ce0: 0x5445002c  bnel        $v0, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x303CE0u;
    {
        const bool branch_taken_0x303ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x303ce0) {
            ctx->pc = 0x303CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303CE0u;
            // 0x303ce4: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303CE8u;
    // 0x303ce8: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x303ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x303cec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x303cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x303cf0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x303CF0u;
    {
        const bool branch_taken_0x303cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303cf0) {
            ctx->pc = 0x303CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303CF0u;
            // 0x303cf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x303CF8u;
            goto label_303cf8;
        }
    }
    ctx->pc = 0x303CF8u;
label_303cf8:
    // 0x303cf8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x303cf8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x303cfc: 0x1810  mfhi        $v1
    ctx->pc = 0x303cfcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x303d00: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x303D00u;
    {
        const bool branch_taken_0x303d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303d00) {
            ctx->pc = 0x303D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303D00u;
            // 0x303d04: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303D08u;
    // 0x303d08: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x303d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x303d0c: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x303d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x303d10: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x303d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x303d14: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x303d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x303d18: 0xc0e4060  jal         func_390180
    ctx->pc = 0x303D18u;
    SET_GPR_U32(ctx, 31, 0x303D20u);
    ctx->pc = 0x303D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303D18u;
    // 0x303d1c: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x303D18u, 0x303D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D20u;
label_303d20:
    // 0x303d20: 0xc105e98  jal         func_417A60
    ctx->pc = 0x303D20u;
    SET_GPR_U32(ctx, 31, 0x303D28u);
    ctx->pc = 0x303D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303D20u;
    // 0x303d24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x303D20u, 0x303D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D28u;
label_303d28:
    // 0x303d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x303d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d2c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x303D2Cu;
    {
        const bool branch_taken_0x303d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D2Cu;
        // 0x303d30: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d2c) {
            ctx->pc = 0x303D74u;
            goto label_303d74;
        }
    }
    ctx->pc = 0x303D34u;
    // 0x303d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303d38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x303d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x303d3c: 0x84700092  lh          $s0, 0x92($v1)
    ctx->pc = 0x303d3cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x303d40: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x303d40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x303d44: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x303D44u;
    SET_GPR_U32(ctx, 31, 0x303D4Cu);
    ctx->pc = 0x303D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303D44u;
    // 0x303d48: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x303D44u, 0x303D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D4Cu;
label_303d4c:
    // 0x303d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d50: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x303D50u;
    SET_GPR_U32(ctx, 31, 0x303D58u);
    ctx->pc = 0x303D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303D50u;
    // 0x303d54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x303D50u, 0x303D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D58u;
label_303d58:
    // 0x303d58: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x303d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x303d5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x303d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303d60: 0x0  nop
    ctx->pc = 0x303d60u;
    // NOP
    // 0x303d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d68: 0x0  nop
    ctx->pc = 0x303d68u;
    // NOP
    // 0x303d6c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x303D6Cu;
    {
        const bool branch_taken_0x303d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303d6c) {
            ctx->pc = 0x303D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303D6Cu;
            // 0x303d70: 0xae2001e8  sw          $zero, 0x1E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303D94u;
            goto label_303d94;
        }
    }
    ctx->pc = 0x303D74u;
label_303d74:
    // 0x303d74: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x303d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x303d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303d7c:
    // 0x303d7c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x303d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303d80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303d84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x303d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d88: 0xc107138  jal         func_41C4E0
    ctx->pc = 0x303D88u;
    SET_GPR_U32(ctx, 31, 0x303D90u);
    ctx->pc = 0x303D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303D88u;
    // 0x303d8c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x303D88u, 0x303D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D90u;
label_303d90:
    // 0x303d90: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x303d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_303d94:
    // 0x303d94: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x303d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_303d98:
    // 0x303d98: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x303d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303d9c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x303d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303da0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x303da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303da4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x303da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303da8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x303da8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303db0: 0x3e00008  jr          $ra
    ctx->pc = 0x303DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DB0u;
        // 0x303db4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303DB8u;
}
