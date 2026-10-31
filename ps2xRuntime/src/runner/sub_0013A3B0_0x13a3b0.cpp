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

// Function: sub_0013A3B0
// Address: 0x13a3b0 - 0x13a448
void sub_0013A3B0_0x13a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A3B0_0x13a3b0");
#endif

    switch (ctx->pc) {
        case 0x13a3b0u: goto label_13a3b0;
        case 0x13a3b4u: goto label_13a3b4;
        case 0x13a3b8u: goto label_13a3b8;
        case 0x13a3bcu: goto label_13a3bc;
        case 0x13a3c0u: goto label_13a3c0;
        case 0x13a3c4u: goto label_13a3c4;
        case 0x13a3c8u: goto label_13a3c8;
        case 0x13a3ccu: goto label_13a3cc;
        case 0x13a3d0u: goto label_13a3d0;
        case 0x13a3d4u: goto label_13a3d4;
        case 0x13a3d8u: goto label_13a3d8;
        case 0x13a3dcu: goto label_13a3dc;
        case 0x13a3e0u: goto label_13a3e0;
        case 0x13a3e4u: goto label_13a3e4;
        case 0x13a3e8u: goto label_13a3e8;
        case 0x13a3ecu: goto label_13a3ec;
        case 0x13a3f0u: goto label_13a3f0;
        case 0x13a3f4u: goto label_13a3f4;
        case 0x13a3f8u: goto label_13a3f8;
        case 0x13a3fcu: goto label_13a3fc;
        case 0x13a400u: goto label_13a400;
        case 0x13a404u: goto label_13a404;
        case 0x13a408u: goto label_13a408;
        case 0x13a40cu: goto label_13a40c;
        case 0x13a410u: goto label_13a410;
        case 0x13a414u: goto label_13a414;
        case 0x13a418u: goto label_13a418;
        case 0x13a41cu: goto label_13a41c;
        case 0x13a420u: goto label_13a420;
        case 0x13a424u: goto label_13a424;
        case 0x13a428u: goto label_13a428;
        case 0x13a42cu: goto label_13a42c;
        case 0x13a430u: goto label_13a430;
        case 0x13a434u: goto label_13a434;
        case 0x13a438u: goto label_13a438;
        case 0x13a43cu: goto label_13a43c;
        case 0x13a440u: goto label_13a440;
        case 0x13a444u: goto label_13a444;
        default: break;
    }

    ctx->pc = 0x13a3b0u;

label_13a3b0:
    // 0x13a3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13a3b4:
    // 0x13a3b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13a3b8:
    // 0x13a3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13a3bc:
    // 0x13a3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13a3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a3c0:
    // 0x13a3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13a3c4:
    // 0x13a3c4: 0x82020331  lb          $v0, 0x331($s0)
    ctx->pc = 0x13a3c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
label_13a3c8:
    // 0x13a3c8: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
label_13a3cc:
    if (ctx->pc == 0x13A3CCu) {
        ctx->pc = 0x13A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3C8u;
        // 0x13a3cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3D0u;
        goto label_13a3d0;
    }
    ctx->pc = 0x13A3C8u;
    {
        const bool branch_taken_0x13a3c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x13A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3C8u;
        // 0x13a3cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3c8) {
            ctx->pc = 0x13A424u;
            goto label_13a424;
        }
    }
    ctx->pc = 0x13A3D0u;
label_13a3d0:
    // 0x13a3d0: 0xc047e6c  jal         func_11F9B0
label_13a3d4:
    if (ctx->pc == 0x13A3D4u) {
        ctx->pc = 0x13A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3D0u;
        // 0x13a3d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3D8u;
        goto label_13a3d8;
    }
    ctx->pc = 0x13A3D0u;
    SET_GPR_U32(ctx, 31, 0x13A3D8u);
    ctx->pc = 0x13A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3D0u;
    // 0x13a3d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13A3D0u, 0x13A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3D8u;
label_13a3d8:
    // 0x13a3d8: 0x50500005  beql        $v0, $s0, . + 4 + (0x5 << 2)
