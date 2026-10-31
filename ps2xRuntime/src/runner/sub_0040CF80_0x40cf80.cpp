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

// Function: sub_0040CF80
// Address: 0x40cf80 - 0x40d088
void sub_0040CF80_0x40cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CF80_0x40cf80");
#endif

    switch (ctx->pc) {
        case 0x40cf80u: goto label_40cf80;
        case 0x40cf84u: goto label_40cf84;
        case 0x40cf88u: goto label_40cf88;
        case 0x40cf8cu: goto label_40cf8c;
        case 0x40cf90u: goto label_40cf90;
        case 0x40cf94u: goto label_40cf94;
        case 0x40cf98u: goto label_40cf98;
        case 0x40cf9cu: goto label_40cf9c;
        case 0x40cfa0u: goto label_40cfa0;
        case 0x40cfa4u: goto label_40cfa4;
        case 0x40cfa8u: goto label_40cfa8;
        case 0x40cfacu: goto label_40cfac;
        case 0x40cfb0u: goto label_40cfb0;
        case 0x40cfb4u: goto label_40cfb4;
        case 0x40cfb8u: goto label_40cfb8;
        case 0x40cfbcu: goto label_40cfbc;
        case 0x40cfc0u: goto label_40cfc0;
        case 0x40cfc4u: goto label_40cfc4;
        case 0x40cfc8u: goto label_40cfc8;
        case 0x40cfccu: goto label_40cfcc;
        case 0x40cfd0u: goto label_40cfd0;
        case 0x40cfd4u: goto label_40cfd4;
        case 0x40cfd8u: goto label_40cfd8;
        case 0x40cfdcu: goto label_40cfdc;
        case 0x40cfe0u: goto label_40cfe0;
        case 0x40cfe4u: goto label_40cfe4;
        case 0x40cfe8u: goto label_40cfe8;
        case 0x40cfecu: goto label_40cfec;
        case 0x40cff0u: goto label_40cff0;
        case 0x40cff4u: goto label_40cff4;
        case 0x40cff8u: goto label_40cff8;
        case 0x40cffcu: goto label_40cffc;
        case 0x40d000u: goto label_40d000;
        case 0x40d004u: goto label_40d004;
        case 0x40d008u: goto label_40d008;
        case 0x40d00cu: goto label_40d00c;
        case 0x40d010u: goto label_40d010;
        case 0x40d014u: goto label_40d014;
        case 0x40d018u: goto label_40d018;
        case 0x40d01cu: goto label_40d01c;
        case 0x40d020u: goto label_40d020;
        case 0x40d024u: goto label_40d024;
        case 0x40d028u: goto label_40d028;
        case 0x40d02cu: goto label_40d02c;
        case 0x40d030u: goto label_40d030;
        case 0x40d034u: goto label_40d034;
        case 0x40d038u: goto label_40d038;
        case 0x40d03cu: goto label_40d03c;
        case 0x40d040u: goto label_40d040;
        case 0x40d044u: goto label_40d044;
        case 0x40d048u: goto label_40d048;
        case 0x40d04cu: goto label_40d04c;
        case 0x40d050u: goto label_40d050;
        case 0x40d054u: goto label_40d054;
        case 0x40d058u: goto label_40d058;
        case 0x40d05cu: goto label_40d05c;
        case 0x40d060u: goto label_40d060;
        case 0x40d064u: goto label_40d064;
        case 0x40d068u: goto label_40d068;
        case 0x40d06cu: goto label_40d06c;
        case 0x40d070u: goto label_40d070;
        case 0x40d074u: goto label_40d074;
        case 0x40d078u: goto label_40d078;
        case 0x40d07cu: goto label_40d07c;
        case 0x40d080u: goto label_40d080;
        case 0x40d084u: goto label_40d084;
        default: break;
    }

    ctx->pc = 0x40cf80u;

label_40cf80:
    // 0x40cf80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40cf84:
    // 0x40cf84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x40cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_40cf88:
    // 0x40cf88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x40cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_40cf8c:
    // 0x40cf8c: 0x24425b88  addiu       $v0, $v0, 0x5B88
    ctx->pc = 0x40cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23432));
label_40cf90:
    // 0x40cf90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_40cf94:
    // 0x40cf94: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40cf94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_40cf98:
    // 0x40cf98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40cf9c:
    // 0x40cf9c: 0x26108860  addiu       $s0, $s0, -0x77A0
    ctx->pc = 0x40cf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936672));
