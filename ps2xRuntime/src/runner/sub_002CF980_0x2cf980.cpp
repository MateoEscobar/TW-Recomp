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

// Function: sub_002CF980
// Address: 0x2cf980 - 0x2cfad0
void sub_002CF980_0x2cf980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF980_0x2cf980");
#endif

    switch (ctx->pc) {
        case 0x2cf980u: goto label_2cf980;
        case 0x2cf984u: goto label_2cf984;
        case 0x2cf988u: goto label_2cf988;
        case 0x2cf98cu: goto label_2cf98c;
        case 0x2cf990u: goto label_2cf990;
        case 0x2cf994u: goto label_2cf994;
        case 0x2cf998u: goto label_2cf998;
        case 0x2cf99cu: goto label_2cf99c;
        case 0x2cf9a0u: goto label_2cf9a0;
        case 0x2cf9a4u: goto label_2cf9a4;
        case 0x2cf9a8u: goto label_2cf9a8;
        case 0x2cf9acu: goto label_2cf9ac;
        case 0x2cf9b0u: goto label_2cf9b0;
        case 0x2cf9b4u: goto label_2cf9b4;
        case 0x2cf9b8u: goto label_2cf9b8;
        case 0x2cf9bcu: goto label_2cf9bc;
        case 0x2cf9c0u: goto label_2cf9c0;
        case 0x2cf9c4u: goto label_2cf9c4;
        case 0x2cf9c8u: goto label_2cf9c8;
        case 0x2cf9ccu: goto label_2cf9cc;
        case 0x2cf9d0u: goto label_2cf9d0;
        case 0x2cf9d4u: goto label_2cf9d4;
        case 0x2cf9d8u: goto label_2cf9d8;
        case 0x2cf9dcu: goto label_2cf9dc;
        case 0x2cf9e0u: goto label_2cf9e0;
        case 0x2cf9e4u: goto label_2cf9e4;
        case 0x2cf9e8u: goto label_2cf9e8;
        case 0x2cf9ecu: goto label_2cf9ec;
        case 0x2cf9f0u: goto label_2cf9f0;
        case 0x2cf9f4u: goto label_2cf9f4;
        case 0x2cf9f8u: goto label_2cf9f8;
        case 0x2cf9fcu: goto label_2cf9fc;
        case 0x2cfa00u: goto label_2cfa00;
        case 0x2cfa04u: goto label_2cfa04;
        case 0x2cfa08u: goto label_2cfa08;
        case 0x2cfa0cu: goto label_2cfa0c;
        case 0x2cfa10u: goto label_2cfa10;
        case 0x2cfa14u: goto label_2cfa14;
        case 0x2cfa18u: goto label_2cfa18;
        case 0x2cfa1cu: goto label_2cfa1c;
        case 0x2cfa20u: goto label_2cfa20;
        case 0x2cfa24u: goto label_2cfa24;
        case 0x2cfa28u: goto label_2cfa28;
        case 0x2cfa2cu: goto label_2cfa2c;
        case 0x2cfa30u: goto label_2cfa30;
        case 0x2cfa34u: goto label_2cfa34;
        case 0x2cfa38u: goto label_2cfa38;
        case 0x2cfa3cu: goto label_2cfa3c;
        case 0x2cfa40u: goto label_2cfa40;
        case 0x2cfa44u: goto label_2cfa44;
        case 0x2cfa48u: goto label_2cfa48;
        case 0x2cfa4cu: goto label_2cfa4c;
        case 0x2cfa50u: goto label_2cfa50;
        case 0x2cfa54u: goto label_2cfa54;
        case 0x2cfa58u: goto label_2cfa58;
        case 0x2cfa5cu: goto label_2cfa5c;
        case 0x2cfa60u: goto label_2cfa60;
        case 0x2cfa64u: goto label_2cfa64;
        case 0x2cfa68u: goto label_2cfa68;
        case 0x2cfa6cu: goto label_2cfa6c;
        case 0x2cfa70u: goto label_2cfa70;
        case 0x2cfa74u: goto label_2cfa74;
        case 0x2cfa78u: goto label_2cfa78;
        case 0x2cfa7cu: goto label_2cfa7c;
        case 0x2cfa80u: goto label_2cfa80;
        case 0x2cfa84u: goto label_2cfa84;
        case 0x2cfa88u: goto label_2cfa88;
        case 0x2cfa8cu: goto label_2cfa8c;
        case 0x2cfa90u: goto label_2cfa90;
        case 0x2cfa94u: goto label_2cfa94;
        case 0x2cfa98u: goto label_2cfa98;
        case 0x2cfa9cu: goto label_2cfa9c;
        case 0x2cfaa0u: goto label_2cfaa0;
        case 0x2cfaa4u: goto label_2cfaa4;
        case 0x2cfaa8u: goto label_2cfaa8;
        case 0x2cfaacu: goto label_2cfaac;
        case 0x2cfab0u: goto label_2cfab0;
        case 0x2cfab4u: goto label_2cfab4;
        case 0x2cfab8u: goto label_2cfab8;
        case 0x2cfabcu: goto label_2cfabc;
        case 0x2cfac0u: goto label_2cfac0;
        case 0x2cfac4u: goto label_2cfac4;
        case 0x2cfac8u: goto label_2cfac8;
        case 0x2cfaccu: goto label_2cfacc;
        default: break;
    }

    ctx->pc = 0x2cf980u;

