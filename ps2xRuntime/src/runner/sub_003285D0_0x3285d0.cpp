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

// Function: sub_003285D0
// Address: 0x3285d0 - 0x328668
void sub_003285D0_0x3285d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003285D0_0x3285d0");
#endif

    switch (ctx->pc) {
        case 0x3285f8u: goto label_3285f8;
        case 0x328630u: goto label_328630;
        case 0x328650u: goto label_328650;
        default: break;
    }

    ctx->pc = 0x3285d0u;

    // 0x3285d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3285d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3285d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3285d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3285d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3285d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3285dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3285dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3285e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3285e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3285e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3285e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3285ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3285f0: 0xc0ca0f2  jal         func_3283C8
    ctx->pc = 0x3285F0u;
    SET_GPR_U32(ctx, 31, 0x3285F8u);
    ctx->pc = 0x3285F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285F0u;
    // 0x3285f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283C8u, 0x3285F0u, 0x3285F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285F8u;
label_3285f8:
    // 0x3285f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3285f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3285fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328600: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x328600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x328604: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x328604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x328608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x328608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32860c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x328610: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x328610u;
    {
        const bool branch_taken_0x328610 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x328614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328610u;
        // 0x328614: 0x8c690000  lw          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328610) {
            ctx->pc = 0x328638u;
            goto label_328638;
        }
    }
    ctx->pc = 0x328618u;
    // 0x328618: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x328618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32861c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x32861cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328624: 0x24a552d0  addiu       $a1, $a1, 0x52D0
    ctx->pc = 0x328624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
    // 0x328628: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x328628u;
    SET_GPR_U32(ctx, 31, 0x328630u);
    ctx->pc = 0x32862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328628u;
    // 0x32862c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x328628u, 0x328630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328630u;
label_328630:
    // 0x328630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328630u;
    {
        const bool branch_taken_0x328630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328630u;
        // 0x328634: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328630) {
            ctx->pc = 0x328654u;
            goto label_328654;
        }
    }
    ctx->pc = 0x328638u;
label_328638:
    // 0x328638: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x328638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32863c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328640: 0x24a55300  addiu       $a1, $a1, 0x5300
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    // 0x328644: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x328644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328648: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x328648u;
    SET_GPR_U32(ctx, 31, 0x328650u);
    ctx->pc = 0x32864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328648u;
    // 0x32864c: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x328648u, 0x328650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328650u;
label_328650:
    // 0x328650: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x328650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_328654:
    // 0x328654: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x328654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32865c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328660: 0x3e00008  jr          $ra
    ctx->pc = 0x328660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328660u;
        // 0x328664: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328668u;
}
