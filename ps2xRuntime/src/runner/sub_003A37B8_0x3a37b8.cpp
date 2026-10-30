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

// Function: sub_003A37B8
// Address: 0x3a37b8 - 0x3a3884
void sub_003A37B8_0x3a37b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A37B8_0x3a37b8");
#endif

    switch (ctx->pc) {
        case 0x3a37ccu: goto label_3a37cc;
        case 0x3a3804u: goto label_3a3804;
        case 0x3a381cu: goto label_3a381c;
        case 0x3a3834u: goto label_3a3834;
        case 0x3a384cu: goto label_3a384c;
        case 0x3a3864u: goto label_3a3864;
        case 0x3a387cu: goto label_3a387c;
        default: break;
    }

    ctx->pc = 0x3a37b8u;

    // 0x3a37b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a37b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a37bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a37bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a37c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a37c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a37c4: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A37C4u;
    SET_GPR_U32(ctx, 31, 0x3A37CCu);
    ctx->pc = 0x3A37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A37C4u;
    // 0x3a37c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A37C4u, 0x3A37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A37CCu;
label_3a37cc:
    // 0x3a37cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a37ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37d0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x3a37d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3a37d4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A37D4u;
    {
        const bool branch_taken_0x3a37d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37D4u;
        // 0x3a37d8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37d4) {
            ctx->pc = 0x3A3884u;
            return;
        }
    }
    ctx->pc = 0x3A37DCu;
    // 0x3a37dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3a37e0: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x3a37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x3a37e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a37e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a37ec: 0x800008  jr          $a0
    ctx->pc = 0x3A37ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A37F4u: goto label_3a37f4;
            case 0x3A380Cu: goto label_3a380c;
            case 0x3A3824u: goto label_3a3824;
            case 0x3A383Cu: goto label_3a383c;
            case 0x3A3854u: goto label_3a3854;
            case 0x3A386Cu: goto label_3a386c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A37ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A37F4u;
label_3a37f4:
    // 0x3a37f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a37f8: 0x94c50112  lhu         $a1, 0x112($a2)
    ctx->pc = 0x3a37f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    // 0x3a37fc: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A37FCu;
    SET_GPR_U32(ctx, 31, 0x3A3804u);
    ctx->pc = 0x3A3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A37FCu;
    // 0x3a3800: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A37FCu, 0x3A3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3804u;
label_3a3804:
    // 0x3a3804: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A3804u;
    {
        const bool branch_taken_0x3a3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3804u;
        // 0x3a3808: 0x94420058  lhu         $v0, 0x58($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3804) {
            ctx->pc = 0x3A3888u;
            return;
        }
    }
    ctx->pc = 0x3A380Cu;
label_3a380c:
    // 0x3a380c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3810: 0x94c50112  lhu         $a1, 0x112($a2)
    ctx->pc = 0x3a3810u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    // 0x3a3814: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3814u;
    SET_GPR_U32(ctx, 31, 0x3A381Cu);
    ctx->pc = 0x3A3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3814u;
    // 0x3a3818: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3814u, 0x3A381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A381Cu;
label_3a381c:
    // 0x3a381c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A381Cu;
    {
        const bool branch_taken_0x3a381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A381Cu;
        // 0x3a3820: 0x8042005a  lb          $v0, 0x5A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a381c) {
            ctx->pc = 0x3A3888u;
            return;
        }
    }
    ctx->pc = 0x3A3824u;
label_3a3824:
    // 0x3a3824: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3828: 0x94c50112  lhu         $a1, 0x112($a2)
    ctx->pc = 0x3a3828u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    // 0x3a382c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A382Cu;
    SET_GPR_U32(ctx, 31, 0x3A3834u);
    ctx->pc = 0x3A3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A382Cu;
    // 0x3a3830: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A382Cu, 0x3A3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3834u;
label_3a3834:
    // 0x3a3834: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A3834u;
    {
        const bool branch_taken_0x3a3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3834u;
        // 0x3a3838: 0x94420062  lhu         $v0, 0x62($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3834) {
            ctx->pc = 0x3A3888u;
            return;
        }
    }
    ctx->pc = 0x3A383Cu;
label_3a383c:
    // 0x3a383c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a383cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3840: 0x94c50112  lhu         $a1, 0x112($a2)
    ctx->pc = 0x3a3840u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    // 0x3a3844: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3844u;
    SET_GPR_U32(ctx, 31, 0x3A384Cu);
    ctx->pc = 0x3A3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3844u;
    // 0x3a3848: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3844u, 0x3A384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A384Cu;
label_3a384c:
    // 0x3a384c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A384Cu;
    {
        const bool branch_taken_0x3a384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A384Cu;
        // 0x3a3850: 0x90420064  lbu         $v0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a384c) {
            ctx->pc = 0x3A3888u;
            return;
        }
    }
    ctx->pc = 0x3A3854u;
label_3a3854:
    // 0x3a3854: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3858: 0x94c50112  lhu         $a1, 0x112($a2)
    ctx->pc = 0x3a3858u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    // 0x3a385c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A385Cu;
    SET_GPR_U32(ctx, 31, 0x3A3864u);
    ctx->pc = 0x3A3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A385Cu;
    // 0x3a3860: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A385Cu, 0x3A3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3864u;
label_3a3864:
    // 0x3a3864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3864u;
    {
        const bool branch_taken_0x3a3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3864u;
        // 0x3a3868: 0x80420065  lb          $v0, 0x65($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3864) {
            ctx->pc = 0x3A3888u;
            return;
        }
    }
    ctx->pc = 0x3A386Cu;
label_3a386c:
    // 0x3a386c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3870: 0x94c50112  lhu         $a1, 0x112($a2)
    ctx->pc = 0x3a3870u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 274)));
    // 0x3a3874: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3874u;
    SET_GPR_U32(ctx, 31, 0x3A387Cu);
    ctx->pc = 0x3A3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3874u;
    // 0x3a3878: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3874u, 0x3A387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A387Cu;
label_3a387c:
    // 0x3a387c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A387Cu;
    {
        const bool branch_taken_0x3a387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A387Cu;
        // 0x3a3880: 0x80420086  lb          $v0, 0x86($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a387c) {
            ctx->pc = 0x3A3888u;
            return;
        }
    }
    ctx->pc = 0x3A3884u;
}
