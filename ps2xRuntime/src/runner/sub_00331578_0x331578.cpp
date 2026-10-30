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

// Function: sub_00331578
// Address: 0x331578 - 0x331730
void sub_00331578_0x331578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331578_0x331578");
#endif

    switch (ctx->pc) {
        case 0x3315b8u: goto label_3315b8;
        case 0x3315d0u: goto label_3315d0;
        case 0x331618u: goto label_331618;
        case 0x331664u: goto label_331664;
        case 0x331690u: goto label_331690;
        case 0x3316acu: goto label_3316ac;
        case 0x3316ecu: goto label_3316ec;
        default: break;
    }

    ctx->pc = 0x331578u;

    // 0x331578: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x33157c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x33157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x331580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x331580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331584: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x331584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x331588: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x331588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33158c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x33158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x331590: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x331590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x331594: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x331594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331598: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x331598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x33159c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3315a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3315a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3315a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3315a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3315a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3315a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3315ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3315acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3315b0: 0xc0c9192  jal         func_324648
    ctx->pc = 0x3315B0u;
    SET_GPR_U32(ctx, 31, 0x3315B8u);
    ctx->pc = 0x3315B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315B0u;
    // 0x3315b4: 0x2612040c  addiu       $s2, $s0, 0x40C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x3315B0u, 0x3315B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315B8u;
label_3315b8:
    // 0x3315b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3315b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3315bc: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x3315bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3315c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3315C0u;
    {
        const bool branch_taken_0x3315c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3315C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315C0u;
        // 0x3315c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315c0) {
            ctx->pc = 0x3315D0u;
            goto label_3315d0;
        }
    }
    ctx->pc = 0x3315C8u;
    // 0x3315c8: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x3315C8u;
    SET_GPR_U32(ctx, 31, 0x3315D0u);
    ctx->pc = 0x3315CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315C8u;
    // 0x3315cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x3315C8u, 0x3315D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315D0u;
label_3315d0:
    // 0x3315d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3315d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3315d4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3315d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3315d8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3315d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3315dc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3315dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3315e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3315e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3315e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3315e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3315e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3315ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3315ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3315f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3315f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3315f4: 0x10440037  beq         $v0, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3315F4u;
    {
        const bool branch_taken_0x3315f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3315F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315F4u;
        // 0x3315f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315f4) {
            ctx->pc = 0x3316D4u;
            goto label_3316d4;
        }
    }
    ctx->pc = 0x3315FCu;
    // 0x3315fc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3315fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x331600: 0x241e0022  addiu       $fp, $zero, 0x22
    ctx->pc = 0x331600u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x331604: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x331604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x331608: 0x2416005c  addiu       $s6, $zero, 0x5C
    ctx->pc = 0x331608u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x33160c: 0x2415005c  addiu       $s5, $zero, 0x5C
    ctx->pc = 0x33160cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x331610: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x331610u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x331614: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x331614u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_331618:
    // 0x331618: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x331618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33161c: 0x107e000b  beq         $v1, $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x33161Cu;
    {
        const bool branch_taken_0x33161c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x331620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33161Cu;
        // 0x331620: 0x28620023  slti        $v0, $v1, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33161c) {
            ctx->pc = 0x33164Cu;
            goto label_33164c;
        }
    }
    ctx->pc = 0x331624u;
    // 0x331624: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x331624u;
    {
        const bool branch_taken_0x331624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331624) {
            ctx->pc = 0x331644u;
            goto label_331644;
        }
    }
    ctx->pc = 0x33162Cu;
    // 0x33162c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x33162Cu;
    {
        const bool branch_taken_0x33162c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33162Cu;
        // 0x331630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33162c) {
            ctx->pc = 0x331684u;
            goto label_331684;
        }
    }
    ctx->pc = 0x331634u;
    // 0x331634: 0x10770006  beq         $v1, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x331634u;
    {
        const bool branch_taken_0x331634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x331638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331634u;
        // 0x331638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331634) {
            ctx->pc = 0x331650u;
            goto label_331650;
        }
    }
    ctx->pc = 0x33163Cu;
    // 0x33163c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33163Cu;
    {
        const bool branch_taken_0x33163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33163Cu;
        // 0x331640: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33163c) {
            ctx->pc = 0x33169Cu;
            goto label_33169c;
        }
    }
    ctx->pc = 0x331644u;
