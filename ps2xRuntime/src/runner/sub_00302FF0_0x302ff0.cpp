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

// Function: sub_00302FF0
// Address: 0x302ff0 - 0x303178
void sub_00302FF0_0x302ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302FF0_0x302ff0");
#endif

    switch (ctx->pc) {
        case 0x30301cu: goto label_30301c;
        case 0x303028u: goto label_303028;
        case 0x303044u: goto label_303044;
        case 0x303064u: goto label_303064;
        case 0x303080u: goto label_303080;
        case 0x3030acu: goto label_3030ac;
        case 0x3030b4u: goto label_3030b4;
        case 0x3030dcu: goto label_3030dc;
        case 0x303128u: goto label_303128;
        case 0x30313cu: goto label_30313c;
        case 0x303148u: goto label_303148;
        default: break;
    }

    ctx->pc = 0x302ff0u;

    // 0x302ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x302ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x302ff4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x302ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x302ff8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x302ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x302ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303000: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x303000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x303004: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x303004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303008: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x303008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30300c: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
    ctx->pc = 0x30300Cu;
    {
        const bool branch_taken_0x30300c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x303010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30300Cu;
        // 0x303010: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30300c) {
            ctx->pc = 0x30315Cu;
            goto label_30315c;
        }
    }
    ctx->pc = 0x303014u;
    // 0x303014: 0xc087502  jal         func_21D408
    ctx->pc = 0x303014u;
    SET_GPR_U32(ctx, 31, 0x30301Cu);
    ctx->pc = 0x303018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303014u;
    // 0x303018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x303014u, 0x30301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30301Cu;
label_30301c:
    // 0x30301c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30301cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303020: 0xc08a076  jal         func_2281D8
    ctx->pc = 0x303020u;
    SET_GPR_U32(ctx, 31, 0x303028u);
    ctx->pc = 0x303024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303020u;
    // 0x303024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x303020u, 0x303028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303028u;
label_303028:
    // 0x303028: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x303028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30302c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303030: 0x56420007  bnel        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303030u;
    {
        const bool branch_taken_0x303030 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x303030) {
            ctx->pc = 0x303034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303030u;
            // 0x303034: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303050u;
            goto label_303050;
        }
    }
    ctx->pc = 0x303038u;
    // 0x303038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30303c: 0xc0a4742  jal         func_291D08
    ctx->pc = 0x30303Cu;
    SET_GPR_U32(ctx, 31, 0x303044u);
    ctx->pc = 0x303040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30303Cu;
    // 0x303040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D08u, 0x30303Cu, 0x303044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303044u;
label_303044:
    // 0x303044: 0x50520046  beql        $v0, $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x303044u;
    {
        const bool branch_taken_0x303044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x303044) {
            ctx->pc = 0x303048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303044u;
            // 0x303048: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303160u;
            goto label_303160;
        }
    }
    ctx->pc = 0x30304Cu;
    // 0x30304c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x30304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_303050:
    // 0x303050: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x303050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303054: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x303054u;
    {
        const bool branch_taken_0x303054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x303058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303054u;
        // 0x303058: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303054) {
            ctx->pc = 0x303090u;
            goto label_303090;
        }
    }
    ctx->pc = 0x30305Cu;
    // 0x30305c: 0xc088a92  jal         func_222A48
    ctx->pc = 0x30305Cu;
    SET_GPR_U32(ctx, 31, 0x303064u);
    ctx->pc = 0x303060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30305Cu;
    // 0x303060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x30305Cu, 0x303064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303064u;
label_303064:
    // 0x303064: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x303064u;
    {
        const bool branch_taken_0x303064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303064) {
            ctx->pc = 0x303068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303064u;
            // 0x303068: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303090u;
            goto label_303090;
        }
    }
    ctx->pc = 0x30306Cu;
    // 0x30306c: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x30306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
    // 0x303070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303074: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x303074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x303078: 0xc0e409a  jal         func_390268
    ctx->pc = 0x303078u;
    SET_GPR_U32(ctx, 31, 0x303080u);
    ctx->pc = 0x30307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303078u;
    // 0x30307c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x303078u, 0x303080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303080u;
label_303080:
    // 0x303080: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x303080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303084: 0x54620036  bnel        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x303084u;
    {
        const bool branch_taken_0x303084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x303084) {
            ctx->pc = 0x303088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303084u;
            // 0x303088: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303160u;
            goto label_303160;
        }
    }
    ctx->pc = 0x30308Cu;
    // 0x30308c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_303090:
    // 0x303090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303094: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x303094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x303098: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x303098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30309c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30309cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3030a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030a4: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x3030A4u;
    SET_GPR_U32(ctx, 31, 0x3030ACu);
    ctx->pc = 0x3030A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030A4u;
    // 0x3030a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x3030A4u, 0x3030ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030ACu;
