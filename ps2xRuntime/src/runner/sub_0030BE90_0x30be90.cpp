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

// Function: sub_0030BE90
// Address: 0x30be90 - 0x30bfb8
void sub_0030BE90_0x30be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BE90_0x30be90");
#endif

    switch (ctx->pc) {
        case 0x30be90u: goto label_30be90;
        case 0x30be94u: goto label_30be94;
        case 0x30be98u: goto label_30be98;
        case 0x30be9cu: goto label_30be9c;
        case 0x30bea0u: goto label_30bea0;
        case 0x30bea4u: goto label_30bea4;
        case 0x30bea8u: goto label_30bea8;
        case 0x30beacu: goto label_30beac;
        case 0x30beb0u: goto label_30beb0;
        case 0x30beb4u: goto label_30beb4;
        case 0x30beb8u: goto label_30beb8;
        case 0x30bebcu: goto label_30bebc;
        case 0x30bec0u: goto label_30bec0;
        case 0x30bec4u: goto label_30bec4;
        case 0x30bec8u: goto label_30bec8;
        case 0x30beccu: goto label_30becc;
        case 0x30bed0u: goto label_30bed0;
        case 0x30bed4u: goto label_30bed4;
        case 0x30bed8u: goto label_30bed8;
        case 0x30bedcu: goto label_30bedc;
        case 0x30bee0u: goto label_30bee0;
        case 0x30bee4u: goto label_30bee4;
        case 0x30bee8u: goto label_30bee8;
        case 0x30beecu: goto label_30beec;
        case 0x30bef0u: goto label_30bef0;
        case 0x30bef4u: goto label_30bef4;
        case 0x30bef8u: goto label_30bef8;
        case 0x30befcu: goto label_30befc;
        case 0x30bf00u: goto label_30bf00;
        case 0x30bf04u: goto label_30bf04;
        case 0x30bf08u: goto label_30bf08;
        case 0x30bf0cu: goto label_30bf0c;
        case 0x30bf10u: goto label_30bf10;
        case 0x30bf14u: goto label_30bf14;
        case 0x30bf18u: goto label_30bf18;
        case 0x30bf1cu: goto label_30bf1c;
        case 0x30bf20u: goto label_30bf20;
        case 0x30bf24u: goto label_30bf24;
        case 0x30bf28u: goto label_30bf28;
        case 0x30bf2cu: goto label_30bf2c;
        case 0x30bf30u: goto label_30bf30;
        case 0x30bf34u: goto label_30bf34;
        case 0x30bf38u: goto label_30bf38;
        case 0x30bf3cu: goto label_30bf3c;
        case 0x30bf40u: goto label_30bf40;
        case 0x30bf44u: goto label_30bf44;
        case 0x30bf48u: goto label_30bf48;
        case 0x30bf4cu: goto label_30bf4c;
        case 0x30bf50u: goto label_30bf50;
        case 0x30bf54u: goto label_30bf54;
        case 0x30bf58u: goto label_30bf58;
        case 0x30bf5cu: goto label_30bf5c;
        case 0x30bf60u: goto label_30bf60;
        case 0x30bf64u: goto label_30bf64;
        case 0x30bf68u: goto label_30bf68;
        case 0x30bf6cu: goto label_30bf6c;
        case 0x30bf70u: goto label_30bf70;
        case 0x30bf74u: goto label_30bf74;
        case 0x30bf78u: goto label_30bf78;
        case 0x30bf7cu: goto label_30bf7c;
        case 0x30bf80u: goto label_30bf80;
        case 0x30bf84u: goto label_30bf84;
        case 0x30bf88u: goto label_30bf88;
        case 0x30bf8cu: goto label_30bf8c;
        case 0x30bf90u: goto label_30bf90;
        case 0x30bf94u: goto label_30bf94;
        case 0x30bf98u: goto label_30bf98;
        case 0x30bf9cu: goto label_30bf9c;
        case 0x30bfa0u: goto label_30bfa0;
        case 0x30bfa4u: goto label_30bfa4;
        case 0x30bfa8u: goto label_30bfa8;
        case 0x30bfacu: goto label_30bfac;
        case 0x30bfb0u: goto label_30bfb0;
        case 0x30bfb4u: goto label_30bfb4;
        default: break;
    }

    ctx->pc = 0x30be90u;

