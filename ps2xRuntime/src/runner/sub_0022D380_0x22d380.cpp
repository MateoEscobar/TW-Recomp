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

// Function: sub_0022D380
// Address: 0x22d380 - 0x22d3f8
void sub_0022D380_0x22d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D380_0x22d380");
#endif

    switch (ctx->pc) {
        case 0x22d380u: goto label_22d380;
        case 0x22d384u: goto label_22d384;
        case 0x22d388u: goto label_22d388;
        case 0x22d38cu: goto label_22d38c;
        case 0x22d390u: goto label_22d390;
        case 0x22d394u: goto label_22d394;
        case 0x22d398u: goto label_22d398;
        case 0x22d39cu: goto label_22d39c;
        case 0x22d3a0u: goto label_22d3a0;
        case 0x22d3a4u: goto label_22d3a4;
        case 0x22d3a8u: goto label_22d3a8;
        case 0x22d3acu: goto label_22d3ac;
        case 0x22d3b0u: goto label_22d3b0;
        case 0x22d3b4u: goto label_22d3b4;
        case 0x22d3b8u: goto label_22d3b8;
        case 0x22d3bcu: goto label_22d3bc;
        case 0x22d3c0u: goto label_22d3c0;
        case 0x22d3c4u: goto label_22d3c4;
        case 0x22d3c8u: goto label_22d3c8;
        case 0x22d3ccu: goto label_22d3cc;
        case 0x22d3d0u: goto label_22d3d0;
        case 0x22d3d4u: goto label_22d3d4;
        case 0x22d3d8u: goto label_22d3d8;
        case 0x22d3dcu: goto label_22d3dc;
        case 0x22d3e0u: goto label_22d3e0;
        case 0x22d3e4u: goto label_22d3e4;
        case 0x22d3e8u: goto label_22d3e8;
        case 0x22d3ecu: goto label_22d3ec;
        case 0x22d3f0u: goto label_22d3f0;
        case 0x22d3f4u: goto label_22d3f4;
        default: break;
    }

    ctx->pc = 0x22d380u;

label_22d380:
    // 0x22d380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d384:
    // 0x22d384: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22d388:
    // 0x22d388: 0x52eb8  dsll        $a1, $a1, 26
    ctx->pc = 0x22d388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 26);
label_22d38c:
    // 0x22d38c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22d390:
    // 0x22d390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d394:
    // 0x22d394: 0xc089988  jal         func_226620
label_22d398:
    if (ctx->pc == 0x22D398u) {
        ctx->pc = 0x22D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D394u;
        // 0x22d398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D39Cu;
        goto label_22d39c;
    }
    ctx->pc = 0x22D394u;
    SET_GPR_U32(ctx, 31, 0x22D39Cu);
    ctx->pc = 0x22D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D394u;
    // 0x22d398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D394u, 0x22D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D39Cu;
label_22d39c:
    // 0x22d39c: 0xc0899ae  jal         func_2266B8
label_22d3a0:
    if (ctx->pc == 0x22D3A0u) {
        ctx->pc = 0x22D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D39Cu;
        // 0x22d3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3A4u;
        goto label_22d3a4;
    }
    ctx->pc = 0x22D39Cu;
    SET_GPR_U32(ctx, 31, 0x22D3A4u);
    ctx->pc = 0x22D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D39Cu;
    // 0x22d3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x22D39Cu, 0x22D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3A4u;
label_22d3a4:
    // 0x22d3a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22d3a8:
    if (ctx->pc == 0x22D3A8u) {
        ctx->pc = 0x22D3ACu;
        goto label_22d3ac;
    }
    ctx->pc = 0x22D3A4u;
    {
        const bool branch_taken_0x22d3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3a4) {
            ctx->pc = 0x22D3E0u;
            goto label_22d3e0;
        }
    }
    ctx->pc = 0x22D3ACu;
label_22d3ac:
    // 0x22d3ac: 0xc05d484  jal         func_175210
label_22d3b0:
    if (ctx->pc == 0x22D3B0u) {
        ctx->pc = 0x22D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3ACu;
        // 0x22d3b0: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3B4u;
        goto label_22d3b4;
    }
    ctx->pc = 0x22D3ACu;
    SET_GPR_U32(ctx, 31, 0x22D3B4u);
    ctx->pc = 0x22D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3ACu;
    // 0x22d3b0: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x22D3ACu, 0x22D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3B4u;
label_22d3b4:
    // 0x22d3b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_22d3b8:
    // 0x22d3b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22d3bc:
    // 0x22d3bc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_22d3c0:
    if (ctx->pc == 0x22D3C0u) {
        ctx->pc = 0x22D3C4u;
        goto label_22d3c4;
    }
    ctx->pc = 0x22D3BCu;
    {
        const bool branch_taken_0x22d3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d3bc) {
            ctx->pc = 0x22D3E0u;
            goto label_22d3e0;
        }
    }
    ctx->pc = 0x22D3C4u;
label_22d3c4:
    // 0x22d3c4: 0xc05d484  jal         func_175210
label_22d3c8:
    if (ctx->pc == 0x22D3C8u) {
        ctx->pc = 0x22D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3C4u;
        // 0x22d3c8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3CCu;
        goto label_22d3cc;
    }
    ctx->pc = 0x22D3C4u;
    SET_GPR_U32(ctx, 31, 0x22D3CCu);
    ctx->pc = 0x22D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3C4u;
    // 0x22d3c8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x22D3C4u, 0x22D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3CCu;
label_22d3cc:
    // 0x22d3cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22d3d0:
    // 0x22d3d0: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_22d3d4:
    // 0x22d3d4: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_22d3d8:
    // 0x22d3d8: 0xa0f809  jalr        $a1
label_22d3dc:
    if (ctx->pc == 0x22D3DCu) {
        ctx->pc = 0x22D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3D8u;
        // 0x22d3dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3E0u;
        goto label_22d3e0;
    }
    ctx->pc = 0x22D3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x22D3E0u);
        ctx->pc = 0x22D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3D8u;
        // 0x22d3dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D3D8u, 0x22D3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D3E0u;
label_22d3e0:
    // 0x22d3e0: 0xc08d20c  jal         func_234830
label_22d3e4:
    if (ctx->pc == 0x22D3E4u) {
        ctx->pc = 0x22D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3E0u;
        // 0x22d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3E8u;
        goto label_22d3e8;
    }
    ctx->pc = 0x22D3E0u;
    SET_GPR_U32(ctx, 31, 0x22D3E8u);
    ctx->pc = 0x22D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D3E0u;
    // 0x22d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234830u, 0x22D3E0u, 0x22D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3E8u;
label_22d3e8:
    // 0x22d3e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d3ec:
    // 0x22d3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d3f0:
    // 0x22d3f0: 0x3e00008  jr          $ra
label_22d3f4:
    if (ctx->pc == 0x22D3F4u) {
        ctx->pc = 0x22D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3F0u;
        // 0x22d3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3F8u;
        goto label_fallthrough_0x22d3f0;
    }
    ctx->pc = 0x22D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3F0u;
        // 0x22d3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d3f0:
    ctx->pc = 0x22D3F8u;
}
