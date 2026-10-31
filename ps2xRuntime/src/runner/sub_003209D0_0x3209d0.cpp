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

// Function: sub_003209D0
// Address: 0x3209d0 - 0x320ac8
void sub_003209D0_0x3209d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003209D0_0x3209d0");
#endif

    switch (ctx->pc) {
        case 0x3209f4u: goto label_3209f4;
        case 0x320a24u: goto label_320a24;
        case 0x320a3cu: goto label_320a3c;
        case 0x320a54u: goto label_320a54;
        case 0x320a78u: goto label_320a78;
        case 0x320a8cu: goto label_320a8c;
        default: break;
    }

    ctx->pc = 0x3209d0u;

    // 0x3209d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3209d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3209d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3209d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3209d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3209d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3209dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3209dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3209e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3209e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3209e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3209e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3209e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3209ec: 0xc05959e  jal         func_165678
    ctx->pc = 0x3209ECu;
    SET_GPR_U32(ctx, 31, 0x3209F4u);
    ctx->pc = 0x3209F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3209ECu;
    // 0x3209f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3209ECu, 0x3209F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209F4u;
label_3209f4:
    // 0x3209f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3209f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3209f8: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x3209f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x3209fc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3209FCu;
    {
        const bool branch_taken_0x3209fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209FCu;
        // 0x320a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209fc) {
            ctx->pc = 0x320A44u;
            goto label_320a44;
        }
    }
    ctx->pc = 0x320A04u;
    // 0x320a04: 0x92300020  lbu         $s0, 0x20($s1)
    ctx->pc = 0x320a04u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x320a08: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x320A08u;
    {
        const bool branch_taken_0x320a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x320A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A08u;
        // 0x320a0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a08) {
            ctx->pc = 0x320A40u;
            goto label_320a40;
        }
    }
    ctx->pc = 0x320A10u;
    // 0x320a10: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x320A10u;
    {
        const bool branch_taken_0x320a10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A10u;
        // 0x320a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a10) {
            ctx->pc = 0x320A30u;
            goto label_320a30;
        }
    }
    ctx->pc = 0x320A18u;
    // 0x320a18: 0x8e420178  lw          $v0, 0x178($s2)
    ctx->pc = 0x320a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x320a1c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x320A1Cu;
    SET_GPR_U32(ctx, 31, 0x320A24u);
    ctx->pc = 0x320A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A1Cu;
    // 0x320a20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x320A1Cu, 0x320A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A24u;
label_320a24:
    // 0x320a24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x320a28: 0x1050001f  beq         $v0, $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x320A28u;
    {
        const bool branch_taken_0x320a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x320A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A28u;
        // 0x320a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a28) {
            ctx->pc = 0x320AA8u;
            goto label_320aa8;
        }
    }
    ctx->pc = 0x320A30u;
label_320a30:
    // 0x320a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a34: 0xc0c1a7c  jal         func_3069F0
    ctx->pc = 0x320A34u;
    SET_GPR_U32(ctx, 31, 0x320A3Cu);
    ctx->pc = 0x320A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A34u;
    // 0x320a38: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3069F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069F0u, 0x320A34u, 0x320A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A3Cu;
label_320a3c:
    // 0x320a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320a40:
    // 0x320a40: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x320a40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
label_320a44:
    // 0x320a44: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x320A44u;
    {
        const bool branch_taken_0x320a44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A44u;
        // 0x320a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a44) {
            ctx->pc = 0x320AA8u;
            goto label_320aa8;
        }
    }
    ctx->pc = 0x320A4Cu;
    // 0x320a4c: 0xc089f22  jal         func_227C88
    ctx->pc = 0x320A4Cu;
    SET_GPR_U32(ctx, 31, 0x320A54u);
    ctx->pc = 0x320A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A4Cu;
    // 0x320a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x320A4Cu, 0x320A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A54u;
label_320a54:
    // 0x320a54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x320a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320a5c: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x320A5Cu;
    {
        const bool branch_taken_0x320a5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x320A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A5Cu;
        // 0x320a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a5c) {
            ctx->pc = 0x320AA8u;
            goto label_320aa8;
        }
    }
    ctx->pc = 0x320A64u;
    // 0x320a64: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x320a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x320a68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x320A68u;
    {
        const bool branch_taken_0x320a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A68u;
        // 0x320a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a68) {
            ctx->pc = 0x320AA8u;
            goto label_320aa8;
        }
    }
    ctx->pc = 0x320A70u;
    // 0x320a70: 0xc089b98  jal         func_226E60
    ctx->pc = 0x320A70u;
    SET_GPR_U32(ctx, 31, 0x320A78u);
    ctx->pc = 0x320A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A70u;
    // 0x320a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x320A70u, 0x320A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A78u;
label_320a78:
    // 0x320a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a7c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320A7Cu;
    {
        const bool branch_taken_0x320a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A7Cu;
        // 0x320a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a7c) {
            ctx->pc = 0x320AA4u;
            goto label_320aa4;
        }
    }
    ctx->pc = 0x320A84u;
    // 0x320a84: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x320A84u;
    SET_GPR_U32(ctx, 31, 0x320A8Cu);
    ctx->pc = 0x320A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A84u;
    // 0x320a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x320A84u, 0x320A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A8Cu;
label_320a8c:
    // 0x320a8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320A8Cu;
    {
        const bool branch_taken_0x320a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A8Cu;
        // 0x320a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a8c) {
            ctx->pc = 0x320AA8u;
            goto label_320aa8;
        }
    }
    ctx->pc = 0x320A94u;
    // 0x320a94: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x320a98: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320a98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x320a9c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x320A9Cu;
    {
        const bool branch_taken_0x320a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a9c) {
            ctx->pc = 0x320AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320A9Cu;
            // 0x320aa0: 0xa2330018  sb          $s3, 0x18($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320AA4u;
            goto label_320aa4;
        }
    }
    ctx->pc = 0x320AA4u;
label_320aa4:
    // 0x320aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320aa8:
    // 0x320aa8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x320aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320aac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x320aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320ab0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x320ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320ab4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x320ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320abc: 0x3e00008  jr          $ra
    ctx->pc = 0x320ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ABCu;
        // 0x320ac0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320AC4u;
    // 0x320ac4: 0x0  nop
    ctx->pc = 0x320ac4u;
    // NOP
    ctx->pc = 0x320ac8u;
}