label_13a3dc:
    if (ctx->pc == 0x13A3DCu) {
        ctx->pc = 0x13A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3D8u;
        // 0x13a3dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3E0u;
        goto label_13a3e0;
    }
    ctx->pc = 0x13A3D8u;
    {
        const bool branch_taken_0x13a3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x13a3d8) {
            ctx->pc = 0x13A3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A3D8u;
            // 0x13a3dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A3F0u;
            goto label_13a3f0;
        }
    }
    ctx->pc = 0x13A3E0u;
label_13a3e0:
    // 0x13a3e0: 0xc047e6c  jal         func_11F9B0
label_13a3e4:
    if (ctx->pc == 0x13A3E4u) {
        ctx->pc = 0x13A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3E0u;
        // 0x13a3e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3E8u;
        goto label_13a3e8;
    }
    ctx->pc = 0x13A3E0u;
    SET_GPR_U32(ctx, 31, 0x13A3E8u);
    ctx->pc = 0x13A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3E0u;
    // 0x13a3e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13A3E0u, 0x13A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3E8u;
label_13a3e8:
    // 0x13a3e8: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_13a3ec:
    if (ctx->pc == 0x13A3ECu) {
        ctx->pc = 0x13A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3E8u;
        // 0x13a3ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3F0u;
        goto label_13a3f0;
    }
    ctx->pc = 0x13A3E8u;
    {
        const bool branch_taken_0x13a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x13a3e8) {
            ctx->pc = 0x13A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A3E8u;
            // 0x13a3ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A3F0u;
            goto label_13a3f0;
        }
    }
    ctx->pc = 0x13A3F0u;
label_13a3f0:
    // 0x13a3f0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_13a3f4:
    if (ctx->pc == 0x13A3F4u) {
        ctx->pc = 0x13A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3F0u;
        // 0x13a3f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A3F8u;
        goto label_13a3f8;
    }
    ctx->pc = 0x13A3F0u;
    {
        const bool branch_taken_0x13a3f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3F0u;
        // 0x13a3f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3f0) {
            ctx->pc = 0x13A428u;
            goto label_13a428;
        }
    }
    ctx->pc = 0x13A3F8u;
label_13a3f8:
    // 0x13a3f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13a3fc:
    // 0x13a3fc: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13a3fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13a400:
    // 0x13a400: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13a404:
    // 0x13a404: 0x40f809  jalr        $v0
label_13a408:
    if (ctx->pc == 0x13A408u) {
        ctx->pc = 0x13A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A404u;
        // 0x13a408: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A40Cu;
        goto label_13a40c;
    }
    ctx->pc = 0x13A404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A40Cu);
        ctx->pc = 0x13A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A404u;
        // 0x13a408: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A404u, 0x13A40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A40Cu;
label_13a40c:
    // 0x13a40c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x13a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_13a410:
    // 0x13a410: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a414:
    // 0x13a414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a418:
    // 0x13a418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a41c:
    // 0x13a41c: 0xc047b82  jal         func_11EE08
label_13a420:
    if (ctx->pc == 0x13A420u) {
        ctx->pc = 0x13A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A41Cu;
        // 0x13a420: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A424u;
        goto label_13a424;
    }
    ctx->pc = 0x13A41Cu;
    SET_GPR_U32(ctx, 31, 0x13A424u);
    ctx->pc = 0x13A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A41Cu;
    // 0x13a420: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x13A41Cu, 0x13A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A424u;
label_13a424:
    // 0x13a424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13a428:
    // 0x13a428: 0xa200032f  sb          $zero, 0x32F($s0)
    ctx->pc = 0x13a428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 815), (uint8_t)GPR_U32(ctx, 0));
label_13a42c:
    // 0x13a42c: 0xa2020331  sb          $v0, 0x331($s0)
    ctx->pc = 0x13a42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 2));
label_13a430:
    // 0x13a430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13a430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13a434:
    // 0x13a434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a438:
    // 0x13a438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13a43c:
    // 0x13a43c: 0x3e00008  jr          $ra
label_13a440:
    if (ctx->pc == 0x13A440u) {
        ctx->pc = 0x13A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A43Cu;
        // 0x13a440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A444u;
        goto label_13a444;
    }
    ctx->pc = 0x13A43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A43Cu;
        // 0x13a440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A444u;
label_13a444:
    // 0x13a444: 0x0  nop
    ctx->pc = 0x13a444u;
    // NOP
    ctx->pc = 0x13a448u;
}
