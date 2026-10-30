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

// Function: sub_00294690
// Address: 0x294690 - 0x2946c0
void sub_00294690_0x294690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294690_0x294690");
#endif

    switch (ctx->pc) {
        case 0x2946a4u: goto label_2946a4;
        case 0x2946acu: goto label_2946ac;
        default: break;
    }

    ctx->pc = 0x294690u;

    // 0x294690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294694: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x294694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x294698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29469c: 0xc0a5194  jal         func_294650
    ctx->pc = 0x29469Cu;
    SET_GPR_U32(ctx, 31, 0x2946A4u);
    ctx->pc = 0x2946A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29469Cu;
    // 0x2946a0: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294650u, 0x29469Cu, 0x2946A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946A4u;
label_2946a4:
    // 0x2946a4: 0xc0a519c  jal         func_294670
    ctx->pc = 0x2946A4u;
    SET_GPR_U32(ctx, 31, 0x2946ACu);
    ctx->pc = 0x2946A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946A4u;
    // 0x2946a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294670u, 0x2946A4u, 0x2946ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946ACu;
label_2946ac:
    // 0x2946ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2946acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946b0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2946b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2946b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2946B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946B4u;
        // 0x2946b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946BCu;
    // 0x2946bc: 0x0  nop
    ctx->pc = 0x2946bcu;
    // NOP
    ctx->pc = 0x2946c0u;
}
