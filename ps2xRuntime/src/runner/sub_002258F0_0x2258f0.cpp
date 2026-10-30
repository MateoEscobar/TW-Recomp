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

// Function: sub_002258F0
// Address: 0x2258f0 - 0x225998
void sub_002258F0_0x2258f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002258F0_0x2258f0");
#endif

    switch (ctx->pc) {
        case 0x225910u: goto label_225910;
        case 0x225924u: goto label_225924;
        case 0x225934u: goto label_225934;
        case 0x225964u: goto label_225964;
        default: break;
    }

    ctx->pc = 0x2258f0u;

    // 0x2258f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2258f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2258f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2258f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2258f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2258f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2258fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2258fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225900: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x225900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x225904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225908: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x225908u;
    SET_GPR_U32(ctx, 31, 0x225910u);
    ctx->pc = 0x22590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225908u;
    // 0x22590c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x225908u, 0x225910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225910u;
label_225910:
    // 0x225910: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x225910u;
    {
        const bool branch_taken_0x225910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225910u;
        // 0x225914: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225910) {
            ctx->pc = 0x225980u;
            goto label_225980;
        }
    }
    ctx->pc = 0x225918u;
    // 0x225918: 0x263000c4  addiu       $s0, $s1, 0xC4
    ctx->pc = 0x225918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x22591c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x22591Cu;
    SET_GPR_U32(ctx, 31, 0x225924u);
    ctx->pc = 0x225920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22591Cu;
    // 0x225920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22591Cu, 0x225924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225924u;
label_225924:
    // 0x225924: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x225924u;
    {
        const bool branch_taken_0x225924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225924u;
        // 0x225928: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225924) {
            ctx->pc = 0x225980u;
            goto label_225980;
        }
    }
    ctx->pc = 0x22592Cu;
    // 0x22592c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x22592Cu;
    SET_GPR_U32(ctx, 31, 0x225934u);
    ctx->pc = 0x225930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22592Cu;
    // 0x225930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22592Cu, 0x225934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225934u;
label_225934:
    // 0x225934: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x225934u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x225938: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x225938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x22593c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22593cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x225940: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x225940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x225944: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x225944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x225948: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x225948u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x22594c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22594Cu;
    {
        const bool branch_taken_0x22594c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22594Cu;
        // 0x225950: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22594c) {
            ctx->pc = 0x225980u;
            goto label_225980;
        }
    }
    ctx->pc = 0x225954u;
    // 0x225954: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x225958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22595c: 0xc088c1a  jal         func_223068
    ctx->pc = 0x22595Cu;
    SET_GPR_U32(ctx, 31, 0x225964u);
    ctx->pc = 0x225960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22595Cu;
    // 0x225960: 0x84500148  lh          $s0, 0x148($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x22595Cu, 0x225964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225964u;
label_225964:
    // 0x225964: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x225964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x225968: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x225968u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22596c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22596Cu;
    {
        const bool branch_taken_0x22596c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22596c) {
            ctx->pc = 0x225970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22596Cu;
            // 0x225970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x225974u;
            goto label_225974;
        }
    }
    ctx->pc = 0x225974u;
label_225974:
    // 0x225974: 0x1012  mflo        $v0
    ctx->pc = 0x225974u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x225978: 0x50902a  slt         $s2, $v0, $s0
    ctx->pc = 0x225978u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22597c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22597cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225980:
    // 0x225980: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x225980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x225984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225988: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x225988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22598c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225990: 0x3e00008  jr          $ra
    ctx->pc = 0x225990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225990u;
        // 0x225994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225998u;
}
