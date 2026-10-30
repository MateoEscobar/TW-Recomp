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

// Function: sub_00237E00
// Address: 0x237e00 - 0x237e70
void sub_00237E00_0x237e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237E00_0x237e00");
#endif

    switch (ctx->pc) {
        case 0x237e24u: goto label_237e24;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e5cu: goto label_237e5c;
        default: break;
    }

    ctx->pc = 0x237e00u;

    // 0x237e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x237e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x237e04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x237e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x237e08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x237e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x237e0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237e14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x237e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237e1c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237E1Cu;
    SET_GPR_U32(ctx, 31, 0x237E24u);
    ctx->pc = 0x237E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E1Cu;
    // 0x237e20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237E1Cu, 0x237E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E24u;
label_237e24:
    // 0x237e24: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237E24u;
    SET_GPR_U32(ctx, 31, 0x237E2Cu);
    ctx->pc = 0x237E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E24u;
    // 0x237e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237E24u, 0x237E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E2Cu;
label_237e2c:
    // 0x237e2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x237e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e30: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x237E30u;
    {
        const bool branch_taken_0x237e30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E30u;
        // 0x237e34: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e30) {
            ctx->pc = 0x237E5Cu;
            goto label_237e5c;
        }
    }
    ctx->pc = 0x237E38u;
    // 0x237e38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x237e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237e3c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x237e3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x237e40: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x237e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x237e44: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x237e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x237e48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e50: 0x248403c8  addiu       $a0, $a0, 0x3C8
    ctx->pc = 0x237e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
    // 0x237e54: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x237E54u;
    SET_GPR_U32(ctx, 31, 0x237E5Cu);
    ctx->pc = 0x237E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E54u;
    // 0x237e58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x237E54u, 0x237E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E5Cu;
label_237e5c:
    // 0x237e5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x237e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237e60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x237e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237e68: 0x3e00008  jr          $ra
    ctx->pc = 0x237E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E68u;
        // 0x237e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237E70u;
}
