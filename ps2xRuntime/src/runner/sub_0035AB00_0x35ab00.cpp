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

// Function: sub_0035AB00
// Address: 0x35ab00 - 0x35ab60
void sub_0035AB00_0x35ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AB00_0x35ab00");
#endif

    switch (ctx->pc) {
        case 0x35ab20u: goto label_35ab20;
        case 0x35ab28u: goto label_35ab28;
        case 0x35ab3cu: goto label_35ab3c;
        case 0x35ab48u: goto label_35ab48;
        default: break;
    }

    ctx->pc = 0x35ab00u;

    // 0x35ab00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ab04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ab08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ab0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ab0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ab14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ab18: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AB18u;
    SET_GPR_U32(ctx, 31, 0x35AB20u);
    ctx->pc = 0x35AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB18u;
    // 0x35ab1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AB18u, 0x35AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB20u;
label_35ab20:
    // 0x35ab20: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AB20u;
    SET_GPR_U32(ctx, 31, 0x35AB28u);
    ctx->pc = 0x35AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB20u;
    // 0x35ab24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AB20u, 0x35AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB28u;
label_35ab28:
    // 0x35ab28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ab28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab34: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35AB34u;
    SET_GPR_U32(ctx, 31, 0x35AB3Cu);
    ctx->pc = 0x35AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB34u;
    // 0x35ab38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35AB34u, 0x35AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB3Cu;
label_35ab3c:
    // 0x35ab3c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35ab3cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ab40: 0xc08dda8  jal         func_2376A0
    ctx->pc = 0x35AB40u;
    SET_GPR_U32(ctx, 31, 0x35AB48u);
    ctx->pc = 0x35AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB40u;
    // 0x35ab44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376A0u, 0x35AB40u, 0x35AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB48u;
label_35ab48:
    // 0x35ab48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ab48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ab4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ab4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ab50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ab50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ab54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ab54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab58: 0x3e00008  jr          $ra
    ctx->pc = 0x35AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB58u;
        // 0x35ab5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AB60u;
}
