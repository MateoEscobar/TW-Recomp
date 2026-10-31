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

// Function: sub_0022CEB8
// Address: 0x22ceb8 - 0x22d030
void sub_0022CEB8_0x22ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CEB8_0x22ceb8");
#endif

    switch (ctx->pc) {
        case 0x22ceb8u: goto label_22ceb8;
        case 0x22cebcu: goto label_22cebc;
        case 0x22cec0u: goto label_22cec0;
        case 0x22cec4u: goto label_22cec4;
        case 0x22cec8u: goto label_22cec8;
        case 0x22ceccu: goto label_22cecc;
        case 0x22ced0u: goto label_22ced0;
        case 0x22ced4u: goto label_22ced4;
        case 0x22ced8u: goto label_22ced8;
        case 0x22cedcu: goto label_22cedc;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cee4u: goto label_22cee4;
        case 0x22cee8u: goto label_22cee8;
        case 0x22ceecu: goto label_22ceec;
        case 0x22cef0u: goto label_22cef0;
        case 0x22cef4u: goto label_22cef4;
        case 0x22cef8u: goto label_22cef8;
        case 0x22cefcu: goto label_22cefc;
        case 0x22cf00u: goto label_22cf00;
        case 0x22cf04u: goto label_22cf04;
        case 0x22cf08u: goto label_22cf08;
        case 0x22cf0cu: goto label_22cf0c;
        case 0x22cf10u: goto label_22cf10;
        case 0x22cf14u: goto label_22cf14;
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf1cu: goto label_22cf1c;
        case 0x22cf20u: goto label_22cf20;
        case 0x22cf24u: goto label_22cf24;
        case 0x22cf28u: goto label_22cf28;
        case 0x22cf2cu: goto label_22cf2c;
        case 0x22cf30u: goto label_22cf30;
        case 0x22cf34u: goto label_22cf34;
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf3cu: goto label_22cf3c;
        case 0x22cf40u: goto label_22cf40;
        case 0x22cf44u: goto label_22cf44;
        case 0x22cf48u: goto label_22cf48;
        case 0x22cf4cu: goto label_22cf4c;
        case 0x22cf50u: goto label_22cf50;
        case 0x22cf54u: goto label_22cf54;
        case 0x22cf58u: goto label_22cf58;
        case 0x22cf5cu: goto label_22cf5c;
        case 0x22cf60u: goto label_22cf60;
        case 0x22cf64u: goto label_22cf64;
        case 0x22cf68u: goto label_22cf68;
        case 0x22cf6cu: goto label_22cf6c;
        case 0x22cf70u: goto label_22cf70;
        case 0x22cf74u: goto label_22cf74;
        case 0x22cf78u: goto label_22cf78;
        case 0x22cf7cu: goto label_22cf7c;
        case 0x22cf80u: goto label_22cf80;
        case 0x22cf84u: goto label_22cf84;
        case 0x22cf88u: goto label_22cf88;
        case 0x22cf8cu: goto label_22cf8c;
        case 0x22cf90u: goto label_22cf90;
        case 0x22cf94u: goto label_22cf94;
        case 0x22cf98u: goto label_22cf98;
        case 0x22cf9cu: goto label_22cf9c;
        case 0x22cfa0u: goto label_22cfa0;
        case 0x22cfa4u: goto label_22cfa4;
        case 0x22cfa8u: goto label_22cfa8;
        case 0x22cfacu: goto label_22cfac;
        case 0x22cfb0u: goto label_22cfb0;
        case 0x22cfb4u: goto label_22cfb4;
        case 0x22cfb8u: goto label_22cfb8;
        case 0x22cfbcu: goto label_22cfbc;
        case 0x22cfc0u: goto label_22cfc0;
        case 0x22cfc4u: goto label_22cfc4;
        case 0x22cfc8u: goto label_22cfc8;
        case 0x22cfccu: goto label_22cfcc;
        case 0x22cfd0u: goto label_22cfd0;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cfd8u: goto label_22cfd8;
        case 0x22cfdcu: goto label_22cfdc;
        case 0x22cfe0u: goto label_22cfe0;
        case 0x22cfe4u: goto label_22cfe4;
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cfecu: goto label_22cfec;
        case 0x22cff0u: goto label_22cff0;
        case 0x22cff4u: goto label_22cff4;
        case 0x22cff8u: goto label_22cff8;
        case 0x22cffcu: goto label_22cffc;
        case 0x22d000u: goto label_22d000;
        case 0x22d004u: goto label_22d004;
        case 0x22d008u: goto label_22d008;
        case 0x22d00cu: goto label_22d00c;
        case 0x22d010u: goto label_22d010;
        case 0x22d014u: goto label_22d014;
        case 0x22d018u: goto label_22d018;
        case 0x22d01cu: goto label_22d01c;
        case 0x22d020u: goto label_22d020;
        case 0x22d024u: goto label_22d024;
        case 0x22d028u: goto label_22d028;
        case 0x22d02cu: goto label_22d02c;
        default: break;
    }

    ctx->pc = 0x22ceb8u;

