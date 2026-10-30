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

// Function: sub_001E4908
// Address: 0x1e4908 - 0x1e4988
void sub_001E4908_0x1e4908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4908_0x1e4908");
#endif

    switch (ctx->pc) {
        case 0x1e4930u: goto label_1e4930;
        case 0x1e4950u: goto label_1e4950;
        case 0x1e495cu: goto label_1e495c;
        default: break;
    }

    ctx->pc = 0x1e4908u;

    // 0x1e4908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e490c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e4910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4914: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e4914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e4918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e491c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e4920: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e4920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4928: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1E4928u;
    SET_GPR_U32(ctx, 31, 0x1E4930u);
    ctx->pc = 0x1E492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4928u;
    // 0x1e492c: 0x263007a0  addiu       $s0, $s1, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1E4928u, 0x1E4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4930u;
label_1e4930:
    // 0x1e4930: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e4930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4934: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e4934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e4938: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e4938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e493c: 0x2442c3a8  addiu       $v0, $v0, -0x3C58
    ctx->pc = 0x1e493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
    // 0x1e4940: 0x2463c3d0  addiu       $v1, $v1, -0x3C30
    ctx->pc = 0x1e4940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951888));
    // 0x1e4944: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1e4944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x1e4948: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e4948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e494c: 0x0  nop
    ctx->pc = 0x1e494cu;
    // NOP
label_1e4950:
    // 0x1e4950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4954: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1E4954u;
    SET_GPR_U32(ctx, 31, 0x1E495Cu);
    ctx->pc = 0x1E4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4954u;
    // 0x1e4958: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1E4954u, 0x1E495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E495Cu;
label_1e495c:
    // 0x1e495c: 0x0  nop
    ctx->pc = 0x1e495cu;
    // NOP
    // 0x1e4960: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E4960u;
    {
        const bool branch_taken_0x1e4960 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4960u;
        // 0x1e4964: 0x261000d0  addiu       $s0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4960) {
            ctx->pc = 0x1E4950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4950;
        }
    }
    ctx->pc = 0x1E4968u;
    // 0x1e4968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e4968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e496c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e496cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4970: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e4970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4978: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e4978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e497c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e497cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4980: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4980u;
        // 0x1e4984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4988u;
}