label_331644:
    // 0x331644: 0x54760014  bnel        $v1, $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x331644u;
    {
        const bool branch_taken_0x331644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x331644) {
            ctx->pc = 0x331648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331644u;
            // 0x331648: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331698u;
            goto label_331698;
        }
    }
    ctx->pc = 0x33164Cu;
label_33164c:
    // 0x33164c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_331650:
    // 0x331650: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x331650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x331654: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x331654u;
    {
        const bool branch_taken_0x331654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331654) {
            ctx->pc = 0x331658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331654u;
            // 0x331658: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331668u;
            goto label_331668;
        }
    }
    ctx->pc = 0x33165Cu;
    // 0x33165c: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x33165Cu;
    SET_GPR_U32(ctx, 31, 0x331664u);
    ctx->pc = 0x331660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33165Cu;
    // 0x331660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x33165Cu, 0x331664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331664u;
label_331664:
    // 0x331664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x331664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_331668:
    // 0x331668: 0xa0550000  sb          $s5, 0x0($v0)
    ctx->pc = 0x331668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x33166c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331670: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x331670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x331674: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x331674u;
    {
        const bool branch_taken_0x331674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331674u;
        // 0x331678: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331674) {
            ctx->pc = 0x3316ACu;
            goto label_3316ac;
        }
    }
    ctx->pc = 0x33167Cu;
    // 0x33167c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33167Cu;
    {
        const bool branch_taken_0x33167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33167c) {
            ctx->pc = 0x3316A4u;
            goto label_3316a4;
        }
    }
    ctx->pc = 0x331684u;
label_331684:
    // 0x331684: 0x26856130  addiu       $a1, $s4, 0x6130
    ctx->pc = 0x331684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24880));
    // 0x331688: 0xc0c929a  jal         func_324A68
    ctx->pc = 0x331688u;
    SET_GPR_U32(ctx, 31, 0x331690u);
    ctx->pc = 0x33168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331688u;
    // 0x33168c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A68u, 0x331688u, 0x331690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331690u;
label_331690:
    // 0x331690: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x331690u;
    {
        const bool branch_taken_0x331690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331690u;
        // 0x331694: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331690) {
            ctx->pc = 0x3316C4u;
            goto label_3316c4;
        }
    }
    ctx->pc = 0x331698u;
label_331698:
    // 0x331698: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x331698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_33169c:
    // 0x33169c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33169Cu;
    {
        const bool branch_taken_0x33169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33169c) {
            ctx->pc = 0x3316A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33169Cu;
            // 0x3316a0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3316B0u;
            goto label_3316b0;
        }
    }
    ctx->pc = 0x3316A4u;
label_3316a4:
    // 0x3316a4: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x3316A4u;
    SET_GPR_U32(ctx, 31, 0x3316ACu);
    ctx->pc = 0x3316A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316A4u;
    // 0x3316a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x3316A4u, 0x3316ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316ACu;
label_3316ac:
    // 0x3316ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3316acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3316b0:
    // 0x3316b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3316b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3316b4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3316b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3316b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3316bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3316bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3316c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3316c4:
    // 0x3316c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3316c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3316c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3316c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3316cc: 0x1453ffd2  bne         $v0, $s3, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3316CCu;
    {
        const bool branch_taken_0x3316cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3316D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316CCu;
        // 0x3316d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3316cc) {
            ctx->pc = 0x331618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331618;
        }
    }
    ctx->pc = 0x3316D4u;
label_3316d4:
    // 0x3316d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3316d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3316d8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x3316d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3316dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3316DCu;
    {
        const bool branch_taken_0x3316dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3316dc) {
            ctx->pc = 0x3316E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3316DCu;
            // 0x3316e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3316F0u;
            goto label_3316f0;
        }
    }
    ctx->pc = 0x3316E4u;
    // 0x3316e4: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x3316E4u;
    SET_GPR_U32(ctx, 31, 0x3316ECu);
    ctx->pc = 0x3316E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316E4u;
    // 0x3316e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x3316E4u, 0x3316ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316ECu;
label_3316ec:
    // 0x3316ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3316ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3316f0:
    // 0x3316f0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3316f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3316f4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3316f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3316f8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3316f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3316fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3316fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331700: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x331700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x331704: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x331704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x331708: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x331708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33170c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x33170cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x331710: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x331710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x331714: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x331714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331718: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x331718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33171c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x33171cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331720: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x331720u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331728: 0x3e00008  jr          $ra
    ctx->pc = 0x331728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331728u;
        // 0x33172c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331730u;
}
