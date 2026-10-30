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

// Function: sub_0040B608
// Address: 0x40b608 - 0x40b688
void sub_0040B608_0x40b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B608_0x40b608");
#endif

    switch (ctx->pc) {
        case 0x40b624u: goto label_40b624;
        case 0x40b630u: goto label_40b630;
        case 0x40b63cu: goto label_40b63c;
        case 0x40b654u: goto label_40b654;
        case 0x40b664u: goto label_40b664;
        case 0x40b674u: goto label_40b674;
        default: break;
    }

    ctx->pc = 0x40b608u;

    // 0x40b608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b60c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b610: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b614: 0x24a58310  addiu       $a1, $a1, -0x7CF0
    ctx->pc = 0x40b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935312));
    // 0x40b618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b61c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B61Cu;
    SET_GPR_U32(ctx, 31, 0x40B624u);
    ctx->pc = 0x40B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B61Cu;
    // 0x40b620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B61Cu, 0x40B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B624u;
label_40b624:
    // 0x40b624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b628: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B628u;
    SET_GPR_U32(ctx, 31, 0x40B630u);
    ctx->pc = 0x40B62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B628u;
    // 0x40b62c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B628u, 0x40B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B630u;
label_40b630:
    // 0x40b630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b634: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B634u;
    SET_GPR_U32(ctx, 31, 0x40B63Cu);
    ctx->pc = 0x40B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B634u;
    // 0x40b638: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B634u, 0x40B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B63Cu;
label_40b63c:
    // 0x40b63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b640: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x40B640u;
    {
        const bool branch_taken_0x40b640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B640u;
        // 0x40b644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b640) {
            ctx->pc = 0x40B65Cu;
            goto label_40b65c;
        }
    }
    ctx->pc = 0x40B648u;
    // 0x40b648: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b64c: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x40B64Cu;
    SET_GPR_U32(ctx, 31, 0x40B654u);
    ctx->pc = 0x40B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B64Cu;
    // 0x40b650: 0x24a58338  addiu       $a1, $a1, -0x7CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x40B64Cu, 0x40B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B654u;
label_40b654:
    // 0x40b654: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x40B654u;
    {
        const bool branch_taken_0x40b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B654u;
        // 0x40b658: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b654) {
            ctx->pc = 0x40B678u;
            goto label_40b678;
        }
    }
    ctx->pc = 0x40B65Cu;
label_40b65c:
    // 0x40b65c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B65Cu;
    SET_GPR_U32(ctx, 31, 0x40B664u);
    ctx->pc = 0x40B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B65Cu;
    // 0x40b660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B65Cu, 0x40B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B664u;
label_40b664:
    // 0x40b664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b66c: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40B66Cu;
    SET_GPR_U32(ctx, 31, 0x40B674u);
    ctx->pc = 0x40B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B66Cu;
    // 0x40b670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40B66Cu, 0x40B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B674u;
label_40b674:
    // 0x40b674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40b678:
    // 0x40b678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b680: 0x3e00008  jr          $ra
    ctx->pc = 0x40B680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B680u;
        // 0x40b684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B688u;
}
