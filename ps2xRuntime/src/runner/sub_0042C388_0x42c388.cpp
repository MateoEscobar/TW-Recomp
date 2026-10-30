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

// Function: sub_0042C388
// Address: 0x42c388 - 0x42c420
void sub_0042C388_0x42c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C388_0x42c388");
#endif

    switch (ctx->pc) {
        case 0x42c3a0u: goto label_42c3a0;
        case 0x42c3b8u: goto label_42c3b8;
        default: break;
    }

    ctx->pc = 0x42c388u;

    // 0x42c388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42c388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42c38c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x42c38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x42c390: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42c390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42c398: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C398u;
    SET_GPR_U32(ctx, 31, 0x42C3A0u);
    ctx->pc = 0x42C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C398u;
    // 0x42c39c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C398u, 0x42C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C3A0u;
label_42c3a0:
    // 0x42c3a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x42c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c3a4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x42c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x42c3a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C3A8u;
    {
        const bool branch_taken_0x42c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3A8u;
        // 0x42c3ac: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3a8) {
            ctx->pc = 0x42C3B8u;
            goto label_42c3b8;
        }
    }
    ctx->pc = 0x42C3B0u;
    // 0x42c3b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C3B0u;
    {
        const bool branch_taken_0x42c3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3B0u;
        // 0x42c3b4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3b0) {
            ctx->pc = 0x42C3C0u;
            goto label_42c3c0;
        }
    }
    ctx->pc = 0x42C3B8u;
label_42c3b8:
    // 0x42c3b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x42C3B8u;
    {
        const bool branch_taken_0x42c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3B8u;
        // 0x42c3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3b8) {
            ctx->pc = 0x42C410u;
            goto label_42c410;
        }
    }
    ctx->pc = 0x42C3C0u;
label_42c3c0:
    // 0x42c3c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C3C0u;
    {
        const bool branch_taken_0x42c3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3C0u;
        // 0x42c3c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3c0) {
            ctx->pc = 0x42C3D8u;
            goto label_42c3d8;
        }
    }
    ctx->pc = 0x42C3C8u;
    // 0x42c3c8: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x42C3C8u;
    {
        const bool branch_taken_0x42c3c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x42C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3C8u;
        // 0x42c3cc: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3c8) {
            ctx->pc = 0x42C3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c3b8;
        }
    }
    ctx->pc = 0x42C3D0u;
    // 0x42c3d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42C3D0u;
    {
        const bool branch_taken_0x42c3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3D0u;
        // 0x42c3d4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3d0) {
            ctx->pc = 0x42C3F0u;
            goto label_42c3f0;
        }
    }
    ctx->pc = 0x42C3D8u;
label_42c3d8:
    // 0x42c3d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x42c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42c3dc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x42c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x42c3e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42c3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42c3e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c3e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x42C3E8u;
    {
        const bool branch_taken_0x42c3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3E8u;
        // 0x42c3ec: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3e8) {
            ctx->pc = 0x42C410u;
            goto label_42c410;
        }
    }
    ctx->pc = 0x42C3F0u;
label_42c3f0:
    // 0x42c3f0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x42c3f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c3f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x42c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x42c3f8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x42c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x42c3fc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x42c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42c400: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42c404: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42c404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42c408: 0x21823  negu        $v1, $v0
    ctx->pc = 0x42c408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x42c40c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x42c40cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_42c410:
    // 0x42c410: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42c414: 0x3e00008  jr          $ra
    ctx->pc = 0x42C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C414u;
        // 0x42c418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C41Cu;
    // 0x42c41c: 0x0  nop
    ctx->pc = 0x42c41cu;
    // NOP
    ctx->pc = 0x42c420u;
}