label_30be90:
    // 0x30be90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30be94:
    // 0x30be94: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30be94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_30be98:
    // 0x30be98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_30be9c:
    // 0x30be9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30be9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30bea0:
    // 0x30bea0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_30bea4:
    // 0x30bea4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_30bea8:
    // 0x30bea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30beac:
    // 0x30beac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_30beb0:
    // 0x30beb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30beb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30beb4:
    // 0x30beb4: 0xc08a61a  jal         func_229868
label_30beb8:
    if (ctx->pc == 0x30BEB8u) {
        ctx->pc = 0x30BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEB4u;
        // 0x30beb8: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEBCu;
        goto label_30bebc;
    }
    ctx->pc = 0x30BEB4u;
    SET_GPR_U32(ctx, 31, 0x30BEBCu);
    ctx->pc = 0x30BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BEB4u;
    // 0x30beb8: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30BEB4u, 0x30BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEBCu;
label_30bebc:
    // 0x30bebc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30bebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bec0:
    // 0x30bec0: 0x12800033  beqz        $s4, . + 4 + (0x33 << 2)
label_30bec4:
    if (ctx->pc == 0x30BEC4u) {
        ctx->pc = 0x30BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEC0u;
        // 0x30bec4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEC8u;
        goto label_30bec8;
    }
    ctx->pc = 0x30BEC0u;
    {
        const bool branch_taken_0x30bec0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEC0u;
        // 0x30bec4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bec0) {
            ctx->pc = 0x30BF90u;
            goto label_30bf90;
        }
    }
    ctx->pc = 0x30BEC8u;
label_30bec8:
    // 0x30bec8: 0x8e9100cc  lw          $s1, 0xCC($s4)
    ctx->pc = 0x30bec8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_30becc:
    // 0x30becc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_30bed0:
    if (ctx->pc == 0x30BED0u) {
        ctx->pc = 0x30BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BECCu;
        // 0x30bed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BED4u;
        goto label_30bed4;
    }
    ctx->pc = 0x30BECCu;
    {
        const bool branch_taken_0x30becc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BECCu;
        // 0x30bed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30becc) {
            ctx->pc = 0x30BEE0u;
            goto label_30bee0;
        }
    }
    ctx->pc = 0x30BED4u;
label_30bed4:
    // 0x30bed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30bed8:
    // 0x30bed8: 0x10000005  b           . + 4 + (0x5 << 2)
label_30bedc:
    if (ctx->pc == 0x30BEDCu) {
        ctx->pc = 0x30BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BED8u;
        // 0x30bedc: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEE0u;
        goto label_30bee0;
    }
    ctx->pc = 0x30BED8u;
    {
        const bool branch_taken_0x30bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BED8u;
        // 0x30bedc: 0x240500a1  addiu       $a1, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bed8) {
            ctx->pc = 0x30BEF0u;
            goto label_30bef0;
        }
    }
    ctx->pc = 0x30BEE0u;
label_30bee0:
    // 0x30bee0: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x30bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_30bee4:
    // 0x30bee4: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_30bee8:
    if (ctx->pc == 0x30BEE8u) {
        ctx->pc = 0x30BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEE4u;
        // 0x30bee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEECu;
        goto label_30beec;
    }
    ctx->pc = 0x30BEE4u;
    {
        const bool branch_taken_0x30bee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEE4u;
        // 0x30bee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bee4) {
            ctx->pc = 0x30BEFCu;
            goto label_30befc;
        }
    }
    ctx->pc = 0x30BEECu;
label_30beec:
    // 0x30beec: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x30beecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_30bef0:
    // 0x30bef0: 0xc0c2eee  jal         func_30BBB8
