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

// Function: sub_002FAD70
// Address: 0x2fad70 - 0x2faeb0
void sub_002FAD70_0x2fad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAD70_0x2fad70");
#endif

    switch (ctx->pc) {
        case 0x2fadbcu: goto label_2fadbc;
        case 0x2fadc8u: goto label_2fadc8;
        case 0x2fadecu: goto label_2fadec;
        case 0x2fae0cu: goto label_2fae0c;
        case 0x2fae30u: goto label_2fae30;
        case 0x2fae40u: goto label_2fae40;
        case 0x2fae4cu: goto label_2fae4c;
        case 0x2fae68u: goto label_2fae68;
        default: break;
    }

    ctx->pc = 0x2fad70u;

    // 0x2fad70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fad74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fad78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2fad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2fad7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2fad84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fad84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fad88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fad8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fad90: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2fad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fad94: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAD94u;
    {
        const bool branch_taken_0x2fad94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2fad94) {
            ctx->pc = 0x2FAD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAD94u;
            // 0x2fad98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FADA8u;
            goto label_2fada8;
        }
    }
    ctx->pc = 0x2FAD9Cu;
    // 0x2fad9c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2fad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2fada0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2FADA0u;
    {
        const bool branch_taken_0x2fada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADA0u;
        // 0x2fada4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fada0) {
            ctx->pc = 0x2FAE7Cu;
            goto label_2fae7c;
        }
    }
    ctx->pc = 0x2FADA8u;
label_2fada8:
    // 0x2fada8: 0x3c0505c0  lui         $a1, 0x5C0
    ctx->pc = 0x2fada8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1472 << 16));
    // 0x2fadac: 0x34a5221f  ori         $a1, $a1, 0x221F
    ctx->pc = 0x2fadacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8735);
    // 0x2fadb0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2fadb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fadb4: 0xc089998  jal         func_226660
    ctx->pc = 0x2FADB4u;
    SET_GPR_U32(ctx, 31, 0x2FADBCu);
    ctx->pc = 0x2FADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADB4u;
    // 0x2fadb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FADB4u, 0x2FADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADBCu;
label_2fadbc:
    // 0x2fadbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fadbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fadc0: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2FADC0u;
    SET_GPR_U32(ctx, 31, 0x2FADC8u);
    ctx->pc = 0x2FADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FADC0u;
    // 0x2fadc4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2FADC0u, 0x2FADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADC8u;
label_2fadc8:
    // 0x2fadc8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FADC8u;
    {
        const bool branch_taken_0x2fadc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fadc8) {
            ctx->pc = 0x2FADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FADC8u;
            // 0x2fadcc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FADDCu;
            goto label_2faddc;
        }
    }
    ctx->pc = 0x2FADD0u;
    // 0x2fadd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fadd4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2FADD4u;
    {
        const bool branch_taken_0x2fadd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD4u;
        // 0x2fadd8: 0x11100b  movn        $v0, $zero, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadd4) {
            ctx->pc = 0x2FAE7Cu;
            goto label_2fae7c;
        }
    }
    ctx->pc = 0x2FADDCu;
label_2faddc:
    // 0x2faddc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FADDCu;
    {
        const bool branch_taken_0x2faddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADDCu;
        // 0x2fade0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faddc) {
            ctx->pc = 0x2FADF8u;
            goto label_2fadf8;
        }
    }
    ctx->pc = 0x2FADE4u;
    // 0x2fade4: 0xc08a6d8  jal         func_229B60
    ctx->pc = 0x2FADE4u;
    SET_GPR_U32(ctx, 31, 0x2FADECu);
    ctx->pc = 0x229B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B60u, 0x2FADE4u, 0x2FADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADECu;