label_2cf980:
    // 0x2cf980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cf980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cf984:
    // 0x2cf984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf988:
    // 0x2cf988: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cf988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2cf98c:
    // 0x2cf98c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cf98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2cf990:
    // 0x2cf990: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2cf990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf994:
    // 0x2cf994: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cf994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2cf998:
    // 0x2cf998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf99c:
    // 0x2cf99c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cf99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2cf9a0:
    // 0x2cf9a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2cf9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2cf9a4:
    // 0x2cf9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cf9a8:
    // 0x2cf9a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf9ac:
    // 0x2cf9ac: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cf9b0:
    // 0x2cf9b0: 0xc087b0e  jal         func_21EC38
label_2cf9b4:
    if (ctx->pc == 0x2CF9B4u) {
        ctx->pc = 0x2CF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9B0u;
        // 0x2cf9b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF9B8u;
        goto label_2cf9b8;
    }
    ctx->pc = 0x2CF9B0u;
    SET_GPR_U32(ctx, 31, 0x2CF9B8u);
    ctx->pc = 0x2CF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9B0u;
    // 0x2cf9b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2CF9B0u, 0x2CF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9B8u;
label_2cf9b8:
    // 0x2cf9b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2cf9bc:
    // 0x2cf9bc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2cf9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2cf9c0:
    // 0x2cf9c0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2cf9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2cf9c4:
    // 0x2cf9c4: 0x60f809  jalr        $v1
label_2cf9c8:
    if (ctx->pc == 0x2CF9C8u) {
        ctx->pc = 0x2CF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9C4u;
        // 0x2cf9c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF9CCu;
        goto label_2cf9cc;
    }
    ctx->pc = 0x2CF9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CF9CCu);
        ctx->pc = 0x2CF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9C4u;
        // 0x2cf9c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF9C4u, 0x2CF9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF9CCu;
label_2cf9cc:
    // 0x2cf9cc: 0x9222003b  lbu         $v0, 0x3B($s1)
    ctx->pc = 0x2cf9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_2cf9d0:
    // 0x2cf9d0: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
label_2cf9d4:
    if (ctx->pc == 0x2CF9D4u) {
        ctx->pc = 0x2CF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9D0u;
        // 0x2cf9d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF9D8u;
        goto label_2cf9d8;
    }
    ctx->pc = 0x2CF9D0u;
    {
        const bool branch_taken_0x2cf9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2cf9d0) {
            ctx->pc = 0x2CF9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF9D0u;
            // 0x2cf9d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA14u;
            goto label_2cfa14;
        }
    }
    ctx->pc = 0x2CF9D8u;
label_2cf9d8:
    // 0x2cf9d8: 0xc0a367c  jal         func_28D9F0
label_2cf9dc:
    if (ctx->pc == 0x2CF9DCu) {
        ctx->pc = 0x2CF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9D8u;
        // 0x2cf9dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF9E0u;
        goto label_2cf9e0;
    }
    ctx->pc = 0x2CF9D8u;
    SET_GPR_U32(ctx, 31, 0x2CF9E0u);
    ctx->pc = 0x2CF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9D8u;
    // 0x2cf9dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CF9D8u, 0x2CF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9E0u;
label_2cf9e0:
    // 0x2cf9e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf9e4:
    // 0x2cf9e4: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_2cf9e8:
    if (ctx->pc == 0x2CF9E8u) {
        ctx->pc = 0x2CF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9E4u;
        // 0x2cf9e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF9ECu;
        goto label_2cf9ec;
    }
    ctx->pc = 0x2CF9E4u;
    {
        const bool branch_taken_0x2cf9e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9E4u;
        // 0x2cf9e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf9e4) {
            ctx->pc = 0x2CFA9Cu;
            goto label_2cfa9c;
        }
    }
    ctx->pc = 0x2CF9ECu;
label_2cf9ec:
    // 0x2cf9ec: 0xc0884f6  jal         func_2213D8
