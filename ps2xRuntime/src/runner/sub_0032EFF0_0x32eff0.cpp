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

// Function: sub_0032EFF0
// Address: 0x32eff0 - 0x32f048
void sub_0032EFF0_0x32eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EFF0_0x32eff0");
#endif

    switch (ctx->pc) {
        case 0x32f00cu: goto label_32f00c;
        case 0x32f018u: goto label_32f018;
        case 0x32f028u: goto label_32f028;
        case 0x32f034u: goto label_32f034;
        default: break;
    }

    ctx->pc = 0x32eff0u;

    // 0x32eff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32eff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32eff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32effc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32effcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32f000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32f004: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32F004u;
    SET_GPR_U32(ctx, 31, 0x32F00Cu);
    ctx->pc = 0x32F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F004u;
    // 0x32f008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32F004u, 0x32F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F00Cu;
label_32f00c:
    // 0x32f00c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32f00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f010: 0xc0cbbd2  jal         func_32EF48
    ctx->pc = 0x32F010u;
    SET_GPR_U32(ctx, 31, 0x32F018u);
    ctx->pc = 0x32F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F010u;
    // 0x32f014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EF48u, 0x32F010u, 0x32F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F018u;
label_32f018:
    // 0x32f018: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32f018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32f01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f020: 0xc0cbd1e  jal         func_32F478
    ctx->pc = 0x32F020u;
    SET_GPR_U32(ctx, 31, 0x32F028u);
    ctx->pc = 0x32F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F020u;
    // 0x32f024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F478u, 0x32F020u, 0x32F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F028u;
label_32f028:
    // 0x32f028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f02c: 0xc0c9aec  jal         func_326BB0
    ctx->pc = 0x32F02Cu;
    SET_GPR_U32(ctx, 31, 0x32F034u);
    ctx->pc = 0x32F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F02Cu;
    // 0x32f030: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326BB0u, 0x32F02Cu, 0x32F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F034u;
label_32f034:
    // 0x32f034: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32f034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32f038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f040: 0x3e00008  jr          $ra
    ctx->pc = 0x32F040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F040u;
        // 0x32f044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F048u;
}
