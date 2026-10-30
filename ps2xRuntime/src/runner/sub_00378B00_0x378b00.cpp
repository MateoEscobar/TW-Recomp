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

// Function: sub_00378B00
// Address: 0x378b00 - 0x378bf8
void sub_00378B00_0x378b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378B00_0x378b00");
#endif

    switch (ctx->pc) {
        case 0x378b2cu: goto label_378b2c;
        case 0x378b34u: goto label_378b34;
        case 0x378b48u: goto label_378b48;
        case 0x378b58u: goto label_378b58;
        case 0x378b70u: goto label_378b70;
        case 0x378b78u: goto label_378b78;
        case 0x378b98u: goto label_378b98;
        case 0x378ba0u: goto label_378ba0;
        case 0x378bb0u: goto label_378bb0;
        case 0x378bc4u: goto label_378bc4;
        default: break;
    }

    ctx->pc = 0x378b00u;

    // 0x378b00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x378b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x378b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378b08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x378b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x378b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x378b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x378b14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x378b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x378b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x378b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x378b1c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x378b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x378b20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378b24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378B24u;
    SET_GPR_U32(ctx, 31, 0x378B2Cu);
    ctx->pc = 0x378B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B24u;
    // 0x378b28: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378B24u, 0x378B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B2Cu;
label_378b2c:
    // 0x378b2c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378B2Cu;
    SET_GPR_U32(ctx, 31, 0x378B34u);
    ctx->pc = 0x378B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B2Cu;
    // 0x378b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378B2Cu, 0x378B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B34u;
label_378b34:
    // 0x378b34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x378b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378b40: 0xc1024c6  jal         func_409318
    ctx->pc = 0x378B40u;
    SET_GPR_U32(ctx, 31, 0x378B48u);
    ctx->pc = 0x378B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B40u;
    // 0x378b44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x378B40u, 0x378B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B48u;
label_378b48:
    // 0x378b48: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x378b48u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x378b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b50: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x378b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b54: 0x0  nop
    ctx->pc = 0x378b54u;
    // NOP
label_378b58:
    // 0x378b58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378b64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b68: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378B68u;
    SET_GPR_U32(ctx, 31, 0x378B70u);
    ctx->pc = 0x378B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B68u;
    // 0x378b6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378B68u, 0x378B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B70u;
label_378b70:
    // 0x378b70: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378B70u;
    SET_GPR_U32(ctx, 31, 0x378B78u);
    ctx->pc = 0x378B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B70u;
    // 0x378b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378B70u, 0x378B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B78u;
label_378b78:
    // 0x378b78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x378b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x378b7c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x378b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378b80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378B80u;
    {
        const bool branch_taken_0x378b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B80u;
        // 0x378b84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b80) {
            ctx->pc = 0x378B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378b58;
        }
    }
    ctx->pc = 0x378B88u;
    // 0x378b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x378b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x378b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b90: 0xc0e70b8  jal         func_39C2E0
    ctx->pc = 0x378B90u;
    SET_GPR_U32(ctx, 31, 0x378B98u);
    ctx->pc = 0x378B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B90u;
    // 0x378b94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C2E0u, 0x378B90u, 0x378B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B98u;
label_378b98:
    // 0x378b98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b9c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x378b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_378ba0:
    // 0x378ba0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x378ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x378ba4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378ba8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x378BA8u;
    SET_GPR_U32(ctx, 31, 0x378BB0u);
    ctx->pc = 0x378BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378BA8u;
    // 0x378bac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x378BA8u, 0x378BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378BB0u;
label_378bb0:
    // 0x378bb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378bb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378bbc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x378BBCu;
    SET_GPR_U32(ctx, 31, 0x378BC4u);
    ctx->pc = 0x378BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378BBCu;
    // 0x378bc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x378BBCu, 0x378BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378BC4u;
label_378bc4:
    // 0x378bc4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x378bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378bc8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378BC8u;
    {
        const bool branch_taken_0x378bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BC8u;
        // 0x378bcc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bc8) {
            ctx->pc = 0x378BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378ba0;
        }
    }
    ctx->pc = 0x378BD0u;
    // 0x378bd0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x378bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x378bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378bd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x378bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x378bdc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x378bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378be0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x378be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378be4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x378be4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378bec: 0x3e00008  jr          $ra
    ctx->pc = 0x378BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BECu;
        // 0x378bf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378BF4u;
    // 0x378bf4: 0x0  nop
    ctx->pc = 0x378bf4u;
    // NOP
    ctx->pc = 0x378bf8u;
}