label_30bef4:
    if (ctx->pc == 0x30BEF4u) {
        ctx->pc = 0x30BEF8u;
        goto label_30bef8;
    }
    ctx->pc = 0x30BEF0u;
    SET_GPR_U32(ctx, 31, 0x30BEF8u);
    ctx->pc = 0x30BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BBB8u, 0x30BEF0u, 0x30BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BEF8u;
label_30bef8:
    // 0x30bef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30bef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30befc:
    // 0x30befc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_30bf00:
    if (ctx->pc == 0x30BF00u) {
        ctx->pc = 0x30BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEFCu;
        // 0x30bf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF04u;
        goto label_30bf04;
    }
    ctx->pc = 0x30BEFCu;
    {
        const bool branch_taken_0x30befc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEFCu;
        // 0x30bf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30befc) {
            ctx->pc = 0x30BF90u;
            goto label_30bf90;
        }
    }
    ctx->pc = 0x30BF04u;
label_30bf04:
    // 0x30bf04: 0xc087502  jal         func_21D408
label_30bf08:
    if (ctx->pc == 0x30BF08u) {
        ctx->pc = 0x30BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF04u;
        // 0x30bf08: 0x24150048  addiu       $s5, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF0Cu;
        goto label_30bf0c;
    }
    ctx->pc = 0x30BF04u;
    SET_GPR_U32(ctx, 31, 0x30BF0Cu);
    ctx->pc = 0x30BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF04u;
    // 0x30bf08: 0x24150048  addiu       $s5, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30BF04u, 0x30BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF0Cu;
label_30bf0c:
    // 0x30bf0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30bf0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bf10:
    // 0x30bf10: 0xc0a36c8  jal         func_28DB20
label_30bf14:
    if (ctx->pc == 0x30BF14u) {
        ctx->pc = 0x30BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF10u;
        // 0x30bf14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF18u;
        goto label_30bf18;
    }
    ctx->pc = 0x30BF10u;
    SET_GPR_U32(ctx, 31, 0x30BF18u);
    ctx->pc = 0x30BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF10u;
    // 0x30bf14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x30BF10u, 0x30BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF18u;
label_30bf18:
    // 0x30bf18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30bf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30bf1c:
    // 0x30bf1c: 0xc0c2e52  jal         func_30B948
label_30bf20:
    if (ctx->pc == 0x30BF20u) {
        ctx->pc = 0x30BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF1Cu;
        // 0x30bf20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF24u;
        goto label_30bf24;
    }
    ctx->pc = 0x30BF1Cu;
    SET_GPR_U32(ctx, 31, 0x30BF24u);
    ctx->pc = 0x30BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF1Cu;
    // 0x30bf20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B948u, 0x30BF1Cu, 0x30BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF24u;
label_30bf24:
    // 0x30bf24: 0x3a2300a0  xori        $v1, $s1, 0xA0
    ctx->pc = 0x30bf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)160);
label_30bf28:
    // 0x30bf28: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_30bf2c:
    // 0x30bf2c: 0xc0a4e54  jal         func_293950
label_30bf30:
    if (ctx->pc == 0x30BF30u) {
        ctx->pc = 0x30BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF2Cu;
        // 0x30bf30: 0x43a80a  movz        $s5, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF34u;
        goto label_30bf34;
    }
    ctx->pc = 0x30BF2Cu;
    SET_GPR_U32(ctx, 31, 0x30BF34u);
    ctx->pc = 0x30BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF2Cu;
    // 0x30bf30: 0x43a80a  movz        $s5, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30BF2Cu, 0x30BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF34u;
label_30bf34:
    // 0x30bf34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30bf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bf38:
    // 0x30bf38: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_30bf3c:
    if (ctx->pc == 0x30BF3Cu) {
        ctx->pc = 0x30BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF38u;
        // 0x30bf3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF40u;
        goto label_30bf40;
    }
    ctx->pc = 0x30BF38u;
    {
        const bool branch_taken_0x30bf38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF38u;
        // 0x30bf3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf38) {
            ctx->pc = 0x30BF80u;
            goto label_30bf80;
        }
    }
    ctx->pc = 0x30BF40u;
