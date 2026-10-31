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

// Function: sub_002306E8
// Address: 0x2306e8 - 0x230740
void sub_002306E8_0x2306e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002306E8_0x2306e8");
#endif

    switch (ctx->pc) {
        case 0x230700u: goto label_230700;
        case 0x230708u: goto label_230708;
        case 0x230710u: goto label_230710;
        case 0x230730u: goto label_230730;
        default: break;
    }

    ctx->pc = 0x2306e8u;

    // 0x2306e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2306e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2306ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2306ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2306f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2306f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2306f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2306f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2306f8: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x2306F8u;
    SET_GPR_U32(ctx, 31, 0x230700u);
    ctx->pc = 0x2306FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306F8u;
    // 0x2306fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2306F8u, 0x230700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230700u;
label_230700:
    // 0x230700: 0xc087502  jal         func_21D408
    ctx->pc = 0x230700u;
    SET_GPR_U32(ctx, 31, 0x230708u);
    ctx->pc = 0x230704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230700u;
    // 0x230704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x230700u, 0x230708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230708u;
label_230708:
    // 0x230708: 0xc0a30d8  jal         func_28C360
    ctx->pc = 0x230708u;
    SET_GPR_U32(ctx, 31, 0x230710u);
    ctx->pc = 0x23070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230708u;
    // 0x23070c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C360u, 0x230708u, 0x230710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230710u;
label_230710:
    // 0x230710: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x230710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x230714: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x230714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x230718: 0x24635390  addiu       $v1, $v1, 0x5390
    ctx->pc = 0x230718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21392));
    // 0x23071c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230728: 0xc0873c8  jal         func_21CF20
    ctx->pc = 0x230728u;
    SET_GPR_U32(ctx, 31, 0x230730u);
    ctx->pc = 0x23072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230728u;
    // 0x23072c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF20u, 0x230728u, 0x230730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230730u;
label_230730:
    // 0x230730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x230730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230738: 0x3e00008  jr          $ra
    ctx->pc = 0x230738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230738u;
        // 0x23073c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230740u;
}
