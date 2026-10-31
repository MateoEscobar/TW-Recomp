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

// Function: sub_00358BF8
// Address: 0x358bf8 - 0x358c58
void sub_00358BF8_0x358bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358BF8_0x358bf8");
#endif

    switch (ctx->pc) {
        case 0x358c18u: goto label_358c18;
        case 0x358c20u: goto label_358c20;
        case 0x358c34u: goto label_358c34;
        case 0x358c40u: goto label_358c40;
        default: break;
    }

    ctx->pc = 0x358bf8u;

    // 0x358bf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358c00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358c10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358C10u;
    SET_GPR_U32(ctx, 31, 0x358C18u);
    ctx->pc = 0x358C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C10u;
    // 0x358c14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358C10u, 0x358C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C18u;
label_358c18:
    // 0x358c18: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358C18u;
    SET_GPR_U32(ctx, 31, 0x358C20u);
    ctx->pc = 0x358C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C18u;
    // 0x358c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358C18u, 0x358C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C20u;
label_358c20:
    // 0x358c20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c2c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358C2Cu;
    SET_GPR_U32(ctx, 31, 0x358C34u);
    ctx->pc = 0x358C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C2Cu;
    // 0x358c30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358C2Cu, 0x358C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C34u;
label_358c34:
    // 0x358c34: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x358c34u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358c38: 0xc08e8ca  jal         func_23A328
    ctx->pc = 0x358C38u;
    SET_GPR_U32(ctx, 31, 0x358C40u);
    ctx->pc = 0x358C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C38u;
    // 0x358c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A328u, 0x358C38u, 0x358C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C40u;
label_358c40:
    // 0x358c40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358c50: 0x3e00008  jr          $ra
    ctx->pc = 0x358C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C50u;
        // 0x358c54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358C58u;
}