label_30bf40:
    // 0x30bf40: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x30bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_30bf44:
    // 0x30bf44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30bf44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30bf48:
    // 0x30bf48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30bf4c:
    // 0x30bf4c: 0x40f809  jalr        $v0
label_30bf50:
    if (ctx->pc == 0x30BF50u) {
        ctx->pc = 0x30BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF4Cu;
        // 0x30bf50: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF54u;
        goto label_30bf54;
    }
    ctx->pc = 0x30BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30BF54u);
        ctx->pc = 0x30BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF4Cu;
        // 0x30bf50: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BF4Cu, 0x30BF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30BF54u;
label_30bf54:
    // 0x30bf54: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x30bf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_30bf58:
    // 0x30bf58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30bf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30bf5c:
    // 0x30bf5c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30bf5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bf60:
    // 0x30bf60: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x30bf60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30bf64:
    // 0x30bf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30bf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30bf68:
    // 0x30bf68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30bf6c:
    // 0x30bf6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30bf70:
    // 0x30bf70: 0x24070fa0  addiu       $a3, $zero, 0xFA0
    ctx->pc = 0x30bf70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_30bf74:
    // 0x30bf74: 0xc0b504e  jal         func_2D4138
label_30bf78:
    if (ctx->pc == 0x30BF78u) {
        ctx->pc = 0x30BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF74u;
        // 0x30bf78: 0x24090022  addiu       $t1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF7Cu;
        goto label_30bf7c;
    }
    ctx->pc = 0x30BF74u;
    SET_GPR_U32(ctx, 31, 0x30BF7Cu);
    ctx->pc = 0x30BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF74u;
    // 0x30bf78: 0x24090022  addiu       $t1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4138u, 0x30BF74u, 0x30BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF7Cu;
label_30bf7c:
    // 0x30bf7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30bf80:
    // 0x30bf80: 0xc0a35d6  jal         func_28D758
label_30bf84:
    if (ctx->pc == 0x30BF84u) {
        ctx->pc = 0x30BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF80u;
        // 0x30bf84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF88u;
        goto label_30bf88;
    }
    ctx->pc = 0x30BF80u;
    SET_GPR_U32(ctx, 31, 0x30BF88u);
    ctx->pc = 0x30BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF80u;
    // 0x30bf84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30BF80u, 0x30BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF88u;
label_30bf88:
    // 0x30bf88: 0x10000002  b           . + 4 + (0x2 << 2)
label_30bf8c:
    if (ctx->pc == 0x30BF8Cu) {
        ctx->pc = 0x30BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF88u;
        // 0x30bf8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF90u;
        goto label_30bf90;
    }
    ctx->pc = 0x30BF88u;
    {
        const bool branch_taken_0x30bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF88u;
        // 0x30bf8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf88) {
            ctx->pc = 0x30BF94u;
            goto label_30bf94;
        }
    }
    ctx->pc = 0x30BF90u;
label_30bf90:
    // 0x30bf90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30bf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bf94:
    // 0x30bf94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30bf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30bf98:
    // 0x30bf98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30bf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30bf9c:
    // 0x30bf9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30bf9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30bfa0:
    // 0x30bfa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30bfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30bfa4:
    // 0x30bfa4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30bfa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30bfa8:
    // 0x30bfa8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30bfa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30bfac:
    // 0x30bfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30bfb0:
    // 0x30bfb0: 0x3e00008  jr          $ra
label_30bfb4:
    if (ctx->pc == 0x30BFB4u) {
        ctx->pc = 0x30BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFB0u;
        // 0x30bfb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BFB8u;
        goto label_fallthrough_0x30bfb0;
    }
    ctx->pc = 0x30BFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFB0u;
        // 0x30bfb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30bfb0:
    ctx->pc = 0x30BFB8u;
}
