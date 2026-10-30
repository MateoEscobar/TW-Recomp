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

// Function: sub_00286BA8
// Address: 0x286ba8 - 0x286cc8
void sub_00286BA8_0x286ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286BA8_0x286ba8");
#endif

    switch (ctx->pc) {
        case 0x286bccu: goto label_286bcc;
        case 0x286bf0u: goto label_286bf0;
        case 0x286c00u: goto label_286c00;
        case 0x286c18u: goto label_286c18;
        case 0x286c2cu: goto label_286c2c;
        case 0x286c4cu: goto label_286c4c;
        case 0x286c74u: goto label_286c74;
        case 0x286c90u: goto label_286c90;
        case 0x286ca0u: goto label_286ca0;
        default: break;
    }

    ctx->pc = 0x286ba8u;

    // 0x286ba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286bac: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x286bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x286bb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x286bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x286bb4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x286bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x286bb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x286bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x286bbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x286bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x286bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286bc4: 0xc089998  jal         func_226660
    ctx->pc = 0x286BC4u;
    SET_GPR_U32(ctx, 31, 0x286BCCu);
    ctx->pc = 0x286BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BC4u;
    // 0x286bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x286BC4u, 0x286BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286BCCu;
label_286bcc:
    // 0x286bcc: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x286BCCu;
    {
        const bool branch_taken_0x286bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BCCu;
        // 0x286bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bcc) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286BD4u;
    // 0x286bd4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x286bd8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x286bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x286bdc: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x286be0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x286be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x286be4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x286be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x286be8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x286BE8u;
    SET_GPR_U32(ctx, 31, 0x286BF0u);
    ctx->pc = 0x286BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BE8u;
    // 0x286bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x286BE8u, 0x286BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286BF0u;
label_286bf0:
    // 0x286bf0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x286BF0u;
    {
        const bool branch_taken_0x286bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BF0u;
        // 0x286bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bf0) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286BF8u;
    // 0x286bf8: 0xc09e41e  jal         func_279078
    ctx->pc = 0x286BF8u;
    SET_GPR_U32(ctx, 31, 0x286C00u);
    ctx->pc = 0x286BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BF8u;
    // 0x286bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279078u, 0x286BF8u, 0x286C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C00u;
label_286c00:
    // 0x286c00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c04: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x286C04u;
    {
        const bool branch_taken_0x286c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C04u;
        // 0x286c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c04) {
            ctx->pc = 0x286CA8u;
            goto label_286ca8;
        }
    }
    ctx->pc = 0x286C0Cu;
    // 0x286c0c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x286c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x286c10: 0xc089998  jal         func_226660
    ctx->pc = 0x286C10u;
    SET_GPR_U32(ctx, 31, 0x286C18u);
    ctx->pc = 0x286C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C10u;
    // 0x286c14: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x286C10u, 0x286C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C18u;
label_286c18:
    // 0x286c18: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x286C18u;
    {
        const bool branch_taken_0x286c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C18u;
        // 0x286c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c18) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286C20u;
    // 0x286c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c24: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x286C24u;
    SET_GPR_U32(ctx, 31, 0x286C2Cu);
    ctx->pc = 0x286C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C24u;
    // 0x286c28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x286C24u, 0x286C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C2Cu;
label_286c2c:
    // 0x286c2c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286C2Cu;
    {
        const bool branch_taken_0x286c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C2Cu;
        // 0x286c30: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c2c) {
            ctx->pc = 0x286C60u;
            goto label_286c60;
        }
    }
    ctx->pc = 0x286C34u;
    // 0x286c34: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x286c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x286c38: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x286c3c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x286C3Cu;
    {
        const bool branch_taken_0x286c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c3c) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286C44u;
    // 0x286c44: 0xc087502  jal         func_21D408
    ctx->pc = 0x286C44u;
    SET_GPR_U32(ctx, 31, 0x286C4Cu);
    ctx->pc = 0x286C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C44u;
    // 0x286c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x286C44u, 0x286C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C4Cu;
label_286c4c:
    // 0x286c4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x286c50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x286c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c54: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x286C54u;
    {
        const bool branch_taken_0x286c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C54u;
        // 0x286c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c54) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286C5Cu;
    // 0x286c5c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x286c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_286c60:
    // 0x286c60: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x286c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x286c64: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x286c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x286c68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x286c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286c6c: 0xc107908  jal         func_41E420
    ctx->pc = 0x286C6Cu;
    SET_GPR_U32(ctx, 31, 0x286C74u);
    ctx->pc = 0x286C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C6Cu;
    // 0x286c70: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x286C6Cu, 0x286C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C74u;
label_286c74:
    // 0x286c74: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x286C74u;
    {
        const bool branch_taken_0x286c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286c74) {
            ctx->pc = 0x286C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286C74u;
            // 0x286c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286C98u;
            goto label_286c98;
        }
    }
    ctx->pc = 0x286C7Cu;
    // 0x286c7c: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x286c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286c84: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x286c88: 0xc107908  jal         func_41E420
    ctx->pc = 0x286C88u;
    SET_GPR_U32(ctx, 31, 0x286C90u);
    ctx->pc = 0x286C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C88u;
    // 0x286c8c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x286C88u, 0x286C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C90u;
label_286c90:
    // 0x286c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286C90u;
    {
        const bool branch_taken_0x286c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C90u;
        // 0x286c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c90) {
            ctx->pc = 0x286CA8u;
            goto label_286ca8;
        }
    }
    ctx->pc = 0x286C98u;
label_286c98:
    // 0x286c98: 0xc09d4a8  jal         func_2752A0
    ctx->pc = 0x286C98u;
    SET_GPR_U32(ctx, 31, 0x286CA0u);
    ctx->pc = 0x286C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C98u;
    // 0x286c9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2752A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2752A0u, 0x286C98u, 0x286CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CA0u;
label_286ca0:
    // 0x286ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286CA0u;
    {
        const bool branch_taken_0x286ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CA0u;
        // 0x286ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ca0) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286CA8u;
label_286ca8:
    // 0x286ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286cac:
    // 0x286cac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x286cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286cb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x286cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286cb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x286cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x286CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CBCu;
        // 0x286cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286CC4u;
    // 0x286cc4: 0x0  nop
    ctx->pc = 0x286cc4u;
    // NOP
    ctx->pc = 0x286cc8u;
}
