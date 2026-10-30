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

// Function: sub_00431AC0
// Address: 0x431ac0 - 0x431b08
void sub_00431AC0_0x431ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431AC0_0x431ac0");
#endif

    switch (ctx->pc) {
        case 0x431af8u: goto label_431af8;
        default: break;
    }

    ctx->pc = 0x431ac0u;

    // 0x431ac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x431ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x431ac4: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x431ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x431ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x431ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x431acc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x431accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x431ad0: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x431ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x431ad4: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x431ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x431ad8: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x431ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x431adc: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x431adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x431ae0: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x431ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x431ae4: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x431ae4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x431ae8: 0xe7ae0044  swc1        $f14, 0x44($sp)
    ctx->pc = 0x431ae8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x431aec: 0xe7b00048  swc1        $f16, 0x48($sp)
    ctx->pc = 0x431aecu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x431af0: 0xc10d9c4  jal         func_436710
    ctx->pc = 0x431AF0u;
    SET_GPR_U32(ctx, 31, 0x431AF8u);
    ctx->pc = 0x431AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431AF0u;
    // 0x431af4: 0xe7b2004c  swc1        $f18, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x436710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436710u, 0x431AF0u, 0x431AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431AF8u;
label_431af8:
    // 0x431af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x431af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431afc: 0x3e00008  jr          $ra
    ctx->pc = 0x431AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431AFCu;
        // 0x431b00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431B04u;
    // 0x431b04: 0x0  nop
    ctx->pc = 0x431b04u;
    // NOP
    ctx->pc = 0x431b08u;
}
