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

// Function: sub_00168E00
// Address: 0x168e00 - 0x168e68
void sub_00168E00_0x168e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E00_0x168e00");
#endif

    switch (ctx->pc) {
        case 0x168e1cu: goto label_168e1c;
        case 0x168e40u: goto label_168e40;
        default: break;
    }

    ctx->pc = 0x168e00u;

    // 0x168e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168e04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168e14: 0xc05a2a8  jal         func_168AA0
    ctx->pc = 0x168E14u;
    SET_GPR_U32(ctx, 31, 0x168E1Cu);
    ctx->pc = 0x168E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E14u;
    // 0x168e18: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168AA0u, 0x168E14u, 0x168E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E1Cu;
label_168e1c:
    // 0x168e1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x168e1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168e24: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168E24u;
    {
        const bool branch_taken_0x168e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E24u;
        // 0x168e28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e24) {
            ctx->pc = 0x168E40u;
            goto label_168e40;
        }
    }
    ctx->pc = 0x168E2Cu;
    // 0x168e2c: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168e30: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x168e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168e34: 0x24840640  addiu       $a0, $a0, 0x640
    ctx->pc = 0x168e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x168e38: 0xc05b5d6  jal         func_16D758
    ctx->pc = 0x168E38u;
    SET_GPR_U32(ctx, 31, 0x168E40u);
    ctx->pc = 0x168E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E38u;
    // 0x168e3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D758u, 0x168E38u, 0x168E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E40u;
label_168e40:
    // 0x168e40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x168E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E4Cu;
        // 0x168e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168E54u;
    // 0x168e54: 0x0  nop
    ctx->pc = 0x168e54u;
    // NOP
    // 0x168e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168e5c: 0x0  nop
    ctx->pc = 0x168e5cu;
    // NOP
    // 0x168e60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168e64: 0x0  nop
    ctx->pc = 0x168e64u;
    // NOP
    ctx->pc = 0x168e68u;
}
