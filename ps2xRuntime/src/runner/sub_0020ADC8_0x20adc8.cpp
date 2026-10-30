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

// Function: sub_0020ADC8
// Address: 0x20adc8 - 0x20ae38
void sub_0020ADC8_0x20adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ADC8_0x20adc8");
#endif

    switch (ctx->pc) {
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae24u: goto label_20ae24;
        default: break;
    }

    ctx->pc = 0x20adc8u;

    // 0x20adc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20adcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20add0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20add4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20add8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20ADD8u;
    {
        const bool branch_taken_0x20add8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADD8u;
        // 0x20addc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20add8) {
            ctx->pc = 0x20ADE8u;
            goto label_20ade8;
        }
    }
    ctx->pc = 0x20ADE0u;
    // 0x20ade0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20ADE0u;
    {
        const bool branch_taken_0x20ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADE0u;
        // 0x20ade4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ade0) {
            ctx->pc = 0x20AE28u;
            goto label_20ae28;
        }
    }
    ctx->pc = 0x20ADE8u;
label_20ade8:
    // 0x20ade8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20adec: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20ADECu;
    {
        const bool branch_taken_0x20adec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADECu;
        // 0x20adf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adec) {
            ctx->pc = 0x20AE28u;
            goto label_20ae28;
        }
    }
    ctx->pc = 0x20ADF4u;
    // 0x20adf4: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x20ADF4u;
    SET_GPR_U32(ctx, 31, 0x20ADFCu);
    ctx->pc = 0x20ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADF4u;
    // 0x20adf8: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20ADF4u, 0x20ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADFCu;
label_20adfc:
    // 0x20adfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20ADFCu;
    {
        const bool branch_taken_0x20adfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20adfc) {
            ctx->pc = 0x20AE0Cu;
            goto label_20ae0c;
        }
    }
    ctx->pc = 0x20AE04u;
    // 0x20ae04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE04u;
    {
        const bool branch_taken_0x20ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE04u;
        // 0x20ae08: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae04) {
            ctx->pc = 0x20AE14u;
            goto label_20ae14;
        }
    }
    ctx->pc = 0x20AE0Cu;
label_20ae0c:
    // 0x20ae0c: 0xc057dca  jal         func_15F728
    ctx->pc = 0x20AE0Cu;
    SET_GPR_U32(ctx, 31, 0x20AE14u);
    ctx->pc = 0x15F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F728u, 0x20AE0Cu, 0x20AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE14u;
label_20ae14:
    // 0x20ae14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20ae18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20ae1c: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x20AE1Cu;
    SET_GPR_U32(ctx, 31, 0x20AE24u);
    ctx->pc = 0x20AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE1Cu;
    // 0x20ae20: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20AE1Cu, 0x20AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE24u;
label_20ae24:
    // 0x20ae24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ae28:
    // 0x20ae28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ae28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ae2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ae2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ae30: 0x3e00008  jr          $ra
    ctx->pc = 0x20AE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE30u;
        // 0x20ae34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AE38u;
}
