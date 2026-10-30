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

// Function: sub_00173068
// Address: 0x173068 - 0x173170
void sub_00173068_0x173068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173068_0x173068");
#endif

    switch (ctx->pc) {
        case 0x1730a0u: goto label_1730a0;
        case 0x1730dcu: goto label_1730dc;
        case 0x173120u: goto label_173120;
        default: break;
    }

    ctx->pc = 0x173068u;

    // 0x173068: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x173068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17306c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x173070: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x173070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x173074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x173074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173078: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x173078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17307c: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x17307cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x173080: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x173080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x173084: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x173084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173088: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x173088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17308c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x173090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173098: 0xc137a1a  jal         func_4DE868
    ctx->pc = 0x173098u;
    SET_GPR_U32(ctx, 31, 0x1730A0u);
    ctx->pc = 0x17309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173098u;
    // 0x17309c: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x173098u, 0x1730A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730A0u;
label_1730a0:
    // 0x1730a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1730a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1730a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1730a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1730a8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1730A8u;
    {
        const bool branch_taken_0x1730a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1730ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730A8u;
        // 0x1730ac: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730a8) {
            ctx->pc = 0x173148u;
            goto label_173148;
        }
    }
    ctx->pc = 0x1730B0u;
    // 0x1730b0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1730b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1730b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1730b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1730B8u;
    {
        const bool branch_taken_0x1730b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1730BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730B8u;
        // 0x1730bc: 0x26700030  addiu       $s0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730b8) {
            ctx->pc = 0x1730CCu;
            goto label_1730cc;
        }
    }
    ctx->pc = 0x1730C0u;
    // 0x1730c0: 0x16400024  bnez        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1730C0u;
    {
        const bool branch_taken_0x1730c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1730C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730C0u;
        // 0x1730c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730c0) {
            ctx->pc = 0x173154u;
            goto label_173154;
        }
    }
    ctx->pc = 0x1730C8u;
    // 0x1730c8: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x1730c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1730cc:
    // 0x1730cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1730d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1730d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730d4: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x1730D4u;
    SET_GPR_U32(ctx, 31, 0x1730DCu);
    ctx->pc = 0x1730D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730D4u;
    // 0x1730d8: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x1730D4u, 0x1730DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730DCu;
label_1730dc:
    // 0x1730dc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1730dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1730e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1730e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1730e8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1730E8u;
    {
        const bool branch_taken_0x1730e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1730ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730E8u;
        // 0x1730ec: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730e8) {
            ctx->pc = 0x173148u;
            goto label_173148;
        }
    }
    ctx->pc = 0x1730F0u;
    // 0x1730f0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1730f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1730f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1730f8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1730F8u;
    {
        const bool branch_taken_0x1730f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1730f8) {
            ctx->pc = 0x1730FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1730F8u;
            // 0x1730fc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17310Cu;
            goto label_17310c;
        }
    }
    ctx->pc = 0x173100u;
    // 0x173100: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x173100u;
    {
        const bool branch_taken_0x173100 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173100u;
        // 0x173104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173100) {
            ctx->pc = 0x173154u;
            goto label_173154;
        }
    }
    ctx->pc = 0x173108u;
    // 0x173108: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x173108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17310c:
    // 0x17310c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17310Cu;
    {
        const bool branch_taken_0x17310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17310Cu;
        // 0x173110: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17310c) {
            ctx->pc = 0x173150u;
            goto label_173150;
        }
    }
    ctx->pc = 0x173114u;
    // 0x173114: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173118: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x173118u;
    SET_GPR_U32(ctx, 31, 0x173120u);
    ctx->pc = 0x17311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173118u;
    // 0x17311c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x173118u, 0x173120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173120u;
label_173120:
    // 0x173120: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x173124: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x173124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173128: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x173128u;
    {
        const bool branch_taken_0x173128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173128u;
        // 0x17312c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173128) {
            ctx->pc = 0x173148u;
            goto label_173148;
        }
    }
    ctx->pc = 0x173130u;
    // 0x173130: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x173130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x173134: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x173138: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173138u;
    {
        const bool branch_taken_0x173138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173138u;
        // 0x17313c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173138) {
            ctx->pc = 0x173154u;
            goto label_173154;
        }
    }
    ctx->pc = 0x173140u;
    // 0x173140: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x173140u;
    {
        const bool branch_taken_0x173140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x173144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173140u;
        // 0x173144: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173140) {
            ctx->pc = 0x173158u;
            goto label_173158;
        }
    }
    ctx->pc = 0x173148u;
label_173148:
    // 0x173148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173148u;
    {
        const bool branch_taken_0x173148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173148u;
        // 0x17314c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173148) {
            ctx->pc = 0x173154u;
            goto label_173154;
        }
    }
    ctx->pc = 0x173150u;
label_173150:
    // 0x173150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173154:
    // 0x173154: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x173154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_173158:
    // 0x173158: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x173158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17315c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17315cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173160: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x173160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173164: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173168: 0x3e00008  jr          $ra
    ctx->pc = 0x173168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173168u;
        // 0x17316c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173170u;
}