label_40cfa0:
    // 0x40cfa0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x40cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_40cfa4:
    // 0x40cfa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40cfa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40cfa8:
    // 0x40cfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40cfac:
    // 0x40cfac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40cfacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40cfb0:
    // 0x40cfb0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x40cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40cfb4:
    // 0x40cfb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40cfb8:
    // 0x40cfb8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x40cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_40cfbc:
    // 0x40cfbc: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x40cfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_40cfc0:
    // 0x40cfc0: 0xc13d2de  jal         func_4F4B78
label_40cfc4:
    if (ctx->pc == 0x40CFC4u) {
        ctx->pc = 0x40CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFC0u;
        // 0x40cfc4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CFC8u;
        goto label_40cfc8;
    }
    ctx->pc = 0x40CFC0u;
    SET_GPR_U32(ctx, 31, 0x40CFC8u);
    ctx->pc = 0x40CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CFC0u;
    // 0x40cfc4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4B78u, 0x40CFC0u, 0x40CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CFC8u;
label_40cfc8:
    // 0x40cfc8: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x40cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_40cfcc:
    // 0x40cfcc: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x40cfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_40cfd0:
    // 0x40cfd0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x40cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_40cfd4:
    // 0x40cfd4: 0xc13d2fe  jal         func_4F4BF8
label_40cfd8:
    if (ctx->pc == 0x40CFD8u) {
        ctx->pc = 0x40CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFD4u;
        // 0x40cfd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CFDCu;
        goto label_40cfdc;
    }
    ctx->pc = 0x40CFD4u;
    SET_GPR_U32(ctx, 31, 0x40CFDCu);
    ctx->pc = 0x40CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CFD4u;
    // 0x40cfd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4BF8u, 0x40CFD4u, 0x40CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CFDCu;
label_40cfdc:
    // 0x40cfdc: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x40cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_40cfe0:
    // 0x40cfe0: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x40cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_40cfe4:
    // 0x40cfe4: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x40cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_40cfe8:
    // 0x40cfe8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x40cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40cfec:
    // 0x40cfec: 0x84440178  lh          $a0, 0x178($v0)
    ctx->pc = 0x40cfecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 376)));
label_40cff0:
    // 0x40cff0: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x40cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
label_40cff4:
    // 0x40cff4: 0x60f809  jalr        $v1
label_40cff8:
    if (ctx->pc == 0x40CFF8u) {
        ctx->pc = 0x40CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFF4u;
        // 0x40cff8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CFFCu;
        goto label_40cffc;
    }
    ctx->pc = 0x40CFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40CFFCu);
        ctx->pc = 0x40CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFF4u;
        // 0x40cff8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CFF4u, 0x40CFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40CFFCu;
label_40cffc:
    // 0x40cffc: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x40cffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_40d000:
    // 0x40d000: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x40d000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_40d004:
    // 0x40d004: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x40d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_40d008:
    // 0x40d008: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x40d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40d00c:
    // 0x40d00c: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x40d00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_40d010:
    // 0x40d010: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x40d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_40d014:
    // 0x40d014: 0x60f809  jalr        $v1
label_40d018:
    if (ctx->pc == 0x40D018u) {
        ctx->pc = 0x40D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D014u;
        // 0x40d018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D01Cu;
        goto label_40d01c;
    }
    ctx->pc = 0x40D014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D01Cu);
        ctx->pc = 0x40D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D014u;
        // 0x40d018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D014u, 0x40D01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D01Cu;
label_40d01c:
    // 0x40d01c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x40d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_40d020:
    // 0x40d020: 0xc11a4fc  jal         func_4693F0
label_40d024:
    if (ctx->pc == 0x40D024u) {
        ctx->pc = 0x40D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D020u;
        // 0x40d024: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D028u;
        goto label_40d028;
    }
    ctx->pc = 0x40D020u;
    SET_GPR_U32(ctx, 31, 0x40D028u);
    ctx->pc = 0x40D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D020u;
    // 0x40d024: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x40D020u, 0x40D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D028u;
label_40d028:
    // 0x40d028: 0xc122316  jal         func_488C58
