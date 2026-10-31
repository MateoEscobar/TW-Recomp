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

// Function: sub_003701C8
// Address: 0x3701c8 - 0x370228
void sub_003701C8_0x3701c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003701C8_0x3701c8");
#endif

    switch (ctx->pc) {
        case 0x3701e8u: goto label_3701e8;
        case 0x3701f0u: goto label_3701f0;
        case 0x370204u: goto label_370204;
        case 0x370210u: goto label_370210;
        default: break;
    }

    ctx->pc = 0x3701c8u;

    // 0x3701c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3701c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3701cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3701ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3701d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3701d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3701d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3701d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3701d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3701dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3701dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3701e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3701E0u;
    SET_GPR_U32(ctx, 31, 0x3701E8u);
    ctx->pc = 0x3701E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701E0u;
    // 0x3701e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3701E0u, 0x3701E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701E8u;
label_3701e8:
    // 0x3701e8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3701E8u;
    SET_GPR_U32(ctx, 31, 0x3701F0u);
    ctx->pc = 0x3701ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701E8u;
    // 0x3701ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3701E8u, 0x3701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3701F0u;
label_3701f0:
    // 0x3701f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3701f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3701f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3701f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3701fc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3701FCu;
    SET_GPR_U32(ctx, 31, 0x370204u);
    ctx->pc = 0x370200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3701FCu;
    // 0x370200: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3701FCu, 0x370204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370204u;
label_370204:
    // 0x370204: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x370204u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x370208: 0xc06d1a8  jal         func_1B46A0
    ctx->pc = 0x370208u;
    SET_GPR_U32(ctx, 31, 0x370210u);
    ctx->pc = 0x37020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370208u;
    // 0x37020c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B46A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B46A0u, 0x370208u, 0x370210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370210u;
label_370210:
    // 0x370210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x370210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370220: 0x3e00008  jr          $ra
    ctx->pc = 0x370220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370220u;
        // 0x370224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370228u;
}