label_2fadec:
    // 0x2fadec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fadecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fadf0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2fadf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fadf4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2fadf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2fadf8:
    // 0x2fadf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FADF8u;
    {
        const bool branch_taken_0x2fadf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADF8u;
        // 0x2fadfc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadf8) {
            ctx->pc = 0x2FAE10u;
            goto label_2fae10;
        }
    }
    ctx->pc = 0x2FAE00u;
    // 0x2fae00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fae00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fae04: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FAE04u;
    SET_GPR_U32(ctx, 31, 0x2FAE0Cu);
    ctx->pc = 0x2FAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE04u;
    // 0x2fae08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FAE04u, 0x2FAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE0Cu;
label_2fae0c:
    // 0x2fae0c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2fae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2fae10:
    // 0x2fae10: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2fae10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fae14: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2fae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x2fae18: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2fae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2fae1c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2fae1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2fae20: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FAE20u;
    {
        const bool branch_taken_0x2fae20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fae20) {
            ctx->pc = 0x2FAE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAE20u;
            // 0x2fae24: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAE54u;
            goto label_2fae54;
        }
    }
    ctx->pc = 0x2FAE28u;
    // 0x2fae28: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FAE28u;
    SET_GPR_U32(ctx, 31, 0x2FAE30u);
    ctx->pc = 0x2FAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE28u;
    // 0x2fae2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FAE28u, 0x2FAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE30u;
label_2fae30:
    // 0x2fae30: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2fae30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fae34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae38: 0xc08c424  jal         func_231090
    ctx->pc = 0x2FAE38u;
    SET_GPR_U32(ctx, 31, 0x2FAE40u);
    ctx->pc = 0x2FAE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE38u;
    // 0x2fae3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231090u, 0x2FAE38u, 0x2FAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE40u;
label_2fae40:
    // 0x2fae40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae44: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FAE44u;
    SET_GPR_U32(ctx, 31, 0x2FAE4Cu);
    ctx->pc = 0x2FAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE44u;
    // 0x2fae48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FAE44u, 0x2FAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE4Cu;
label_2fae4c:
    // 0x2fae4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FAE4Cu;
    {
        const bool branch_taken_0x2fae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE4Cu;
        // 0x2fae50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae4c) {
            ctx->pc = 0x2FAE7Cu;
            goto label_2fae7c;
        }
    }
    ctx->pc = 0x2FAE54u;
label_2fae54:
    // 0x2fae54: 0x10530008  beq         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FAE54u;
    {
        const bool branch_taken_0x2fae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE54u;
        // 0x2fae58: 0x3c0505c0  lui         $a1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1472 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae54) {
            ctx->pc = 0x2FAE78u;
            goto label_2fae78;
        }
    }
    ctx->pc = 0x2FAE5Cu;
    // 0x2fae5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae60: 0xc089998  jal         func_226660
    ctx->pc = 0x2FAE60u;
    SET_GPR_U32(ctx, 31, 0x2FAE68u);
    ctx->pc = 0x2FAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE60u;
    // 0x2fae64: 0x34a5221f  ori         $a1, $a1, 0x221F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8735);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2FAE60u, 0x2FAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE68u;
label_2fae68:
    // 0x2fae68: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fae68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fae6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fae70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAE70u;
    {
        const bool branch_taken_0x2fae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE70u;
        // 0x2fae74: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fae70) {
            ctx->pc = 0x2FAE7Cu;
            goto label_2fae7c;
        }
    }
    ctx->pc = 0x2FAE78u;
label_2fae78:
    // 0x2fae78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fae7c:
    // 0x2fae7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fae7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fae80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fae80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fae84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fae84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fae88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2fae88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fae8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fae8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fae90: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE90u;
        // 0x2fae94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAE98u;
    // 0x2fae98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2fae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fae9c: 0x0  nop
    ctx->pc = 0x2fae9cu;
    // NOP
    // 0x2faea0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2faea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2faea4: 0x0  nop
    ctx->pc = 0x2faea4u;
    // NOP
    // 0x2faea8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2faea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2faeac: 0x0  nop
    ctx->pc = 0x2faeacu;
    // NOP
    ctx->pc = 0x2faeb0u;
}
