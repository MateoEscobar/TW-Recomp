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

// Function: sub_001224C0
// Address: 0x1224c0 - 0x122548
void sub_001224C0_0x1224c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001224C0_0x1224c0");
#endif

    switch (ctx->pc) {
        case 0x1224f4u: goto label_1224f4;
        case 0x122504u: goto label_122504;
        case 0x122514u: goto label_122514;
        case 0x122528u: goto label_122528;
        default: break;
    }

    ctx->pc = 0x1224c0u;

    // 0x1224c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1224c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1224c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1224c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1224c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1224cc: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1224ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x1224d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1224d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1224d4: 0x261091a8  addiu       $s0, $s0, -0x6E58
    ctx->pc = 0x1224d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939048));
    // 0x1224d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1224d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1224dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1224e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1224e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1224e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1224e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1224ec: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x1224ECu;
    SET_GPR_U32(ctx, 31, 0x1224F4u);
    ctx->pc = 0x1224F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224ECu;
    // 0x1224f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x1224ECu, 0x1224F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224F4u;
label_1224f4:
    // 0x1224f4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1224f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1224f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1224f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224fc: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x1224FCu;
    SET_GPR_U32(ctx, 31, 0x122504u);
    ctx->pc = 0x122500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224FCu;
    // 0x122500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x1224FCu, 0x122504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122504u;
label_122504:
    // 0x122504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12250c: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x12250Cu;
    SET_GPR_U32(ctx, 31, 0x122514u);
    ctx->pc = 0x122510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12250Cu;
    // 0x122510: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x12250Cu, 0x122514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122514u;
label_122514:
    // 0x122514: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x122514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12251c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122520: 0xc136b7c  jal         func_4DADF0
    ctx->pc = 0x122520u;
    SET_GPR_U32(ctx, 31, 0x122528u);
    ctx->pc = 0x122524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122520u;
    // 0x122524: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x122520u, 0x122528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122528u;
label_122528:
    // 0x122528: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x122528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x12252c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12252cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122530: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x122530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122538: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x122538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12253c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122540: 0x3e00008  jr          $ra
    ctx->pc = 0x122540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122540u;
        // 0x122544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122548u;
}
