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

// Function: sub_002C4AF8
// Address: 0x2c4af8 - 0x2c4b20
void sub_002C4AF8_0x2c4af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4AF8_0x2c4af8");
#endif

    switch (ctx->pc) {
        case 0x2c4b14u: goto label_2c4b14;
        default: break;
    }

    ctx->pc = 0x2c4af8u;

    // 0x2c4af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4afc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2c4afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2c4b00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4b08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4b0c: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2C4B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4B14u);
    ctx->pc = 0x2C4B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B0Cu;
    // 0x2c4b10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2C4B0Cu, 0x2C4B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B14u;
label_2c4b14:
    // 0x2c4b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4b18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B18u;
        // 0x2c4b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4B20u;
}
