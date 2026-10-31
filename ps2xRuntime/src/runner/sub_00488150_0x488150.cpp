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

// Function: sub_00488150
// Address: 0x488150 - 0x488420
void sub_00488150_0x488150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488150_0x488150");
#endif

    switch (ctx->pc) {
        case 0x48818cu: goto label_48818c;
        case 0x48819cu: goto label_48819c;
        case 0x4881acu: goto label_4881ac;
        case 0x4881ccu: goto label_4881cc;
        case 0x4881dcu: goto label_4881dc;
        case 0x4881ecu: goto label_4881ec;
        case 0x488224u: goto label_488224;
        case 0x488238u: goto label_488238;
        case 0x48824cu: goto label_48824c;
        case 0x488264u: goto label_488264;
        case 0x488270u: goto label_488270;
        case 0x488290u: goto label_488290;
        case 0x4882a4u: goto label_4882a4;
        case 0x4882f4u: goto label_4882f4;
        case 0x488314u: goto label_488314;
        case 0x488334u: goto label_488334;
        case 0x488354u: goto label_488354;
        case 0x488368u: goto label_488368;
        case 0x488380u: goto label_488380;
        case 0x48838cu: goto label_48838c;
        case 0x4883a0u: goto label_4883a0;
        case 0x4883b0u: goto label_4883b0;
        case 0x4883c4u: goto label_4883c4;
        case 0x4883ccu: goto label_4883cc;
        case 0x4883e0u: goto label_4883e0;
        default: break;
    }

    ctx->pc = 0x488150u;

    // 0x488150: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x488150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x488154: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x488154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
    // 0x488158: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x488158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
    // 0x48815c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48815cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488160: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x488160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
    // 0x488164: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x488164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488168: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x488168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
    // 0x48816c: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x48816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
    // 0x488170: 0x7fb50450  sq          $s5, 0x450($sp)
    ctx->pc = 0x488170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 21));
    // 0x488174: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x488174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x488178: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x488178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x48817c: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x48817Cu;
    {
        const bool branch_taken_0x48817c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x488180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48817Cu;
        // 0x488180: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48817c) {
            ctx->pc = 0x4881B4u;
            goto label_4881b4;
        }
    }
    ctx->pc = 0x488184u;
    // 0x488184: 0xc121622  jal         func_485888
    ctx->pc = 0x488184u;
    SET_GPR_U32(ctx, 31, 0x48818Cu);
    ctx->pc = 0x488188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488184u;
    // 0x488188: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x488184u, 0x48818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48818Cu;
label_48818c:
    // 0x48818c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x48818Cu;
    {
        const bool branch_taken_0x48818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x488190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48818Cu;
        // 0x488190: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48818c) {
            ctx->pc = 0x488200u;
            goto label_488200;
        }
    }
    ctx->pc = 0x488194u;
    // 0x488194: 0xc121666  jal         func_485998
    ctx->pc = 0x488194u;
    SET_GPR_U32(ctx, 31, 0x48819Cu);
    ctx->pc = 0x488198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488194u;
    // 0x488198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x488194u, 0x48819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48819Cu;
label_48819c:
    // 0x48819c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x48819Cu;
    {
        const bool branch_taken_0x48819c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4881A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48819Cu;
        // 0x4881a0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48819c) {
            ctx->pc = 0x488200u;
            goto label_488200;
        }
    }
    ctx->pc = 0x4881A4u;
    // 0x4881a4: 0xc1217b0  jal         func_485EC0
    ctx->pc = 0x4881A4u;
    SET_GPR_U32(ctx, 31, 0x4881ACu);
    ctx->pc = 0x4881A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881A4u;
    // 0x4881a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485EC0u, 0x4881A4u, 0x4881ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881ACu;
label_4881ac:
    // 0x4881ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4881ACu;
    {
        const bool branch_taken_0x4881ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4881B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881ACu;
        // 0x4881b0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4881ac) {
            ctx->pc = 0x4881F8u;
            goto label_4881f8;
        }
    }
    ctx->pc = 0x4881B4u;
