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

// Function: sub_00498630
// Address: 0x498630 - 0x4986e8
void sub_00498630_0x498630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498630_0x498630");
#endif

    switch (ctx->pc) {
        case 0x498650u: goto label_498650;
        case 0x498678u: goto label_498678;
        case 0x4986a0u: goto label_4986a0;
        case 0x4986d0u: goto label_4986d0;
        default: break;
    }

    ctx->pc = 0x498630u;

    // 0x498630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x498630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x498634: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x498634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x498638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49863c: 0x2405040c  addiu       $a1, $zero, 0x40C
    ctx->pc = 0x49863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x498640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x498640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x498644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498648: 0xc121942  jal         func_486508
    ctx->pc = 0x498648u;
    SET_GPR_U32(ctx, 31, 0x498650u);
    ctx->pc = 0x49864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498648u;
    // 0x49864c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486508u, 0x498648u, 0x498650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498650u;
label_498650:
    // 0x498650: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x498650u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x498654: 0xaf828a20  sw          $v0, -0x75E0($gp)
    ctx->pc = 0x498654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
    // 0x498658: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x498658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x49865c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x49865Cu;
    {
        const bool branch_taken_0x49865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49865Cu;
        // 0x498660: 0x2405040c  addiu       $a1, $zero, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49865c) {
            ctx->pc = 0x4986DCu;
            goto label_4986dc;
        }
    }
    ctx->pc = 0x498664u;
    // 0x498664: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x498664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x498668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x498668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49866c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49866cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498670: 0xc120b0c  jal         func_482C30
    ctx->pc = 0x498670u;
    SET_GPR_U32(ctx, 31, 0x498678u);
    ctx->pc = 0x498674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498670u;
    // 0x498674: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482C30u, 0x498670u, 0x498678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498678u;
label_498678:
    // 0x498678: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x498678u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x49867c: 0xaf828a24  sw          $v0, -0x75DC($gp)
    ctx->pc = 0x49867cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 2));
    // 0x498680: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x498680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x498684: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x498684u;
    {
        const bool branch_taken_0x498684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498684u;
        // 0x498688: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498684) {
            ctx->pc = 0x4986DCu;
            goto label_4986dc;
        }
    }
    ctx->pc = 0x49868Cu;
    // 0x49868c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x498690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x498694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498698: 0xc12240a  jal         func_489028
    ctx->pc = 0x498698u;
    SET_GPR_U32(ctx, 31, 0x4986A0u);
    ctx->pc = 0x49869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498698u;
    // 0x49869c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489028u, 0x498698u, 0x4986A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4986A0u;
label_4986a0:
    // 0x4986a0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4986a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4986a4: 0xaf828a50  sw          $v0, -0x75B0($gp)
    ctx->pc = 0x4986a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937168), GPR_U32(ctx, 2));
    // 0x4986a8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4986a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4986ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4986ACu;
    {
        const bool branch_taken_0x4986ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4986B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4986ACu;
        // 0x4986b0: 0x3c05004a  lui         $a1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4986ac) {
            ctx->pc = 0x4986DCu;
            goto label_4986dc;
        }
    }
    ctx->pc = 0x4986B4u;
    // 0x4986b4: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4986b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x4986b8: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x4986b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x4986bc: 0x24a586e8  addiu       $a1, $a1, -0x7918
    ctx->pc = 0x4986bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936296));
    // 0x4986c0: 0x24c68760  addiu       $a2, $a2, -0x78A0
    ctx->pc = 0x4986c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936416));
    // 0x4986c4: 0x24e787b8  addiu       $a3, $a3, -0x7848
    ctx->pc = 0x4986c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936504));
    // 0x4986c8: 0xc1204f4  jal         func_4813D0
    ctx->pc = 0x4986C8u;
    SET_GPR_U32(ctx, 31, 0x4986D0u);
    ctx->pc = 0x4986CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4986C8u;
    // 0x4986cc: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4813D0u, 0x4986C8u, 0x4986D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4986D0u;
label_4986d0:
    // 0x4986d0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4986d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4986d4: 0xaf828a50  sw          $v0, -0x75B0($gp)
    ctx->pc = 0x4986d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937168), GPR_U32(ctx, 2));
    // 0x4986d8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4986d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_4986dc:
    // 0x4986dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4986dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4986e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4986E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4986E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4986E0u;
        // 0x4986e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4986E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4986E8u;
}
