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

// Function: sub_002213D8
// Address: 0x2213d8 - 0x221580
void sub_002213D8_0x2213d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002213D8_0x2213d8");
#endif

    switch (ctx->pc) {
        case 0x221404u: goto label_221404;
        case 0x221418u: goto label_221418;
        case 0x22143cu: goto label_22143c;
        case 0x221460u: goto label_221460;
        case 0x22147cu: goto label_22147c;
        case 0x22148cu: goto label_22148c;
        case 0x2214a8u: goto label_2214a8;
        case 0x2214b8u: goto label_2214b8;
        case 0x2214c8u: goto label_2214c8;
        case 0x2214d8u: goto label_2214d8;
        case 0x2214e8u: goto label_2214e8;
        case 0x2214f8u: goto label_2214f8;
        case 0x221508u: goto label_221508;
        case 0x221534u: goto label_221534;
        case 0x221568u: goto label_221568;
        default: break;
    }

    ctx->pc = 0x2213d8u;

    // 0x2213d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2213d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2213dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2213dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2213e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2213e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2213e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2213e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2213e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2213ec: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2213ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2213f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2213f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2213f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2213F4u;
    {
        const bool branch_taken_0x2213f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2213F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213F4u;
        // 0x2213f8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213f4) {
            ctx->pc = 0x221410u;
            goto label_221410;
        }
    }
    ctx->pc = 0x2213FCu;
    // 0x2213fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2213FCu;
    SET_GPR_U32(ctx, 31, 0x221404u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2213FCu, 0x221404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221404u;
label_221404:
    // 0x221404: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x221404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x221408: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x221408u;
    {
        const bool branch_taken_0x221408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221408) {
            ctx->pc = 0x22140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221408u;
            // 0x22140c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221410u;
            goto label_221410;
        }
    }
    ctx->pc = 0x221410u;
label_221410:
    // 0x221410: 0xc089fda  jal         func_227F68
    ctx->pc = 0x221410u;
    SET_GPR_U32(ctx, 31, 0x221418u);
    ctx->pc = 0x221414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221410u;
    // 0x221414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x221410u, 0x221418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221418u;
label_221418:
    // 0x221418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x221418u;
    {
        const bool branch_taken_0x221418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221418) {
            ctx->pc = 0x221434u;
            goto label_221434;
        }
    }
    ctx->pc = 0x221420u;
    // 0x221420: 0x3c013d8e  lui         $at, 0x3D8E
    ctx->pc = 0x221420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15758 << 16));
    // 0x221424: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x221424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x221428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x221428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22142c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x22142Cu;
    {
        const bool branch_taken_0x22142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22142Cu;
        // 0x221430: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22142c) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x221434u;
label_221434:
    // 0x221434: 0xc089fd0  jal         func_227F40
    ctx->pc = 0x221434u;
    SET_GPR_U32(ctx, 31, 0x22143Cu);
    ctx->pc = 0x221438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221434u;
    // 0x221438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x221434u, 0x22143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22143Cu;
label_22143c:
    // 0x22143c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22143Cu;
    {
        const bool branch_taken_0x22143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22143c) {
            ctx->pc = 0x221458u;
            goto label_221458;
        }
    }
    ctx->pc = 0x221444u;
    // 0x221444: 0x3c013dd6  lui         $at, 0x3DD6
    ctx->pc = 0x221444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15830 << 16));
    // 0x221448: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x22144c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22144cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221450: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x221450u;
    {
        const bool branch_taken_0x221450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221450u;
        // 0x221454: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221450) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x221458u;
label_221458:
    // 0x221458: 0xc089f66  jal         func_227D98
    ctx->pc = 0x221458u;
    SET_GPR_U32(ctx, 31, 0x221460u);
    ctx->pc = 0x22145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221458u;
    // 0x22145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x221458u, 0x221460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221460u;
label_221460:
    // 0x221460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221460u;
    {
        const bool branch_taken_0x221460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221460u;
        // 0x221464: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221460) {
            ctx->pc = 0x221474u;
            goto label_221474;
        }
    }
    ctx->pc = 0x221468u;
    // 0x221468: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x221468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22146c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x22146Cu;
    {
        const bool branch_taken_0x22146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22146Cu;
        // 0x221470: 0x244201b0  addiu       $v0, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22146c) {
            ctx->pc = 0x221544u;
            goto label_221544;
        }
    }
    ctx->pc = 0x221474u;
