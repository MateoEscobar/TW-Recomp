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

// Function: sub_004435F0
// Address: 0x4435f0 - 0x443658
void sub_004435F0_0x4435f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004435F0_0x4435f0");
#endif

    switch (ctx->pc) {
        case 0x443604u: goto label_443604;
        case 0x443628u: goto label_443628;
        case 0x443630u: goto label_443630;
        case 0x443638u: goto label_443638;
        default: break;
    }

    ctx->pc = 0x4435f0u;

    // 0x4435f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4435f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4435f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4435f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4435f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4435f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4435fc: 0xc10f454  jal         func_43D150
    ctx->pc = 0x4435FCu;
    SET_GPR_U32(ctx, 31, 0x443604u);
    ctx->pc = 0x443600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4435FCu;
    // 0x443600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D150u, 0x4435FCu, 0x443604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443604u;
label_443604:
    // 0x443604: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x443604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443608: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44360c: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x44360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x443610: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x443610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x443614: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x443614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x443618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44361c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x44361cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x443620: 0xc10f450  jal         func_43D140
    ctx->pc = 0x443620u;
    SET_GPR_U32(ctx, 31, 0x443628u);
    ctx->pc = 0x443624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443620u;
    // 0x443624: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D140u, 0x443620u, 0x443628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443628u;
label_443628:
    // 0x443628: 0xc10f454  jal         func_43D150
    ctx->pc = 0x443628u;
    SET_GPR_U32(ctx, 31, 0x443630u);
    ctx->pc = 0x44362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443628u;
    // 0x44362c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D150u, 0x443628u, 0x443630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443630u;
label_443630:
    // 0x443630: 0xc10f450  jal         func_43D140
    ctx->pc = 0x443630u;
    SET_GPR_U32(ctx, 31, 0x443638u);
    ctx->pc = 0x443634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443630u;
    // 0x443634: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D140u, 0x443630u, 0x443638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443638u;
label_443638:
    // 0x443638: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x443638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x44363c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44363cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443640: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x443640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x443644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x443644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443648: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x443648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x44364c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x44364cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x443650: 0x3e00008  jr          $ra
    ctx->pc = 0x443650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443650u;
        // 0x443654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443658u;
}
