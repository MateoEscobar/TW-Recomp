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

// Function: sub_001A6C58
// Address: 0x1a6c58 - 0x1a6d28
void sub_001A6C58_0x1a6c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6C58_0x1a6c58");
#endif

    switch (ctx->pc) {
        case 0x1a6c98u: goto label_1a6c98;
        case 0x1a6cc4u: goto label_1a6cc4;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6d08u: goto label_1a6d08;
        default: break;
    }

    ctx->pc = 0x1a6c58u;

    // 0x1a6c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6c5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a6c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a6c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6c6c: 0x8e021554  lw          $v0, 0x1554($s0)
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
    // 0x1a6c70: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A6C70u;
    {
        const bool branch_taken_0x1a6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c70) {
            ctx->pc = 0x1A6C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6C70u;
            // 0x1a6c74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6D18u;
            goto label_1a6d18;
        }
    }
    ctx->pc = 0x1A6C78u;
    // 0x1a6c78: 0x8e021548  lw          $v0, 0x1548($s0)
    ctx->pc = 0x1a6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5448)));
    // 0x1a6c7c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A6C7Cu;
    {
        const bool branch_taken_0x1a6c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c7c) {
            ctx->pc = 0x1A6C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6C7Cu;
            // 0x1a6c80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6D18u;
            goto label_1a6d18;
        }
    }
    ctx->pc = 0x1A6C84u;
    // 0x1a6c84: 0x8e021540  lw          $v0, 0x1540($s0)
    ctx->pc = 0x1a6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5440)));
    // 0x1a6c88: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1a6c88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1a6c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a6c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c90: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A6C90u;
    SET_GPR_U32(ctx, 31, 0x1A6C98u);
    ctx->pc = 0x1A6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C90u;
    // 0x1a6c94: 0xae021544  sw          $v0, 0x1544($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A6C90u, 0x1A6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C98u;
label_1a6c98:
    // 0x1a6c98: 0x8e051574  lw          $a1, 0x1574($s0)
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5492)));
    // 0x1a6c9c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1a6ca0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a6ca4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6cac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a6cb0: 0x9082041e  lbu         $v0, 0x41E($a0)
    ctx->pc = 0x1a6cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1054)));
    // 0x1a6cb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6CB4u;
    {
        const bool branch_taken_0x1a6cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6cb4) {
            ctx->pc = 0x1A6CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6CB4u;
            // 0x1a6cb8: 0x8e051544  lw          $a1, 0x1544($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6CC8u;
            goto label_1a6cc8;
        }
    }
    ctx->pc = 0x1A6CBCu;
    // 0x1a6cbc: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1A6CBCu;
    SET_GPR_U32(ctx, 31, 0x1A6CC4u);
    ctx->pc = 0x1A6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CBCu;
    // 0x1a6cc0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1A6CBCu, 0x1A6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CC4u;
label_1a6cc4:
    // 0x1a6cc4: 0x8e051544  lw          $a1, 0x1544($s0)
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5444)));
label_1a6cc8:
    // 0x1a6cc8: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A6CC8u;
    SET_GPR_U32(ctx, 31, 0x1A6CD0u);
    ctx->pc = 0x1A6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CC8u;
    // 0x1a6ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A6CC8u, 0x1A6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CD0u;
label_1a6cd0:
    // 0x1a6cd0: 0x8e041574  lw          $a0, 0x1574($s0)
    ctx->pc = 0x1a6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5492)));
    // 0x1a6cd4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x1a6cd8: 0x8e23489c  lw          $v1, 0x489C($s1)
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1a6cdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6ce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a6ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cf0: 0xa062041c  sb          $v0, 0x41C($v1)
    ctx->pc = 0x1a6cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1052), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6cf4: 0xa125480c  sb          $a1, 0x480C($t1)
    ctx->pc = 0x1a6cf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x51480Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x51480Cu, _value); } while (0);
    // 0x1a6cf8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1a6cfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d00: 0xc107138  jal         func_41C4E0
    ctx->pc = 0x1A6D00u;
    SET_GPR_U32(ctx, 31, 0x1A6D08u);
    ctx->pc = 0x1A6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D00u;
    // 0x1a6d04: 0x8e05156c  lw          $a1, 0x156C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4E0u, 0x1A6D00u, 0x1A6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D08u;
label_1a6d08:
    // 0x1a6d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6d0c: 0xae021548  sw          $v0, 0x1548($s0)
    ctx->pc = 0x1a6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5448), GPR_U32(ctx, 2));
    // 0x1a6d10: 0xae021560  sw          $v0, 0x1560($s0)
    ctx->pc = 0x1a6d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
    // 0x1a6d14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a6d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6d18:
    // 0x1a6d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6D28u;
}