label_4881b4:
    // 0x4881b4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x4881b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4881b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4881b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4881bc: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4881BCu;
    {
        const bool branch_taken_0x4881bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4881bc) {
            ctx->pc = 0x4881C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4881BCu;
            // 0x4881c0: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4881F4u;
            goto label_4881f4;
        }
    }
    ctx->pc = 0x4881C4u;
    // 0x4881c4: 0xc121622  jal         func_485888
    ctx->pc = 0x4881C4u;
    SET_GPR_U32(ctx, 31, 0x4881CCu);
    ctx->pc = 0x4881C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881C4u;
    // 0x4881c8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x4881C4u, 0x4881CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881CCu;
label_4881cc:
    // 0x4881cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4881CCu;
    {
        const bool branch_taken_0x4881cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4881D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881CCu;
        // 0x4881d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4881cc) {
            ctx->pc = 0x488200u;
            goto label_488200;
        }
    }
    ctx->pc = 0x4881D4u;
    // 0x4881d4: 0xc121666  jal         func_485998
    ctx->pc = 0x4881D4u;
    SET_GPR_U32(ctx, 31, 0x4881DCu);
    ctx->pc = 0x4881D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881D4u;
    // 0x4881d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x4881D4u, 0x4881DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881DCu;
label_4881dc:
    // 0x4881dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4881DCu;
    {
        const bool branch_taken_0x4881dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4881E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881DCu;
        // 0x4881e0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4881dc) {
            ctx->pc = 0x488200u;
            goto label_488200;
        }
    }
    ctx->pc = 0x4881E4u;
    // 0x4881e4: 0xc1216be  jal         func_485AF8
    ctx->pc = 0x4881E4u;
    SET_GPR_U32(ctx, 31, 0x4881ECu);
    ctx->pc = 0x4881E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881E4u;
    // 0x4881e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AF8u, 0x4881E4u, 0x4881ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881ECu;
label_4881ec:
    // 0x4881ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4881ECu;
    {
        const bool branch_taken_0x4881ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4881F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881ECu;
        // 0x4881f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4881ec) {
            ctx->pc = 0x4881F8u;
            goto label_4881f8;
        }
    }
    ctx->pc = 0x4881F4u;
label_4881f4:
    // 0x4881f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4881f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4881f8:
    // 0x4881f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4881F8u;
    {
        const bool branch_taken_0x4881f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4881f8) {
            ctx->pc = 0x4881FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4881F8u;
            // 0x4881fc: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488208u;
            goto label_488208;
        }
    }
    ctx->pc = 0x488200u;
label_488200:
    // 0x488200: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x488200u;
    {
        const bool branch_taken_0x488200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488200u;
        // 0x488204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488200) {
            ctx->pc = 0x4883FCu;
            goto label_4883fc;
        }
    }
    ctx->pc = 0x488208u;
label_488208:
    // 0x488208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x488208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48820c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x48820cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x488210: 0x30550010  andi        $s5, $v0, 0x10
    ctx->pc = 0x488210u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x488214: 0x151827  nor         $v1, $zero, $s5
    ctx->pc = 0x488214u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 21)));
    // 0x488218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x488218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x48821c: 0xc1218a4  jal         func_486290
    ctx->pc = 0x48821Cu;
    SET_GPR_U32(ctx, 31, 0x488224u);
    ctx->pc = 0x488220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48821Cu;
    // 0x488220: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486290u, 0x48821Cu, 0x488224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488224u;
label_488224:
    // 0x488224: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x488224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488228: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x488228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x48822c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x48822Cu;
    {
        const bool branch_taken_0x48822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48822c) {
            ctx->pc = 0x488230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48822Cu;
            // 0x488230: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4882C8u;
            goto label_4882c8;
        }
    }
    ctx->pc = 0x488234u;
    // 0x488234: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x488234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_488238:
    // 0x488238: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x488238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x48823c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488240: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x488240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x488244: 0xc121902  jal         func_486408
    ctx->pc = 0x488244u;
    SET_GPR_U32(ctx, 31, 0x48824Cu);
    ctx->pc = 0x488248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488244u;
    // 0x488248: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x488244u, 0x48824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48824Cu;
