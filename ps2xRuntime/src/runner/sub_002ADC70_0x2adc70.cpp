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

// Function: sub_002ADC70
// Address: 0x2adc70 - 0x2adce8
void sub_002ADC70_0x2adc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADC70_0x2adc70");
#endif

    switch (ctx->pc) {
        case 0x2adca8u: goto label_2adca8;
        case 0x2adcb8u: goto label_2adcb8;
        default: break;
    }

    ctx->pc = 0x2adc70u;

    // 0x2adc70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2adc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2adc74: 0x14a20019  bne         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2ADC74u;
    {
        const bool branch_taken_0x2adc74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2adc74) {
            ctx->pc = 0x2ADCDCu;
            goto label_2adcdc;
        }
    }
    ctx->pc = 0x2ADC7Cu;
    // 0x2adc7c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ADC7Cu;
    {
        const bool branch_taken_0x2adc7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC7Cu;
        // 0x2adc80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc7c) {
            ctx->pc = 0x2ADCDCu;
            goto label_2adcdc;
        }
    }
    ctx->pc = 0x2ADC84u;
    // 0x2adc84: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2adc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2adc88: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2adc8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2adc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2adc90: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2adc90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2adc94: 0x24639440  addiu       $v1, $v1, -0x6BC0
    ctx->pc = 0x2adc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x2adc98: 0xaca49438  sw          $a0, -0x6BC8($a1)
    ctx->pc = 0x2adc98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6E9438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6E9438u, _value); } while (0);
    // 0x2adc9c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2adc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2adca0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2adca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2adca4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2adca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2adca8:
    // 0x2adca8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2adca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2adcac: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x2adcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2adcb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2adcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2adcb4: 0x0  nop
    ctx->pc = 0x2adcb4u;
    // NOP
label_2adcb8:
    // 0x2adcb8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2adcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2adcbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2adcc0: 0x0  nop
    ctx->pc = 0x2adcc0u;
    // NOP
    // 0x2adcc4: 0x0  nop
    ctx->pc = 0x2adcc4u;
    // NOP
    // 0x2adcc8: 0x1447fffb  bne         $v0, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2ADCC8u;
    {
        const bool branch_taken_0x2adcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2ADCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCC8u;
        // 0x2adccc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcc8) {
            ctx->pc = 0x2ADCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adcb8;
        }
    }
    ctx->pc = 0x2ADCD0u;
    // 0x2adcd0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2adcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcd4: 0x1447fff4  bne         $v0, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2ADCD4u;
    {
        const bool branch_taken_0x2adcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2ADCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCD4u;
        // 0x2adcd8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcd4) {
            ctx->pc = 0x2ADCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adca8;
        }
    }
    ctx->pc = 0x2ADCDCu;
label_2adcdc:
    // 0x2adcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADCE4u;
    // 0x2adce4: 0x0  nop
    ctx->pc = 0x2adce4u;
    // NOP
    ctx->pc = 0x2adce8u;
}
