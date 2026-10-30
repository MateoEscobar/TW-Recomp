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

// Function: sub_00297620
// Address: 0x297620 - 0x297748
void sub_00297620_0x297620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297620_0x297620");
#endif

    switch (ctx->pc) {
        case 0x29763cu: goto label_29763c;
        case 0x29764cu: goto label_29764c;
        case 0x29767cu: goto label_29767c;
        case 0x29768cu: goto label_29768c;
        case 0x2976a4u: goto label_2976a4;
        case 0x2976e4u: goto label_2976e4;
        case 0x297714u: goto label_297714;
        case 0x297730u: goto label_297730;
        default: break;
    }

    ctx->pc = 0x297620u;

    // 0x297620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297624: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x297624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x297628: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x297628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29762c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29762cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x297630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297634: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x297634u;
    SET_GPR_U32(ctx, 31, 0x29763Cu);
    ctx->pc = 0x297638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297634u;
    // 0x297638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297634u, 0x29763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29763Cu;
label_29763c:
    // 0x29763c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29763cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297640: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x297640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297644: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x297644u;
    SET_GPR_U32(ctx, 31, 0x29764Cu);
    ctx->pc = 0x297648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297644u;
    // 0x297648: 0x8c9201a8  lw          $s2, 0x1A8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x297644u, 0x29764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29764Cu;
label_29764c:
    // 0x29764c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297650: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297650u;
    {
        const bool branch_taken_0x297650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x297654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297650u;
        // 0x297654: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297650) {
            ctx->pc = 0x297668u;
            goto label_297668;
        }
    }
    ctx->pc = 0x297658u;
    // 0x297658: 0x92020152  lbu         $v0, 0x152($s0)
    ctx->pc = 0x297658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 338)));
    // 0x29765c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29765cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x297660: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x297660u;
    {
        const bool branch_taken_0x297660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297660u;
        // 0x297664: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297660) {
            ctx->pc = 0x297694u;
            goto label_297694;
        }
    }
    ctx->pc = 0x297668u;
label_297668:
    // 0x297668: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x297668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29766c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29766Cu;
    {
        const bool branch_taken_0x29766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29766Cu;
        // 0x297670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29766c) {
            ctx->pc = 0x297684u;
            goto label_297684;
        }
    }
    ctx->pc = 0x297674u;
    // 0x297674: 0xc0a5dd2  jal         func_297748
    ctx->pc = 0x297674u;
    SET_GPR_U32(ctx, 31, 0x29767Cu);
    ctx->pc = 0x297678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297674u;
    // 0x297678: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297748u, 0x297674u, 0x29767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29767Cu;
label_29767c:
    // 0x29767c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x29767Cu;
    {
        const bool branch_taken_0x29767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29767Cu;
        // 0x297680: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29767c) {
            ctx->pc = 0x297734u;
            goto label_297734;
        }
    }
    ctx->pc = 0x297684u;
label_297684:
    // 0x297684: 0xc0a5dd2  jal         func_297748
    ctx->pc = 0x297684u;
    SET_GPR_U32(ctx, 31, 0x29768Cu);
    ctx->pc = 0x297688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297684u;
    // 0x297688: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297748u, 0x297684u, 0x29768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29768Cu;
label_29768c:
    // 0x29768c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x29768Cu;
    {
        const bool branch_taken_0x29768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29768Cu;
        // 0x297690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29768c) {
            ctx->pc = 0x297734u;
            goto label_297734;
        }
    }
    ctx->pc = 0x297694u;
label_297694:
    // 0x297694: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x297694u;
    {
        const bool branch_taken_0x297694 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x297698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297694u;
        // 0x297698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297694) {
            ctx->pc = 0x2976ACu;
            goto label_2976ac;
        }
    }
    ctx->pc = 0x29769Cu;
    // 0x29769c: 0xc0a5dd2  jal         func_297748
    ctx->pc = 0x29769Cu;
    SET_GPR_U32(ctx, 31, 0x2976A4u);
    ctx->pc = 0x2976A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29769Cu;
    // 0x2976a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297748u, 0x29769Cu, 0x2976A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976A4u;