label_48824c:
    // 0x48824c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x48824Cu;
    {
        const bool branch_taken_0x48824c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48824c) {
            ctx->pc = 0x488250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48824Cu;
            // 0x488250: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488274u;
            goto label_488274;
        }
    }
    ctx->pc = 0x488254u;
    // 0x488254: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x488254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x488258: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x488258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x48825c: 0xc121b48  jal         func_486D20
    ctx->pc = 0x48825Cu;
    SET_GPR_U32(ctx, 31, 0x488264u);
    ctx->pc = 0x488260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48825Cu;
    // 0x488260: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486D20u, 0x48825Cu, 0x488264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488264u;
label_488264:
    // 0x488264: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x488264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x488268: 0xc121912  jal         func_486448
    ctx->pc = 0x488268u;
    SET_GPR_U32(ctx, 31, 0x488270u);
    ctx->pc = 0x48826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488268u;
    // 0x48826c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x488268u, 0x488270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488270u;
label_488270:
    // 0x488270: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x488270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488274:
    // 0x488274: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x488274u;
    {
        const bool branch_taken_0x488274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488274) {
            ctx->pc = 0x488278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488274u;
            // 0x488278: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4882B8u;
            goto label_4882b8;
        }
    }
    ctx->pc = 0x48827Cu;
    // 0x48827c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x48827cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x488280: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x488280u;
    {
        const bool branch_taken_0x488280 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x488284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488280u;
        // 0x488284: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488280) {
            ctx->pc = 0x4882ACu;
            goto label_4882ac;
        }
    }
    ctx->pc = 0x488288u;
    // 0x488288: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x488288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x48828c: 0x0  nop
    ctx->pc = 0x48828cu;
    // NOP
label_488290:
    // 0x488290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x488290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x488294: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x488294u;
    {
        const bool branch_taken_0x488294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x488298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488294u;
        // 0x488298: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488294) {
            ctx->pc = 0x4882A4u;
            goto label_4882a4;
        }
    }
    ctx->pc = 0x48829Cu;
    // 0x48829c: 0xc12164a  jal         func_485928
    ctx->pc = 0x48829Cu;
    SET_GPR_U32(ctx, 31, 0x4882A4u);
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x48829Cu, 0x4882A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882A4u;
label_4882a4:
    // 0x4882a4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4882A4u;
    {
        const bool branch_taken_0x4882a4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x4882A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882A4u;
        // 0x4882a8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4882a4) {
            ctx->pc = 0x488290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488290;
        }
    }
    ctx->pc = 0x4882ACu;
label_4882ac:
    // 0x4882ac: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x4882acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x4882b0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x4882B0u;
    {
        const bool branch_taken_0x4882b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4882B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882B0u;
        // 0x4882b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4882b0) {
            ctx->pc = 0x4883F4u;
            goto label_4883f4;
        }
    }
    ctx->pc = 0x4882B8u;
label_4882b8:
    // 0x4882b8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x4882b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4882bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x4882BCu;
    {
        const bool branch_taken_0x4882bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4882C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882BCu;
        // 0x4882c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4882bc) {
            ctx->pc = 0x488238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488238;
        }
    }
    ctx->pc = 0x4882C4u;
    // 0x4882c4: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x4882c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_4882c8:
    // 0x4882c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4882c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4882cc: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x4882ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x4882d0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4882D0u;
    {
        const bool branch_taken_0x4882d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4882D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882D0u;
        // 0x4882d4: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4882d0) {
            ctx->pc = 0x488370u;
            goto label_488370;
        }
    }
    ctx->pc = 0x4882D8u;
    // 0x4882d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4882D8u;
    {
        const bool branch_taken_0x4882d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882D8u;
        // 0x4882dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4882d8) {
            ctx->pc = 0x488320u;
            goto label_488320;
        }
    }
    ctx->pc = 0x4882E0u;
    // 0x4882e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4882e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4882e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4882e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4882e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4882e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4882ec: 0xc121cc8  jal         func_487320
    ctx->pc = 0x4882ECu;
    SET_GPR_U32(ctx, 31, 0x4882F4u);
    ctx->pc = 0x4882F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4882ECu;
    // 0x4882f0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487320u, 0x4882ECu, 0x4882F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882F4u;
