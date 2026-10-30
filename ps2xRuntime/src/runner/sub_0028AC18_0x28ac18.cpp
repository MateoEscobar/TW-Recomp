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

// Function: sub_0028AC18
// Address: 0x28ac18 - 0x28ac68
void sub_0028AC18_0x28ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC18_0x28ac18");
#endif

    switch (ctx->pc) {
        case 0x28ac30u: goto label_28ac30;
        case 0x28ac50u: goto label_28ac50;
        default: break;
    }

    ctx->pc = 0x28ac18u;

    // 0x28ac18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ac1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ac24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ac28: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x28AC28u;
    SET_GPR_U32(ctx, 31, 0x28AC30u);
    ctx->pc = 0x28AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC28u;
    // 0x28ac2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x28AC28u, 0x28AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC30u;
label_28ac30:
    // 0x28ac30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28ac34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x28ac38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x28ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x28ac3c: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x28ac3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x28ac40: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x28ac44: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28ac48: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x28AC48u;
    SET_GPR_U32(ctx, 31, 0x28AC50u);
    ctx->pc = 0x28AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC48u;
    // 0x28ac4c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x28AC48u, 0x28AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC50u;
label_28ac50:
    // 0x28ac50: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x28ac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x28ac54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ac54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ac58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC5Cu;
        // 0x28ac60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC64u;
    // 0x28ac64: 0x0  nop
    ctx->pc = 0x28ac64u;
    // NOP
    ctx->pc = 0x28ac68u;
}
