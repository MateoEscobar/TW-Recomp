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

// Function: sub_002BB668
// Address: 0x2bb668 - 0x2bb728
void sub_002BB668_0x2bb668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB668_0x2bb668");
#endif

    switch (ctx->pc) {
        case 0x2bb6a8u: goto label_2bb6a8;
        case 0x2bb6dcu: goto label_2bb6dc;
        case 0x2bb6ecu: goto label_2bb6ec;
        default: break;
    }

    ctx->pc = 0x2bb668u;

    // 0x2bb668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bb668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bb66c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2bb66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2bb670: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2bb670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2bb674: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2bb674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb678: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2bb678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2bb67c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2bb67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2bb680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bb680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bb684: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2bb684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2bb688: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BB688u;
    {
        const bool branch_taken_0x2bb688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB688u;
        // 0x2bb68c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb688) {
            ctx->pc = 0x2BB700u;
            goto label_2bb700;
        }
    }
    ctx->pc = 0x2BB690u;
    // 0x2bb690: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2bb690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2bb694: 0x24b10468  addiu       $s1, $a1, 0x468
    ctx->pc = 0x2bb694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
    // 0x2bb698: 0x245310c8  addiu       $s3, $v0, 0x10C8
    ctx->pc = 0x2bb698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x2bb69c: 0x24b203c8  addiu       $s2, $a1, 0x3C8
    ctx->pc = 0x2bb69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 968));
    // 0x2bb6a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bb6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6a4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2bb6a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb6a8:
    // 0x2bb6a8: 0x1695000e  bne         $s4, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2BB6A8u;
    {
        const bool branch_taken_0x2bb6a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x2BB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6A8u;
        // 0x2bb6ac: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6a8) {
            ctx->pc = 0x2BB6E4u;
            goto label_2bb6e4;
        }
    }
    ctx->pc = 0x2BB6B0u;
    // 0x2bb6b0: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x2bb6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2bb6b4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2bb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2bb6b8: 0x804300a0  lb          $v1, 0xA0($v0)
    ctx->pc = 0x2bb6b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2bb6bc: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2BB6BCu;
    {
        const bool branch_taken_0x2bb6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb6bc) {
            ctx->pc = 0x2BB6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB6BCu;
            // 0x2bb6c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB6F0u;
            goto label_2bb6f0;
        }
    }
    ctx->pc = 0x2BB6C4u;
    // 0x2bb6c4: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2bb6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2bb6c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2bb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bb6cc: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x2bb6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bb6d0: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2bb6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2bb6d4: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2BB6D4u;
    SET_GPR_U32(ctx, 31, 0x2BB6DCu);
    ctx->pc = 0x2BB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6D4u;
    // 0x2bb6d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2BB6D4u, 0x2BB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6DCu;
label_2bb6dc:
    // 0x2bb6dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB6DCu;
    {
        const bool branch_taken_0x2bb6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6DCu;
        // 0x2bb6e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6dc) {
            ctx->pc = 0x2BB6F0u;
            goto label_2bb6f0;
        }
    }
    ctx->pc = 0x2BB6E4u;
label_2bb6e4:
    // 0x2bb6e4: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2BB6E4u;
    SET_GPR_U32(ctx, 31, 0x2BB6ECu);
    ctx->pc = 0x2BB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6E4u;
    // 0x2bb6e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2BB6E4u, 0x2BB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6ECu;
label_2bb6ec:
    // 0x2bb6ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2bb6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2bb6f0:
    // 0x2bb6f0: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x2bb6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2bb6f4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2bb6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bb6f8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2BB6F8u;
    {
        const bool branch_taken_0x2bb6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6F8u;
        // 0x2bb6fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6f8) {
            ctx->pc = 0x2BB6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb6a8;
        }
    }
    ctx->pc = 0x2BB700u;
label_2bb700:
    // 0x2bb700: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2bb700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bb704: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2bb704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb708: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2bb708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb70c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bb70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb710: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2bb710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb714: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2bb714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB71Cu;
        // 0x2bb720: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB724u;
    // 0x2bb724: 0x0  nop
    ctx->pc = 0x2bb724u;
    // NOP
    ctx->pc = 0x2bb728u;
}