label_2976a4:
    // 0x2976a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2976A4u;
    {
        const bool branch_taken_0x2976a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976A4u;
        // 0x2976a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976a4) {
            ctx->pc = 0x297734u;
            goto label_297734;
        }
    }
    ctx->pc = 0x2976ACu;
label_2976ac:
    // 0x2976ac: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2976acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2976b0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2976B0u;
    {
        const bool branch_taken_0x2976b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2976b0) {
            ctx->pc = 0x2976B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2976B0u;
            // 0x2976b4: 0x92230014  lbu         $v1, 0x14($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29771Cu;
            goto label_29771c;
        }
    }
    ctx->pc = 0x2976B8u;
    // 0x2976b8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2976b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2976bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2976bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2976c0: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2976c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2976c4: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2976c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2976c8: 0x658023  subu        $s0, $v1, $a1
    ctx->pc = 0x2976c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2976cc: 0x2e020bb9  sltiu       $v0, $s0, 0xBB9
    ctx->pc = 0x2976ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3001) ? 1 : 0);
    // 0x2976d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2976D0u;
    {
        const bool branch_taken_0x2976d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976D0u;
        // 0x2976d4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976d0) {
            ctx->pc = 0x297708u;
            goto label_297708;
        }
    }
    ctx->pc = 0x2976D8u;
    // 0x2976d8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2976d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2976dc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2976DCu;
    SET_GPR_U32(ctx, 31, 0x2976E4u);
    ctx->pc = 0x2976E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976DCu;
    // 0x2976e0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2976DCu, 0x2976E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976E4u;
label_2976e4:
    // 0x2976e4: 0x240302ee  addiu       $v1, $zero, 0x2EE
    ctx->pc = 0x2976e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x2976e8: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x2976e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2976ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2976ECu;
    {
        const bool branch_taken_0x2976ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2976ec) {
            ctx->pc = 0x2976F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2976ECu;
            // 0x2976f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2976F4u;
            goto label_2976f4;
        }
    }
    ctx->pc = 0x2976F4u;
label_2976f4:
    // 0x2976f4: 0x2012  mflo        $a0
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2976f8: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x2976f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2976fc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2976fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x297700: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x297700u;
    {
        const bool branch_taken_0x297700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297700) {
            ctx->pc = 0x297704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297700u;
            // 0x297704: 0x92230014  lbu         $v1, 0x14($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29771Cu;
            goto label_29771c;
        }
    }
    ctx->pc = 0x297708u;
label_297708:
    // 0x297708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29770c: 0xc0a5dd2  jal         func_297748
    ctx->pc = 0x29770Cu;
    SET_GPR_U32(ctx, 31, 0x297714u);
    ctx->pc = 0x297710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29770Cu;
    // 0x297710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297748u, 0x29770Cu, 0x297714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297714u;
label_297714:
    // 0x297714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297714u;
    {
        const bool branch_taken_0x297714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297714u;
        // 0x297718: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297714) {
            ctx->pc = 0x297734u;
            goto label_297734;
        }
    }
    ctx->pc = 0x29771Cu;
label_29771c:
    // 0x29771c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297720: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297720u;
    {
        const bool branch_taken_0x297720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x297724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297720u;
        // 0x297724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297720) {
            ctx->pc = 0x297730u;
            goto label_297730;
        }
    }
    ctx->pc = 0x297728u;
    // 0x297728: 0xc0a5dd2  jal         func_297748
    ctx->pc = 0x297728u;
    SET_GPR_U32(ctx, 31, 0x297730u);
    ctx->pc = 0x29772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297728u;
    // 0x29772c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297748u, 0x297728u, 0x297730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297730u;
label_297730:
    // 0x297730: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x297730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_297734:
    // 0x297734: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x297734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297738: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x297738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29773c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297740: 0x3e00008  jr          $ra
    ctx->pc = 0x297740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297740u;
        // 0x297744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297748u;
}
