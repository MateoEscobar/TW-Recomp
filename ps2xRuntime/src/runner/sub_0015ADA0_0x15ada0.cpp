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

// Function: sub_0015ADA0
// Address: 0x15ada0 - 0x15af20
void sub_0015ADA0_0x15ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ADA0_0x15ada0");
#endif

    switch (ctx->pc) {
        case 0x15ada0u: goto label_15ada0;
        case 0x15ada4u: goto label_15ada4;
        case 0x15ada8u: goto label_15ada8;
        case 0x15adacu: goto label_15adac;
        case 0x15adb0u: goto label_15adb0;
        case 0x15adb4u: goto label_15adb4;
        case 0x15adb8u: goto label_15adb8;
        case 0x15adbcu: goto label_15adbc;
        case 0x15adc0u: goto label_15adc0;
        case 0x15adc4u: goto label_15adc4;
        case 0x15adc8u: goto label_15adc8;
        case 0x15adccu: goto label_15adcc;
        case 0x15add0u: goto label_15add0;
        case 0x15add4u: goto label_15add4;
        case 0x15add8u: goto label_15add8;
        case 0x15addcu: goto label_15addc;
        case 0x15ade0u: goto label_15ade0;
        case 0x15ade4u: goto label_15ade4;
        case 0x15ade8u: goto label_15ade8;
        case 0x15adecu: goto label_15adec;
        case 0x15adf0u: goto label_15adf0;
        case 0x15adf4u: goto label_15adf4;
        case 0x15adf8u: goto label_15adf8;
        case 0x15adfcu: goto label_15adfc;
        case 0x15ae00u: goto label_15ae00;
        case 0x15ae04u: goto label_15ae04;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae0cu: goto label_15ae0c;
        case 0x15ae10u: goto label_15ae10;
        case 0x15ae14u: goto label_15ae14;
        case 0x15ae18u: goto label_15ae18;
        case 0x15ae1cu: goto label_15ae1c;
        case 0x15ae20u: goto label_15ae20;
        case 0x15ae24u: goto label_15ae24;
        case 0x15ae28u: goto label_15ae28;
        case 0x15ae2cu: goto label_15ae2c;
        case 0x15ae30u: goto label_15ae30;
        case 0x15ae34u: goto label_15ae34;
        case 0x15ae38u: goto label_15ae38;
        case 0x15ae3cu: goto label_15ae3c;
        case 0x15ae40u: goto label_15ae40;
        case 0x15ae44u: goto label_15ae44;
        case 0x15ae48u: goto label_15ae48;
        case 0x15ae4cu: goto label_15ae4c;
        case 0x15ae50u: goto label_15ae50;
        case 0x15ae54u: goto label_15ae54;
        case 0x15ae58u: goto label_15ae58;
        case 0x15ae5cu: goto label_15ae5c;
        case 0x15ae60u: goto label_15ae60;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae68u: goto label_15ae68;
        case 0x15ae6cu: goto label_15ae6c;
        case 0x15ae70u: goto label_15ae70;
        case 0x15ae74u: goto label_15ae74;
        case 0x15ae78u: goto label_15ae78;
        case 0x15ae7cu: goto label_15ae7c;
        case 0x15ae80u: goto label_15ae80;
        case 0x15ae84u: goto label_15ae84;
        case 0x15ae88u: goto label_15ae88;
        case 0x15ae8cu: goto label_15ae8c;
        case 0x15ae90u: goto label_15ae90;
        case 0x15ae94u: goto label_15ae94;
        case 0x15ae98u: goto label_15ae98;
        case 0x15ae9cu: goto label_15ae9c;
        case 0x15aea0u: goto label_15aea0;
        case 0x15aea4u: goto label_15aea4;
        case 0x15aea8u: goto label_15aea8;
        case 0x15aeacu: goto label_15aeac;
        case 0x15aeb0u: goto label_15aeb0;
        case 0x15aeb4u: goto label_15aeb4;
        case 0x15aeb8u: goto label_15aeb8;
        case 0x15aebcu: goto label_15aebc;
        case 0x15aec0u: goto label_15aec0;
        case 0x15aec4u: goto label_15aec4;
        case 0x15aec8u: goto label_15aec8;
        case 0x15aeccu: goto label_15aecc;
        case 0x15aed0u: goto label_15aed0;
        case 0x15aed4u: goto label_15aed4;
        case 0x15aed8u: goto label_15aed8;
        case 0x15aedcu: goto label_15aedc;
        case 0x15aee0u: goto label_15aee0;
        case 0x15aee4u: goto label_15aee4;
        case 0x15aee8u: goto label_15aee8;
        case 0x15aeecu: goto label_15aeec;
        case 0x15aef0u: goto label_15aef0;
        case 0x15aef4u: goto label_15aef4;
        case 0x15aef8u: goto label_15aef8;
        case 0x15aefcu: goto label_15aefc;
        case 0x15af00u: goto label_15af00;
        case 0x15af04u: goto label_15af04;
        case 0x15af08u: goto label_15af08;
        case 0x15af0cu: goto label_15af0c;
        case 0x15af10u: goto label_15af10;
        case 0x15af14u: goto label_15af14;
        case 0x15af18u: goto label_15af18;
        case 0x15af1cu: goto label_15af1c;
        default: break;
    }

    ctx->pc = 0x15ada0u;

