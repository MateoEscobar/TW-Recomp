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

// Function: sub_001D8620
// Address: 0x1d8620 - 0x1d8658
void sub_001D8620_0x1d8620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8620_0x1d8620");
#endif

    switch (ctx->pc) {
        case 0x1d863cu: goto label_1d863c;
        case 0x1d8648u: goto label_1d8648;
        default: break;
    }

    ctx->pc = 0x1d8620u;

    // 0x1d8620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d8628: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1d862c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8630: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d8634: 0xc076104  jal         func_1D8410
    ctx->pc = 0x1D8634u;
    SET_GPR_U32(ctx, 31, 0x1D863Cu);
    ctx->pc = 0x1D8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8634u;
    // 0x1d8638: 0xc44c57ac  lwc1        $f12, 0x57AC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8410u, 0x1D8634u, 0x1D863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D863Cu;
label_1d863c:
    // 0x1d863c: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x1d863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1d8640: 0xc0760f8  jal         func_1D83E0
    ctx->pc = 0x1D8640u;
    SET_GPR_U32(ctx, 31, 0x1D8648u);
    ctx->pc = 0x1D8644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8640u;
    // 0x1d8644: 0xc44c57a8  lwc1        $f12, 0x57A8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83E0u, 0x1D8640u, 0x1D8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8648u;
label_1d8648:
    // 0x1d8648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d8648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d864c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8650: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8650u;
        // 0x1d8654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8658u;
}
