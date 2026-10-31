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

// Function: sub_001FE0D8
// Address: 0x1fe0d8 - 0x1fe130
void sub_001FE0D8_0x1fe0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE0D8_0x1fe0d8");
#endif

    switch (ctx->pc) {
        case 0x1fe0f8u: goto label_1fe0f8;
        case 0x1fe108u: goto label_1fe108;
        case 0x1fe118u: goto label_1fe118;
        default: break;
    }

    ctx->pc = 0x1fe0d8u;

    // 0x1fe0d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe0dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fe0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0e8: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x1fe0ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe0f0: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1FE0F0u;
    SET_GPR_U32(ctx, 31, 0x1FE0F8u);
    ctx->pc = 0x1FE0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0F0u;
    // 0x1fe0f4: 0x2631ef10  addiu       $s1, $s1, -0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1FE0F0u, 0x1FE0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0F8u;
label_1fe0f8:
    // 0x1fe0f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fe0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe100: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1FE100u;
    SET_GPR_U32(ctx, 31, 0x1FE108u);
    ctx->pc = 0x1FE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE100u;
    // 0x1fe104: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1FE100u, 0x1FE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE108u;
label_1fe108:
    // 0x1fe108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe110: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1FE110u;
    SET_GPR_U32(ctx, 31, 0x1FE118u);
    ctx->pc = 0x1FE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE110u;
    // 0x1fe114: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1FE110u, 0x1FE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE118u;
label_1fe118:
    // 0x1fe118: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe124: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE124u;
        // 0x1fe128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE12Cu;
    // 0x1fe12c: 0x0  nop
    ctx->pc = 0x1fe12cu;
    // NOP
    ctx->pc = 0x1fe130u;
}
