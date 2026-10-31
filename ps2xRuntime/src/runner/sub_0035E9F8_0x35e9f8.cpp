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

// Function: sub_0035E9F8
// Address: 0x35e9f8 - 0x35ea90
void sub_0035E9F8_0x35e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E9F8_0x35e9f8");
#endif

    switch (ctx->pc) {
        case 0x35ea20u: goto label_35ea20;
        case 0x35ea28u: goto label_35ea28;
        case 0x35ea3cu: goto label_35ea3c;
        case 0x35ea44u: goto label_35ea44;
        case 0x35ea58u: goto label_35ea58;
        case 0x35ea68u: goto label_35ea68;
        case 0x35ea74u: goto label_35ea74;
        default: break;
    }

    ctx->pc = 0x35e9f8u;

    // 0x35e9f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e9fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ea00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ea04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35ea08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ea08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ea0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35ea14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ea18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EA18u;
    SET_GPR_U32(ctx, 31, 0x35EA20u);
    ctx->pc = 0x35EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA18u;
    // 0x35ea1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EA18u, 0x35EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA20u;
label_35ea20:
    // 0x35ea20: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EA20u;
    SET_GPR_U32(ctx, 31, 0x35EA28u);
    ctx->pc = 0x35EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA20u;
    // 0x35ea24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EA20u, 0x35EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA28u;
label_35ea28:
    // 0x35ea28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ea28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35ea2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ea34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EA34u;
    SET_GPR_U32(ctx, 31, 0x35EA3Cu);
    ctx->pc = 0x35EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA34u;
    // 0x35ea38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EA34u, 0x35EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA3Cu;
label_35ea3c:
    // 0x35ea3c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EA3Cu;
    SET_GPR_U32(ctx, 31, 0x35EA44u);
    ctx->pc = 0x35EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA3Cu;
    // 0x35ea40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EA3Cu, 0x35EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA44u;
label_35ea44:
    // 0x35ea44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35ea44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ea50: 0xc102488  jal         func_409220
    ctx->pc = 0x35EA50u;
    SET_GPR_U32(ctx, 31, 0x35EA58u);
    ctx->pc = 0x35EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA50u;
    // 0x35ea54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35EA50u, 0x35EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA58u;
label_35ea58:
    // 0x35ea58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ea5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea60: 0xc08ea7e  jal         func_23A9F8
    ctx->pc = 0x35EA60u;
    SET_GPR_U32(ctx, 31, 0x35EA68u);
    ctx->pc = 0x35EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA60u;
    // 0x35ea64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A9F8u, 0x35EA60u, 0x35EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA68u;
label_35ea68:
    // 0x35ea68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea6c: 0xc102562  jal         func_409588
    ctx->pc = 0x35EA6Cu;
    SET_GPR_U32(ctx, 31, 0x35EA74u);
    ctx->pc = 0x35EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA6Cu;
    // 0x35ea70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35EA6Cu, 0x35EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA74u;
label_35ea74:
    // 0x35ea74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35ea74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ea78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ea7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ea7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ea80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35ea80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ea84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ea84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ea88: 0x3e00008  jr          $ra
    ctx->pc = 0x35EA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA88u;
        // 0x35ea8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EA90u;
}
