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

// Function: sub_00202A30
// Address: 0x202a30 - 0x202ac8
void sub_00202A30_0x202a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202A30_0x202a30");
#endif

    switch (ctx->pc) {
        case 0x202a80u: goto label_202a80;
        case 0x202a90u: goto label_202a90;
        default: break;
    }

    ctx->pc = 0x202a30u;

    // 0x202a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202a34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x202a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x202a38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x202a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x202a3c: 0x24100034  addiu       $s0, $zero, 0x34
    ctx->pc = 0x202a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x202a40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x202a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x202a48: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x202a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x202a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202a58: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x202a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
    // 0x202a5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x202a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a60: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x202a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x202a64: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x202a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x202a68: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x202a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x202a6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x202a6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a70: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x202a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x202a74: 0xa060004e  sb          $zero, 0x4E($v1)
    ctx->pc = 0x202a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x202a78: 0xc10c4de  jal         func_431378
    ctx->pc = 0x202A78u;
    SET_GPR_U32(ctx, 31, 0x202A80u);
    ctx->pc = 0x202A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A78u;
    // 0x202a7c: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x202A78u, 0x202A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A80u;
label_202a80:
    // 0x202a80: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x202a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x202a84: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x202a88: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x202a8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202a90:
    // 0x202a90: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x202a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x202a94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202a98: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x202a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x202a9c: 0x0  nop
    ctx->pc = 0x202a9cu;
    // NOP
    // 0x202aa0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202AA0u;
    {
        const bool branch_taken_0x202aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AA0u;
        // 0x202aa4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202aa0) {
            ctx->pc = 0x202A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a90;
        }
    }
    ctx->pc = 0x202AA8u;
    // 0x202aa8: 0xae320248  sw          $s2, 0x248($s1)
    ctx->pc = 0x202aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 18));
    // 0x202aac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x202aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x202ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202ab4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x202ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202abc: 0x3e00008  jr          $ra
    ctx->pc = 0x202ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202ABCu;
        // 0x202ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202AC4u;
    // 0x202ac4: 0x0  nop
    ctx->pc = 0x202ac4u;
    // NOP
    ctx->pc = 0x202ac8u;
}