label_221474:
    // 0x221474: 0xc088e60  jal         func_223980
    ctx->pc = 0x221474u;
    SET_GPR_U32(ctx, 31, 0x22147Cu);
    ctx->pc = 0x221478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221474u;
    // 0x221478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x221474u, 0x22147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22147Cu;
label_22147c:
    // 0x22147c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22147Cu;
    {
        const bool branch_taken_0x22147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22147Cu;
        // 0x221480: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22147c) {
            ctx->pc = 0x221494u;
            goto label_221494;
        }
    }
    ctx->pc = 0x221484u;
    // 0x221484: 0xc088eb4  jal         func_223AD0
    ctx->pc = 0x221484u;
    SET_GPR_U32(ctx, 31, 0x22148Cu);
    ctx->pc = 0x221488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221484u;
    // 0x221488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x221484u, 0x22148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22148Cu;
label_22148c:
    // 0x22148c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22148Cu;
    {
        const bool branch_taken_0x22148c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22148Cu;
        // 0x221490: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22148c) {
            ctx->pc = 0x2214A0u;
            goto label_2214a0;
        }
    }
    ctx->pc = 0x221494u;
label_221494:
    // 0x221494: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x221498: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x221498u;
    {
        const bool branch_taken_0x221498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221498u;
        // 0x22149c: 0x244201b0  addiu       $v0, $v0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221498) {
            ctx->pc = 0x221518u;
            goto label_221518;
        }
    }
    ctx->pc = 0x2214A0u;
label_2214a0:
    // 0x2214a0: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x2214A0u;
    SET_GPR_U32(ctx, 31, 0x2214A8u);
    ctx->pc = 0x2214A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214A0u;
    // 0x2214a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x2214A0u, 0x2214A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214A8u;
label_2214a8:
    // 0x2214a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2214A8u;
    {
        const bool branch_taken_0x2214a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214A8u;
        // 0x2214ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214a8) {
            ctx->pc = 0x2214C0u;
            goto label_2214c0;
        }
    }
    ctx->pc = 0x2214B0u;
    // 0x2214b0: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x2214B0u;
    SET_GPR_U32(ctx, 31, 0x2214B8u);
    ctx->pc = 0x2214B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214B0u;
    // 0x2214b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x2214B0u, 0x2214B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214B8u;
label_2214b8:
    // 0x2214b8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2214B8u;
    {
        const bool branch_taken_0x2214b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214B8u;
        // 0x2214bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214b8) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x2214C0u;
label_2214c0:
    // 0x2214c0: 0xc088e98  jal         func_223A60
    ctx->pc = 0x2214C0u;
    SET_GPR_U32(ctx, 31, 0x2214C8u);
    ctx->pc = 0x2214C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214C0u;
    // 0x2214c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x2214C0u, 0x2214C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214C8u;
label_2214c8:
    // 0x2214c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2214C8u;
    {
        const bool branch_taken_0x2214c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214C8u;
        // 0x2214cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214c8) {
            ctx->pc = 0x2214E0u;
            goto label_2214e0;
        }
    }
    ctx->pc = 0x2214D0u;
    // 0x2214d0: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x2214D0u;
    SET_GPR_U32(ctx, 31, 0x2214D8u);
    ctx->pc = 0x2214D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214D0u;
    // 0x2214d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x2214D0u, 0x2214D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214D8u;
