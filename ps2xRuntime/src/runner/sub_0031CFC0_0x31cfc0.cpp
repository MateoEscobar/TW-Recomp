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

// Function: sub_0031CFC0
// Address: 0x31cfc0 - 0x31d0e8
void sub_0031CFC0_0x31cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CFC0_0x31cfc0");
#endif

    switch (ctx->pc) {
        case 0x31cfe4u: goto label_31cfe4;
        case 0x31d004u: goto label_31d004;
        case 0x31d010u: goto label_31d010;
        case 0x31d01cu: goto label_31d01c;
        case 0x31d05cu: goto label_31d05c;
        case 0x31d070u: goto label_31d070;
        case 0x31d078u: goto label_31d078;
        case 0x31d080u: goto label_31d080;
        case 0x31d0a8u: goto label_31d0a8;
        case 0x31d0c8u: goto label_31d0c8;
        default: break;
    }

    ctx->pc = 0x31cfc0u;

    // 0x31cfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31cfc4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31cfc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x31cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x31cfcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31cfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cfd4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x31cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31cfd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cfdc: 0xc05959e  jal         func_165678
    ctx->pc = 0x31CFDCu;
    SET_GPR_U32(ctx, 31, 0x31CFE4u);
    ctx->pc = 0x31CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFDCu;
    // 0x31cfe0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31CFDCu, 0x31CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFE4u;
label_31cfe4:
    // 0x31cfe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31cfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfe8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x31CFE8u;
    {
        const bool branch_taken_0x31cfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cfe8) {
            ctx->pc = 0x31CFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CFE8u;
            // 0x31cfec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D014u;
            goto label_31d014;
        }
    }
    ctx->pc = 0x31CFF0u;
    // 0x31cff0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x31cff4: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31CFF4u;
    {
        const bool branch_taken_0x31cff4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31cff4) {
            ctx->pc = 0x31CFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CFF4u;
            // 0x31cff8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D014u;
            goto label_31d014;
        }
    }
    ctx->pc = 0x31CFFCu;
    // 0x31cffc: 0xc08750a  jal         func_21D428
    ctx->pc = 0x31CFFCu;
    SET_GPR_U32(ctx, 31, 0x31D004u);
    ctx->pc = 0x31D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFFCu;
    // 0x31d000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x31CFFCu, 0x31D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D004u;
label_31d004:
    // 0x31d004: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x31d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x31d008: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x31D008u;
    SET_GPR_U32(ctx, 31, 0x31D010u);
    ctx->pc = 0x31D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D008u;
    // 0x31d00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x31D008u, 0x31D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D010u;
label_31d010:
    // 0x31d010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d014:
    // 0x31d014: 0xc059646  jal         func_165918
    ctx->pc = 0x31D014u;
    SET_GPR_U32(ctx, 31, 0x31D01Cu);
    ctx->pc = 0x31D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D014u;
    // 0x31d018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x31D014u, 0x31D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D01Cu;
label_31d01c:
    // 0x31d01c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x31d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x31d020: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x31D020u;
    {
        const bool branch_taken_0x31d020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D020u;
        // 0x31d024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d020) {
            ctx->pc = 0x31D05Cu;
            goto label_31d05c;
        }
    }
    ctx->pc = 0x31D028u;
    // 0x31d028: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x31d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x31d02c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31D02Cu;
    {
        const bool branch_taken_0x31d02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31d02c) {
            ctx->pc = 0x31D030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D02Cu;
            // 0x31d030: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D060u;
            goto label_31d060;
        }
    }
    ctx->pc = 0x31D034u;
    // 0x31d034: 0x8c8303b4  lw          $v1, 0x3B4($a0)
    ctx->pc = 0x31d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x31d038: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31d038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31d03c: 0x2404026d  addiu       $a0, $zero, 0x26D
    ctx->pc = 0x31d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x31d040: 0x8c45aa84  lw          $a1, -0x557C($v0)
    ctx->pc = 0x31d040u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50AA84u));
    // 0x31d044: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x31d044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31d048: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x31d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x31d04c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31d050: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31d054: 0xc05a582  jal         func_169608
    ctx->pc = 0x31D054u;
    SET_GPR_U32(ctx, 31, 0x31D05Cu);
    ctx->pc = 0x31D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D054u;
    // 0x31d058: 0x90650040  lbu         $a1, 0x40($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x31D054u, 0x31D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D05Cu;
label_31d05c:
    // 0x31d05c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d060:
    // 0x31d060: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31d060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d064: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x31d064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d068: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x31d068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31d06c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d070:
    // 0x31d070: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31D070u;
    SET_GPR_U32(ctx, 31, 0x31D078u);
    ctx->pc = 0x31D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D070u;
    // 0x31d074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31D070u, 0x31D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D078u;
label_31d078:
    // 0x31d078: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31D078u;
    SET_GPR_U32(ctx, 31, 0x31D080u);
    ctx->pc = 0x31D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D078u;
    // 0x31d07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31D078u, 0x31D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D080u;
label_31d080:
    // 0x31d080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d084: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31D084u;
    {
        const bool branch_taken_0x31d084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d084) {
            ctx->pc = 0x31D088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D084u;
            // 0x31d088: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D0ACu;
            goto label_31d0ac;
        }
    }
    ctx->pc = 0x31D08Cu;
    // 0x31d08c: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x31d08cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x31d090: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31d090u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31d094: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31d094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31d098: 0x50530004  beql        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D098u;
    {
        const bool branch_taken_0x31d098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x31d098) {
            ctx->pc = 0x31D09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D098u;
            // 0x31d09c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D0ACu;
            goto label_31d0ac;
        }
    }
    ctx->pc = 0x31D0A0u;
    // 0x31d0a0: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x31D0A0u;
    SET_GPR_U32(ctx, 31, 0x31D0A8u);
    ctx->pc = 0x31D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0A0u;
    // 0x31d0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x31D0A0u, 0x31D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0A8u;
label_31d0a8:
    // 0x31d0a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31d0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31d0ac:
    // 0x31d0ac: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x31d0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d0b0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31D0B0u;
    {
        const bool branch_taken_0x31d0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d0b0) {
            ctx->pc = 0x31D0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D0B0u;
            // 0x31d0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d070;
        }
    }
    ctx->pc = 0x31D0B8u;
    // 0x31d0b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31d0bc: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x31d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x31d0c0: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31D0C0u;
    SET_GPR_U32(ctx, 31, 0x31D0C8u);
    ctx->pc = 0x31D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0C0u;
    // 0x31d0c4: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31D0C0u, 0x31D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0C8u;
label_31d0c8:
    // 0x31d0c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x31d0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d0cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31d0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d0d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d0d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31d0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0DCu;
        // 0x31d0e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D0E4u;
    // 0x31d0e4: 0x0  nop
    ctx->pc = 0x31d0e4u;
    // NOP
    ctx->pc = 0x31d0e8u;
}
