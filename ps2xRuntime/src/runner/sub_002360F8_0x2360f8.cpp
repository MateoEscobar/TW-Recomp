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

// Function: sub_002360F8
// Address: 0x2360f8 - 0x236188
void sub_002360F8_0x2360f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002360F8_0x2360f8");
#endif

    switch (ctx->pc) {
        case 0x236128u: goto label_236128;
        case 0x236130u: goto label_236130;
        case 0x23614cu: goto label_23614c;
        case 0x23615cu: goto label_23615c;
        case 0x23616cu: goto label_23616c;
        default: break;
    }

    ctx->pc = 0x2360f8u;

    // 0x2360f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2360f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2360fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2360fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x236100: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x236100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x236104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236108: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x236108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x23610c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23610cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236110: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x236110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x236114: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x236114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236118: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x236118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x23611c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236120: 0xc0e4060  jal         func_390180
    ctx->pc = 0x236120u;
    SET_GPR_U32(ctx, 31, 0x236128u);
    ctx->pc = 0x236124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236120u;
    // 0x236124: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x236120u, 0x236128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236128u;
label_236128:
    // 0x236128: 0xc08a61a  jal         func_229868
    ctx->pc = 0x236128u;
    SET_GPR_U32(ctx, 31, 0x236130u);
    ctx->pc = 0x23612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236128u;
    // 0x23612c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x236128u, 0x236130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236130u;
label_236130:
    // 0x236130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236134: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x236134u;
    {
        const bool branch_taken_0x236134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x236134) {
            ctx->pc = 0x236138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236134u;
            // 0x236138: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236170u;
            goto label_236170;
        }
    }
    ctx->pc = 0x23613Cu;
    // 0x23613c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23613Cu;
    {
        const bool branch_taken_0x23613c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23613c) {
            ctx->pc = 0x23614Cu;
            goto label_23614c;
        }
    }
    ctx->pc = 0x236144u;
    // 0x236144: 0xc0960cc  jal         func_258330
    ctx->pc = 0x236144u;
    SET_GPR_U32(ctx, 31, 0x23614Cu);
    ctx->pc = 0x236148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236144u;
    // 0x236148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258330u, 0x236144u, 0x23614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23614Cu;
label_23614c:
    // 0x23614c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23614Cu;
    {
        const bool branch_taken_0x23614c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23614c) {
            ctx->pc = 0x23615Cu;
            goto label_23615c;
        }
    }
    ctx->pc = 0x236154u;
    // 0x236154: 0xc093390  jal         func_24CE40
    ctx->pc = 0x236154u;
    SET_GPR_U32(ctx, 31, 0x23615Cu);
    ctx->pc = 0x236158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236154u;
    // 0x236158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x236154u, 0x23615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23615Cu;
label_23615c:
    // 0x23615c: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23615Cu;
    {
        const bool branch_taken_0x23615c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23615c) {
            ctx->pc = 0x236160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23615Cu;
            // 0x236160: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236170u;
            goto label_236170;
        }
    }
    ctx->pc = 0x236164u;
    // 0x236164: 0xc095fce  jal         func_257F38
    ctx->pc = 0x236164u;
    SET_GPR_U32(ctx, 31, 0x23616Cu);
    ctx->pc = 0x236168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236164u;
    // 0x236168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x236164u, 0x23616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23616Cu;
label_23616c:
    // 0x23616c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x23616cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_236170:
    // 0x236170: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x236170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x236174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236178: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x236178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23617c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236180: 0x3e00008  jr          $ra
    ctx->pc = 0x236180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236180u;
        // 0x236184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236188u;
}
