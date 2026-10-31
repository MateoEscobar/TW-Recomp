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

// Function: sub_0015FDE0
// Address: 0x15fde0 - 0x15fe30
void sub_0015FDE0_0x15fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FDE0_0x15fde0");
#endif

    switch (ctx->pc) {
        case 0x15fe08u: goto label_15fe08;
        case 0x15fe20u: goto label_15fe20;
        default: break;
    }

    ctx->pc = 0x15fde0u;

    // 0x15fde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fde4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15fde8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15fdec: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15FDECu;
    {
        const bool branch_taken_0x15fdec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDECu;
        // 0x15fdf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fdec) {
            ctx->pc = 0x15FE20u;
            goto label_15fe20;
        }
    }
    ctx->pc = 0x15FDF4u;
    // 0x15fdf4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FDF4u;
    {
        const bool branch_taken_0x15fdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FDF4u;
        // 0x15fdf8: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fdf4) {
            ctx->pc = 0x15FE20u;
            goto label_15fe20;
        }
    }
    ctx->pc = 0x15FDFCu;
    // 0x15fdfc: 0x26106800  addiu       $s0, $s0, 0x6800
    ctx->pc = 0x15fdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26624));
    // 0x15fe00: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15FE00u;
    SET_GPR_U32(ctx, 31, 0x15FE08u);
    ctx->pc = 0x15FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE00u;
    // 0x15fe04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15FE00u, 0x15FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE08u;
label_15fe08:
    // 0x15fe08: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15fe0c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15fe10: 0x246388b8  addiu       $v1, $v1, -0x7748
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936760));
    // 0x15fe14: 0x24846830  addiu       $a0, $a0, 0x6830
    ctx->pc = 0x15fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    // 0x15fe18: 0xc071a88  jal         func_1C6A20
    ctx->pc = 0x15FE18u;
    SET_GPR_U32(ctx, 31, 0x15FE20u);
    ctx->pc = 0x15FE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE18u;
    // 0x15fe1c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A20u, 0x15FE18u, 0x15FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE20u;
label_15fe20:
    // 0x15fe20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15fe20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fe24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fe28: 0x3e00008  jr          $ra
    ctx->pc = 0x15FE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE28u;
        // 0x15fe2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FE30u;
}
