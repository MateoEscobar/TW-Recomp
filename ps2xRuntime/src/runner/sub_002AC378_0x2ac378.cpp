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

// Function: sub_002AC378
// Address: 0x2ac378 - 0x2ac410
void sub_002AC378_0x2ac378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC378_0x2ac378");
#endif

    switch (ctx->pc) {
        case 0x2ac378u: goto label_2ac378;
        case 0x2ac37cu: goto label_2ac37c;
        case 0x2ac380u: goto label_2ac380;
        case 0x2ac384u: goto label_2ac384;
        case 0x2ac388u: goto label_2ac388;
        case 0x2ac38cu: goto label_2ac38c;
        case 0x2ac390u: goto label_2ac390;
        case 0x2ac394u: goto label_2ac394;
        case 0x2ac398u: goto label_2ac398;
        case 0x2ac39cu: goto label_2ac39c;
        case 0x2ac3a0u: goto label_2ac3a0;
        case 0x2ac3a4u: goto label_2ac3a4;
        case 0x2ac3a8u: goto label_2ac3a8;
        case 0x2ac3acu: goto label_2ac3ac;
        case 0x2ac3b0u: goto label_2ac3b0;
        case 0x2ac3b4u: goto label_2ac3b4;
        case 0x2ac3b8u: goto label_2ac3b8;
        case 0x2ac3bcu: goto label_2ac3bc;
        case 0x2ac3c0u: goto label_2ac3c0;
        case 0x2ac3c4u: goto label_2ac3c4;
        case 0x2ac3c8u: goto label_2ac3c8;
        case 0x2ac3ccu: goto label_2ac3cc;
        case 0x2ac3d0u: goto label_2ac3d0;
        case 0x2ac3d4u: goto label_2ac3d4;
        case 0x2ac3d8u: goto label_2ac3d8;
        case 0x2ac3dcu: goto label_2ac3dc;
        case 0x2ac3e0u: goto label_2ac3e0;
        case 0x2ac3e4u: goto label_2ac3e4;
        case 0x2ac3e8u: goto label_2ac3e8;
        case 0x2ac3ecu: goto label_2ac3ec;
        case 0x2ac3f0u: goto label_2ac3f0;
        case 0x2ac3f4u: goto label_2ac3f4;
        case 0x2ac3f8u: goto label_2ac3f8;
        case 0x2ac3fcu: goto label_2ac3fc;
        case 0x2ac400u: goto label_2ac400;
        case 0x2ac404u: goto label_2ac404;
        case 0x2ac408u: goto label_2ac408;
        case 0x2ac40cu: goto label_2ac40c;
        default: break;
    }

    ctx->pc = 0x2ac378u;

label_2ac378:
    // 0x2ac378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ac37c:
    // 0x2ac37c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ac380:
    // 0x2ac380: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ac380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ac384:
    // 0x2ac384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac388:
    // 0x2ac388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ac38c:
    // 0x2ac38c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ac38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ac390:
    // 0x2ac390: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac394:
    // 0x2ac394: 0xc089fac  jal         func_227EB0
label_2ac398:
    if (ctx->pc == 0x2AC398u) {
        ctx->pc = 0x2AC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC394u;
        // 0x2ac398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC39Cu;
        goto label_2ac39c;
    }
    ctx->pc = 0x2AC394u;
    SET_GPR_U32(ctx, 31, 0x2AC39Cu);
    ctx->pc = 0x2AC398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC394u;
    // 0x2ac398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2AC394u, 0x2AC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC39Cu;
label_2ac39c:
    // 0x2ac39c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2ac3a0:
    if (ctx->pc == 0x2AC3A0u) {
        ctx->pc = 0x2AC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC39Cu;
        // 0x2ac3a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3A4u;
        goto label_2ac3a4;
    }
    ctx->pc = 0x2AC39Cu;
    {
        const bool branch_taken_0x2ac39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac39c) {
            ctx->pc = 0x2AC3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC39Cu;
            // 0x2ac3a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC3FCu;
            goto label_2ac3fc;
        }
    }
    ctx->pc = 0x2AC3A4u;
label_2ac3a4:
    // 0x2ac3a4: 0xc089f76  jal         func_227DD8
label_2ac3a8:
    if (ctx->pc == 0x2AC3A8u) {
        ctx->pc = 0x2AC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3A4u;
        // 0x2ac3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3ACu;
        goto label_2ac3ac;
    }
    ctx->pc = 0x2AC3A4u;
    SET_GPR_U32(ctx, 31, 0x2AC3ACu);
    ctx->pc = 0x2AC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3A4u;
    // 0x2ac3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2AC3A4u, 0x2AC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3ACu;
