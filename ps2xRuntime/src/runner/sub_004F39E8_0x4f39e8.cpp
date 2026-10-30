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

// Function: sub_004F39E8
// Address: 0x4f39e8 - 0x4f3a98
void sub_004F39E8_0x4f39e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F39E8_0x4f39e8");
#endif

    switch (ctx->pc) {
        case 0x4f3a30u: goto label_4f3a30;
        case 0x4f3a3cu: goto label_4f3a3c;
        case 0x4f3a4cu: goto label_4f3a4c;
        case 0x4f3a5cu: goto label_4f3a5c;
        default: break;
    }

    ctx->pc = 0x4f39e8u;

    // 0x4f39e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4f39e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4f39ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4f39f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4f39f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4f39f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4f39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4f39f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4f39f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f39fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f39fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f3a00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f3a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3a04: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4f3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4f3a08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f3a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3a0c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4f3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4f3a10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4f3a10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3a14: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4f3a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4f3a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f3a1c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x4f3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x4f3a20: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x4f3a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x4f3a24: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4F3A24u;
    {
        const bool branch_taken_0x4f3a24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3A24u;
        // 0x4f3a28: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3a24) {
            ctx->pc = 0x4F3A74u;
            goto label_4f3a74;
        }
    }
    ctx->pc = 0x4F3A2Cu;
    // 0x4f3a2c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x4f3a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_4f3a30:
    // 0x4f3a30: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x4f3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x4f3a34: 0xc0e409a  jal         func_390268
    ctx->pc = 0x4F3A34u;
    SET_GPR_U32(ctx, 31, 0x4F3A3Cu);
    ctx->pc = 0x4F3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3A34u;
    // 0x4f3a38: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4F3A34u, 0x4F3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3A3Cu;
label_4f3a3c:
    // 0x4f3a3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F3A3Cu;
    {
        const bool branch_taken_0x4f3a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3A3Cu;
        // 0x4f3a40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3a3c) {
            ctx->pc = 0x4F3A5Cu;
            goto label_4f3a5c;
        }
    }
    ctx->pc = 0x4F3A44u;
    // 0x4f3a44: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4F3A44u;
    SET_GPR_U32(ctx, 31, 0x4F3A4Cu);
    ctx->pc = 0x4F3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3A44u;
    // 0x4f3a48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4F3A44u, 0x4F3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3A4Cu;
label_4f3a4c:
    // 0x4f3a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f3a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3a50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f3a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3a54: 0xc10842a  jal         func_4210A8
    ctx->pc = 0x4F3A54u;
    SET_GPR_U32(ctx, 31, 0x4F3A5Cu);
    ctx->pc = 0x4F3A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3A54u;
    // 0x4f3a58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4210A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4210A8u, 0x4F3A54u, 0x4F3A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3A5Cu;
label_4f3a5c:
    // 0x4f3a5c: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x4f3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x4f3a60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4f3a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4f3a64: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x4f3a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x4f3a68: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4f3a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4f3a6c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4F3A6Cu;
    {
        const bool branch_taken_0x4f3a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3A6Cu;
        // 0x4f3a70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3a6c) {
            ctx->pc = 0x4F3A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3a30;
        }
    }
    ctx->pc = 0x4F3A74u;
label_4f3a74:
    // 0x4f3a74: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4f3a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4f3a78: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4f3a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f3a7c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4f3a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f3a80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f3a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f3a84: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4f3a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f3a88: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4f3a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3a90: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3A90u;
        // 0x4f3a94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3A98u;
}
