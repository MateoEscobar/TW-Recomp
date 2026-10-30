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

// Function: sub_0014A4B8
// Address: 0x14a4b8 - 0x14a758
void sub_0014A4B8_0x14a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A4B8_0x14a4b8");
#endif

    switch (ctx->pc) {
        case 0x14a4f0u: goto label_14a4f0;
        case 0x14a50cu: goto label_14a50c;
        case 0x14a528u: goto label_14a528;
        case 0x14a544u: goto label_14a544;
        case 0x14a560u: goto label_14a560;
        case 0x14a570u: goto label_14a570;
        case 0x14a5a4u: goto label_14a5a4;
        case 0x14a630u: goto label_14a630;
        case 0x14a63cu: goto label_14a63c;
        case 0x14a6f0u: goto label_14a6f0;
        case 0x14a6fcu: goto label_14a6fc;
        case 0x14a71cu: goto label_14a71c;
        case 0x14a728u: goto label_14a728;
        default: break;
    }

    ctx->pc = 0x14a4b8u;

    // 0x14a4b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14a4bc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14a4c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14a4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14a4c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14a4cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14a4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14a4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x14a4d8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14a4dc: 0x24a5aa18  addiu       $a1, $a1, -0x55E8
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945304));
    // 0x14a4e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a4e8: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14A4E8u;
    SET_GPR_U32(ctx, 31, 0x14A4F0u);
    ctx->pc = 0x14A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4E8u;
    // 0x14a4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14A4E8u, 0x14A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4F0u;
label_14a4f0:
    // 0x14a4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A4F0u;
    {
        const bool branch_taken_0x14a4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F0u;
        // 0x14a4f4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f0) {
            ctx->pc = 0x14A500u;
            goto label_14a500;
        }
    }
    ctx->pc = 0x14A4F8u;
    // 0x14a4f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14A4F8u;
    {
        const bool branch_taken_0x14a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F8u;
        // 0x14a4fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f8) {
            ctx->pc = 0x14A550u;
            goto label_14a550;
        }
    }
    ctx->pc = 0x14A500u;
label_14a500:
    // 0x14a500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a504: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14A504u;
    SET_GPR_U32(ctx, 31, 0x14A50Cu);
    ctx->pc = 0x14A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A504u;
    // 0x14a508: 0x24a5aa20  addiu       $a1, $a1, -0x55E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14A504u, 0x14A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A50Cu;
label_14a50c:
    // 0x14a50c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A50Cu;
    {
        const bool branch_taken_0x14a50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A50Cu;
        // 0x14a510: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a50c) {
            ctx->pc = 0x14A51Cu;
            goto label_14a51c;
        }
    }
    ctx->pc = 0x14A514u;
    // 0x14a514: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14A514u;
    {
        const bool branch_taken_0x14a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A514u;
        // 0x14a518: 0x24110202  addiu       $s1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a514) {
            ctx->pc = 0x14A550u;
            goto label_14a550;
        }
    }
    ctx->pc = 0x14A51Cu;
label_14a51c:
    // 0x14a51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a520: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14A520u;
    SET_GPR_U32(ctx, 31, 0x14A528u);
    ctx->pc = 0x14A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A520u;
    // 0x14a524: 0x24a5aa28  addiu       $a1, $a1, -0x55D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14A520u, 0x14A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A528u;
label_14a528:
    // 0x14a528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A528u;
    {
        const bool branch_taken_0x14a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A528u;
        // 0x14a52c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a528) {
            ctx->pc = 0x14A538u;
            goto label_14a538;
        }
    }
    ctx->pc = 0x14A530u;
    // 0x14a530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14A530u;
    {
        const bool branch_taken_0x14a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A530u;
        // 0x14a534: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a530) {
            ctx->pc = 0x14A550u;
            goto label_14a550;
        }
    }
    ctx->pc = 0x14A538u;
label_14a538:
    // 0x14a538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a53c: 0xc10d6e8  jal         func_435BA0
    ctx->pc = 0x14A53Cu;
    SET_GPR_U32(ctx, 31, 0x14A544u);
    ctx->pc = 0x14A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A53Cu;
    // 0x14a540: 0x24a5aa30  addiu       $a1, $a1, -0x55D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x14A53Cu, 0x14A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A544u;
label_14a544:
    // 0x14a544: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x14A544u;
    {
        const bool branch_taken_0x14a544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A544u;
        // 0x14a548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a544) {
            ctx->pc = 0x14A734u;
            goto label_14a734;
        }
    }
    ctx->pc = 0x14A54Cu;
    // 0x14a54c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x14a54cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14a550:
    // 0x14a550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14a550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a554: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x14a554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a558: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a55c: 0x0  nop
    ctx->pc = 0x14a55cu;
    // NOP
