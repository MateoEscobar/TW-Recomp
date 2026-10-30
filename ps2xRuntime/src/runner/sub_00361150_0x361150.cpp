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

// Function: sub_00361150
// Address: 0x361150 - 0x3611d0
void sub_00361150_0x361150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361150_0x361150");
#endif

    switch (ctx->pc) {
        case 0x361170u: goto label_361170;
        case 0x361178u: goto label_361178;
        case 0x3611a0u: goto label_3611a0;
        case 0x3611a8u: goto label_3611a8;
        case 0x3611b4u: goto label_3611b4;
        default: break;
    }

    ctx->pc = 0x361150u;

    // 0x361150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x361150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x361154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361158: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x361158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36115c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36115cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x361164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361168: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361168u;
    SET_GPR_U32(ctx, 31, 0x361170u);
    ctx->pc = 0x36116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361168u;
    // 0x36116c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361168u, 0x361170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361170u;
label_361170:
    // 0x361170: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361170u;
    SET_GPR_U32(ctx, 31, 0x361178u);
    ctx->pc = 0x361174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361170u;
    // 0x361174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361170u, 0x361178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361178u;
label_361178:
    // 0x361178: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x361178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x36117c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x36117cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x361180: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x361180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x361184: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x361184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x361188: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x361188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x36118c: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x36118cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x361190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361198: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361198u;
    SET_GPR_U32(ctx, 31, 0x3611A0u);
    ctx->pc = 0x36119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361198u;
    // 0x36119c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361198u, 0x3611A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611A0u;
label_3611a0:
    // 0x3611a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3611A0u;
    SET_GPR_U32(ctx, 31, 0x3611A8u);
    ctx->pc = 0x3611A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611A0u;
    // 0x3611a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3611A0u, 0x3611A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611A8u;
label_3611a8:
    // 0x3611a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3611a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611ac: 0xc0ab742  jal         func_2ADD08
    ctx->pc = 0x3611ACu;
    SET_GPR_U32(ctx, 31, 0x3611B4u);
    ctx->pc = 0x3611B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611ACu;
    // 0x3611b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x3611ACu, 0x3611B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611B4u;
label_3611b4:
    // 0x3611b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3611b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3611b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3611b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3611bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3611c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3611c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3611c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3611C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3611C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3611C4u;
        // 0x3611c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3611C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3611CCu;
    // 0x3611cc: 0x0  nop
    ctx->pc = 0x3611ccu;
    // NOP
    ctx->pc = 0x3611d0u;
}
