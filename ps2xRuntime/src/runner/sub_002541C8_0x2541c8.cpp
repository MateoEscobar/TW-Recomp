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

// Function: sub_002541C8
// Address: 0x2541c8 - 0x2542e8
void sub_002541C8_0x2541c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002541C8_0x2541c8");
#endif

    switch (ctx->pc) {
        case 0x254200u: goto label_254200;
        case 0x25421cu: goto label_25421c;
        case 0x254230u: goto label_254230;
        case 0x25423cu: goto label_25423c;
        case 0x25425cu: goto label_25425c;
        case 0x254280u: goto label_254280;
        case 0x254290u: goto label_254290;
        case 0x2542b4u: goto label_2542b4;
        case 0x2542c4u: goto label_2542c4;
        default: break;
    }

    ctx->pc = 0x2541c8u;

    // 0x2541c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2541c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2541cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2541ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2541d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2541d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2541d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2541d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2541d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2541dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2541dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2541e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2541e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2541e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2541e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2541e8: 0x8e3200d4  lw          $s2, 0xD4($s1)
    ctx->pc = 0x2541e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2541ec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2541f0: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2541F0u;
    {
        const bool branch_taken_0x2541f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2541F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541F0u;
        // 0x2541f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541f0) {
            ctx->pc = 0x254250u;
            goto label_254250;
        }
    }
    ctx->pc = 0x2541F8u;
    // 0x2541f8: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x2541f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
    // 0x2541fc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2541fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_254200:
    // 0x254200: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x254200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x254204: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x254204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x254208: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x254208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25420c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25420Cu;
    {
        const bool branch_taken_0x25420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25420Cu;
        // 0x254210: 0xae83d970  sw          $v1, -0x2690($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294957424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25420c) {
            ctx->pc = 0x25423Cu;
            goto label_25423c;
        }
    }
    ctx->pc = 0x254214u;
    // 0x254214: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x254214u;
    SET_GPR_U32(ctx, 31, 0x25421Cu);
    ctx->pc = 0x254218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254214u;
    // 0x254218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x254214u, 0x25421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25421Cu;
label_25421c:
    // 0x25421c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x25421cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x254220: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x254220u;
    {
        const bool branch_taken_0x254220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x254220) {
            ctx->pc = 0x254224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254220u;
            // 0x254224: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254240u;
            goto label_254240;
        }
    }
    ctx->pc = 0x254228u;
    // 0x254228: 0xc094fde  jal         func_253F78
    ctx->pc = 0x254228u;
    SET_GPR_U32(ctx, 31, 0x254230u);
    ctx->pc = 0x25422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254228u;
    // 0x25422c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x254228u, 0x254230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254230u;
label_254230:
    // 0x254230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254234: 0xc089974  jal         func_2265D0
    ctx->pc = 0x254234u;
    SET_GPR_U32(ctx, 31, 0x25423Cu);
    ctx->pc = 0x254238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254234u;
    // 0x254238: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x254234u, 0x25423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25423Cu;
label_25423c:
    // 0x25423c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x25423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_254240:
    // 0x254240: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x254240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x254244: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x254244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x254248: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x254248u;
    {
        const bool branch_taken_0x254248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254248u;
        // 0x25424c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254248) {
            ctx->pc = 0x254200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254200;
        }
    }
    ctx->pc = 0x254250u;
label_254250:
    // 0x254250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254254: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x254254u;
    SET_GPR_U32(ctx, 31, 0x25425Cu);
    ctx->pc = 0x254258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254254u;
    // 0x254258: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x254254u, 0x25425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25425Cu;
label_25425c:
    // 0x25425c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25425Cu;
    {
        const bool branch_taken_0x25425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25425Cu;
        // 0x254260: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25425c) {
            ctx->pc = 0x254280u;
            goto label_254280;
        }
    }
    ctx->pc = 0x254264u;
    // 0x254264: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x254264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x254268: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x254268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25426c: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x25426cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x254270: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254270u;
    {
        const bool branch_taken_0x254270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x254274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254270u;
        // 0x254274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254270) {
            ctx->pc = 0x254280u;
            goto label_254280;
        }
    }
    ctx->pc = 0x254278u;
    // 0x254278: 0xc094fde  jal         func_253F78
    ctx->pc = 0x254278u;
    SET_GPR_U32(ctx, 31, 0x254280u);
    ctx->pc = 0x25427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254278u;
    // 0x25427c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x254278u, 0x254280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254280u;
label_254280:
    // 0x254280: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x254280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x254284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254288: 0xc089998  jal         func_226660
    ctx->pc = 0x254288u;
    SET_GPR_U32(ctx, 31, 0x254290u);
    ctx->pc = 0x25428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254288u;
    // 0x25428c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x254288u, 0x254290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254290u;
label_254290:
    // 0x254290: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x254290u;
    {
        const bool branch_taken_0x254290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254290u;
        // 0x254294: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254290) {
            ctx->pc = 0x2542C8u;
            goto label_2542c8;
        }
    }
    ctx->pc = 0x254298u;
    // 0x254298: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x254298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25429c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2542a0: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x2542a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2542a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2542A4u;
    {
        const bool branch_taken_0x2542a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2542A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542A4u;
        // 0x2542a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542a4) {
            ctx->pc = 0x2542CCu;
            goto label_2542cc;
        }
    }
    ctx->pc = 0x2542ACu;
    // 0x2542ac: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2542ACu;
    SET_GPR_U32(ctx, 31, 0x2542B4u);
    ctx->pc = 0x2542B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542ACu;
    // 0x2542b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2542ACu, 0x2542B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542B4u;
label_2542b4:
    // 0x2542b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2542B4u;
    {
        const bool branch_taken_0x2542b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542B4u;
        // 0x2542b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542b4) {
            ctx->pc = 0x2542C8u;
            goto label_2542c8;
        }
    }
    ctx->pc = 0x2542BCu;
    // 0x2542bc: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2542BCu;
    SET_GPR_U32(ctx, 31, 0x2542C4u);
    ctx->pc = 0x2542C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542BCu;
    // 0x2542c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2542BCu, 0x2542C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542C4u;
label_2542c4:
    // 0x2542c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2542c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2542c8:
    // 0x2542c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2542c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2542cc:
    // 0x2542cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2542ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2542d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2542d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2542d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2542d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2542d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2542d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2542dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2542dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2542e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2542E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2542E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542E0u;
        // 0x2542e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2542E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2542E8u;
}
