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

// Function: sub_00325608
// Address: 0x325608 - 0x325660
void sub_00325608_0x325608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325608_0x325608");
#endif

    switch (ctx->pc) {
        case 0x325624u: goto label_325624;
        case 0x325630u: goto label_325630;
        case 0x32563cu: goto label_32563c;
        case 0x32564cu: goto label_32564c;
        default: break;
    }

    ctx->pc = 0x325608u;

    // 0x325608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32560c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325610: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x325614: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32561c: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x32561Cu;
    SET_GPR_U32(ctx, 31, 0x325624u);
    ctx->pc = 0x325620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32561Cu;
    // 0x325620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x32561Cu, 0x325624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325624u;
label_325624:
    // 0x325624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325628: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x325628u;
    SET_GPR_U32(ctx, 31, 0x325630u);
    ctx->pc = 0x32562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325628u;
    // 0x32562c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x325628u, 0x325630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325630u;
label_325630:
    // 0x325630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325634: 0xc0c9088  jal         func_324220
    ctx->pc = 0x325634u;
    SET_GPR_U32(ctx, 31, 0x32563Cu);
    ctx->pc = 0x325638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325634u;
    // 0x325638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324220u, 0x325634u, 0x32563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32563Cu;
label_32563c:
    // 0x32563c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32563Cu;
    {
        const bool branch_taken_0x32563c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32563Cu;
        // 0x325640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32563c) {
            ctx->pc = 0x325650u;
            goto label_325650;
        }
    }
    ctx->pc = 0x325644u;
    // 0x325644: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x325644u;
    SET_GPR_U32(ctx, 31, 0x32564Cu);
    ctx->pc = 0x325648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325644u;
    // 0x325648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x325644u, 0x32564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32564Cu;
label_32564c:
    // 0x32564c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325650:
    // 0x325650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325658: 0x3e00008  jr          $ra
    ctx->pc = 0x325658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325658u;
        // 0x32565c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325660u;
}
