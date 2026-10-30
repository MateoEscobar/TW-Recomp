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

// Function: sub_001C4528
// Address: 0x1c4528 - 0x1c45a0
void sub_001C4528_0x1c4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4528_0x1c4528");
#endif

    switch (ctx->pc) {
        case 0x1c455cu: goto label_1c455c;
        case 0x1c4570u: goto label_1c4570;
        case 0x1c4588u: goto label_1c4588;
        default: break;
    }

    ctx->pc = 0x1c4528u;

    // 0x1c4528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c452c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c4530: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c4530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c4534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c453c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4544: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c4544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c4548: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c454c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C454Cu;
    {
        const bool branch_taken_0x1c454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C454Cu;
        // 0x1c4550: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c454c) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4554u;
    // 0x1c4554: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C4554u;
    SET_GPR_U32(ctx, 31, 0x1C455Cu);
    ctx->pc = 0x1C4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4554u;
    // 0x1c4558: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4554u, 0x1C455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C455Cu;
label_1c455c:
    // 0x1c455c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C455Cu;
    {
        const bool branch_taken_0x1c455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C455Cu;
        // 0x1c4560: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c455c) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4564u;
    // 0x1c4564: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c4564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4568: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C4568u;
    SET_GPR_U32(ctx, 31, 0x1C4570u);
    ctx->pc = 0x1C456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4568u;
    // 0x1c456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4568u, 0x1C4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4570u;
label_1c4570:
    // 0x1c4570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4574: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4578: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4578u;
    {
        const bool branch_taken_0x1c4578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4578u;
        // 0x1c457c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4578) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4580u;
    // 0x1c4580: 0xc071168  jal         func_1C45A0
    ctx->pc = 0x1C4580u;
    SET_GPR_U32(ctx, 31, 0x1C4588u);
    ctx->pc = 0x1C4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4580u;
    // 0x1c4584: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C45A0u, 0x1C4580u, 0x1C4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4588u;
label_1c4588:
    // 0x1c4588: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c4588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c458c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c458cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4598: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4598u;
        // 0x1c459c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C45A0u;
}