label_2ac3ac:
    // 0x2ac3ac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_2ac3b0:
    if (ctx->pc == 0x2AC3B0u) {
        ctx->pc = 0x2AC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3ACu;
        // 0x2ac3b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3B4u;
        goto label_2ac3b4;
    }
    ctx->pc = 0x2AC3ACu;
    {
        const bool branch_taken_0x2ac3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3ac) {
            ctx->pc = 0x2AC3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC3ACu;
            // 0x2ac3b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC3FCu;
            goto label_2ac3fc;
        }
    }
    ctx->pc = 0x2AC3B4u;
label_2ac3b4:
    // 0x2ac3b4: 0xc0ab04c  jal         func_2AC130
label_2ac3b8:
    if (ctx->pc == 0x2AC3B8u) {
        ctx->pc = 0x2AC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3B4u;
        // 0x2ac3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3BCu;
        goto label_2ac3bc;
    }
    ctx->pc = 0x2AC3B4u;
    SET_GPR_U32(ctx, 31, 0x2AC3BCu);
    ctx->pc = 0x2AC3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3B4u;
    // 0x2ac3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC130u, 0x2AC3B4u, 0x2AC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3BCu;
label_2ac3bc:
    // 0x2ac3bc: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x2ac3bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_2ac3c0:
    // 0x2ac3c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2ac3c4:
    if (ctx->pc == 0x2AC3C4u) {
        ctx->pc = 0x2AC3C8u;
        goto label_2ac3c8;
    }
    ctx->pc = 0x2AC3C0u;
    {
        const bool branch_taken_0x2ac3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3c0) {
            ctx->pc = 0x2AC3F0u;
            goto label_2ac3f0;
        }
    }
    ctx->pc = 0x2AC3C8u;
label_2ac3c8:
    // 0x2ac3c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac3cc:
    // 0x2ac3cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ac3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ac3d0:
    // 0x2ac3d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ac3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ac3d4:
    // 0x2ac3d4: 0x40f809  jalr        $v0
label_2ac3d8:
    if (ctx->pc == 0x2AC3D8u) {
        ctx->pc = 0x2AC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3D4u;
        // 0x2ac3d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3DCu;
        goto label_2ac3dc;
    }
    ctx->pc = 0x2AC3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC3DCu);
        ctx->pc = 0x2AC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3D4u;
        // 0x2ac3d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC3D4u, 0x2AC3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC3DCu;
label_2ac3dc:
    // 0x2ac3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ac3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac3e0:
    // 0x2ac3e0: 0xc08ddc0  jal         func_237700
label_2ac3e4:
    if (ctx->pc == 0x2AC3E4u) {
        ctx->pc = 0x2AC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3E0u;
        // 0x2ac3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3E8u;
        goto label_2ac3e8;
    }
    ctx->pc = 0x2AC3E0u;
    SET_GPR_U32(ctx, 31, 0x2AC3E8u);
    ctx->pc = 0x2AC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3E0u;
    // 0x2ac3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237700u, 0x2AC3E0u, 0x2AC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3E8u;
label_2ac3e8:
    // 0x2ac3e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ac3ec:
    if (ctx->pc == 0x2AC3ECu) {
        ctx->pc = 0x2AC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3E8u;
        // 0x2ac3ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3F0u;
        goto label_2ac3f0;
    }
    ctx->pc = 0x2AC3E8u;
    {
        const bool branch_taken_0x2ac3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3E8u;
        // 0x2ac3ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3e8) {
            ctx->pc = 0x2AC3FCu;
            goto label_2ac3fc;
        }
    }
    ctx->pc = 0x2AC3F0u;
label_2ac3f0:
    // 0x2ac3f0: 0xc08a0ea  jal         func_2283A8
label_2ac3f4:
    if (ctx->pc == 0x2AC3F4u) {
        ctx->pc = 0x2AC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3F0u;
        // 0x2ac3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC3F8u;
        goto label_2ac3f8;
    }
    ctx->pc = 0x2AC3F0u;
    SET_GPR_U32(ctx, 31, 0x2AC3F8u);
    ctx->pc = 0x2AC3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3F0u;
    // 0x2ac3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283A8u, 0x2AC3F0u, 0x2AC3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3F8u;
label_2ac3f8:
    // 0x2ac3f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ac3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac3fc:
    // 0x2ac3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac400:
    // 0x2ac400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac404:
    // 0x2ac404: 0x3e00008  jr          $ra
label_2ac408:
    if (ctx->pc == 0x2AC408u) {
        ctx->pc = 0x2AC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC404u;
        // 0x2ac408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC40Cu;
        goto label_2ac40c;
    }
    ctx->pc = 0x2AC404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC404u;
        // 0x2ac408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC40Cu;
label_2ac40c:
    // 0x2ac40c: 0x0  nop
    ctx->pc = 0x2ac40cu;
    // NOP
    ctx->pc = 0x2ac410u;
}
