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

// Function: sub_001808B8
// Address: 0x1808b8 - 0x1809c0
void sub_001808B8_0x1808b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001808B8_0x1808b8");
#endif

    switch (ctx->pc) {
        case 0x1808f0u: goto label_1808f0;
        case 0x18092cu: goto label_18092c;
        case 0x180970u: goto label_180970;
        default: break;
    }

    ctx->pc = 0x1808b8u;

    // 0x1808b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1808b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1808bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1808bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1808c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1808c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1808c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1808c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1808c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1808cc: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1808d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1808d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1808d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1808d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1808d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1808dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1808e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1808e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1808e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808e8: 0xc137c70  jal         func_4DF1C0
    ctx->pc = 0x1808E8u;
    SET_GPR_U32(ctx, 31, 0x1808F0u);
    ctx->pc = 0x1808ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808E8u;
    // 0x1808ec: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x1808E8u, 0x1808F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808F0u;
label_1808f0:
    // 0x1808f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1808f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1808f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1808f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1808f8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1808F8u;
    {
        const bool branch_taken_0x1808f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1808FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808F8u;
        // 0x1808fc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808f8) {
            ctx->pc = 0x180998u;
            goto label_180998;
        }
    }
    ctx->pc = 0x180900u;
    // 0x180900: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x180900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x180904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180908: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180908u;
    {
        const bool branch_taken_0x180908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180908u;
        // 0x18090c: 0x26700030  addiu       $s0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180908) {
            ctx->pc = 0x18091Cu;
            goto label_18091c;
        }
    }
    ctx->pc = 0x180910u;
    // 0x180910: 0x16400024  bnez        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x180910u;
    {
        const bool branch_taken_0x180910 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x180914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180910u;
        // 0x180914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180910) {
            ctx->pc = 0x1809A4u;
            goto label_1809a4;
        }
    }
    ctx->pc = 0x180918u;
    // 0x180918: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18091c:
    // 0x18091c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180924: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x180924u;
    SET_GPR_U32(ctx, 31, 0x18092Cu);
    ctx->pc = 0x180928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180924u;
    // 0x180928: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x180924u, 0x18092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18092Cu;
label_18092c:
    // 0x18092c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x18092cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180930: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x180930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x180934: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180938: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x180938u;
    {
        const bool branch_taken_0x180938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180938u;
        // 0x18093c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180938) {
            ctx->pc = 0x180998u;
            goto label_180998;
        }
    }
    ctx->pc = 0x180940u;
    // 0x180940: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x180944: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180948: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180948u;
    {
        const bool branch_taken_0x180948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180948) {
            ctx->pc = 0x18094Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180948u;
            // 0x18094c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18095Cu;
            goto label_18095c;
        }
    }
    ctx->pc = 0x180950u;
    // 0x180950: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x180950u;
    {
        const bool branch_taken_0x180950 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x180954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180950u;
        // 0x180954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180950) {
            ctx->pc = 0x1809A4u;
            goto label_1809a4;
        }
    }
    ctx->pc = 0x180958u;
    // 0x180958: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_18095c:
    // 0x18095c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18095Cu;
    {
        const bool branch_taken_0x18095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18095Cu;
        // 0x180960: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18095c) {
            ctx->pc = 0x1809A0u;
            goto label_1809a0;
        }
    }
    ctx->pc = 0x180964u;
    // 0x180964: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180968: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x180968u;
    SET_GPR_U32(ctx, 31, 0x180970u);
    ctx->pc = 0x18096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180968u;
    // 0x18096c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x180968u, 0x180970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180970u;
label_180970:
    // 0x180970: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x180974: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180978: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180978u;
    {
        const bool branch_taken_0x180978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180978u;
        // 0x18097c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180978) {
            ctx->pc = 0x180998u;
            goto label_180998;
        }
    }
    ctx->pc = 0x180980u;
    // 0x180980: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x180984: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x180984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180988: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x180988u;
    {
        const bool branch_taken_0x180988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180988u;
        // 0x18098c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180988) {
            ctx->pc = 0x1809A4u;
            goto label_1809a4;
        }
    }
    ctx->pc = 0x180990u;
    // 0x180990: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x180990u;
    {
        const bool branch_taken_0x180990 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180990u;
        // 0x180994: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180990) {
            ctx->pc = 0x1809A8u;
            goto label_1809a8;
        }
    }
    ctx->pc = 0x180998u;
label_180998:
    // 0x180998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180998u;
    {
        const bool branch_taken_0x180998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180998u;
        // 0x18099c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180998) {
            ctx->pc = 0x1809A4u;
            goto label_1809a4;
        }
    }
    ctx->pc = 0x1809A0u;
label_1809a0:
    // 0x1809a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1809a4:
    // 0x1809a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1809a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1809a8:
    // 0x1809a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1809a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1809ac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1809acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1809b0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1809b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1809b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1809b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1809b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1809B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809B8u;
        // 0x1809bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1809B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1809C0u;
}