label_22ceb8:
    // 0x22ceb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22cebc:
    // 0x22cebc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22cec0:
    // 0x22cec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22cec4:
    // 0x22cec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22cec8:
    // 0x22cec8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22cecc:
    // 0x22cecc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22ceccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ced0:
    // 0x22ced0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ced4:
    // 0x22ced4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22ced4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22ced8:
    // 0x22ced8: 0xc089988  jal         func_226620
label_22cedc:
    if (ctx->pc == 0x22CEDCu) {
        ctx->pc = 0x22CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CED8u;
        // 0x22cedc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEE0u;
        goto label_22cee0;
    }
    ctx->pc = 0x22CED8u;
    SET_GPR_U32(ctx, 31, 0x22CEE0u);
    ctx->pc = 0x22CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CED8u;
    // 0x22cedc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CED8u, 0x22CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEE0u;
label_22cee0:
    // 0x22cee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cee4:
    // 0x22cee4: 0xc089988  jal         func_226620
label_22cee8:
    if (ctx->pc == 0x22CEE8u) {
        ctx->pc = 0x22CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEE4u;
        // 0x22cee8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEECu;
        goto label_22ceec;
    }
    ctx->pc = 0x22CEE4u;
    SET_GPR_U32(ctx, 31, 0x22CEECu);
    ctx->pc = 0x22CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEE4u;
    // 0x22cee8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CEE4u, 0x22CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEECu;
label_22ceec:
    // 0x22ceec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cef0:
    // 0x22cef0: 0xc089974  jal         func_2265D0
label_22cef4:
    if (ctx->pc == 0x22CEF4u) {
        ctx->pc = 0x22CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEF0u;
        // 0x22cef4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEF8u;
        goto label_22cef8;
    }
    ctx->pc = 0x22CEF0u;
    SET_GPR_U32(ctx, 31, 0x22CEF8u);
    ctx->pc = 0x22CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEF0u;
    // 0x22cef4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CEF0u, 0x22CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CEF8u;
label_22cef8:
    // 0x22cef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cefc:
    // 0x22cefc: 0xc089974  jal         func_2265D0
label_22cf00:
    if (ctx->pc == 0x22CF00u) {
        ctx->pc = 0x22CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEFCu;
        // 0x22cf00: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF04u;
        goto label_22cf04;
    }
    ctx->pc = 0x22CEFCu;
    SET_GPR_U32(ctx, 31, 0x22CF04u);
    ctx->pc = 0x22CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEFCu;
    // 0x22cf00: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CEFCu, 0x22CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF04u;
label_22cf04:
    // 0x22cf04: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x22cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_22cf08:
    // 0x22cf08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22cf0c:
    if (ctx->pc == 0x22CF0Cu) {
        ctx->pc = 0x22CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF08u;
        // 0x22cf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF10u;
        goto label_22cf10;
    }
    ctx->pc = 0x22CF08u;
    {
        const bool branch_taken_0x22cf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF08u;
        // 0x22cf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf08) {
            ctx->pc = 0x22CF24u;
            goto label_22cf24;
        }
    }
    ctx->pc = 0x22CF10u;
label_22cf10:
    // 0x22cf10: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22cf14:
    // 0x22cf14: 0xc0739c6  jal         func_1CE718
