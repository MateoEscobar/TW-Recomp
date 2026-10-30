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

// Function: sub_0016A538
// Address: 0x16a538 - 0x16a578
void sub_0016A538_0x16a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A538_0x16a538");
#endif

    switch (ctx->pc) {
        case 0x16a560u: goto label_16a560;
        default: break;
    }

    ctx->pc = 0x16a538u;

    // 0x16a538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a53c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a540: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a544: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a54c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a550: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A550u;
    {
        const bool branch_taken_0x16a550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A550u;
        // 0x16a554: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a550) {
            ctx->pc = 0x16A564u;
            goto label_16a564;
        }
    }
    ctx->pc = 0x16A558u;
    // 0x16a558: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A558u;
    SET_GPR_U32(ctx, 31, 0x16A560u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A558u, 0x16A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A560u;
label_16a560:
    // 0x16a560: 0xac500044  sw          $s0, 0x44($v0)
    ctx->pc = 0x16a560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
label_16a564:
    // 0x16a564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a56c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A56Cu;
        // 0x16a570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A574u;
    // 0x16a574: 0x0  nop
    ctx->pc = 0x16a574u;
    // NOP
    ctx->pc = 0x16a578u;
}
