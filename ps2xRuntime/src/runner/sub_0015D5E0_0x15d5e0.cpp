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

// Function: sub_0015D5E0
// Address: 0x15d5e0 - 0x15d648
void sub_0015D5E0_0x15d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D5E0_0x15d5e0");
#endif

    switch (ctx->pc) {
        case 0x15d608u: goto label_15d608;
        case 0x15d628u: goto label_15d628;
        default: break;
    }

    ctx->pc = 0x15d5e0u;

    // 0x15d5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d5e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15d5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d5f4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D5F4u;
    {
        const bool branch_taken_0x15d5f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5F4u;
        // 0x15d5f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5f4) {
            ctx->pc = 0x15D610u;
            goto label_15d610;
        }
    }
    ctx->pc = 0x15D5FCu;
    // 0x15d5fc: 0x260406d8  addiu       $a0, $s0, 0x6D8
    ctx->pc = 0x15d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x15d600: 0xc10c4de  jal         func_431378
    ctx->pc = 0x15D600u;
    SET_GPR_U32(ctx, 31, 0x15D608u);
    ctx->pc = 0x15D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D600u;
    // 0x15d604: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x15D600u, 0x15D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D608u;
label_15d608:
    // 0x15d608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15D608u;
    {
        const bool branch_taken_0x15d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d608) {
            ctx->pc = 0x15D614u;
            goto label_15d614;
        }
    }
    ctx->pc = 0x15D610u;
label_15d610:
    // 0x15d610: 0xa20006d8  sb          $zero, 0x6D8($s0)
    ctx->pc = 0x15d610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1752), (uint8_t)GPR_U32(ctx, 0));
label_15d614:
    // 0x15d614: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D614u;
    {
        const bool branch_taken_0x15d614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D614u;
        // 0x15d618: 0x260406f8  addiu       $a0, $s0, 0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d614) {
            ctx->pc = 0x15D630u;
            goto label_15d630;
        }
    }
    ctx->pc = 0x15D61Cu;
    // 0x15d61c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d620: 0xc10c4de  jal         func_431378
    ctx->pc = 0x15D620u;
    SET_GPR_U32(ctx, 31, 0x15D628u);
    ctx->pc = 0x15D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D620u;
    // 0x15d624: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x15D620u, 0x15D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D628u;
label_15d628:
    // 0x15d628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D628u;
    {
        const bool branch_taken_0x15d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D628u;
        // 0x15d62c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d628) {
            ctx->pc = 0x15D638u;
            goto label_15d638;
        }
    }
    ctx->pc = 0x15D630u;
label_15d630:
    // 0x15d630: 0xa20006f8  sb          $zero, 0x6F8($s0)
    ctx->pc = 0x15d630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1784), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d634: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15d634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d638:
    // 0x15d638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d640: 0x3e00008  jr          $ra
    ctx->pc = 0x15D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D640u;
        // 0x15d644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D648u;
}