label_22cf18:
    if (ctx->pc == 0x22CF18u) {
        ctx->pc = 0x22CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF14u;
        // 0x22cf18: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF1Cu;
        goto label_22cf1c;
    }
    ctx->pc = 0x22CF14u;
    SET_GPR_U32(ctx, 31, 0x22CF1Cu);
    ctx->pc = 0x22CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF14u;
    // 0x22cf18: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x22CF14u, 0x22CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF1Cu;
label_22cf1c:
    // 0x22cf1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_22cf20:
    if (ctx->pc == 0x22CF20u) {
        ctx->pc = 0x22CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF1Cu;
        // 0x22cf20: 0x8e2205a0  lw          $v0, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF24u;
        goto label_22cf24;
    }
    ctx->pc = 0x22CF1Cu;
    {
        const bool branch_taken_0x22cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF1Cu;
        // 0x22cf20: 0x8e2205a0  lw          $v0, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf1c) {
            ctx->pc = 0x22CF38u;
            goto label_22cf38;
        }
    }
    ctx->pc = 0x22CF24u;
label_22cf24:
    // 0x22cf24: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22cf28:
    // 0x22cf28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cf2c:
    // 0x22cf2c: 0xc0739c6  jal         func_1CE718
label_22cf30:
    if (ctx->pc == 0x22CF30u) {
        ctx->pc = 0x22CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF2Cu;
        // 0x22cf30: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF34u;
        goto label_22cf34;
    }
    ctx->pc = 0x22CF2Cu;
    SET_GPR_U32(ctx, 31, 0x22CF34u);
    ctx->pc = 0x22CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF2Cu;
    // 0x22cf30: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x22CF2Cu, 0x22CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF34u;
label_22cf34:
    // 0x22cf34: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x22cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_22cf38:
    // 0x22cf38: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22cf3c:
    if (ctx->pc == 0x22CF3Cu) {
        ctx->pc = 0x22CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF38u;
        // 0x22cf3c: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF40u;
        goto label_22cf40;
    }
    ctx->pc = 0x22CF38u;
    {
        const bool branch_taken_0x22cf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cf38) {
            ctx->pc = 0x22CF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CF38u;
            // 0x22cf3c: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF5Cu;
            goto label_22cf5c;
        }
    }
    ctx->pc = 0x22CF40u;
label_22cf40:
    // 0x22cf40: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_22cf44:
    if (ctx->pc == 0x22CF44u) {
        ctx->pc = 0x22CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF40u;
        // 0x22cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF48u;
        goto label_22cf48;
    }
    ctx->pc = 0x22CF40u;
    {
        const bool branch_taken_0x22cf40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF40u;
        // 0x22cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf40) {
            ctx->pc = 0x22CF74u;
            goto label_22cf74;
        }
    }
    ctx->pc = 0x22CF48u;
label_22cf48:
    // 0x22cf48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22cf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cf4c:
    // 0x22cf4c: 0xc08985a  jal         func_226168
label_22cf50:
    if (ctx->pc == 0x22CF50u) {
        ctx->pc = 0x22CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF4Cu;
        // 0x22cf50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF54u;
        goto label_22cf54;
    }
    ctx->pc = 0x22CF4Cu;
    SET_GPR_U32(ctx, 31, 0x22CF54u);
    ctx->pc = 0x22CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF4Cu;
    // 0x22cf50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226168u, 0x22CF4Cu, 0x22CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF54u;
label_22cf54:
    // 0x22cf54: 0x10000008  b           . + 4 + (0x8 << 2)
label_22cf58:
    if (ctx->pc == 0x22CF58u) {
        ctx->pc = 0x22CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF54u;
        // 0x22cf58: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF5Cu;
        goto label_22cf5c;
    }
    ctx->pc = 0x22CF54u;
    {
        const bool branch_taken_0x22cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF54u;
        // 0x22cf58: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf54) {
            ctx->pc = 0x22CF78u;
            goto label_22cf78;
        }
    }
    ctx->pc = 0x22CF5Cu;