label_2214d8:
    // 0x2214d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2214D8u;
    {
        const bool branch_taken_0x2214d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214D8u;
        // 0x2214dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214d8) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x2214E0u;
label_2214e0:
    // 0x2214e0: 0xc088e94  jal         func_223A50
    ctx->pc = 0x2214E0u;
    SET_GPR_U32(ctx, 31, 0x2214E8u);
    ctx->pc = 0x2214E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214E0u;
    // 0x2214e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x2214E0u, 0x2214E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214E8u;
label_2214e8:
    // 0x2214e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2214E8u;
    {
        const bool branch_taken_0x2214e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214E8u;
        // 0x2214ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214e8) {
            ctx->pc = 0x221500u;
            goto label_221500;
        }
    }
    ctx->pc = 0x2214F0u;
    // 0x2214f0: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x2214F0u;
    SET_GPR_U32(ctx, 31, 0x2214F8u);
    ctx->pc = 0x2214F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2214F0u;
    // 0x2214f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x2214F0u, 0x2214F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2214F8u;
label_2214f8:
    // 0x2214f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2214F8u;
    {
        const bool branch_taken_0x2214f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2214FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214F8u;
        // 0x2214fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214f8) {
            ctx->pc = 0x22156Cu;
            goto label_22156c;
        }
    }
    ctx->pc = 0x221500u;
label_221500:
    // 0x221500: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x221500u;
    SET_GPR_U32(ctx, 31, 0x221508u);
    ctx->pc = 0x221504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221500u;
    // 0x221504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x221500u, 0x221508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221508u;
label_221508:
    // 0x221508: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x221508u;
    {
        const bool branch_taken_0x221508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221508u;
        // 0x22150c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221508) {
            ctx->pc = 0x221524u;
            goto label_221524;
        }
    }
    ctx->pc = 0x221510u;
    // 0x221510: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x221510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x221514: 0x244201d8  addiu       $v0, $v0, 0x1D8
    ctx->pc = 0x221514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
label_221518:
    // 0x221518: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x221518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22151c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22151Cu;
    {
        const bool branch_taken_0x22151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22151Cu;
        // 0x221520: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22151c) {
            ctx->pc = 0x221568u;
            goto label_221568;
        }
    }
    ctx->pc = 0x221524u;
label_221524:
    // 0x221524: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x221524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x221528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22152c: 0xc089998  jal         func_226660
    ctx->pc = 0x22152Cu;
    SET_GPR_U32(ctx, 31, 0x221534u);
    ctx->pc = 0x221530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22152Cu;
    // 0x221530: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22152Cu, 0x221534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221534u;
label_221534:
    // 0x221534: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221534u;
    {
        const bool branch_taken_0x221534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221534u;
        // 0x221538: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221534) {
            ctx->pc = 0x22155Cu;
            goto label_22155c;
        }
    }
    ctx->pc = 0x22153Cu;
    // 0x22153c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x22153cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x221540: 0x244201b8  addiu       $v0, $v0, 0x1B8
    ctx->pc = 0x221540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
label_221544:
    // 0x221544: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x221544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x221548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x221548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22154c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221550: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x221550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x221554u;
    {
        const bool branch_taken_0x221554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221554u;
        // 0x221558: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221554) {
            ctx->pc = 0x221568u;
            goto label_221568;
        }
    }
    ctx->pc = 0x22155Cu;
label_22155c:
    // 0x22155c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221560: 0xc0884b4  jal         func_2212D0
    ctx->pc = 0x221560u;
    SET_GPR_U32(ctx, 31, 0x221568u);
    ctx->pc = 0x221564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221560u;
    // 0x221564: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2212D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2212D0u, 0x221560u, 0x221568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221568u;
label_221568:
    // 0x221568: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x221568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22156c:
    // 0x22156c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22156cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221574: 0x3e00008  jr          $ra
    ctx->pc = 0x221574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221574u;
        // 0x221578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22157Cu;
    // 0x22157c: 0x0  nop
    ctx->pc = 0x22157cu;
    // NOP
    ctx->pc = 0x221580u;
}