label_4882f4:
    // 0x4882f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4882F4u;
    {
        const bool branch_taken_0x4882f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4882f4) {
            ctx->pc = 0x488360u;
            goto label_488360;
        }
    }
    ctx->pc = 0x4882FCu;
    // 0x4882fc: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x4882FCu;
    {
        const bool branch_taken_0x4882fc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x488300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882FCu;
        // 0x488300: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4882fc) {
            ctx->pc = 0x488360u;
            goto label_488360;
        }
    }
    ctx->pc = 0x488304u;
    // 0x488304: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x488304u;
    {
        const bool branch_taken_0x488304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x488304) {
            ctx->pc = 0x488308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488304u;
            // 0x488308: 0x92430023  lbu         $v1, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488318u;
            goto label_488318;
        }
    }
    ctx->pc = 0x48830Cu;
    // 0x48830c: 0xc12164a  jal         func_485928
    ctx->pc = 0x48830Cu;
    SET_GPR_U32(ctx, 31, 0x488314u);
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x48830Cu, 0x488314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488314u;
label_488314:
    // 0x488314: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x488314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_488318:
    // 0x488318: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x488318u;
    {
        const bool branch_taken_0x488318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488318u;
        // 0x48831c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488318) {
            ctx->pc = 0x4883F4u;
            goto label_4883f4;
        }
    }
    ctx->pc = 0x488320u;
label_488320:
    // 0x488320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x488320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488324: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x488324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488328: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x488328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48832c: 0xc121cc8  jal         func_487320
    ctx->pc = 0x48832Cu;
    SET_GPR_U32(ctx, 31, 0x488334u);
    ctx->pc = 0x488330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48832Cu;
    // 0x488330: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487320u, 0x48832Cu, 0x488334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488334u;
label_488334:
    // 0x488334: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x488334u;
    {
        const bool branch_taken_0x488334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488334) {
            ctx->pc = 0x488360u;
            goto label_488360;
        }
    }
    ctx->pc = 0x48833Cu;
    // 0x48833c: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x48833Cu;
    {
        const bool branch_taken_0x48833c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x488340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48833Cu;
        // 0x488340: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48833c) {
            ctx->pc = 0x488360u;
            goto label_488360;
        }
    }
    ctx->pc = 0x488344u;
    // 0x488344: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x488344u;
    {
        const bool branch_taken_0x488344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x488344) {
            ctx->pc = 0x488348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488344u;
            // 0x488348: 0x92430023  lbu         $v1, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488358u;
            goto label_488358;
        }
    }
    ctx->pc = 0x48834Cu;
    // 0x48834c: 0xc12164a  jal         func_485928
    ctx->pc = 0x48834Cu;
    SET_GPR_U32(ctx, 31, 0x488354u);
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x48834Cu, 0x488354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488354u;
label_488354:
    // 0x488354: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x488354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_488358:
    // 0x488358: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x488358u;
    {
        const bool branch_taken_0x488358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488358u;
        // 0x48835c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488358) {
            ctx->pc = 0x4883F4u;
            goto label_4883f4;
        }
    }
    ctx->pc = 0x488360u;
label_488360:
    // 0x488360: 0xc1215a4  jal         func_485690
    ctx->pc = 0x488360u;
    SET_GPR_U32(ctx, 31, 0x488368u);
    ctx->pc = 0x488364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488360u;
    // 0x488364: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485690u, 0x488360u, 0x488368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488368u;
label_488368:
    // 0x488368: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x488368u;
    {
        const bool branch_taken_0x488368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488368u;
        // 0x48836c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488368) {
            ctx->pc = 0x488398u;
            goto label_488398;
        }
    }
    ctx->pc = 0x488370u;
