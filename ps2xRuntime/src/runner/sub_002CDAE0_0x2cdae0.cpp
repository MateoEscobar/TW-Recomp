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

// Function: sub_002CDAE0
// Address: 0x2cdae0 - 0x2cdb30
void sub_002CDAE0_0x2cdae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDAE0_0x2cdae0");
#endif

    switch (ctx->pc) {
        case 0x2cdb10u: goto label_2cdb10;
        default: break;
    }

    ctx->pc = 0x2cdae0u;

    // 0x2cdae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cdae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cdae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdae8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cdae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cdaec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cdaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cdaf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cdaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdaf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdaf8: 0x92110037  lbu         $s1, 0x37($s0)
    ctx->pc = 0x2cdaf8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
    // 0x2cdafc: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDAFCu;
    {
        const bool branch_taken_0x2cdafc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cdafc) {
            ctx->pc = 0x2CDB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAFCu;
            // 0x2cdb00: 0xa2000037  sb          $zero, 0x37($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB1Cu;
            goto label_2cdb1c;
        }
    }
    ctx->pc = 0x2CDB04u;
    // 0x2cdb04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cdb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cdb08: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x2CDB08u;
    SET_GPR_U32(ctx, 31, 0x2CDB10u);
    ctx->pc = 0x2CDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB08u;
    // 0x2cdb0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2CDB08u, 0x2CDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB10u;
label_2cdb10:
    // 0x2cdb10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CDB10u;
    {
        const bool branch_taken_0x2cdb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb10) {
            ctx->pc = 0x2CDB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB10u;
            // 0x2cdb14: 0xa2110036  sb          $s1, 0x36($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDB18u;
            goto label_2cdb18;
        }
    }
    ctx->pc = 0x2CDB18u;
label_2cdb18:
    // 0x2cdb18: 0xa2000037  sb          $zero, 0x37($s0)
    ctx->pc = 0x2cdb18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
label_2cdb1c:
    // 0x2cdb1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cdb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdb20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cdb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdb28: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB28u;
        // 0x2cdb2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDB30u;
}
