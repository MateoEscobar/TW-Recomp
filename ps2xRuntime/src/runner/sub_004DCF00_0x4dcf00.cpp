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

// Function: sub_004DCF00
// Address: 0x4dcf00 - 0x4dcf68
void sub_004DCF00_0x4dcf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCF00_0x4dcf00");
#endif

    switch (ctx->pc) {
        case 0x4dcf00u: goto label_4dcf00;
        case 0x4dcf04u: goto label_4dcf04;
        case 0x4dcf08u: goto label_4dcf08;
        case 0x4dcf0cu: goto label_4dcf0c;
        case 0x4dcf10u: goto label_4dcf10;
        case 0x4dcf14u: goto label_4dcf14;
        case 0x4dcf18u: goto label_4dcf18;
        case 0x4dcf1cu: goto label_4dcf1c;
        case 0x4dcf20u: goto label_4dcf20;
        case 0x4dcf24u: goto label_4dcf24;
        case 0x4dcf28u: goto label_4dcf28;
        case 0x4dcf2cu: goto label_4dcf2c;
        case 0x4dcf30u: goto label_4dcf30;
        case 0x4dcf34u: goto label_4dcf34;
        case 0x4dcf38u: goto label_4dcf38;
        case 0x4dcf3cu: goto label_4dcf3c;
        case 0x4dcf40u: goto label_4dcf40;
        case 0x4dcf44u: goto label_4dcf44;
        case 0x4dcf48u: goto label_4dcf48;
        case 0x4dcf4cu: goto label_4dcf4c;
        case 0x4dcf50u: goto label_4dcf50;
        case 0x4dcf54u: goto label_4dcf54;
        case 0x4dcf58u: goto label_4dcf58;
        case 0x4dcf5cu: goto label_4dcf5c;
        case 0x4dcf60u: goto label_4dcf60;
        case 0x4dcf64u: goto label_4dcf64;
        default: break;
    }

    ctx->pc = 0x4dcf00u;

label_4dcf00:
    // 0x4dcf00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dcf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dcf04:
    // 0x4dcf04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dcf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dcf08:
    // 0x4dcf08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dcf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dcf0c:
    // 0x4dcf0c: 0x84660040  lh          $a2, 0x40($v1)
    ctx->pc = 0x4dcf0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4dcf10:
    // 0x4dcf10: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4dcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4dcf14:
    // 0x4dcf14: 0x40f809  jalr        $v0
label_4dcf18:
    if (ctx->pc == 0x4DCF18u) {
        ctx->pc = 0x4DCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF14u;
        // 0x4dcf18: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCF1Cu;
        goto label_4dcf1c;
    }
    ctx->pc = 0x4DCF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCF1Cu);
        ctx->pc = 0x4DCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF14u;
        // 0x4dcf18: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCF14u, 0x4DCF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCF1Cu;
label_4dcf1c:
    // 0x4dcf1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dcf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dcf20:
    // 0x4dcf20: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_4dcf24:
    if (ctx->pc == 0x4DCF24u) {
        ctx->pc = 0x4DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF20u;
        // 0x4dcf24: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCF28u;
        goto label_4dcf28;
    }
    ctx->pc = 0x4DCF20u;
    {
        const bool branch_taken_0x4dcf20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF20u;
        // 0x4dcf24: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcf20) {
            ctx->pc = 0x4DCF38u;
            goto label_4dcf38;
        }
    }
    ctx->pc = 0x4DCF28u;
label_4dcf28:
    // 0x4dcf28: 0xc10ac74  jal         func_42B1D0
label_4dcf2c:
    if (ctx->pc == 0x4DCF2Cu) {
        ctx->pc = 0x4DCF30u;
        goto label_4dcf30;
    }
    ctx->pc = 0x4DCF28u;
    SET_GPR_U32(ctx, 31, 0x4DCF30u);
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x4DCF28u, 0x4DCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCF30u;
label_4dcf30:
    // 0x4dcf30: 0x10000005  b           . + 4 + (0x5 << 2)
label_4dcf34:
    if (ctx->pc == 0x4DCF34u) {
        ctx->pc = 0x4DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF30u;
        // 0x4dcf34: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCF38u;
        goto label_4dcf38;
    }
    ctx->pc = 0x4DCF30u;
    {
        const bool branch_taken_0x4dcf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF30u;
        // 0x4dcf34: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcf30) {
            ctx->pc = 0x4DCF48u;
            goto label_4dcf48;
        }
    }
    ctx->pc = 0x4DCF38u;
label_4dcf38:
    // 0x4dcf38: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4dcf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4dcf3c:
    // 0x4dcf3c: 0xc10ac74  jal         func_42B1D0
label_4dcf40:
    if (ctx->pc == 0x4DCF40u) {
        ctx->pc = 0x4DCF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF3Cu;
        // 0x4dcf40: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCF44u;
        goto label_4dcf44;
    }
    ctx->pc = 0x4DCF3Cu;
    SET_GPR_U32(ctx, 31, 0x4DCF44u);
    ctx->pc = 0x4DCF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCF3Cu;
    // 0x4dcf40: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x4DCF3Cu, 0x4DCF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCF44u;
label_4dcf44:
    // 0x4dcf44: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x4dcf44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4dcf48:
    // 0x4dcf48: 0x3c013169  lui         $at, 0x3169
    ctx->pc = 0x4dcf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12649 << 16));
label_4dcf4c:
    // 0x4dcf4c: 0x34210453  ori         $at, $at, 0x453
    ctx->pc = 0x4dcf4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1107);
label_4dcf50:
    // 0x4dcf50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4dcf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dcf54:
    // 0x4dcf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dcf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcf58:
    // 0x4dcf58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4dcf58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4dcf5c:
    // 0x4dcf5c: 0x3e00008  jr          $ra
label_4dcf60:
    if (ctx->pc == 0x4DCF60u) {
        ctx->pc = 0x4DCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF5Cu;
        // 0x4dcf60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCF64u;
        goto label_4dcf64;
    }
    ctx->pc = 0x4DCF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCF5Cu;
        // 0x4dcf60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DCF64u;
label_4dcf64:
    // 0x4dcf64: 0x0  nop
    ctx->pc = 0x4dcf64u;
    // NOP
    ctx->pc = 0x4dcf68u;
}