label_488370:
    // 0x488370: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x488370u;
    {
        const bool branch_taken_0x488370 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x488374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488370u;
        // 0x488374: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488370) {
            ctx->pc = 0x488394u;
            goto label_488394;
        }
    }
    ctx->pc = 0x488378u;
    // 0x488378: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x488378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48837c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488380:
    // 0x488380: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x488380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x488384: 0xc1215a4  jal         func_485690
    ctx->pc = 0x488384u;
    SET_GPR_U32(ctx, 31, 0x48838Cu);
    ctx->pc = 0x488388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488384u;
    // 0x488388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485690u, 0x488384u, 0x48838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48838Cu;
label_48838c:
    // 0x48838c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x48838Cu;
    {
        const bool branch_taken_0x48838c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48838c) {
            ctx->pc = 0x488390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48838Cu;
            // 0x488390: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488380;
        }
    }
    ctx->pc = 0x488394u;
label_488394:
    // 0x488394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x488394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488398:
    // 0x488398: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x488398u;
    {
        const bool branch_taken_0x488398 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x48839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488398u;
        // 0x48839c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488398) {
            ctx->pc = 0x4883ECu;
            goto label_4883ec;
        }
    }
    ctx->pc = 0x4883A0u;
label_4883a0:
    // 0x4883a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4883a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4883a4: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x4883a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4883a8: 0xc121902  jal         func_486408
    ctx->pc = 0x4883A8u;
    SET_GPR_U32(ctx, 31, 0x4883B0u);
    ctx->pc = 0x4883ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4883A8u;
    // 0x4883ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x4883A8u, 0x4883B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4883B0u;
label_4883b0:
    // 0x4883b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4883B0u;
    {
        const bool branch_taken_0x4883b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4883b0) {
            ctx->pc = 0x4883B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4883B0u;
            // 0x4883b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4883D0u;
            goto label_4883d0;
        }
    }
    ctx->pc = 0x4883B8u;
    // 0x4883b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4883b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4883bc: 0xc1217ca  jal         func_485F28
    ctx->pc = 0x4883BCu;
    SET_GPR_U32(ctx, 31, 0x4883C4u);
    ctx->pc = 0x4883C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4883BCu;
    // 0x4883c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F28u, 0x4883BCu, 0x4883C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4883C4u;
label_4883c4:
    // 0x4883c4: 0xc121912  jal         func_486448
    ctx->pc = 0x4883C4u;
    SET_GPR_U32(ctx, 31, 0x4883CCu);
    ctx->pc = 0x4883C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4883C4u;
    // 0x4883c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x4883C4u, 0x4883CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4883CCu;
label_4883cc:
    // 0x4883cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4883ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4883d0:
    // 0x4883d0: 0x10940003  beq         $a0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4883D0u;
    {
        const bool branch_taken_0x4883d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x4883D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4883D0u;
        // 0x4883d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4883d0) {
            ctx->pc = 0x4883E0u;
            goto label_4883e0;
        }
    }
    ctx->pc = 0x4883D8u;
    // 0x4883d8: 0xc12164a  jal         func_485928
    ctx->pc = 0x4883D8u;
    SET_GPR_U32(ctx, 31, 0x4883E0u);
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4883D8u, 0x4883E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4883E0u;
label_4883e0:
    // 0x4883e0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x4883e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4883e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4883E4u;
    {
        const bool branch_taken_0x4883e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4883E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4883E4u;
        // 0x4883e8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4883e4) {
            ctx->pc = 0x4883A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4883a0;
        }
    }
    ctx->pc = 0x4883ECu;
label_4883ec:
    // 0x4883ec: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x4883ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x4883f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4883f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4883f4:
    // 0x4883f4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4883f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4883f8: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x4883f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
label_4883fc:
    // 0x4883fc: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x4883fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x488400: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x488400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x488404: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x488404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x488408: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x488408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x48840c: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x48840cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x488410: 0x7bb50450  lq          $s5, 0x450($sp)
    ctx->pc = 0x488410u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x488414: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x488414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x488418: 0x3e00008  jr          $ra
    ctx->pc = 0x488418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488418u;
        // 0x48841c: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488420u;
}
