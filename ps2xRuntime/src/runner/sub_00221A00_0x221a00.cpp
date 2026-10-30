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

// Function: sub_00221A00
// Address: 0x221a00 - 0x221aa0
void sub_00221A00_0x221a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221A00_0x221a00");
#endif

    switch (ctx->pc) {
        case 0x221a20u: goto label_221a20;
        case 0x221a4cu: goto label_221a4c;
        case 0x221a74u: goto label_221a74;
        case 0x221a88u: goto label_221a88;
        default: break;
    }

    ctx->pc = 0x221a00u;

    // 0x221a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221a04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x221a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221a0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x221a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x221a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x221a14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x221a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221a1c: 0x24c403c8  addiu       $a0, $a2, 0x3C8
    ctx->pc = 0x221a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 968));
label_221a20:
    // 0x221a20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x221a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221a24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x221A24u;
    {
        const bool branch_taken_0x221a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A24u;
        // 0x221a28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a24) {
            ctx->pc = 0x221A54u;
            goto label_221a54;
        }
    }
    ctx->pc = 0x221A2Cu;
    // 0x221a2c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x221a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x221a30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221A30u;
    {
        const bool branch_taken_0x221a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a30) {
            ctx->pc = 0x221A54u;
            goto label_221a54;
        }
    }
    ctx->pc = 0x221A38u;
    // 0x221a38: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x221a3c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x221A3Cu;
    {
        const bool branch_taken_0x221a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x221A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A3Cu;
        // 0x221a40: 0x2c620007  sltiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a3c) {
            ctx->pc = 0x221A58u;
            goto label_221a58;
        }
    }
    ctx->pc = 0x221A44u;
    // 0x221a44: 0xc042f60  jal         func_10BD80
    ctx->pc = 0x221A44u;
    SET_GPR_U32(ctx, 31, 0x221A4Cu);
    ctx->pc = 0x10BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD80u, 0x221A44u, 0x221A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A4Cu;
label_221a4c:
    // 0x221a4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x221A4Cu;
    {
        const bool branch_taken_0x221a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A4Cu;
        // 0x221a50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a4c) {
            ctx->pc = 0x221A8Cu;
            goto label_221a8c;
        }
    }
    ctx->pc = 0x221A54u;
label_221a54:
    // 0x221a54: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x221a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_221a58:
    // 0x221a58: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x221A58u;
    {
        const bool branch_taken_0x221a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A58u;
        // 0x221a5c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a58) {
            ctx->pc = 0x221A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221a20;
        }
    }
    ctx->pc = 0x221A60u;
    // 0x221a60: 0x8cd003c4  lw          $s0, 0x3C4($a2)
    ctx->pc = 0x221a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 964)));
    // 0x221a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221a68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x221a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a6c: 0xc087502  jal         func_21D408
    ctx->pc = 0x221A6Cu;
    SET_GPR_U32(ctx, 31, 0x221A74u);
    ctx->pc = 0x221A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A6Cu;
    // 0x221a70: 0xacc203c4  sw          $v0, 0x3C4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x221A6Cu, 0x221A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A74u;
label_221a74:
    // 0x221a74: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x221a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x221a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a80: 0xc058ff0  jal         func_163FC0
    ctx->pc = 0x221A80u;
    SET_GPR_U32(ctx, 31, 0x221A88u);
    ctx->pc = 0x221A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A80u;
    // 0x221a84: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FC0u, 0x221A80u, 0x221A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A88u;
label_221a88:
    // 0x221a88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x221a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_221a8c:
    // 0x221a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221a94: 0x3e00008  jr          $ra
    ctx->pc = 0x221A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A94u;
        // 0x221a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221A9Cu;
    // 0x221a9c: 0x0  nop
    ctx->pc = 0x221a9cu;
    // NOP
    ctx->pc = 0x221aa0u;
}
