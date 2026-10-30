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

// Function: sub_00377A10
// Address: 0x377a10 - 0x377ab0
void sub_00377A10_0x377a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A10_0x377a10");
#endif

    switch (ctx->pc) {
        case 0x377a3cu: goto label_377a3c;
        case 0x377a44u: goto label_377a44;
        case 0x377a58u: goto label_377a58;
        case 0x377a60u: goto label_377a60;
        case 0x377a74u: goto label_377a74;
        case 0x377a7cu: goto label_377a7c;
        case 0x377a8cu: goto label_377a8c;
        default: break;
    }

    ctx->pc = 0x377a10u;

    // 0x377a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x377a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x377a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377a18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x377a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x377a1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x377a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x377a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377a2c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x377a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x377a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377a34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377A34u;
    SET_GPR_U32(ctx, 31, 0x377A3Cu);
    ctx->pc = 0x377A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A34u;
    // 0x377a38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377A34u, 0x377A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A3Cu;
label_377a3c:
    // 0x377a3c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377A3Cu;
    SET_GPR_U32(ctx, 31, 0x377A44u);
    ctx->pc = 0x377A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A3Cu;
    // 0x377a40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377A3Cu, 0x377A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A44u;
label_377a44:
    // 0x377a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x377a48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377a50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377A50u;
    SET_GPR_U32(ctx, 31, 0x377A58u);
    ctx->pc = 0x377A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A50u;
    // 0x377a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377A50u, 0x377A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A58u;
label_377a58:
    // 0x377a58: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377A58u;
    SET_GPR_U32(ctx, 31, 0x377A60u);
    ctx->pc = 0x377A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A58u;
    // 0x377a5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377A58u, 0x377A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A60u;
label_377a60:
    // 0x377a60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x377a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377A6Cu;
    SET_GPR_U32(ctx, 31, 0x377A74u);
    ctx->pc = 0x377A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A6Cu;
    // 0x377a70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377A6Cu, 0x377A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A74u;
label_377a74:
    // 0x377a74: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377A74u;
    SET_GPR_U32(ctx, 31, 0x377A7Cu);
    ctx->pc = 0x377A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A74u;
    // 0x377a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377A74u, 0x377A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A7Cu;
label_377a7c:
    // 0x377a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x377a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x377a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a84: 0xc0c5be8  jal         func_316FA0
    ctx->pc = 0x377A84u;
    SET_GPR_U32(ctx, 31, 0x377A8Cu);
    ctx->pc = 0x377A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A84u;
    // 0x377a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316FA0u, 0x377A84u, 0x377A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A8Cu;
label_377a8c:
    // 0x377a8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x377a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377a90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x377a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377a9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x377a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x377AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377AA4u;
        // 0x377aa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377AACu;
    // 0x377aac: 0x0  nop
    ctx->pc = 0x377aacu;
    // NOP
    ctx->pc = 0x377ab0u;
}
