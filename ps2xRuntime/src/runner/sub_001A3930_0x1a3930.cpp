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

// Function: sub_001A3930
// Address: 0x1a3930 - 0x1a3990
void sub_001A3930_0x1a3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3930_0x1a3930");
#endif

    switch (ctx->pc) {
        case 0x1a3948u: goto label_1a3948;
        case 0x1a395cu: goto label_1a395c;
        case 0x1a396cu: goto label_1a396c;
        default: break;
    }

    ctx->pc = 0x1a3930u;

    // 0x1a3930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a393c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3940: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1A3940u;
    SET_GPR_U32(ctx, 31, 0x1A3948u);
    ctx->pc = 0x1A3944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3940u;
    // 0x1a3944: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1A3940u, 0x1A3948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3948u;
label_1a3948:
    // 0x1a3948: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A3948u;
    {
        const bool branch_taken_0x1a3948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3948u;
        // 0x1a394c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3948) {
            ctx->pc = 0x1A397Cu;
            goto label_1a397c;
        }
    }
    ctx->pc = 0x1A3950u;
    // 0x1a3950: 0x8e050204  lw          $a1, 0x204($s0)
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1a3954: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1A3954u;
    SET_GPR_U32(ctx, 31, 0x1A395Cu);
    ctx->pc = 0x1A3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3954u;
    // 0x1a3958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1A3954u, 0x1A395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A395Cu;
label_1a395c:
    // 0x1a395c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A395Cu;
    {
        const bool branch_taken_0x1a395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A395Cu;
        // 0x1a3960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a395c) {
            ctx->pc = 0x1A3978u;
            goto label_1a3978;
        }
    }
    ctx->pc = 0x1A3964u;
    // 0x1a3964: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1A3964u;
    SET_GPR_U32(ctx, 31, 0x1A396Cu);
    ctx->pc = 0x1A3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3964u;
    // 0x1a3968: 0x8c850304  lw          $a1, 0x304($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1A3964u, 0x1A396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A396Cu;
label_1a396c:
    // 0x1a396c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a396cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3970: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3970u;
    {
        const bool branch_taken_0x1a3970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3970u;
        // 0x1a3974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3970) {
            ctx->pc = 0x1A397Cu;
            goto label_1a397c;
        }
    }
    ctx->pc = 0x1A3978u;
label_1a3978:
    // 0x1a3978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a397c:
    // 0x1a397c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a397cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3984: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3984u;
        // 0x1a3988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A398Cu;
    // 0x1a398c: 0x0  nop
    ctx->pc = 0x1a398cu;
    // NOP
    ctx->pc = 0x1a3990u;
}