label_15ada0:
    // 0x15ada0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15ada4:
    // 0x15ada4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ada8:
    // 0x15ada8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15adac:
    // 0x15adac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15adb0:
    // 0x15adb0: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15adb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15adb4:
    // 0x15adb4: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15adb8:
    // 0x15adb8: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x15adb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_15adbc:
    // 0x15adbc: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_15adc0:
    // 0x15adc0: 0x40f809  jalr        $v0
label_15adc4:
    if (ctx->pc == 0x15ADC4u) {
        ctx->pc = 0x15ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC0u;
        // 0x15adc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADC8u;
        goto label_15adc8;
    }
    ctx->pc = 0x15ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15ADC8u);
        ctx->pc = 0x15ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC0u;
        // 0x15adc4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADC0u, 0x15ADC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ADC8u;
label_15adc8:
    // 0x15adc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15adcc:
    if (ctx->pc == 0x15ADCCu) {
        ctx->pc = 0x15ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC8u;
        // 0x15adcc: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADD0u;
        goto label_15add0;
    }
    ctx->pc = 0x15ADC8u;
    {
        const bool branch_taken_0x15adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC8u;
        // 0x15adcc: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adc8) {
            ctx->pc = 0x15ADDCu;
            goto label_15addc;
        }
    }
    ctx->pc = 0x15ADD0u;
label_15add0:
    // 0x15add0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15add0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15add4:
    // 0x15add4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_15add8:
    if (ctx->pc == 0x15ADD8u) {
        ctx->pc = 0x15ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADD4u;
        // 0x15add8: 0x2442b0b0  addiu       $v0, $v0, -0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADDCu;
        goto label_15addc;
    }
    ctx->pc = 0x15ADD4u;
    {
        const bool branch_taken_0x15add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADD4u;
        // 0x15add8: 0x2442b0b0  addiu       $v0, $v0, -0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15add4) {
            ctx->pc = 0x15AF08u;
            goto label_15af08;
        }
    }
    ctx->pc = 0x15ADDCu;
label_15addc:
    // 0x15addc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ade0:
    // 0x15ade0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ade4:
    // 0x15ade4: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15ade8:
    // 0x15ade8: 0x14640023  bne         $v1, $a0, . + 4 + (0x23 << 2)
label_15adec:
    if (ctx->pc == 0x15ADECu) {
        ctx->pc = 0x15ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADE8u;
        // 0x15adec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADF0u;
        goto label_15adf0;
    }
    ctx->pc = 0x15ADE8u;
    {
        const bool branch_taken_0x15ade8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADE8u;
        // 0x15adec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ade8) {
            ctx->pc = 0x15AE78u;
            goto label_15ae78;
        }
    }
    ctx->pc = 0x15ADF0u;
label_15adf0:
    // 0x15adf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15adf4:
    // 0x15adf4: 0x8c43c6fc  lw          $v1, -0x3904($v0)
    ctx->pc = 0x15adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952700)));
label_15adf8:
    // 0x15adf8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_15adfc:
    if (ctx->pc == 0x15ADFCu) {
        ctx->pc = 0x15ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADF8u;
        // 0x15adfc: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE00u;
        goto label_15ae00;
    }
    ctx->pc = 0x15ADF8u;
    {
        const bool branch_taken_0x15adf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADF8u;
        // 0x15adfc: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adf8) {
            ctx->pc = 0x15AE6Cu;
            goto label_15ae6c;
        }
    }
    ctx->pc = 0x15AE00u;
