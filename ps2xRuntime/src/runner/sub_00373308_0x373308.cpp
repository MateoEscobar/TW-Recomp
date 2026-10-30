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

// Function: sub_00373308
// Address: 0x373308 - 0x373370
void sub_00373308_0x373308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373308_0x373308");
#endif

    switch (ctx->pc) {
        case 0x373328u: goto label_373328;
        case 0x373330u: goto label_373330;
        case 0x373348u: goto label_373348;
        case 0x373354u: goto label_373354;
        default: break;
    }

    ctx->pc = 0x373308u;

    // 0x373308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37330c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373318: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37331c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373320: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373320u;
    SET_GPR_U32(ctx, 31, 0x373328u);
    ctx->pc = 0x373324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373320u;
    // 0x373324: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373320u, 0x373328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373328u;
label_373328:
    // 0x373328: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373328u;
    SET_GPR_U32(ctx, 31, 0x373330u);
    ctx->pc = 0x37332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373328u;
    // 0x37332c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373328u, 0x373330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373330u;
label_373330:
    // 0x373330: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373330u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373338: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373338u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37333c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373340: 0xc1024c6  jal         func_409318
    ctx->pc = 0x373340u;
    SET_GPR_U32(ctx, 31, 0x373348u);
    ctx->pc = 0x373344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373340u;
    // 0x373344: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x373340u, 0x373348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373348u;
label_373348:
    // 0x373348: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x373348u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37334c: 0xc05a8aa  jal         func_16A2A8
    ctx->pc = 0x37334Cu;
    SET_GPR_U32(ctx, 31, 0x373354u);
    ctx->pc = 0x373350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37334Cu;
    // 0x373350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A2A8u, 0x37334Cu, 0x373354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373354u;
label_373354:
    // 0x373354: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37335c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37335cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373364: 0x3e00008  jr          $ra
    ctx->pc = 0x373364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373364u;
        // 0x373368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37336Cu;
    // 0x37336c: 0x0  nop
    ctx->pc = 0x37336cu;
    // NOP
    ctx->pc = 0x373370u;
}
