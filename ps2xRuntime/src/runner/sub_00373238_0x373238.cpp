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

// Function: sub_00373238
// Address: 0x373238 - 0x3732a0
void sub_00373238_0x373238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373238_0x373238");
#endif

    switch (ctx->pc) {
        case 0x373258u: goto label_373258;
        case 0x373260u: goto label_373260;
        case 0x373278u: goto label_373278;
        case 0x373284u: goto label_373284;
        default: break;
    }

    ctx->pc = 0x373238u;

    // 0x373238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37323c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x373244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37324c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373250: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373250u;
    SET_GPR_U32(ctx, 31, 0x373258u);
    ctx->pc = 0x373254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373250u;
    // 0x373254: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373250u, 0x373258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373258u;
label_373258:
    // 0x373258: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373258u;
    SET_GPR_U32(ctx, 31, 0x373260u);
    ctx->pc = 0x37325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373258u;
    // 0x37325c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373258u, 0x373260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373260u;
label_373260:
    // 0x373260: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373260u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373268: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373268u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37326c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373270: 0xc1024c6  jal         func_409318
    ctx->pc = 0x373270u;
    SET_GPR_U32(ctx, 31, 0x373278u);
    ctx->pc = 0x373274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373270u;
    // 0x373274: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x373270u, 0x373278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373278u;
label_373278:
    // 0x373278: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x373278u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37327c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x37327Cu;
    SET_GPR_U32(ctx, 31, 0x373284u);
    ctx->pc = 0x373280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37327Cu;
    // 0x373280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x37327Cu, 0x373284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373284u;
label_373284:
    // 0x373284: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37328c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37328cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373294: 0x3e00008  jr          $ra
    ctx->pc = 0x373294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373294u;
        // 0x373298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37329Cu;
    // 0x37329c: 0x0  nop
    ctx->pc = 0x37329cu;
    // NOP
    ctx->pc = 0x3732a0u;
}