label_15ae00:
    // 0x15ae00: 0xc067b9c  jal         func_19EE70
label_15ae04:
    if (ctx->pc == 0x15AE04u) {
        ctx->pc = 0x15AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE00u;
        // 0x15ae04: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE08u;
        goto label_15ae08;
    }
    ctx->pc = 0x15AE00u;
    SET_GPR_U32(ctx, 31, 0x15AE08u);
    ctx->pc = 0x15AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE00u;
    // 0x15ae04: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AE00u, 0x15AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE08u;
label_15ae08:
    // 0x15ae08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ae08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ae0c:
    // 0x15ae0c: 0xc067b9c  jal         func_19EE70
label_15ae10:
    if (ctx->pc == 0x15AE10u) {
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE14u;
        goto label_15ae14;
    }
    ctx->pc = 0x15AE0Cu;
    SET_GPR_U32(ctx, 31, 0x15AE14u);
    ctx->pc = 0x15AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE0Cu;
    // 0x15ae10: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AE0Cu, 0x15AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE14u;
label_15ae14:
    // 0x15ae14: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15ae18:
    // 0x15ae18: 0xc067b9c  jal         func_19EE70
label_15ae1c:
    if (ctx->pc == 0x15AE1Cu) {
        ctx->pc = 0x15AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE18u;
        // 0x15ae1c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE20u;
        goto label_15ae20;
    }
    ctx->pc = 0x15AE18u;
    SET_GPR_U32(ctx, 31, 0x15AE20u);
    ctx->pc = 0x15AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE18u;
    // 0x15ae1c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AE18u, 0x15AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE20u;
label_15ae20:
    // 0x15ae20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15ae24:
    // 0x15ae24: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15ae28:
    // 0x15ae28: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15ae28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15ae2c:
    // 0x15ae2c: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15ae2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15ae30:
    // 0x15ae30: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15ae30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ae34:
    // 0x15ae34: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15ae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ae38:
    // 0x15ae38: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15ae3c:
    // 0x15ae3c: 0x2443f188  addiu       $v1, $v0, -0xE78
    ctx->pc = 0x15ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
label_15ae40:
    // 0x15ae40: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15ae44:
    // 0x15ae44: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15ae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15ae48:
    // 0x15ae48: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15ae48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ae4c:
    // 0x15ae4c: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15ae4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15ae50:
    // 0x15ae50: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15ae54:
    // 0x15ae54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ae54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ae58:
    // 0x15ae58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ae5c:
    // 0x15ae5c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15ae5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ae60:
    // 0x15ae60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ae60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ae64:
    // 0x15ae64: 0x10000021  b           . + 4 + (0x21 << 2)
label_15ae68:
    if (ctx->pc == 0x15AE68u) {
        ctx->pc = 0x15AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE64u;
        // 0x15ae68: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE6Cu;
        goto label_15ae6c;
    }
    ctx->pc = 0x15AE64u;
    {
        const bool branch_taken_0x15ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE64u;
        // 0x15ae68: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae64) {
            ctx->pc = 0x15AEECu;
            goto label_15aeec;
        }
    }
    ctx->pc = 0x15AE6Cu;
label_15ae6c:
    // 0x15ae6c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15ae70:
    // 0x15ae70: 0x10000025  b           . + 4 + (0x25 << 2)
label_15ae74:
    if (ctx->pc == 0x15AE74u) {
        ctx->pc = 0x15AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE70u;
        // 0x15ae74: 0x2442b8c0  addiu       $v0, $v0, -0x4740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE78u;
        goto label_15ae78;
    }
    ctx->pc = 0x15AE70u;
    {
        const bool branch_taken_0x15ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE70u;
        // 0x15ae74: 0x2442b8c0  addiu       $v0, $v0, -0x4740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae70) {
            ctx->pc = 0x15AF08u;
            goto label_15af08;
        }
    }
    ctx->pc = 0x15AE78u;
label_15ae78:
    // 0x15ae78: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15ae7c:
    // 0x15ae7c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_15ae80:
    if (ctx->pc == 0x15AE80u) {
        ctx->pc = 0x15AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE7Cu;
        // 0x15ae80: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE84u;
        goto label_15ae84;
    }
    ctx->pc = 0x15AE7Cu;
    {
        const bool branch_taken_0x15ae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE7Cu;
        // 0x15ae80: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae7c) {
            ctx->pc = 0x15AF00u;
            goto label_15af00;
        }
    }
    ctx->pc = 0x15AE84u;