label_22cf5c:
    // 0x22cf5c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22cf5cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22cf60:
    // 0x22cf60: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_22cf64:
    if (ctx->pc == 0x22CF64u) {
        ctx->pc = 0x22CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF60u;
        // 0x22cf64: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF68u;
        goto label_22cf68;
    }
    ctx->pc = 0x22CF60u;
    {
        const bool branch_taken_0x22cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cf60) {
            ctx->pc = 0x22CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CF60u;
            // 0x22cf64: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF78u;
            goto label_22cf78;
        }
    }
    ctx->pc = 0x22CF68u;
label_22cf68:
    // 0x22cf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cf6c:
    // 0x22cf6c: 0xc0898bc  jal         func_2262F0
label_22cf70:
    if (ctx->pc == 0x22CF70u) {
        ctx->pc = 0x22CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF6Cu;
        // 0x22cf70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF74u;
        goto label_22cf74;
    }
    ctx->pc = 0x22CF6Cu;
    SET_GPR_U32(ctx, 31, 0x22CF74u);
    ctx->pc = 0x22CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF6Cu;
    // 0x22cf70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F0u, 0x22CF6Cu, 0x22CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF74u;
label_22cf74:
    // 0x22cf74: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22cf74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22cf78:
    // 0x22cf78: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22cf78u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22cf7c:
    // 0x22cf7c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_22cf80:
    if (ctx->pc == 0x22CF80u) {
        ctx->pc = 0x22CF84u;
        goto label_22cf84;
    }
    ctx->pc = 0x22CF7Cu;
    {
        const bool branch_taken_0x22cf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cf7c) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CF84u;
label_22cf84:
    // 0x22cf84: 0xc048892  jal         func_122248
label_22cf88:
    if (ctx->pc == 0x22CF88u) {
        ctx->pc = 0x22CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF84u;
        // 0x22cf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF8Cu;
        goto label_22cf8c;
    }
    ctx->pc = 0x22CF84u;
    SET_GPR_U32(ctx, 31, 0x22CF8Cu);
    ctx->pc = 0x22CF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF84u;
    // 0x22cf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x22CF84u, 0x22CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF8Cu;
label_22cf8c:
    // 0x22cf8c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_22cf90:
    if (ctx->pc == 0x22CF90u) {
        ctx->pc = 0x22CF94u;
        goto label_22cf94;
    }
    ctx->pc = 0x22CF8Cu;
    {
        const bool branch_taken_0x22cf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cf8c) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CF94u;
label_22cf94:
    // 0x22cf94: 0xc047e72  jal         func_11F9C8
label_22cf98:
    if (ctx->pc == 0x22CF98u) {
        ctx->pc = 0x22CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF94u;
        // 0x22cf98: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF9Cu;
        goto label_22cf9c;
    }
    ctx->pc = 0x22CF94u;
    SET_GPR_U32(ctx, 31, 0x22CF9Cu);
    ctx->pc = 0x22CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF94u;
    // 0x22cf98: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22CF94u, 0x22CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF9Cu;
label_22cf9c:
    // 0x22cf9c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22cfa0:
    if (ctx->pc == 0x22CFA0u) {
        ctx->pc = 0x22CFA4u;
        goto label_22cfa4;
    }
    ctx->pc = 0x22CF9Cu;
    {
        const bool branch_taken_0x22cf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cf9c) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CFA4u;
label_22cfa4:
    // 0x22cfa4: 0xc047e72  jal         func_11F9C8
label_22cfa8:
    if (ctx->pc == 0x22CFA8u) {
        ctx->pc = 0x22CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFA4u;
        // 0x22cfa8: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFACu;
        goto label_22cfac;
    }
    ctx->pc = 0x22CFA4u;
    SET_GPR_U32(ctx, 31, 0x22CFACu);
    ctx->pc = 0x22CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFA4u;
    // 0x22cfa8: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22CFA4u, 0x22CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFACu;
label_22cfac:
    // 0x22cfac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22cfb0:
    // 0x22cfb0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_22cfb4:
    // 0x22cfb4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_22cfb8:
    // 0x22cfb8: 0xa0f809  jalr        $a1
label_22cfbc:
    if (ctx->pc == 0x22CFBCu) {
        ctx->pc = 0x22CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB8u;
        // 0x22cfbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFC0u;
        goto label_22cfc0;
    }
    ctx->pc = 0x22CFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x22CFC0u);
        ctx->pc = 0x22CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB8u;
        // 0x22cfbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CFB8u, 0x22CFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CFC0u;
