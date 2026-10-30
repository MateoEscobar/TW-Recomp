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

// Function: sub_002C14F8
// Address: 0x2c14f8 - 0x2c1538
void sub_002C14F8_0x2c14f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C14F8_0x2c14f8");
#endif

    switch (ctx->pc) {
        case 0x2c151cu: goto label_2c151c;
        default: break;
    }

    ctx->pc = 0x2c14f8u;

    // 0x2c14f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c14f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c14fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c1500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1508: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x2c1508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x2c150c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C150Cu;
    {
        const bool branch_taken_0x2c150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c150c) {
            ctx->pc = 0x2C1510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C150Cu;
            // 0x2c1510: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1520u;
            goto label_2c1520;
        }
    }
    ctx->pc = 0x2C1514u;
    // 0x2c1514: 0xc0b05f0  jal         func_2C17C0
    ctx->pc = 0x2C1514u;
    SET_GPR_U32(ctx, 31, 0x2C151Cu);
    ctx->pc = 0x2C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C17C0u, 0x2C1514u, 0x2C151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C151Cu;
label_2c151c:
    // 0x2c151c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c1520:
    // 0x2c1520: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2c1524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c1524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c152c: 0xa46200f4  sh          $v0, 0xF4($v1)
    ctx->pc = 0x2c152cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c1530: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1530u;
        // 0x2c1534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1538u;
}