label_2cf9f0:
    if (ctx->pc == 0x2CF9F0u) {
        ctx->pc = 0x2CF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9ECu;
        // 0x2cf9f0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF9F4u;
        goto label_2cf9f4;
    }
    ctx->pc = 0x2CF9ECu;
    SET_GPR_U32(ctx, 31, 0x2CF9F4u);
    ctx->pc = 0x2CF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9ECu;
    // 0x2cf9f0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CF9ECu, 0x2CF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9F4u;
label_2cf9f4:
    // 0x2cf9f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cf9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf9f8:
    // 0x2cf9f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cf9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf9fc:
    // 0x2cf9fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cf9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa00:
    // 0x2cfa00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cfa00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cfa04:
    // 0x2cfa04: 0xc0bf800  jal         func_2FE000
label_2cfa08:
    if (ctx->pc == 0x2CFA08u) {
        ctx->pc = 0x2CFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA04u;
        // 0x2cfa08: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA0Cu;
        goto label_2cfa0c;
    }
    ctx->pc = 0x2CFA04u;
    SET_GPR_U32(ctx, 31, 0x2CFA0Cu);
    ctx->pc = 0x2CFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA04u;
    // 0x2cfa08: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CFA04u, 0x2CFA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA0Cu;
label_2cfa0c:
    // 0x2cfa0c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2cfa10:
    if (ctx->pc == 0x2CFA10u) {
        ctx->pc = 0x2CFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA0Cu;
        // 0x2cfa10: 0xa2800284  sb          $zero, 0x284($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 644), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA14u;
        goto label_2cfa14;
    }
    ctx->pc = 0x2CFA0Cu;
    {
        const bool branch_taken_0x2cfa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA0Cu;
        // 0x2cfa10: 0xa2800284  sb          $zero, 0x284($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 644), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa0c) {
            ctx->pc = 0x2CFAA0u;
            goto label_2cfaa0;
        }
    }
    ctx->pc = 0x2CFA14u;
label_2cfa14:
    // 0x2cfa14: 0x909302d0  lbu         $s3, 0x2D0($a0)
    ctx->pc = 0x2cfa14u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 720)));
label_2cfa18:
    // 0x2cfa18: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_2cfa1c:
    if (ctx->pc == 0x2CFA1Cu) {
        ctx->pc = 0x2CFA20u;
        goto label_2cfa20;
    }
    ctx->pc = 0x2CFA18u;
    {
        const bool branch_taken_0x2cfa18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa18) {
            ctx->pc = 0x2CFA30u;
            goto label_2cfa30;
        }
    }
    ctx->pc = 0x2CFA20u;
label_2cfa20:
    // 0x2cfa20: 0xc0a482e  jal         func_2920B8
label_2cfa24:
    if (ctx->pc == 0x2CFA24u) {
        ctx->pc = 0x2CFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA20u;
        // 0x2cfa24: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA28u;
        goto label_2cfa28;
    }
    ctx->pc = 0x2CFA20u;
    SET_GPR_U32(ctx, 31, 0x2CFA28u);
    ctx->pc = 0x2CFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA20u;
    // 0x2cfa24: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920B8u, 0x2CFA20u, 0x2CFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA28u;
label_2cfa28:
    // 0x2cfa28: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2cfa2c:
    if (ctx->pc == 0x2CFA2Cu) {
        ctx->pc = 0x2CFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA28u;
        // 0x2cfa2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA30u;
        goto label_2cfa30;
    }
    ctx->pc = 0x2CFA28u;
    {
        const bool branch_taken_0x2cfa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA28u;
        // 0x2cfa2c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa28) {
            ctx->pc = 0x2CFA94u;
            goto label_2cfa94;
        }
    }
    ctx->pc = 0x2CFA30u;
label_2cfa30:
    // 0x2cfa30: 0xc08a200  jal         func_228800
label_2cfa34:
    if (ctx->pc == 0x2CFA34u) {
        ctx->pc = 0x2CFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA30u;
        // 0x2cfa34: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA38u;
        goto label_2cfa38;
    }
    ctx->pc = 0x2CFA30u;
    SET_GPR_U32(ctx, 31, 0x2CFA38u);
    ctx->pc = 0x2CFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA30u;
    // 0x2cfa34: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2CFA30u, 0x2CFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA38u;
label_2cfa38:
    // 0x2cfa38: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2cfa38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2cfa3c:
    // 0x2cfa3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2cfa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2cfa40:
    // 0x2cfa40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cfa44:
    // 0x2cfa44: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x2cfa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_2cfa48:
    // 0x2cfa48: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2cfa48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2cfa4c:
    // 0x2cfa4c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2cfa4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cfa50:
    // 0x2cfa50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cfa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cfa54:
    // 0x2cfa54: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
