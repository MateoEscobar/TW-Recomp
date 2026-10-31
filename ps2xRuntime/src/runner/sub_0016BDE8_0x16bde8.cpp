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

// Function: sub_0016BDE8
// Address: 0x16bde8 - 0x16be30
void sub_0016BDE8_0x16bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BDE8_0x16bde8");
#endif

    switch (ctx->pc) {
        case 0x16be10u: goto label_16be10;
        default: break;
    }

    ctx->pc = 0x16bde8u;

    // 0x16bde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bdec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bdf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16bdf4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bdfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16be00: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BE00u;
    {
        const bool branch_taken_0x16be00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE00u;
        // 0x16be04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be00) {
            ctx->pc = 0x16BE20u;
            goto label_16be20;
        }
    }
    ctx->pc = 0x16BE08u;
    // 0x16be08: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BE08u;
    SET_GPR_U32(ctx, 31, 0x16BE10u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BE08u, 0x16BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE10u;
label_16be10:
    // 0x16be10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16be10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be14: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16be14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16be18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16BE18u;
    {
        const bool branch_taken_0x16be18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be18) {
            ctx->pc = 0x16BE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BE18u;
            // 0x16be1c: 0xa07000dc  sb          $s0, 0xDC($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 220), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BE20u;
            goto label_16be20;
        }
    }
    ctx->pc = 0x16BE20u;
label_16be20:
    // 0x16be20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16be20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16be24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16be24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16be28: 0x3e00008  jr          $ra
    ctx->pc = 0x16BE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE28u;
        // 0x16be2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BE30u;
}
