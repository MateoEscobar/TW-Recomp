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

// Function: sub_0010A168
// Address: 0x10a168 - 0x10a1e0
void sub_0010A168_0x10a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A168_0x10a168");
#endif

    switch (ctx->pc) {
        case 0x10a188u: goto label_10a188;
        case 0x10a198u: goto label_10a198;
        case 0x10a1a8u: goto label_10a1a8;
        case 0x10a1b0u: goto label_10a1b0;
        case 0x10a1b8u: goto label_10a1b8;
        case 0x10a1c0u: goto label_10a1c0;
        default: break;
    }

    ctx->pc = 0x10a168u;

    // 0x10a168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a16c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10a170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a178: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10a17c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a180: 0xc05d448  jal         func_175120
    ctx->pc = 0x10A180u;
    SET_GPR_U32(ctx, 31, 0x10A188u);
    ctx->pc = 0x10A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A180u;
    // 0x10a184: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10A180u, 0x10A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A188u;
label_10a188:
    // 0x10a188: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a18c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a190: 0xc05d448  jal         func_175120
    ctx->pc = 0x10A190u;
    SET_GPR_U32(ctx, 31, 0x10A198u);
    ctx->pc = 0x10A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A190u;
    // 0x10a194: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10A190u, 0x10A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A198u;
label_10a198:
    // 0x10a198: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x10a19c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a1a0: 0xc05d448  jal         func_175120
    ctx->pc = 0x10A1A0u;
    SET_GPR_U32(ctx, 31, 0x10A1A8u);
    ctx->pc = 0x10A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1A0u;
    // 0x10a1a4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10A1A0u, 0x10A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1A8u;
label_10a1a8:
    // 0x10a1a8: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10A1A8u;
    SET_GPR_U32(ctx, 31, 0x10A1B0u);
    ctx->pc = 0x10A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1A8u;
    // 0x10a1ac: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10A1A8u, 0x10A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1B0u;
label_10a1b0:
    // 0x10a1b0: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10A1B0u;
    SET_GPR_U32(ctx, 31, 0x10A1B8u);
    ctx->pc = 0x10A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1B0u;
    // 0x10a1b4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10A1B0u, 0x10A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1B8u;
label_10a1b8:
    // 0x10a1b8: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10A1B8u;
    SET_GPR_U32(ctx, 31, 0x10A1C0u);
    ctx->pc = 0x10A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1B8u;
    // 0x10a1bc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x10A1B8u, 0x10A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1C0u;
label_10a1c0:
    // 0x10a1c0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x10a1c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10a1c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x10a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x10a1cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10a1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1D4u;
        // 0x10a1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A1DCu;
    // 0x10a1dc: 0x0  nop
    ctx->pc = 0x10a1dcu;
    // NOP
    ctx->pc = 0x10a1e0u;
}
