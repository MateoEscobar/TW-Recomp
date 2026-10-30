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

// Function: sub_002EA218
// Address: 0x2ea218 - 0x2ea3a0
void sub_002EA218_0x2ea218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA218_0x2ea218");
#endif

    switch (ctx->pc) {
        case 0x2ea2a4u: goto label_2ea2a4;
        case 0x2ea2bcu: goto label_2ea2bc;
        case 0x2ea2c4u: goto label_2ea2c4;
        case 0x2ea308u: goto label_2ea308;
        case 0x2ea32cu: goto label_2ea32c;
        case 0x2ea33cu: goto label_2ea33c;
        case 0x2ea378u: goto label_2ea378;
        default: break;
    }

    ctx->pc = 0x2ea218u;

    // 0x2ea218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ea21c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ea21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ea220: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ea220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2ea224: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea228: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ea228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ea22c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ea22cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea230: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ea230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ea234: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ea234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2ea238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea23c: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x2ea23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2ea240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ea240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ea244: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ea244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ea248: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA248u;
    {
        const bool branch_taken_0x2ea248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ea248) {
            ctx->pc = 0x2EA24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA248u;
            // 0x2ea24c: 0x92230024  lbu         $v1, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA264u;
            goto label_2ea264;
        }
    }
    ctx->pc = 0x2EA250u;
    // 0x2ea250: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2ea250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ea254: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x2EA254u;
    {
        const bool branch_taken_0x2ea254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea254) {
            ctx->pc = 0x2EA258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA254u;
            // 0x2ea258: 0xae330020  sw          $s3, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA378u;
            goto label_2ea378;
        }
    }
    ctx->pc = 0x2EA25Cu;
    // 0x2ea25c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2EA25Cu;
    {
        const bool branch_taken_0x2ea25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA25Cu;
        // 0x2ea260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea25c) {
            ctx->pc = 0x2EA37Cu;
            goto label_2ea37c;
        }
    }
    ctx->pc = 0x2EA264u;
label_2ea264:
    // 0x2ea264: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x2ea264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea268: 0x10740044  beq         $v1, $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x2EA268u;
    {
        const bool branch_taken_0x2ea268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA268u;
        // 0x2ea26c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea268) {
            ctx->pc = 0x2EA37Cu;
            goto label_2ea37c;
        }
    }
    ctx->pc = 0x2EA270u;
    // 0x2ea270: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ea270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea274: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2ea274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea278: 0x14720018  bne         $v1, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2EA278u;
    {
        const bool branch_taken_0x2ea278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA278u;
        // 0x2ea27c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea278) {
            ctx->pc = 0x2EA2DCu;
            goto label_2ea2dc;
        }
    }
    ctx->pc = 0x2EA280u;
    // 0x2ea280: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x2ea280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x2ea284: 0x1453003d  bne         $v0, $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x2EA284u;
    {
        const bool branch_taken_0x2ea284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2EA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA284u;
        // 0x2ea288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea284) {
            ctx->pc = 0x2EA37Cu;
            goto label_2ea37c;
        }
    }
    ctx->pc = 0x2EA28Cu;
    // 0x2ea28c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2ea28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ea290: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EA290u;
    {
        const bool branch_taken_0x2ea290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA290u;
        // 0x2ea294: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea290) {
            ctx->pc = 0x2EA2BCu;
            goto label_2ea2bc;
        }
    }
    ctx->pc = 0x2EA298u;
    // 0x2ea298: 0x94a50112  lhu         $a1, 0x112($a1)
    ctx->pc = 0x2ea298u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    // 0x2ea29c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2EA29Cu;
    SET_GPR_U32(ctx, 31, 0x2EA2A4u);
    ctx->pc = 0x2EA2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA29Cu;
    // 0x2ea2a0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2EA29Cu, 0x2EA2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2A4u;
label_2ea2a4:
    // 0x2ea2a4: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x2ea2a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
    // 0x2ea2a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ea2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea2ac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA2ACu;
    {
        const bool branch_taken_0x2ea2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2ACu;
        // 0x2ea2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2ac) {
            ctx->pc = 0x2EA2BCu;
            goto label_2ea2bc;
        }
    }
    ctx->pc = 0x2EA2B4u;
    // 0x2ea2b4: 0xc0ba8f2  jal         func_2EA3C8
    ctx->pc = 0x2EA2B4u;
    SET_GPR_U32(ctx, 31, 0x2EA2BCu);
    ctx->pc = 0x2EA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2B4u;
    // 0x2ea2b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA3C8u, 0x2EA2B4u, 0x2EA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2BCu;