label_14a560:
    // 0x14a560: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a564: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x14a564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14a568: 0xc111438  jal         func_4450E0
    ctx->pc = 0x14A568u;
    SET_GPR_U32(ctx, 31, 0x14A570u);
    ctx->pc = 0x14A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A568u;
    // 0x14a56c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4450E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4450E0u, 0x14A568u, 0x14A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A570u;
label_14a570:
    // 0x14a570: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14a574: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x14a574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A578u;
    {
        const bool branch_taken_0x14a578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A578u;
        // 0x14a57c: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a578) {
            ctx->pc = 0x14A58Cu;
            goto label_14a58c;
        }
    }
    ctx->pc = 0x14A580u;
    // 0x14a580: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14a580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a584: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14A584u;
    {
        const bool branch_taken_0x14a584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a584) {
            ctx->pc = 0x14A588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A584u;
            // 0x14a588: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a560;
        }
    }
    ctx->pc = 0x14A58Cu;
label_14a58c:
    // 0x14a58c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14a58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a590: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x14A590u;
    {
        const bool branch_taken_0x14a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A590u;
        // 0x14a594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a590) {
            ctx->pc = 0x14A728u;
            goto label_14a728;
        }
    }
    ctx->pc = 0x14A598u;
    // 0x14a598: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14a598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a59c: 0xc111590  jal         func_445640
    ctx->pc = 0x14A59Cu;
    SET_GPR_U32(ctx, 31, 0x14A5A4u);
    ctx->pc = 0x14A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A59Cu;
    // 0x14a5a0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14A59Cu, 0x14A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5A4u;
label_14a5a4:
    // 0x14a5a4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a5a8: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14A5A8u;
    {
        const bool branch_taken_0x14a5a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x14A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5A8u;
        // 0x14a5ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5a8) {
            ctx->pc = 0x14A60Cu;
            goto label_14a60c;
        }
    }
    ctx->pc = 0x14A5B0u;
    // 0x14a5b0: 0x8c45bcd8  lw          $a1, -0x4328($v0)
    ctx->pc = 0x14a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950104)));
    // 0x14a5b4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14a5b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a5bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14a5c0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14a5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a5c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a5cc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14a5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a5d0: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x14a5d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14a5d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A5D4u;
    {
        const bool branch_taken_0x14a5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5D4u;
        // 0x14a5d8: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5d4) {
            ctx->pc = 0x14A5F0u;
            goto label_14a5f0;
        }
    }
    ctx->pc = 0x14A5DCu;
    // 0x14a5dc: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x14a5dcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14a5e0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14A5E0u;
    {
        const bool branch_taken_0x14a5e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a5e0) {
            ctx->pc = 0x14A5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A5E0u;
            // 0x14a5e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A5E8u;
            goto label_14a5e8;
        }
    }
    ctx->pc = 0x14A5E8u;
label_14a5e8:
    // 0x14a5e8: 0x1010  mfhi        $v0
    ctx->pc = 0x14a5e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14a5ec: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x14a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_14a5f0:
    // 0x14a5f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14a5f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a5f8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x14a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x14a5fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a600: 0xacf20000  sw          $s2, 0x0($a3)
    ctx->pc = 0x14a600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 18));
    // 0x14a604: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x14A604u;
    {
        const bool branch_taken_0x14a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A604u;
        // 0x14a608: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a604) {
            ctx->pc = 0x14A730u;
            goto label_14a730;
        }
    }
    ctx->pc = 0x14A60Cu;
label_14a60c:
    // 0x14a60c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14a60cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14a610: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x14a610u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x14a614: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14a614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14a618: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a61c: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a620: 0x24c6aa38  addiu       $a2, $a2, -0x55C8
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945336));
    // 0x14a624: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14a628: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A628u;
    SET_GPR_U32(ctx, 31, 0x14A630u);
    ctx->pc = 0x14A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A628u;
    // 0x14a62c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A628u, 0x14A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A630u;
label_14a630:
    // 0x14a630: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14a634: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A634u;
    SET_GPR_U32(ctx, 31, 0x14A63Cu);
    ctx->pc = 0x14A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A634u;
    // 0x14a638: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A634u, 0x14A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A63Cu;
