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

// Function: sub_0040CCE8
// Address: 0x40cce8 - 0x40cd28
void sub_0040CCE8_0x40cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CCE8_0x40cce8");
#endif

    switch (ctx->pc) {
        case 0x40cd1cu: goto label_40cd1c;
        default: break;
    }

    ctx->pc = 0x40cce8u;

    // 0x40cce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40cce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40ccec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x40ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x40ccf0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x40ccf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x40ccf4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x40ccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x40ccf8: 0xa3a40003  sb          $a0, 0x3($sp)
    ctx->pc = 0x40ccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x40ccfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x40ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x40cd00: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x40cd00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40cd04: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x40cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x40cd08: 0x8c64deb8  lw          $a0, -0x2148($v1)
    ctx->pc = 0x40cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x40cd0c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x40cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cd10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40cd14: 0xc063232  jal         func_18C8C8
    ctx->pc = 0x40CD14u;
    SET_GPR_U32(ctx, 31, 0x40CD1Cu);
    ctx->pc = 0x18C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8C8u, 0x40CD14u, 0x40CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CD1Cu;
label_40cd1c:
    // 0x40cd1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40cd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40cd20: 0x3e00008  jr          $ra
    ctx->pc = 0x40CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD20u;
        // 0x40cd24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CD28u;
}