label_2ea2bc:
    // 0x2ea2bc: 0xc088e80  jal         func_223A00
    ctx->pc = 0x2EA2BCu;
    SET_GPR_U32(ctx, 31, 0x2EA2C4u);
    ctx->pc = 0x2EA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2BCu;
    // 0x2ea2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x2EA2BCu, 0x2EA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2C4u;
label_2ea2c4:
    // 0x2ea2c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea2c8: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EA2C8u;
    {
        const bool branch_taken_0x2ea2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2C8u;
        // 0x2ea2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2c8) {
            ctx->pc = 0x2EA37Cu;
            goto label_2ea37c;
        }
    }
    ctx->pc = 0x2EA2D0u;
    // 0x2ea2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2EA2D4u;
    {
        const bool branch_taken_0x2ea2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2D4u;
        // 0x2ea2d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2d4) {
            ctx->pc = 0x2EA370u;
            goto label_2ea370;
        }
    }
    ctx->pc = 0x2EA2DCu;
label_2ea2dc:
    // 0x2ea2dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea2e0: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2EA2E0u;
    {
        const bool branch_taken_0x2ea2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2E0u;
        // 0x2ea2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2e0) {
            ctx->pc = 0x2EA37Cu;
            goto label_2ea37c;
        }
    }
    ctx->pc = 0x2EA2E8u;
    // 0x2ea2e8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2ea2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ea2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2f0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x2ea2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ea2f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2f8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2ea2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ea2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea300: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x2EA300u;
    SET_GPR_U32(ctx, 31, 0x2EA308u);
    ctx->pc = 0x2EA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA300u;
    // 0x2ea304: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2EA300u, 0x2EA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA308u;
label_2ea308:
    // 0x2ea308: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x2ea308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x2ea30c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ea30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ea310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ea310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea314: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2ea314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ea318: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EA318u;
    {
        const bool branch_taken_0x2ea318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA318u;
        // 0x2ea31c: 0xa2220027  sb          $v0, 0x27($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea318) {
            ctx->pc = 0x2EA378u;
            goto label_2ea378;
        }
    }
    ctx->pc = 0x2EA320u;
    // 0x2ea320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea324: 0xc0baac2  jal         func_2EAB08
    ctx->pc = 0x2EA324u;
    SET_GPR_U32(ctx, 31, 0x2EA32Cu);
    ctx->pc = 0x2EA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA324u;
    // 0x2ea328: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EA324u, 0x2EA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA32Cu;
label_2ea32c:
    // 0x2ea32c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ea32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ea330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea334: 0xc0baac2  jal         func_2EAB08
    ctx->pc = 0x2EA334u;
    SET_GPR_U32(ctx, 31, 0x2EA33Cu);
    ctx->pc = 0x2EA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA334u;
    // 0x2ea338: 0x242800b  movn        $s0, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EA334u, 0x2EA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA33Cu;
label_2ea33c:
    // 0x2ea33c: 0x9225002d  lbu         $a1, 0x2D($s1)
    ctx->pc = 0x2ea33cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x2ea340: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ea340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ea344: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ea344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ea348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea34c: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x2ea34cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x2ea350: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ea350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ea354: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2ea354u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2ea358: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA358u;
    {
        const bool branch_taken_0x2ea358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea358) {
            ctx->pc = 0x2EA35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA358u;
            // 0x2ea35c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA360u;
            goto label_2ea360;
        }
    }
    ctx->pc = 0x2EA360u;
label_2ea360:
    // 0x2ea360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ea360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea364: 0x1010  mfhi        $v0
    ctx->pc = 0x2ea364u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ea368: 0x202280a  movz        $a1, $s0, $v0
    ctx->pc = 0x2ea368u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x2ea36c: 0xa222002d  sb          $v0, 0x2D($s1)
    ctx->pc = 0x2ea36cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 2));
label_2ea370:
    // 0x2ea370: 0xc0ba8f2  jal         func_2EA3C8
    ctx->pc = 0x2EA370u;
    SET_GPR_U32(ctx, 31, 0x2EA378u);
    ctx->pc = 0x2EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA3C8u, 0x2EA370u, 0x2EA378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA378u;
label_2ea378:
    // 0x2ea378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea37c:
    // 0x2ea37c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ea37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ea380: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ea380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea384: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ea384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea388: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ea388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea38c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ea38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea394: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA394u;
        // 0x2ea398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA39Cu;
    // 0x2ea39c: 0x0  nop
    ctx->pc = 0x2ea39cu;
    // NOP
    ctx->pc = 0x2ea3a0u;
}
