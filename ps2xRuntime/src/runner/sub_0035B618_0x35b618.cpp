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

// Function: sub_0035B618
// Address: 0x35b618 - 0x35b668
void sub_0035B618_0x35b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B618_0x35b618");
#endif

    switch (ctx->pc) {
        case 0x35b634u: goto label_35b634;
        case 0x35b63cu: goto label_35b63c;
        case 0x35b644u: goto label_35b644;
        case 0x35b650u: goto label_35b650;
        default: break;
    }

    ctx->pc = 0x35b618u;

    // 0x35b618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b61c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b62c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B62Cu;
    SET_GPR_U32(ctx, 31, 0x35B634u);
    ctx->pc = 0x35B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B62Cu;
    // 0x35b630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B62Cu, 0x35B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B634u;
label_35b634:
    // 0x35b634: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B634u;
    SET_GPR_U32(ctx, 31, 0x35B63Cu);
    ctx->pc = 0x35B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B634u;
    // 0x35b638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B634u, 0x35B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B63Cu;
label_35b63c:
    // 0x35b63c: 0xc08d5a2  jal         func_235688
    ctx->pc = 0x35B63Cu;
    SET_GPR_U32(ctx, 31, 0x35B644u);
    ctx->pc = 0x35B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B63Cu;
    // 0x35b640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235688u, 0x35B63Cu, 0x35B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B644u;
label_35b644:
    // 0x35b644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b648: 0xc102562  jal         func_409588
    ctx->pc = 0x35B648u;
    SET_GPR_U32(ctx, 31, 0x35B650u);
    ctx->pc = 0x35B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B648u;
    // 0x35b64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B648u, 0x35B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B650u;
label_35b650:
    // 0x35b650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B65Cu;
        // 0x35b660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B664u;
    // 0x35b664: 0x0  nop
    ctx->pc = 0x35b664u;
    // NOP
    ctx->pc = 0x35b668u;
}