label_2cfa58:
    if (ctx->pc == 0x2CFA58u) {
        ctx->pc = 0x2CFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA54u;
        // 0x2cfa58: 0xa222003b  sb          $v0, 0x3B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA5Cu;
        goto label_2cfa5c;
    }
    ctx->pc = 0x2CFA54u;
    {
        const bool branch_taken_0x2cfa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2CFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA54u;
        // 0x2cfa58: 0xa222003b  sb          $v0, 0x3B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa54) {
            ctx->pc = 0x2CFA90u;
            goto label_2cfa90;
        }
    }
    ctx->pc = 0x2CFA5Cu;
label_2cfa5c:
    // 0x2cfa5c: 0xc0a367c  jal         func_28D9F0
label_2cfa60:
    if (ctx->pc == 0x2CFA60u) {
        ctx->pc = 0x2CFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA5Cu;
        // 0x2cfa60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA64u;
        goto label_2cfa64;
    }
    ctx->pc = 0x2CFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA64u);
    ctx->pc = 0x2CFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA5Cu;
    // 0x2cfa60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CFA5Cu, 0x2CFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA64u;
label_2cfa64:
    // 0x2cfa64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cfa64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa68:
    // 0x2cfa68: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2cfa6c:
    if (ctx->pc == 0x2CFA6Cu) {
        ctx->pc = 0x2CFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA68u;
        // 0x2cfa6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA70u;
        goto label_2cfa70;
    }
    ctx->pc = 0x2CFA68u;
    {
        const bool branch_taken_0x2cfa68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA68u;
        // 0x2cfa6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa68) {
            ctx->pc = 0x2CFA90u;
            goto label_2cfa90;
        }
    }
    ctx->pc = 0x2CFA70u;
label_2cfa70:
    // 0x2cfa70: 0xc0884f6  jal         func_2213D8
label_2cfa74:
    if (ctx->pc == 0x2CFA74u) {
        ctx->pc = 0x2CFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA70u;
        // 0x2cfa74: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA78u;
        goto label_2cfa78;
    }
    ctx->pc = 0x2CFA70u;
    SET_GPR_U32(ctx, 31, 0x2CFA78u);
    ctx->pc = 0x2CFA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA70u;
    // 0x2cfa74: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CFA70u, 0x2CFA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA78u;
label_2cfa78:
    // 0x2cfa78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cfa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cfa7c:
    // 0x2cfa7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cfa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa80:
    // 0x2cfa80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cfa80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cfa84:
    // 0x2cfa84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cfa84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cfa88:
    // 0x2cfa88: 0xc0bf800  jal         func_2FE000
label_2cfa8c:
    if (ctx->pc == 0x2CFA8Cu) {
        ctx->pc = 0x2CFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA88u;
        // 0x2cfa8c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFA90u;
        goto label_2cfa90;
    }
    ctx->pc = 0x2CFA88u;
    SET_GPR_U32(ctx, 31, 0x2CFA90u);
    ctx->pc = 0x2CFA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFA88u;
    // 0x2cfa8c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CFA88u, 0x2CFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA90u;
label_2cfa90:
    // 0x2cfa90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cfa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cfa94:
    // 0x2cfa94: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2cfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2cfa98:
    // 0x2cfa98: 0xa06202d0  sb          $v0, 0x2D0($v1)
    ctx->pc = 0x2cfa98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 720), (uint8_t)GPR_U32(ctx, 2));
label_2cfa9c:
    // 0x2cfa9c: 0xa2800284  sb          $zero, 0x284($s4)
    ctx->pc = 0x2cfa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 644), (uint8_t)GPR_U32(ctx, 0));
label_2cfaa0:
    // 0x2cfaa0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cfaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cfaa4:
    // 0x2cfaa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cfaa8:
    // 0x2cfaa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cfaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfaac:
    // 0x2cfaac: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2cfaacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_2cfab0:
    // 0x2cfab0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cfab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfab4:
    // 0x2cfab4: 0xa223003c  sb          $v1, 0x3C($s1)
    ctx->pc = 0x2cfab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 3));
label_2cfab8:
    // 0x2cfab8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cfab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cfabc:
    // 0x2cfabc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2cfabcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfac0:
    // 0x2cfac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfac4:
    // 0x2cfac4: 0x3e00008  jr          $ra
label_2cfac8:
    if (ctx->pc == 0x2CFAC8u) {
        ctx->pc = 0x2CFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAC4u;
        // 0x2cfac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFACCu;
        goto label_2cfacc;
    }
    ctx->pc = 0x2CFAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAC4u;
        // 0x2cfac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFACCu;
label_2cfacc:
    // 0x2cfacc: 0x0  nop
    ctx->pc = 0x2cfaccu;
    // NOP
    ctx->pc = 0x2cfad0u;
}
