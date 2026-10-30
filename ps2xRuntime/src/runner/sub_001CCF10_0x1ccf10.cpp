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

// Function: sub_001CCF10
// Address: 0x1ccf10 - 0x1ccf88
void sub_001CCF10_0x1ccf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCF10_0x1ccf10");
#endif

    switch (ctx->pc) {
        case 0x1ccf40u: goto label_1ccf40;
        case 0x1ccf4cu: goto label_1ccf4c;
        case 0x1ccf64u: goto label_1ccf64;
        case 0x1ccf70u: goto label_1ccf70;
        default: break;
    }

    ctx->pc = 0x1ccf10u;

    // 0x1ccf10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ccf14: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ccf14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1ccf18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ccf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ccf1c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ccf20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ccf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ccf24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf2c: 0x26110440  addiu       $s1, $s0, 0x440
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x1ccf30: 0xa200044a  sb          $zero, 0x44A($s0)
    ctx->pc = 0x1ccf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1098), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccf34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf38: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1CCF38u;
    SET_GPR_U32(ctx, 31, 0x1CCF40u);
    ctx->pc = 0x1CCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF38u;
    // 0x1ccf3c: 0x24a558d8  addiu       $a1, $a1, 0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CCF38u, 0x1CCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF40u;
label_1ccf40:
    // 0x1ccf40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf44: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1CCF44u;
    SET_GPR_U32(ctx, 31, 0x1CCF4Cu);
    ctx->pc = 0x1CCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF44u;
    // 0x1ccf48: 0x26050540  addiu       $a1, $s0, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1CCF44u, 0x1CCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF4Cu;
label_1ccf4c:
    // 0x1ccf4c: 0x8e070558  lw          $a3, 0x558($s0)
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x1ccf50: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ccf50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x1ccf54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ccf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf58: 0x24c658e8  addiu       $a2, $a2, 0x58E8
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22760));
    // 0x1ccf5c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF64u);
    ctx->pc = 0x1CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF5Cu;
    // 0x1ccf60: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1CCF5Cu, 0x1CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF64u;
label_1ccf64:
    // 0x1ccf64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ccf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf68: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1CCF68u;
    SET_GPR_U32(ctx, 31, 0x1CCF70u);
    ctx->pc = 0x1CCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF68u;
    // 0x1ccf6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1CCF68u, 0x1CCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF70u;
label_1ccf70:
    // 0x1ccf70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ccf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ccf74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ccf78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ccf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccf7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf80: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF80u;
        // 0x1ccf84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF88u;
}