label_40d02c:
    if (ctx->pc == 0x40D02Cu) {
        ctx->pc = 0x40D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D028u;
        // 0x40d02c: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D030u;
        goto label_40d030;
    }
    ctx->pc = 0x40D028u;
    SET_GPR_U32(ctx, 31, 0x40D030u);
    ctx->pc = 0x40D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D028u;
    // 0x40d02c: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x40D028u, 0x40D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D030u;
label_40d030:
    // 0x40d030: 0xc11a4fc  jal         func_4693F0
label_40d034:
    if (ctx->pc == 0x40D034u) {
        ctx->pc = 0x40D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D030u;
        // 0x40d034: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D038u;
        goto label_40d038;
    }
    ctx->pc = 0x40D030u;
    SET_GPR_U32(ctx, 31, 0x40D038u);
    ctx->pc = 0x40D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D030u;
    // 0x40d034: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x40D030u, 0x40D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D038u;
label_40d038:
    // 0x40d038: 0xc122316  jal         func_488C58
label_40d03c:
    if (ctx->pc == 0x40D03Cu) {
        ctx->pc = 0x40D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D038u;
        // 0x40d03c: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D040u;
        goto label_40d040;
    }
    ctx->pc = 0x40D038u;
    SET_GPR_U32(ctx, 31, 0x40D040u);
    ctx->pc = 0x40D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D038u;
    // 0x40d03c: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x40D038u, 0x40D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D040u;
label_40d040:
    // 0x40d040: 0xc11a4fc  jal         func_4693F0
label_40d044:
    if (ctx->pc == 0x40D044u) {
        ctx->pc = 0x40D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D040u;
        // 0x40d044: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D048u;
        goto label_40d048;
    }
    ctx->pc = 0x40D040u;
    SET_GPR_U32(ctx, 31, 0x40D048u);
    ctx->pc = 0x40D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D040u;
    // 0x40d044: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x40D040u, 0x40D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D048u;
label_40d048:
    // 0x40d048: 0xc122316  jal         func_488C58
label_40d04c:
    if (ctx->pc == 0x40D04Cu) {
        ctx->pc = 0x40D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D048u;
        // 0x40d04c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D050u;
        goto label_40d050;
    }
    ctx->pc = 0x40D048u;
    SET_GPR_U32(ctx, 31, 0x40D050u);
    ctx->pc = 0x40D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D048u;
    // 0x40d04c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x40D048u, 0x40D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D050u;
label_40d050:
    // 0x40d050: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x40d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_40d054:
    // 0x40d054: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x40d054u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_40d058:
    // 0x40d058: 0x24634298  addiu       $v1, $v1, 0x4298
    ctx->pc = 0x40d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17048));
label_40d05c:
    // 0x40d05c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_40d060:
    if (ctx->pc == 0x40D060u) {
        ctx->pc = 0x40D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D05Cu;
        // 0x40d060: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D064u;
        goto label_40d064;
    }
    ctx->pc = 0x40D05Cu;
    {
        const bool branch_taken_0x40d05c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D05Cu;
        // 0x40d060: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d05c) {
            ctx->pc = 0x40D06Cu;
            goto label_40d06c;
        }
    }
    ctx->pc = 0x40D064u;
label_40d064:
    // 0x40d064: 0xc10b208  jal         func_42C820
label_40d068:
    if (ctx->pc == 0x40D068u) {
        ctx->pc = 0x40D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D064u;
        // 0x40d068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D06Cu;
        goto label_40d06c;
    }
    ctx->pc = 0x40D064u;
    SET_GPR_U32(ctx, 31, 0x40D06Cu);
    ctx->pc = 0x40D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D064u;
    // 0x40d068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x40D064u, 0x40D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D06Cu;
label_40d06c:
    // 0x40d06c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40d06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40d070:
    // 0x40d070: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40d070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d074:
    // 0x40d074: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40d074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d078:
    // 0x40d078: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x40d078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d07c:
    // 0x40d07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40d080:
    // 0x40d080: 0x3e00008  jr          $ra
label_40d084:
    if (ctx->pc == 0x40D084u) {
        ctx->pc = 0x40D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D080u;
        // 0x40d084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D088u;
        goto label_fallthrough_0x40d080;
    }
    ctx->pc = 0x40D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D080u;
        // 0x40d084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40d080:
    ctx->pc = 0x40D088u;
}
