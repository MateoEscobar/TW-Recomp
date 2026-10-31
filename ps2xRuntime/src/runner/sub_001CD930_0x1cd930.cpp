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

// Function: sub_001CD930
// Address: 0x1cd930 - 0x1cd988
void sub_001CD930_0x1cd930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD930_0x1cd930");
#endif

    switch (ctx->pc) {
        case 0x1cd958u: goto label_1cd958;
        case 0x1cd964u: goto label_1cd964;
        case 0x1cd970u: goto label_1cd970;
        default: break;
    }

    ctx->pc = 0x1cd930u;

    // 0x1cd930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd934: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1cd938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cd938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cd93c: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x1cd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x1cd940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd94c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cd94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd950: 0xc073708  jal         func_1CDC20
    ctx->pc = 0x1CD950u;
    SET_GPR_U32(ctx, 31, 0x1CD958u);
    ctx->pc = 0x1CD954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD950u;
    // 0x1cd954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC20u, 0x1CD950u, 0x1CD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD958u;
label_1cd958:
    // 0x1cd958: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x1cd95c: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1CD95Cu;
    SET_GPR_U32(ctx, 31, 0x1CD964u);
    ctx->pc = 0x1CD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD95Cu;
    // 0x1cd960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1CD95Cu, 0x1CD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD964u;
label_1cd964:
    // 0x1cd964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd968: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1CD968u;
    SET_GPR_U32(ctx, 31, 0x1CD970u);
    ctx->pc = 0x1CD96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD968u;
    // 0x1cd96c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1CD968u, 0x1CD970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD970u;
label_1cd970:
    // 0x1cd970: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cd970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD97Cu;
        // 0x1cd980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD984u;
    // 0x1cd984: 0x0  nop
    ctx->pc = 0x1cd984u;
    // NOP
    ctx->pc = 0x1cd988u;
}
