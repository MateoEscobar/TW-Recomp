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

// Function: sub_00365600
// Address: 0x365600 - 0x3656a0
void sub_00365600_0x365600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365600_0x365600");
#endif

    switch (ctx->pc) {
        case 0x36562cu: goto label_36562c;
        case 0x365634u: goto label_365634;
        case 0x365648u: goto label_365648;
        case 0x365650u: goto label_365650;
        case 0x365664u: goto label_365664;
        case 0x36566cu: goto label_36566c;
        case 0x36567cu: goto label_36567c;
        default: break;
    }

    ctx->pc = 0x365600u;

    // 0x365600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x365604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365608: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x365608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36560c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x365610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x365610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365618: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x365618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36561c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365620: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365624: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365624u;
    SET_GPR_U32(ctx, 31, 0x36562Cu);
    ctx->pc = 0x365628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365624u;
    // 0x365628: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365624u, 0x36562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36562Cu;
label_36562c:
    // 0x36562c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36562Cu;
    SET_GPR_U32(ctx, 31, 0x365634u);
    ctx->pc = 0x365630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36562Cu;
    // 0x365630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36562Cu, 0x365634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365634u;
label_365634:
    // 0x365634: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365638: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x365638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36563c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365640: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365640u;
    SET_GPR_U32(ctx, 31, 0x365648u);
    ctx->pc = 0x365644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365640u;
    // 0x365644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365640u, 0x365648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365648u;
label_365648:
    // 0x365648: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365648u;
    SET_GPR_U32(ctx, 31, 0x365650u);
    ctx->pc = 0x36564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365648u;
    // 0x36564c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365648u, 0x365650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365650u;
label_365650:
    // 0x365650: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x365650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365654: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x365654u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x365658: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36565c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36565Cu;
    SET_GPR_U32(ctx, 31, 0x365664u);
    ctx->pc = 0x365660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36565Cu;
    // 0x365660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36565Cu, 0x365664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365664u;
label_365664:
    // 0x365664: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x365664u;
    SET_GPR_U32(ctx, 31, 0x36566Cu);
    ctx->pc = 0x365668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365664u;
    // 0x365668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x365664u, 0x36566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36566Cu;
label_36566c:
    // 0x36566c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365670: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x365670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x365674: 0xc046ee6  jal         func_11BB98
    ctx->pc = 0x365674u;
    SET_GPR_U32(ctx, 31, 0x36567Cu);
    ctx->pc = 0x365678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365674u;
    // 0x365678: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BB98u, 0x365674u, 0x36567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36567Cu;
label_36567c:
    // 0x36567c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365684: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x365684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365688: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x365688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36568c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365690: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x365690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x365694: 0x3e00008  jr          $ra
    ctx->pc = 0x365694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365694u;
        // 0x365698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36569Cu;
    // 0x36569c: 0x0  nop
    ctx->pc = 0x36569cu;
    // NOP
    ctx->pc = 0x3656a0u;
}
