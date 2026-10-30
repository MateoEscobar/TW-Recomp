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

// Function: sub_0033CE00
// Address: 0x33ce00 - 0x33ce58
void sub_0033CE00_0x33ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CE00_0x33ce00");
#endif

    switch (ctx->pc) {
        case 0x33ce1cu: goto label_33ce1c;
        case 0x33ce28u: goto label_33ce28;
        case 0x33ce34u: goto label_33ce34;
        case 0x33ce40u: goto label_33ce40;
        default: break;
    }

    ctx->pc = 0x33ce00u;

    // 0x33ce00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ce04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33ce08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ce0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33ce0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ce14: 0xc0d01fe  jal         func_3407F8
    ctx->pc = 0x33CE14u;
    SET_GPR_U32(ctx, 31, 0x33CE1Cu);
    ctx->pc = 0x33CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE14u;
    // 0x33ce18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407F8u, 0x33CE14u, 0x33CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE1Cu;
label_33ce1c:
    // 0x33ce1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33ce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce20: 0xc0d01c0  jal         func_340700
    ctx->pc = 0x33CE20u;
    SET_GPR_U32(ctx, 31, 0x33CE28u);
    ctx->pc = 0x33CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE20u;
    // 0x33ce24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x33CE20u, 0x33CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE28u;
label_33ce28:
    // 0x33ce28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce2c: 0xc0d069a  jal         func_341A68
    ctx->pc = 0x33CE2Cu;
    SET_GPR_U32(ctx, 31, 0x33CE34u);
    ctx->pc = 0x33CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE2Cu;
    // 0x33ce30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CE2Cu, 0x33CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE34u;
label_33ce34:
    // 0x33ce34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce38: 0xc0d0834  jal         func_3420D0
    ctx->pc = 0x33CE38u;
    SET_GPR_U32(ctx, 31, 0x33CE40u);
    ctx->pc = 0x33CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE38u;
    // 0x33ce3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3420D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3420D0u, 0x33CE38u, 0x33CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE40u;
label_33ce40:
    // 0x33ce40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33ce40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ce44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ce44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ce48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ce4c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE4Cu;
        // 0x33ce50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CE54u;
    // 0x33ce54: 0x0  nop
    ctx->pc = 0x33ce54u;
    // NOP
    ctx->pc = 0x33ce58u;
}
