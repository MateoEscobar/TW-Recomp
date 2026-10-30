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

// Function: sub_00126A30
// Address: 0x126a30 - 0x126a68
void sub_00126A30_0x126a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A30_0x126a30");
#endif

    ctx->pc = 0x126a30u;

    // 0x126a30: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x126a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126a34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x126A34u;
    {
        const bool branch_taken_0x126a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A34u;
        // 0x126a38: 0xa0850468  sb          $a1, 0x468($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1128), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a34) {
            ctx->pc = 0x126A60u;
            goto label_126a60;
        }
    }
    ctx->pc = 0x126A3Cu;
    // 0x126a3c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x126a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x126a40: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x126a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x126a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126a48: 0xc4418aac  lwc1        $f1, -0x7554($v0)
    ctx->pc = 0x126a48u;
    { uint32_t bits = FAST_READ32(0x548AACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126a4c: 0xe480034c  swc1        $f0, 0x34C($a0)
    ctx->pc = 0x126a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 844), bits); }
    // 0x126a50: 0xe48103e4  swc1        $f1, 0x3E4($a0)
    ctx->pc = 0x126a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 996), bits); }
    // 0x126a54: 0xac800448  sw          $zero, 0x448($a0)
    ctx->pc = 0x126a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1096), GPR_U32(ctx, 0));
    // 0x126a58: 0xa0800466  sb          $zero, 0x466($a0)
    ctx->pc = 0x126a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1126), (uint8_t)GPR_U32(ctx, 0));
    // 0x126a5c: 0xa0800467  sb          $zero, 0x467($a0)
    ctx->pc = 0x126a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1127), (uint8_t)GPR_U32(ctx, 0));
label_126a60:
    // 0x126a60: 0x3e00008  jr          $ra
    ctx->pc = 0x126A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A68u;
}
