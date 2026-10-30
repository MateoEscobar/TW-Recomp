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

// Function: sub_0042C420
// Address: 0x42c420 - 0x42c4c0
void sub_0042C420_0x42c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C420_0x42c420");
#endif

    switch (ctx->pc) {
        case 0x42c438u: goto label_42c438;
        case 0x42c450u: goto label_42c450;
        default: break;
    }

    ctx->pc = 0x42c420u;

    // 0x42c420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42c424: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x42c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x42c428: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42c428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c42c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42c430: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C430u;
    SET_GPR_U32(ctx, 31, 0x42C438u);
    ctx->pc = 0x42C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C430u;
    // 0x42c434: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C430u, 0x42C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C438u;
label_42c438:
    // 0x42c438: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x42c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c43c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x42c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x42c440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C440u;
    {
        const bool branch_taken_0x42c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C440u;
        // 0x42c444: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c440) {
            ctx->pc = 0x42C450u;
            goto label_42c450;
        }
    }
    ctx->pc = 0x42C448u;
    // 0x42c448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C448u;
    {
        const bool branch_taken_0x42c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C448u;
        // 0x42c44c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c448) {
            ctx->pc = 0x42C458u;
            goto label_42c458;
        }
    }
    ctx->pc = 0x42C450u;
label_42c450:
    // 0x42c450: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x42C450u;
    {
        const bool branch_taken_0x42c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C450u;
        // 0x42c454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c450) {
            ctx->pc = 0x42C4B4u;
            goto label_42c4b4;
        }
    }
    ctx->pc = 0x42C458u;
label_42c458:
    // 0x42c458: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x42C458u;
    {
        const bool branch_taken_0x42c458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C458u;
        // 0x42c45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c458) {
            ctx->pc = 0x42C4B4u;
            goto label_42c4b4;
        }
    }
    ctx->pc = 0x42C460u;
    // 0x42c460: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x42c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x42c464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C464u;
    {
        const bool branch_taken_0x42c464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C464u;
        // 0x42c468: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c464) {
            ctx->pc = 0x42C47Cu;
            goto label_42c47c;
        }
    }
    ctx->pc = 0x42C46Cu;
    // 0x42c46c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x42C46Cu;
    {
        const bool branch_taken_0x42c46c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x42C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C46Cu;
        // 0x42c470: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c46c) {
            ctx->pc = 0x42C450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c450;
        }
    }
    ctx->pc = 0x42C474u;
    // 0x42c474: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C474u;
    {
        const bool branch_taken_0x42c474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c474) {
            ctx->pc = 0x42C478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C474u;
            // 0x42c478: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C488u;
            goto label_42c488;
        }
    }
    ctx->pc = 0x42C47Cu;
label_42c47c:
    // 0x42c47c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x42c480: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x42C480u;
    {
        const bool branch_taken_0x42c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C480u;
        // 0x42c484: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c480) {
            ctx->pc = 0x42C4B4u;
            goto label_42c4b4;
        }
    }
    ctx->pc = 0x42C488u;
label_42c488:
    // 0x42c488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C488u;
    {
        const bool branch_taken_0x42c488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C488u;
        // 0x42c48c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c488) {
            ctx->pc = 0x42C4A0u;
            goto label_42c4a0;
        }
    }
    ctx->pc = 0x42C490u;
    // 0x42c490: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x42c490u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c494: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x42c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x42c498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42C498u;
    {
        const bool branch_taken_0x42c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C498u;
        // 0x42c49c: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c498) {
            ctx->pc = 0x42C4ACu;
            goto label_42c4ac;
        }
    }
    ctx->pc = 0x42C4A0u;
label_42c4a0:
    // 0x42c4a0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x42c4a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c4a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x42c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x42c4a8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x42c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_42c4ac:
    // 0x42c4ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42c4b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42c4b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42c4b4:
    // 0x42c4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42c4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x42C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C4B8u;
        // 0x42c4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C4C0u;
}
