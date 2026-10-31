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

// Function: sub_00359900
// Address: 0x359900 - 0x359960
void sub_00359900_0x359900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359900_0x359900");
#endif

    switch (ctx->pc) {
        case 0x359920u: goto label_359920;
        case 0x359928u: goto label_359928;
        case 0x35993cu: goto label_35993c;
        case 0x359948u: goto label_359948;
        default: break;
    }

    ctx->pc = 0x359900u;

    // 0x359900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359908: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35990c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35990cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359918: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359918u;
    SET_GPR_U32(ctx, 31, 0x359920u);
    ctx->pc = 0x35991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359918u;
    // 0x35991c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359918u, 0x359920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359920u;
label_359920:
    // 0x359920: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359920u;
    SET_GPR_U32(ctx, 31, 0x359928u);
    ctx->pc = 0x359924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359920u;
    // 0x359924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359920u, 0x359928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359928u;
label_359928:
    // 0x359928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35992c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359934: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359934u;
    SET_GPR_U32(ctx, 31, 0x35993Cu);
    ctx->pc = 0x359938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359934u;
    // 0x359938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359934u, 0x35993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35993Cu;
label_35993c:
    // 0x35993c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35993cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359940: 0xc08d70a  jal         func_235C28
    ctx->pc = 0x359940u;
    SET_GPR_U32(ctx, 31, 0x359948u);
    ctx->pc = 0x359944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359940u;
    // 0x359944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C28u, 0x359940u, 0x359948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359948u;
label_359948:
    // 0x359948: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35994c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35994cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359958: 0x3e00008  jr          $ra
    ctx->pc = 0x359958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359958u;
        // 0x35995c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359960u;
}