label_3030ac:
    // 0x3030ac: 0xc0c0b7e  jal         func_302DF8
    ctx->pc = 0x3030ACu;
    SET_GPR_U32(ctx, 31, 0x3030B4u);
    ctx->pc = 0x3030B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030ACu;
    // 0x3030b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302DF8u, 0x3030ACu, 0x3030B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030B4u;
label_3030b4:
    // 0x3030b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3030b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3030b8: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3030B8u;
    {
        const bool branch_taken_0x3030b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3030BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030B8u;
        // 0x3030bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030b8) {
            ctx->pc = 0x303140u;
            goto label_303140;
        }
    }
    ctx->pc = 0x3030C0u;
    // 0x3030c0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3030c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3030c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3030c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3030c8: 0x50620025  beql        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3030C8u;
    {
        const bool branch_taken_0x3030c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3030c8) {
            ctx->pc = 0x3030CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3030C8u;
            // 0x3030cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303160u;
            goto label_303160;
        }
    }
    ctx->pc = 0x3030D0u;
    // 0x3030d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3030d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030d4: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x3030D4u;
    SET_GPR_U32(ctx, 31, 0x3030DCu);
    ctx->pc = 0x3030D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030D4u;
    // 0x3030d8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3030D4u, 0x3030DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030DCu;
label_3030dc:
    // 0x3030dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3030dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3030e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3030e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3030e4: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3030E4u;
    {
        const bool branch_taken_0x3030e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3030e4) {
            ctx->pc = 0x3030E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3030E4u;
            // 0x3030e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303130u;
            goto label_303130;
        }
    }
    ctx->pc = 0x3030ECu;
    // 0x3030ec: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3030ECu;
    {
        const bool branch_taken_0x3030ec = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3030ec) {
            ctx->pc = 0x3030F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3030ECu;
            // 0x3030f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303110u;
            goto label_303110;
        }
    }
    ctx->pc = 0x3030F4u;
    // 0x3030f4: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x3030f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3030f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3030f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3030fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3030FCu;
    {
        const bool branch_taken_0x3030fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3030fc) {
            ctx->pc = 0x303100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3030FCu;
            // 0x303100: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303110u;
            goto label_303110;
        }
    }
    ctx->pc = 0x303104u;
    // 0x303104: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x303104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303108: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x303108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30310c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x30310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_303110:
    // 0x303110: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x303110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x303114: 0x9066003a  lbu         $a2, 0x3A($v1)
    ctx->pc = 0x303114u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x303118: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x303118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x30311c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303120: 0xc0c0bac  jal         func_302EB0
    ctx->pc = 0x303120u;
    SET_GPR_U32(ctx, 31, 0x303128u);
    ctx->pc = 0x303124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303120u;
    // 0x303124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EB0u, 0x303120u, 0x303128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303128u;
label_303128:
    // 0x303128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x303128u;
    {
        const bool branch_taken_0x303128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303128u;
        // 0x30312c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303128) {
            ctx->pc = 0x303140u;
            goto label_303140;
        }
    }
    ctx->pc = 0x303130u;
label_303130:
    // 0x303130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303134: 0xc0c0bac  jal         func_302EB0
    ctx->pc = 0x303134u;
    SET_GPR_U32(ctx, 31, 0x30313Cu);
    ctx->pc = 0x303138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303134u;
    // 0x303138: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EB0u, 0x303134u, 0x30313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30313Cu;
label_30313c:
    // 0x30313c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30313cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_303140:
    // 0x303140: 0xc0a408c  jal         func_290230
    ctx->pc = 0x303140u;
    SET_GPR_U32(ctx, 31, 0x303148u);
    ctx->pc = 0x303144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303140u;
    // 0x303144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x303140u, 0x303148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303148u;
label_303148:
    // 0x303148: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x303148u;
    {
        const bool branch_taken_0x303148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303148) {
            ctx->pc = 0x30314Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303148u;
            // 0x30314c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303160u;
            goto label_303160;
        }
    }
    ctx->pc = 0x303150u;
    // 0x303150: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x303150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x303154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303158: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x303158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_30315c:
    // 0x30315c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30315cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_303160:
    // 0x303160: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x303160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303164: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x303164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303168: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x303168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30316c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303170: 0x3e00008  jr          $ra
    ctx->pc = 0x303170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303170u;
        // 0x303174: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303178u;
}
