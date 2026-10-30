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

// Function: sub_001355F8
// Address: 0x1355f8 - 0x135680
void sub_001355F8_0x1355f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001355F8_0x1355f8");
#endif

    switch (ctx->pc) {
        case 0x13561cu: goto label_13561c;
        case 0x135630u: goto label_135630;
        case 0x135648u: goto label_135648;
        case 0x135668u: goto label_135668;
        default: break;
    }

    ctx->pc = 0x1355f8u;

    // 0x1355f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1355fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1355fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x135600: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x135600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x135604: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13560c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x135610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135614: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x135614u;
    SET_GPR_U32(ctx, 31, 0x13561Cu);
    ctx->pc = 0x135618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135614u;
    // 0x135618: 0x262501f0  addiu       $a1, $s1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x135614u, 0x13561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13561Cu;
label_13561c:
    // 0x13561c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13561cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x135620: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135624: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x135624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135628: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x135628u;
    SET_GPR_U32(ctx, 31, 0x135630u);
    ctx->pc = 0x13562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135628u;
    // 0x13562c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135628u, 0x135630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135630u;
label_135630:
    // 0x135630: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x135630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135634: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x135634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135638: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x135638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x13563c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x135640: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x135640u;
    SET_GPR_U32(ctx, 31, 0x135648u);
    ctx->pc = 0x135644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135640u;
    // 0x135644: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135640u, 0x135648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135648u;
label_135648:
    // 0x135648: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x135648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13564c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135650: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x135650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x135654: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x135654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x135658: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13565c: 0x7e220180  sq          $v0, 0x180($s1)
    ctx->pc = 0x13565cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), GPR_VEC(ctx, 2));
    // 0x135660: 0xc04828c  jal         func_120A30
    ctx->pc = 0x135660u;
    SET_GPR_U32(ctx, 31, 0x135668u);
    ctx->pc = 0x135664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135660u;
    // 0x135664: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x135660u, 0x135668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135668u;
label_135668:
    // 0x135668: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x135668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13566c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13566cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135670: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x135670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135674: 0x3e00008  jr          $ra
    ctx->pc = 0x135674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135674u;
        // 0x135678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13567Cu;
    // 0x13567c: 0x0  nop
    ctx->pc = 0x13567cu;
    // NOP
    ctx->pc = 0x135680u;
}
