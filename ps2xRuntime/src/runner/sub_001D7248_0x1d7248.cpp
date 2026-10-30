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

// Function: sub_001D7248
// Address: 0x1d7248 - 0x1d7270
void sub_001D7248_0x1d7248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7248_0x1d7248");
#endif

    switch (ctx->pc) {
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        default: break;
    }

    ctx->pc = 0x1d7248u;

label_1d7248:
    // 0x1d7248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d724c:
    // 0x1d724c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d7250:
    // 0x1d7250: 0xc4800634  lwc1        $f0, 0x634($a0)
    ctx->pc = 0x1d7250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7254:
    // 0x1d7254: 0x8c820638  lw          $v0, 0x638($a0)
    ctx->pc = 0x1d7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1592)));
label_1d7258:
    // 0x1d7258: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1d7258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1d725c:
    // 0x1d725c: 0x40f809  jalr        $v0
label_1d7260:
    if (ctx->pc == 0x1D7260u) {
        ctx->pc = 0x1D7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D725Cu;
        // 0x1d7260: 0xe4800630  swc1        $f0, 0x630($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7264u;
        goto label_1d7264;
    }
    ctx->pc = 0x1D725Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7264u);
        ctx->pc = 0x1D7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D725Cu;
        // 0x1d7260: 0xe4800630  swc1        $f0, 0x630($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D725Cu, 0x1D7264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7264u;
label_1d7264:
    // 0x1d7264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7268:
    // 0x1d7268: 0x3e00008  jr          $ra
label_1d726c:
    if (ctx->pc == 0x1D726Cu) {
        ctx->pc = 0x1D726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7268u;
        // 0x1d726c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7270u;
        goto label_fallthrough_0x1d7268;
    }
    ctx->pc = 0x1D7268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7268u;
        // 0x1d726c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7268:
    ctx->pc = 0x1D7270u;
}
