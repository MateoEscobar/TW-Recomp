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

// Function: sub_0036BE50
// Address: 0x36be50 - 0x36bec8
void sub_0036BE50_0x36be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BE50_0x36be50");
#endif

    switch (ctx->pc) {
        case 0x36be78u: goto label_36be78;
        case 0x36be80u: goto label_36be80;
        case 0x36be94u: goto label_36be94;
        case 0x36be9cu: goto label_36be9c;
        case 0x36bea8u: goto label_36bea8;
        default: break;
    }

    ctx->pc = 0x36be50u;

    // 0x36be50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36be54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36be54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36be58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36be5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36be60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36be60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36be64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36be6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36be70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BE70u;
    SET_GPR_U32(ctx, 31, 0x36BE78u);
    ctx->pc = 0x36BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE70u;
    // 0x36be74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BE70u, 0x36BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE78u;
label_36be78:
    // 0x36be78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36BE78u;
    SET_GPR_U32(ctx, 31, 0x36BE80u);
    ctx->pc = 0x36BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE78u;
    // 0x36be7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BE78u, 0x36BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE80u;
label_36be80:
    // 0x36be80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36be84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BE8Cu;
    SET_GPR_U32(ctx, 31, 0x36BE94u);
    ctx->pc = 0x36BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE8Cu;
    // 0x36be90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BE8Cu, 0x36BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE94u;
label_36be94:
    // 0x36be94: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36BE94u;
    SET_GPR_U32(ctx, 31, 0x36BE9Cu);
    ctx->pc = 0x36BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE94u;
    // 0x36be98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BE94u, 0x36BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE9Cu;
label_36be9c:
    // 0x36be9c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36be9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bea0: 0xc107628  jal         func_41D8A0
    ctx->pc = 0x36BEA0u;
    SET_GPR_U32(ctx, 31, 0x36BEA8u);
    ctx->pc = 0x36BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEA0u;
    // 0x36bea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8A0u, 0x36BEA0u, 0x36BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEA8u;
label_36bea8:
    // 0x36bea8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36bea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36beac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36beacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36beb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36beb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36beb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36beb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36beb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x36BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BEBCu;
        // 0x36bec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BEC4u;
    // 0x36bec4: 0x0  nop
    ctx->pc = 0x36bec4u;
    // NOP
    ctx->pc = 0x36bec8u;
}
