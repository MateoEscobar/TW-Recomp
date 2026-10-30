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

// Function: sub_0029D378
// Address: 0x29d378 - 0x29d3f8
void sub_0029D378_0x29d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D378_0x29d378");
#endif

    switch (ctx->pc) {
        case 0x29d378u: goto label_29d378;
        case 0x29d37cu: goto label_29d37c;
        case 0x29d380u: goto label_29d380;
        case 0x29d384u: goto label_29d384;
        case 0x29d388u: goto label_29d388;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d390u: goto label_29d390;
        case 0x29d394u: goto label_29d394;
        case 0x29d398u: goto label_29d398;
        case 0x29d39cu: goto label_29d39c;
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3bcu: goto label_29d3bc;
        case 0x29d3c0u: goto label_29d3c0;
        case 0x29d3c4u: goto label_29d3c4;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3ccu: goto label_29d3cc;
        case 0x29d3d0u: goto label_29d3d0;
        case 0x29d3d4u: goto label_29d3d4;
        case 0x29d3d8u: goto label_29d3d8;
        case 0x29d3dcu: goto label_29d3dc;
        case 0x29d3e0u: goto label_29d3e0;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3e8u: goto label_29d3e8;
        case 0x29d3ecu: goto label_29d3ec;
        case 0x29d3f0u: goto label_29d3f0;
        case 0x29d3f4u: goto label_29d3f4;
        default: break;
    }

    ctx->pc = 0x29d378u;

label_29d378:
    // 0x29d378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29d37c:
    // 0x29d37c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x29d37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d380:
    // 0x29d380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29d384:
    // 0x29d384: 0x84e60006  lh          $a2, 0x6($a3)
    ctx->pc = 0x29d384u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_29d388:
    // 0x29d388: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_29d38c:
    if (ctx->pc == 0x29D38Cu) {
        ctx->pc = 0x29D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D388u;
        // 0x29d38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D390u;
        goto label_29d390;
    }
    ctx->pc = 0x29D388u;
    {
        const bool branch_taken_0x29d388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D388u;
        // 0x29d38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d388) {
            ctx->pc = 0x29D3E8u;
            goto label_29d3e8;
        }
    }
    ctx->pc = 0x29D390u;
label_29d390:
    // 0x29d390: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
label_29d394:
    if (ctx->pc == 0x29D394u) {
        ctx->pc = 0x29D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D390u;
        // 0x29d394: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D398u;
        goto label_29d398;
    }
    ctx->pc = 0x29D390u;
    {
        const bool branch_taken_0x29d390 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D390u;
        // 0x29d394: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d390) {
            ctx->pc = 0x29D3B8u;
            goto label_29d3b8;
        }
    }
    ctx->pc = 0x29D398u;
label_29d398:
    // 0x29d398: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x29d398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_29d39c:
    // 0x29d39c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x29d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_29d3a0:
    // 0x29d3a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29d3a4:
    // 0x29d3a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29d3a8:
    // 0x29d3a8: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x29d3a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_29d3ac:
    // 0x29d3ac: 0x8183f  dsra32      $v1, $t0, 0
    ctx->pc = 0x29d3acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 8) >> (32 + 0));
label_29d3b0:
    // 0x29d3b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_29d3b4:
    if (ctx->pc == 0x29D3B4u) {
        ctx->pc = 0x29D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B0u;
        // 0x29d3b4: 0x84e40004  lh          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3B8u;
        goto label_29d3b8;
    }
    ctx->pc = 0x29D3B0u;
    {
        const bool branch_taken_0x29d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B0u;
        // 0x29d3b4: 0x84e40004  lh          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3b0) {
            ctx->pc = 0x29D3C0u;
            goto label_29d3c0;
        }
    }
    ctx->pc = 0x29D3B8u;
label_29d3b8:
    // 0x29d3b8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x29d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_29d3bc:
    // 0x29d3bc: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x29d3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_29d3c0:
    // 0x29d3c0: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
label_29d3c4:
    if (ctx->pc == 0x29D3C4u) {
        ctx->pc = 0x29D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3C0u;
        // 0x29d3c4: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3C8u;
        goto label_29d3c8;
    }
    ctx->pc = 0x29D3C0u;
    {
        const bool branch_taken_0x29d3c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x29D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3C0u;
        // 0x29d3c4: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3c0) {
            ctx->pc = 0x29D3D8u;
            goto label_29d3d8;
        }
    }
    ctx->pc = 0x29D3C8u;
label_29d3c8:
    // 0x29d3c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_29d3cc:
    // 0x29d3cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x29d3ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_29d3d0:
    // 0x29d3d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_29d3d4:
    if (ctx->pc == 0x29D3D4u) {
        ctx->pc = 0x29D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3D0u;
        // 0x29d3d4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3D8u;
        goto label_29d3d8;
    }
    ctx->pc = 0x29D3D0u;
    {
        const bool branch_taken_0x29d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3D0u;
        // 0x29d3d4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3d0) {
            ctx->pc = 0x29D3DCu;
            goto label_29d3dc;
        }
    }
    ctx->pc = 0x29D3D8u;
label_29d3d8:
    // 0x29d3d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29d3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d3dc:
    // 0x29d3dc: 0x60f809  jalr        $v1
label_29d3e0:
    if (ctx->pc == 0x29D3E0u) {
        ctx->pc = 0x29D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3DCu;
        // 0x29d3e0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3E4u;
        goto label_29d3e4;
    }
    ctx->pc = 0x29D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29D3E4u);
        ctx->pc = 0x29D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3DCu;
        // 0x29d3e0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D3DCu, 0x29D3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D3E4u;
label_29d3e4:
    // 0x29d3e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29d3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29d3e8:
    // 0x29d3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d3ec:
    // 0x29d3ec: 0x3e00008  jr          $ra
label_29d3f0:
    if (ctx->pc == 0x29D3F0u) {
        ctx->pc = 0x29D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3ECu;
        // 0x29d3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3F4u;
        goto label_29d3f4;
    }
    ctx->pc = 0x29D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3ECu;
        // 0x29d3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D3F4u;
label_29d3f4:
    // 0x29d3f4: 0x0  nop
    ctx->pc = 0x29d3f4u;
    // NOP
    ctx->pc = 0x29d3f8u;
}
