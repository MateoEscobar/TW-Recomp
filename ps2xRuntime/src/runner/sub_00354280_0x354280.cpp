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

// Function: sub_00354280
// Address: 0x354280 - 0x354378
void sub_00354280_0x354280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354280_0x354280");
#endif

    switch (ctx->pc) {
        case 0x3542acu: goto label_3542ac;
        case 0x3542c0u: goto label_3542c0;
        case 0x3542e0u: goto label_3542e0;
        case 0x3542e8u: goto label_3542e8;
        case 0x35430cu: goto label_35430c;
        case 0x354358u: goto label_354358;
        default: break;
    }

    ctx->pc = 0x354280u;

    // 0x354280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x354280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x354284: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x354284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x354288: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x354288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x35428c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35428cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354290: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x354290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x354294: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x354294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354298: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x354298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x35429c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3542a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3542a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3542A4u;
    SET_GPR_U32(ctx, 31, 0x3542ACu);
    ctx->pc = 0x3542A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542A4u;
    // 0x3542a8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3542A4u, 0x3542ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542ACu;
label_3542ac:
    // 0x3542ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3542acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542b0: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3542B0u;
    {
        const bool branch_taken_0x3542b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542B0u;
        // 0x3542b4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542b0) {
            ctx->pc = 0x35435Cu;
            goto label_35435c;
        }
    }
    ctx->pc = 0x3542B8u;
    // 0x3542b8: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x3542B8u;
    SET_GPR_U32(ctx, 31, 0x3542C0u);
    ctx->pc = 0x3542BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542B8u;
    // 0x3542bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x3542B8u, 0x3542C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542C0u;
label_3542c0:
    // 0x3542c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3542c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542c4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3542c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3542c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3542c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3542cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3542CCu;
    {
        const bool branch_taken_0x3542cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3542D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542CCu;
        // 0x3542d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542cc) {
            ctx->pc = 0x3542E0u;
            goto label_3542e0;
        }
    }
    ctx->pc = 0x3542D4u;
    // 0x3542d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3542d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542d8: 0xc0d497e  jal         func_3525F8
    ctx->pc = 0x3542D8u;
    SET_GPR_U32(ctx, 31, 0x3542E0u);
    ctx->pc = 0x3542DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542D8u;
    // 0x3542dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F8u, 0x3542D8u, 0x3542E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542E0u;
label_3542e0:
    // 0x3542e0: 0xc0d4c08  jal         func_353020
    ctx->pc = 0x3542E0u;
    SET_GPR_U32(ctx, 31, 0x3542E8u);
    ctx->pc = 0x3542E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3542E0u;
    // 0x3542e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353020u, 0x3542E0u, 0x3542E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542E8u;
label_3542e8:
    // 0x3542e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3542e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3542ec: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3542ECu;
    {
        const bool branch_taken_0x3542ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542ec) {
            ctx->pc = 0x3542F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3542ECu;
            // 0x3542f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35435Cu;
            goto label_35435c;
        }
    }
    ctx->pc = 0x3542F4u;
    // 0x3542f4: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x3542f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3542f8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3542f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3542fc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3542FCu;
    {
        const bool branch_taken_0x3542fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542fc) {
            ctx->pc = 0x354300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3542FCu;
            // 0x354300: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35435Cu;
            goto label_35435c;
        }
    }
    ctx->pc = 0x354304u;
    // 0x354304: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x354304u;
    SET_GPR_U32(ctx, 31, 0x35430Cu);
    ctx->pc = 0x354308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354304u;
    // 0x354308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x354304u, 0x35430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35430Cu;
label_35430c:
    // 0x35430c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35430Cu;
    {
        const bool branch_taken_0x35430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35430Cu;
        // 0x354310: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35430c) {
            ctx->pc = 0x354328u;
            goto label_354328;
        }
    }
    ctx->pc = 0x354314u;
    // 0x354314: 0x84420110  lh          $v0, 0x110($v0)
    ctx->pc = 0x354314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x354318: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x354318u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x35431c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x35431Cu;
    {
        const bool branch_taken_0x35431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35431c) {
            ctx->pc = 0x354320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35431Cu;
            // 0x354320: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35435Cu;
            goto label_35435c;
        }
    }
    ctx->pc = 0x354324u;
    // 0x354324: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x354324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_354328:
    // 0x354328: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x354328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x35432c: 0x2673818  mult        $a3, $s3, $a3
    ctx->pc = 0x35432cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x354330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x354330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x354334: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x354334u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x354338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x354338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35433c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x35433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x354340: 0xac710050  sw          $s1, 0x50($v1)
    ctx->pc = 0x354340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 17));
    // 0x354344: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x354344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x354348: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x354348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
    // 0x35434c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x35434cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x354350: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x354350u;
    SET_GPR_U32(ctx, 31, 0x354358u);
    ctx->pc = 0x354354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354350u;
    // 0x354354: 0x8ce50050  lw          $a1, 0x50($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x354350u, 0x354358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354358u;
label_354358:
    // 0x354358: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x354358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35435c:
    // 0x35435c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35435cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354360: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x354360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354364: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x354364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35436c: 0x3e00008  jr          $ra
    ctx->pc = 0x35436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35436Cu;
        // 0x354370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354374u;
    // 0x354374: 0x0  nop
    ctx->pc = 0x354374u;
    // NOP
    ctx->pc = 0x354378u;
}