label_22cfc0:
    // 0x22cfc0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22cfc4:
    // 0x22cfc4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_22cfc8:
    if (ctx->pc == 0x22CFC8u) {
        ctx->pc = 0x22CFCCu;
        goto label_22cfcc;
    }
    ctx->pc = 0x22CFC4u;
    {
        const bool branch_taken_0x22cfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22cfc4) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CFCCu;
label_22cfcc:
    // 0x22cfcc: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x22cfccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22cfd0:
    // 0x22cfd0: 0xc047f60  jal         func_11FD80
label_22cfd4:
    if (ctx->pc == 0x22CFD4u) {
        ctx->pc = 0x22CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFD0u;
        // 0x22cfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFD8u;
        goto label_22cfd8;
    }
    ctx->pc = 0x22CFD0u;
    SET_GPR_U32(ctx, 31, 0x22CFD8u);
    ctx->pc = 0x22CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFD0u;
    // 0x22cfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x22CFD0u, 0x22CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFD8u;
label_22cfd8:
    // 0x22cfd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cfdc:
    // 0x22cfdc: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x22cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
label_22cfe0:
    // 0x22cfe0: 0xac43024c  sw          $v1, 0x24C($v0)
    ctx->pc = 0x22cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 3));
label_22cfe4:
    // 0x22cfe4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_22cfe8:
    if (ctx->pc == 0x22CFE8u) {
        ctx->pc = 0x22CFECu;
        goto label_22cfec;
    }
    ctx->pc = 0x22CFE4u;
    {
        const bool branch_taken_0x22cfe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cfe4) {
            ctx->pc = 0x22CFF4u;
            goto label_22cff4;
        }
    }
    ctx->pc = 0x22CFECu;
label_22cfec:
    // 0x22cfec: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22cff0:
    // 0x22cff0: 0xa4400148  sh          $zero, 0x148($v0)
    ctx->pc = 0x22cff0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 0));
label_22cff4:
    // 0x22cff4: 0xc0874fa  jal         func_21D3E8
label_22cff8:
    if (ctx->pc == 0x22CFF8u) {
        ctx->pc = 0x22CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFF4u;
        // 0x22cff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFFCu;
        goto label_22cffc;
    }
    ctx->pc = 0x22CFF4u;
    SET_GPR_U32(ctx, 31, 0x22CFFCu);
    ctx->pc = 0x22CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFF4u;
    // 0x22cff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22CFF4u, 0x22CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFFCu;
label_22cffc:
    // 0x22cffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d000:
    // 0x22d000: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x22d000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_22d004:
    // 0x22d004: 0xc0874fa  jal         func_21D3E8
label_22d008:
    if (ctx->pc == 0x22D008u) {
        ctx->pc = 0x22D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D004u;
        // 0x22d008: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D00Cu;
        goto label_22d00c;
    }
    ctx->pc = 0x22D004u;
    SET_GPR_U32(ctx, 31, 0x22D00Cu);
    ctx->pc = 0x22D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D004u;
    // 0x22d008: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22D004u, 0x22D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D00Cu;
label_22d00c:
    // 0x22d00c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22d00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d010:
    // 0x22d010: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22d010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d014:
    // 0x22d014: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22d014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d018:
    // 0x22d018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d01c:
    // 0x22d01c: 0xa040001d  sb          $zero, 0x1D($v0)
    ctx->pc = 0x22d01cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 0));
label_22d020:
    // 0x22d020: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x22d020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_22d024:
    // 0x22d024: 0x3e00008  jr          $ra
label_22d028:
    if (ctx->pc == 0x22D028u) {
        ctx->pc = 0x22D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D024u;
        // 0x22d028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D02Cu;
        goto label_22d02c;
    }
    ctx->pc = 0x22D024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D024u;
        // 0x22d028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D02Cu;
label_22d02c:
    // 0x22d02c: 0x0  nop
    ctx->pc = 0x22d02cu;
    // NOP
    ctx->pc = 0x22d030u;
}
