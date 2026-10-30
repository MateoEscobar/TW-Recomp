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

// Function: sub_001CB398
// Address: 0x1cb398 - 0x1cb418
void sub_001CB398_0x1cb398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB398_0x1cb398");
#endif

    switch (ctx->pc) {
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb39cu: goto label_1cb39c;
        case 0x1cb3a0u: goto label_1cb3a0;
        case 0x1cb3a4u: goto label_1cb3a4;
        case 0x1cb3a8u: goto label_1cb3a8;
        case 0x1cb3acu: goto label_1cb3ac;
        case 0x1cb3b0u: goto label_1cb3b0;
        case 0x1cb3b4u: goto label_1cb3b4;
        case 0x1cb3b8u: goto label_1cb3b8;
        case 0x1cb3bcu: goto label_1cb3bc;
        case 0x1cb3c0u: goto label_1cb3c0;
        case 0x1cb3c4u: goto label_1cb3c4;
        case 0x1cb3c8u: goto label_1cb3c8;
        case 0x1cb3ccu: goto label_1cb3cc;
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3d8u: goto label_1cb3d8;
        case 0x1cb3dcu: goto label_1cb3dc;
        case 0x1cb3e0u: goto label_1cb3e0;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3e8u: goto label_1cb3e8;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f0u: goto label_1cb3f0;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb3fcu: goto label_1cb3fc;
        case 0x1cb400u: goto label_1cb400;
        case 0x1cb404u: goto label_1cb404;
        case 0x1cb408u: goto label_1cb408;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb410u: goto label_1cb410;
        case 0x1cb414u: goto label_1cb414;
        default: break;
    }

    ctx->pc = 0x1cb398u;

label_1cb398:
    // 0x1cb398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cb39c:
    // 0x1cb39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cb3a0:
    // 0x1cb3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb3a4:
    // 0x1cb3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3a8:
    // 0x1cb3a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb3ac:
    // 0x1cb3ac: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1cb3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1cb3b0:
    // 0x1cb3b0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1cb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1cb3b4:
    // 0x1cb3b4: 0x40f809  jalr        $v0
label_1cb3b8:
    if (ctx->pc == 0x1CB3B8u) {
        ctx->pc = 0x1CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3B4u;
        // 0x1cb3b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3BCu;
        goto label_1cb3bc;
    }
    ctx->pc = 0x1CB3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB3BCu);
        ctx->pc = 0x1CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3B4u;
        // 0x1cb3b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB3B4u, 0x1CB3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB3BCu;
label_1cb3bc:
    // 0x1cb3bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1cb3c0:
    if (ctx->pc == 0x1CB3C0u) {
        ctx->pc = 0x1CB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3BCu;
        // 0x1cb3c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3C4u;
        goto label_1cb3c4;
    }
    ctx->pc = 0x1CB3BCu;
    {
        const bool branch_taken_0x1cb3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3BCu;
        // 0x1cb3c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3bc) {
            ctx->pc = 0x1CB404u;
            goto label_1cb404;
        }
    }
    ctx->pc = 0x1CB3C4u;
label_1cb3c4:
    // 0x1cb3c4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1cb3c8:
    // 0x1cb3c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cb3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cb3cc:
    // 0x1cb3cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cb3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cb3d0:
    // 0x1cb3d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cb3d4:
    // 0x1cb3d4: 0x40f809  jalr        $v0
label_1cb3d8:
    if (ctx->pc == 0x1CB3D8u) {
        ctx->pc = 0x1CB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3D4u;
        // 0x1cb3d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3DCu;
        goto label_1cb3dc;
    }
    ctx->pc = 0x1CB3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB3DCu);
        ctx->pc = 0x1CB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3D4u;
        // 0x1cb3d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB3D4u, 0x1CB3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB3DCu;
label_1cb3dc:
    // 0x1cb3dc: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_1cb3e0:
    // 0x1cb3e0: 0x246300fa  addiu       $v1, $v1, 0xFA
    ctx->pc = 0x1cb3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
label_1cb3e4:
    // 0x1cb3e4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1cb3e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cb3e8:
    // 0x1cb3e8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_1cb3ec:
    if (ctx->pc == 0x1CB3ECu) {
        ctx->pc = 0x1CB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3E8u;
        // 0x1cb3ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3F0u;
        goto label_1cb3f0;
    }
    ctx->pc = 0x1CB3E8u;
    {
        const bool branch_taken_0x1cb3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3e8) {
            ctx->pc = 0x1CB3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB3E8u;
            // 0x1cb3ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB408u;
            goto label_1cb408;
        }
    }
    ctx->pc = 0x1CB3F0u;
label_1cb3f0:
    // 0x1cb3f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cb3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1cb3f4:
    // 0x1cb3f4: 0xc07a51a  jal         func_1E9468
label_1cb3f8:
    if (ctx->pc == 0x1CB3F8u) {
        ctx->pc = 0x1CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3F4u;
        // 0x1cb3f8: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3FCu;
        goto label_1cb3fc;
    }
    ctx->pc = 0x1CB3F4u;
    SET_GPR_U32(ctx, 31, 0x1CB3FCu);
    ctx->pc = 0x1CB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3F4u;
    // 0x1cb3f8: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1CB3F4u, 0x1CB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3FCu;
label_1cb3fc:
    // 0x1cb3fc: 0xc051800  jal         func_146000
label_1cb400:
    if (ctx->pc == 0x1CB400u) {
        ctx->pc = 0x1CB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3FCu;
        // 0x1cb400: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB404u;
        goto label_1cb404;
    }
    ctx->pc = 0x1CB3FCu;
    SET_GPR_U32(ctx, 31, 0x1CB404u);
    ctx->pc = 0x1CB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3FCu;
    // 0x1cb400: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1CB3FCu, 0x1CB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB404u;
label_1cb404:
    // 0x1cb404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb408:
    // 0x1cb408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb40c:
    // 0x1cb40c: 0x3e00008  jr          $ra
label_1cb410:
    if (ctx->pc == 0x1CB410u) {
        ctx->pc = 0x1CB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB40Cu;
        // 0x1cb410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB414u;
        goto label_1cb414;
    }
    ctx->pc = 0x1CB40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB40Cu;
        // 0x1cb410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB414u;
label_1cb414:
    // 0x1cb414: 0x0  nop
    ctx->pc = 0x1cb414u;
    // NOP
    ctx->pc = 0x1cb418u;
}