label_14a63c:
    // 0x14a63c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a640: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x14a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x14a644: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x14a644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a648: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A648u;
    {
        const bool branch_taken_0x14a648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A648u;
        // 0x14a64c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a648) {
            ctx->pc = 0x14A6CCu;
            goto label_14a6cc;
        }
    }
    ctx->pc = 0x14A650u;
    // 0x14a650: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14a654: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x14a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x14a658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a65c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a660: 0x800008  jr          $a0
    ctx->pc = 0x14A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A668u: goto label_14a668;
            case 0x14A67Cu: goto label_14a67c;
            case 0x14A690u: goto label_14a690;
            case 0x14A6A4u: goto label_14a6a4;
            case 0x14A6B8u: goto label_14a6b8;
            case 0x14A6CCu: goto label_14a6cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14A668u;
label_14a668:
    // 0x14a668: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a66c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a670: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a674: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A674u;
    {
        const bool branch_taken_0x14a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A674u;
        // 0x14a678: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a674) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A67Cu;
label_14a67c:
    // 0x14a67c: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a680: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a684: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a688: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14A688u;
    {
        const bool branch_taken_0x14a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A688u;
        // 0x14a68c: 0x24c6aaa0  addiu       $a2, $a2, -0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a688) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A690u;
label_14a690:
    // 0x14a690: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a694: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a698: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a69c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14A69Cu;
    {
        const bool branch_taken_0x14a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A69Cu;
        // 0x14a6a0: 0x24c6aaf8  addiu       $a2, $a2, -0x5508 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a69c) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6A4u;
label_14a6a4:
    // 0x14a6a4: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a6a8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a6ac: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a6b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14A6B0u;
    {
        const bool branch_taken_0x14a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6B0u;
        // 0x14a6b4: 0x24c6ab68  addiu       $a2, $a2, -0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6b0) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6B8u;
label_14a6b8:
    // 0x14a6b8: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a6bc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a6c0: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a6c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A6C4u;
    {
        const bool branch_taken_0x14a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6C4u;
        // 0x14a6c8: 0x24c6ac40  addiu       $a2, $a2, -0x53C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6c4) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6CCu;
label_14a6cc:
    // 0x14a6cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a6d0: 0x2842fff7  slti        $v0, $v0, -0x9
    ctx->pc = 0x14a6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x14a6d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14A6D4u;
    {
        const bool branch_taken_0x14a6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6D4u;
        // 0x14a6d8: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6d4) {
            ctx->pc = 0x14A704u;
            goto label_14a704;
        }
    }
    ctx->pc = 0x14A6DCu;
    // 0x14a6dc: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a6e0: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a6e4: 0x24c6acb8  addiu       $a2, $a2, -0x5348
    ctx->pc = 0x14a6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945976));
label_14a6e8:
    // 0x14a6e8: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A6E8u;
    SET_GPR_U32(ctx, 31, 0x14A6F0u);
    ctx->pc = 0x14A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6E8u;
    // 0x14a6ec: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A6E8u, 0x14A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6F0u;
label_14a6f0:
    // 0x14a6f0: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a6f4: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A6F4u;
    SET_GPR_U32(ctx, 31, 0x14A6FCu);
    ctx->pc = 0x14A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6F4u;
    // 0x14a6f8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A6F4u, 0x14A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6FCu;
label_14a6fc:
    // 0x14a6fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14A6FCu;
    {
        const bool branch_taken_0x14a6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6FCu;
        // 0x14a700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6fc) {
            ctx->pc = 0x14A734u;
            goto label_14a734;
        }
    }
    ctx->pc = 0x14A704u;
label_14a704:
    // 0x14a704: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a708: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14a70c: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14a710: 0x24c6acf8  addiu       $a2, $a2, -0x5308
    ctx->pc = 0x14a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946040));
    // 0x14a714: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A714u;
    SET_GPR_U32(ctx, 31, 0x14A71Cu);
    ctx->pc = 0x14A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A714u;
    // 0x14a718: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A714u, 0x14A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A71Cu;
label_14a71c:
    // 0x14a71c: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14a720: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A720u;
    SET_GPR_U32(ctx, 31, 0x14A728u);
    ctx->pc = 0x14A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A720u;
    // 0x14a724: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A720u, 0x14A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A728u;
label_14a728:
    // 0x14a728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A728u;
    {
        const bool branch_taken_0x14a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A728u;
        // 0x14a72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a728) {
            ctx->pc = 0x14A734u;
            goto label_14a734;
        }
    }
    ctx->pc = 0x14A730u;
label_14a730:
    // 0x14a730: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x14a730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14a734:
    // 0x14a734: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14a734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a738: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14a738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a73c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14a73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a740: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a744: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14a744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A74Cu;
        // 0x14a750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A754u;
    // 0x14a754: 0x0  nop
    ctx->pc = 0x14a754u;
    // NOP
    ctx->pc = 0x14a758u;
}
