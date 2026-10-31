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

// Function: sub_001FE070
// Address: 0x1fe070 - 0x1fe0c8
void sub_001FE070_0x1fe070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE070_0x1fe070");
#endif

    switch (ctx->pc) {
        case 0x1fe090u: goto label_1fe090;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0b0u: goto label_1fe0b0;
        default: break;
    }

    ctx->pc = 0x1fe070u;

    // 0x1fe070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fe074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe080: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x1fe080u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x1fe084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe088: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1FE088u;
    SET_GPR_U32(ctx, 31, 0x1FE090u);
    ctx->pc = 0x1FE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE088u;
    // 0x1fe08c: 0x2631eef0  addiu       $s1, $s1, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1FE088u, 0x1FE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE090u;
label_1fe090:
    // 0x1fe090: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fe094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe098: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1FE098u;
    SET_GPR_U32(ctx, 31, 0x1FE0A0u);
    ctx->pc = 0x1FE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE098u;
    // 0x1fe09c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1FE098u, 0x1FE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0A0u;
label_1fe0a0:
    // 0x1fe0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0a8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1FE0A8u;
    SET_GPR_U32(ctx, 31, 0x1FE0B0u);
    ctx->pc = 0x1FE0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0A8u;
    // 0x1fe0ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1FE0A8u, 0x1FE0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0B0u;
label_1fe0b0:
    // 0x1fe0b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0BCu;
        // 0x1fe0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE0C4u;
    // 0x1fe0c4: 0x0  nop
    ctx->pc = 0x1fe0c4u;
    // NOP
    ctx->pc = 0x1fe0c8u;
}
