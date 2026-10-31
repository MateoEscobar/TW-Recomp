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

// Function: sub_001B49F8
// Address: 0x1b49f8 - 0x1b4a28
void sub_001B49F8_0x1b49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B49F8_0x1b49f8");
#endif

    switch (ctx->pc) {
        case 0x1b4a1cu: goto label_1b4a1c;
        default: break;
    }

    ctx->pc = 0x1b49f8u;

    // 0x1b49f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b49f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b49fc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1b4a00: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1b4a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4a08: 0x24849e80  addiu       $a0, $a0, -0x6180
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942336));
    // 0x1b4a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4a10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4a14: 0xc06906c  jal         func_1A41B0
    ctx->pc = 0x1B4A14u;
    SET_GPR_U32(ctx, 31, 0x1B4A1Cu);
    ctx->pc = 0x1B4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A14u;
    // 0x1b4a18: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41B0u, 0x1B4A14u, 0x1B4A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A1Cu;
label_1b4a1c:
    // 0x1b4a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A20u;
        // 0x1b4a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4A28u;
}
