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

// Function: sub_00386798
// Address: 0x386798 - 0x3867f0
void sub_00386798_0x386798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386798_0x386798");
#endif

    switch (ctx->pc) {
        case 0x3867b0u: goto label_3867b0;
        case 0x3867bcu: goto label_3867bc;
        case 0x3867c4u: goto label_3867c4;
        default: break;
    }

    ctx->pc = 0x386798u;

    // 0x386798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x386798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38679c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3867a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3867a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3867a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3867a8: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x3867A8u;
    SET_GPR_U32(ctx, 31, 0x3867B0u);
    ctx->pc = 0x3867ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867A8u;
    // 0x3867ac: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x3867A8u, 0x3867B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867B0u;
label_3867b0:
    // 0x3867b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3867b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3867b4: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x3867B4u;
    SET_GPR_U32(ctx, 31, 0x3867BCu);
    ctx->pc = 0x3867B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867B4u;
    // 0x3867b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x3867B4u, 0x3867BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867BCu;
label_3867bc:
    // 0x3867bc: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x3867BCu;
    SET_GPR_U32(ctx, 31, 0x3867C4u);
    ctx->pc = 0x3867C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867BCu;
    // 0x3867c0: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x3867BCu, 0x3867C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867C4u;
label_3867c4:
    // 0x3867c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3867c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3867c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3867c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3867cc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3867ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3867d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3867D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3867D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867D0u;
        // 0x3867d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3867D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3867D8u;
    // 0x3867d8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x3867d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3867dc: 0x0  nop
    ctx->pc = 0x3867dcu;
    // NOP
    // 0x3867e0: 0x0  nop
    ctx->pc = 0x3867e0u;
    // NOP
    // 0x3867e4: 0x0  nop
    ctx->pc = 0x3867e4u;
    // NOP
    // 0x3867e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3867e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3867ec: 0x0  nop
    ctx->pc = 0x3867ecu;
    // NOP
    ctx->pc = 0x3867f0u;
}