label_15ae84:
    // 0x15ae84: 0xc067b9c  jal         func_19EE70
label_15ae88:
    if (ctx->pc == 0x15AE88u) {
        ctx->pc = 0x15AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE84u;
        // 0x15ae88: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE8Cu;
        goto label_15ae8c;
    }
    ctx->pc = 0x15AE84u;
    SET_GPR_U32(ctx, 31, 0x15AE8Cu);
    ctx->pc = 0x15AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE84u;
    // 0x15ae88: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AE84u, 0x15AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE8Cu;
label_15ae8c:
    // 0x15ae8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ae8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ae90:
    // 0x15ae90: 0xc067b9c  jal         func_19EE70
label_15ae94:
    if (ctx->pc == 0x15AE94u) {
        ctx->pc = 0x15AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE90u;
        // 0x15ae94: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE98u;
        goto label_15ae98;
    }
    ctx->pc = 0x15AE90u;
    SET_GPR_U32(ctx, 31, 0x15AE98u);
    ctx->pc = 0x15AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE90u;
    // 0x15ae94: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AE90u, 0x15AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE98u;
label_15ae98:
    // 0x15ae98: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15ae9c:
    // 0x15ae9c: 0xc067b9c  jal         func_19EE70
label_15aea0:
    if (ctx->pc == 0x15AEA0u) {
        ctx->pc = 0x15AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE9Cu;
        // 0x15aea0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEA4u;
        goto label_15aea4;
    }
    ctx->pc = 0x15AE9Cu;
    SET_GPR_U32(ctx, 31, 0x15AEA4u);
    ctx->pc = 0x15AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE9Cu;
    // 0x15aea0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15AE9Cu, 0x15AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEA4u;
label_15aea4:
    // 0x15aea4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_15aea8:
    // 0x15aea8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15aeac:
    // 0x15aeac: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x15aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_15aeb0:
    // 0x15aeb0: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x15aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_15aeb4:
    // 0x15aeb4: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x15aeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15aeb8:
    // 0x15aeb8: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x15aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15aebc:
    // 0x15aebc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15aec0:
    // 0x15aec0: 0x244af1a8  addiu       $t2, $v0, -0xE58
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963624));
label_15aec4:
    // 0x15aec4: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x15aec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_15aec8:
    // 0x15aec8: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x15aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_15aecc:
    // 0x15aecc: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x15aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15aed0:
    // 0x15aed0: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x15aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15aed4:
    // 0x15aed4: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15aed8:
    // 0x15aed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15aed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15aedc:
    // 0x15aedc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15aee0:
    // 0x15aee0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15aee4:
    // 0x15aee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15aee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aee8:
    // 0x15aee8: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x15aee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15aeec:
    // 0x15aeec: 0xc071c4a  jal         func_1C7128
label_15aef0:
    if (ctx->pc == 0x15AEF0u) {
        ctx->pc = 0x15AEF4u;
        goto label_15aef4;
    }
    ctx->pc = 0x15AEECu;
    SET_GPR_U32(ctx, 31, 0x15AEF4u);
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15AEECu, 0x15AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEF4u;
label_15aef4:
    // 0x15aef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15aef8:
    // 0x15aef8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15aefc:
    if (ctx->pc == 0x15AEFCu) {
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0xac40c734  sw          $zero, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF00u;
        goto label_15af00;
    }
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0xac40c734  sw          $zero, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15AF0Cu;
            goto label_15af0c;
        }
    }
    ctx->pc = 0x15AF00u;
label_15af00:
    // 0x15af00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15af04:
    // 0x15af04: 0x2442af20  addiu       $v0, $v0, -0x50E0
    ctx->pc = 0x15af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946592));
label_15af08:
    // 0x15af08: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15af08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15af0c:
    // 0x15af0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15af0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15af10:
    // 0x15af10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15af10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15af14:
    // 0x15af14: 0x3e00008  jr          $ra
label_15af18:
    if (ctx->pc == 0x15AF18u) {
        ctx->pc = 0x15AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF14u;
        // 0x15af18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF1Cu;
        goto label_15af1c;
    }
    ctx->pc = 0x15AF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF14u;
        // 0x15af18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AF1Cu;
label_15af1c:
    // 0x15af1c: 0x0  nop
    ctx->pc = 0x15af1cu;
    // NOP
    ctx->pc = 0x15af20u;
}
