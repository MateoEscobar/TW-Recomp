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

// Function: sub_00495400
// Address: 0x495400 - 0x4954f0
void sub_00495400_0x495400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495400_0x495400");
#endif

    switch (ctx->pc) {
        case 0x495438u: goto label_495438;
        case 0x495460u: goto label_495460;
        case 0x495470u: goto label_495470;
        case 0x495480u: goto label_495480;
        case 0x4954b8u: goto label_4954b8;
        case 0x4954ccu: goto label_4954cc;
        default: break;
    }

    ctx->pc = 0x495400u;

    // 0x495400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x495400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x495404: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x495404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x495408: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x495408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49540c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x49540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x495410: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x495410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x495414: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x495414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x495418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49541c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49541cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x495420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x495424: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x495424u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x495428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x495428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49542c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x49542cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x495430: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x495430u;
    SET_GPR_U32(ctx, 31, 0x495438u);
    ctx->pc = 0x495434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495430u;
    // 0x495434: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x495430u, 0x495438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495438u;
label_495438:
    // 0x495438: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x495438u;
    {
        const bool branch_taken_0x495438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495438u;
        // 0x49543c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495438) {
            ctx->pc = 0x4954D4u;
            goto label_4954d4;
        }
    }
    ctx->pc = 0x495440u;
    // 0x495440: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x495440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x495444: 0x8c466e58  lw          $a2, 0x6E58($v0)
    ctx->pc = 0x495444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28248)));
    // 0x495448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x495448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49544c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x49544cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x495450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x495450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495454: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x495454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x495458: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x495458u;
    SET_GPR_U32(ctx, 31, 0x495460u);
    ctx->pc = 0x49545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495458u;
    // 0x49545c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x495458u, 0x495460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495460u;
label_495460:
    // 0x495460: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x495460u;
    {
        const bool branch_taken_0x495460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495460u;
        // 0x495464: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495460) {
            ctx->pc = 0x4954D4u;
            goto label_4954d4;
        }
    }
    ctx->pc = 0x495468u;
    // 0x495468: 0xc12a678  jal         func_4A99E0
    ctx->pc = 0x495468u;
    SET_GPR_U32(ctx, 31, 0x495470u);
    ctx->pc = 0x49546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495468u;
    // 0x49546c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99E0u, 0x495468u, 0x495470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495470u;
label_495470:
    // 0x495470: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x495470u;
    {
        const bool branch_taken_0x495470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495470u;
        // 0x495474: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495470) {
            ctx->pc = 0x4954D4u;
            goto label_4954d4;
        }
    }
    ctx->pc = 0x495478u;
    // 0x495478: 0xc12a678  jal         func_4A99E0
    ctx->pc = 0x495478u;
    SET_GPR_U32(ctx, 31, 0x495480u);
    ctx->pc = 0x49547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495478u;
    // 0x49547c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99E0u, 0x495478u, 0x495480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495480u;
label_495480:
    // 0x495480: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x495480u;
    {
        const bool branch_taken_0x495480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495480u;
        // 0x495484: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495480) {
            ctx->pc = 0x4954D4u;
            goto label_4954d4;
        }
    }
    ctx->pc = 0x495488u;
    // 0x495488: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x495488u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x49548c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x495490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495494: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x495494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x495498: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x495498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x49549c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x49549cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x4954a0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x4954a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4954a4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x4954a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4954a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4954a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4954ac: 0x24700058  addiu       $s0, $v1, 0x58
    ctx->pc = 0x4954acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x4954b0: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x4954B0u;
    SET_GPR_U32(ctx, 31, 0x4954B8u);
    ctx->pc = 0x4954B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4954B0u;
    // 0x4954b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x4954B0u, 0x4954B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4954B8u;
label_4954b8:
    // 0x4954b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4954B8u;
    {
        const bool branch_taken_0x4954b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4954BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4954B8u;
        // 0x4954bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4954b8) {
            ctx->pc = 0x4954D4u;
            goto label_4954d4;
        }
    }
    ctx->pc = 0x4954C0u;
    // 0x4954c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4954c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4954c4: 0xc12539c  jal         func_494E70
    ctx->pc = 0x4954C4u;
    SET_GPR_U32(ctx, 31, 0x4954CCu);
    ctx->pc = 0x4954C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4954C4u;
    // 0x4954c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494E70u, 0x4954C4u, 0x4954CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4954CCu;
label_4954cc:
    // 0x4954cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4954CCu;
    {
        const bool branch_taken_0x4954cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4954CCu;
        // 0x4954d0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4954cc) {
            ctx->pc = 0x4954D8u;
            goto label_4954d8;
        }
    }
    ctx->pc = 0x4954D4u;
label_4954d4:
    // 0x4954d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4954d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4954d8:
    // 0x4954d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4954d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4954dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4954dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4954e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4954e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4954e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4954e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4954e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4954E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4954ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4954E8u;
        // 0x4954ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4954F0u;
}
