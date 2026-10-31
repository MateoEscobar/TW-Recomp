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

// Function: sub_00484370
// Address: 0x484370 - 0x4843b8
void sub_00484370_0x484370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484370_0x484370");
#endif

    switch (ctx->pc) {
        case 0x484384u: goto label_484384;
        case 0x4843a0u: goto label_4843a0;
        default: break;
    }

    ctx->pc = 0x484370u;

    // 0x484370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x484374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x484374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x484378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x484378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48437c: 0xc120e44  jal         func_483910
    ctx->pc = 0x48437Cu;
    SET_GPR_U32(ctx, 31, 0x484384u);
    ctx->pc = 0x484380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48437Cu;
    // 0x484380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483910u, 0x48437Cu, 0x484384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484384u;
label_484384:
    // 0x484384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x484384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484388: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x484388u;
    {
        const bool branch_taken_0x484388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484388u;
        // 0x48438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484388) {
            ctx->pc = 0x4843A0u;
            goto label_4843a0;
        }
    }
    ctx->pc = 0x484390u;
    // 0x484390: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x484390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x484394: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x484394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x484398: 0xc12105a  jal         func_484168
    ctx->pc = 0x484398u;
    SET_GPR_U32(ctx, 31, 0x4843A0u);
    ctx->pc = 0x48439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484398u;
    // 0x48439c: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x484398u, 0x4843A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4843A0u;
label_4843a0:
    // 0x4843a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4843a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4843a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4843a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4843a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4843a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4843ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4843ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4843B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4843ACu;
        // 0x4843b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4843ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4843B4u;
    // 0x4843b4: 0x0  nop
    ctx->pc = 0x4843b4u;
    // NOP
    ctx->pc = 0x4843b8u;
}
