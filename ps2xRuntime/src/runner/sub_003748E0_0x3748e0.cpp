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

// Function: sub_003748E0
// Address: 0x3748e0 - 0x374970
void sub_003748E0_0x3748e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003748E0_0x3748e0");
#endif

    switch (ctx->pc) {
        case 0x374908u: goto label_374908;
        case 0x374910u: goto label_374910;
        case 0x374924u: goto label_374924;
        case 0x37492cu: goto label_37492c;
        case 0x374944u: goto label_374944;
        case 0x374954u: goto label_374954;
        default: break;
    }

    ctx->pc = 0x3748e0u;

    // 0x3748e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3748e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3748e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3748e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3748e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3748e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3748ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3748ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3748f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3748f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3748f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3748f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3748fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3748fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374900: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374900u;
    SET_GPR_U32(ctx, 31, 0x374908u);
    ctx->pc = 0x374904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374900u;
    // 0x374904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374900u, 0x374908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374908u;
label_374908:
    // 0x374908: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374908u;
    SET_GPR_U32(ctx, 31, 0x374910u);
    ctx->pc = 0x37490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374908u;
    // 0x37490c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374908u, 0x374910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374910u;
label_374910:
    // 0x374910: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374914: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x374914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37491c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37491Cu;
    SET_GPR_U32(ctx, 31, 0x374924u);
    ctx->pc = 0x374920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37491Cu;
    // 0x374920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37491Cu, 0x374924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374924u;
label_374924:
    // 0x374924: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374924u;
    SET_GPR_U32(ctx, 31, 0x37492Cu);
    ctx->pc = 0x374928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374924u;
    // 0x374928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374924u, 0x37492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37492Cu;
label_37492c:
    // 0x37492c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x37492cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x374930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374934: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x374938: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37493c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37493Cu;
    SET_GPR_U32(ctx, 31, 0x374944u);
    ctx->pc = 0x374940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37493Cu;
    // 0x374940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37493Cu, 0x374944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374944u;
label_374944:
    // 0x374944: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x374944u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x374948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37494c: 0xc107720  jal         func_41DC80
    ctx->pc = 0x37494Cu;
    SET_GPR_U32(ctx, 31, 0x374954u);
    ctx->pc = 0x374950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37494Cu;
    // 0x374950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DC80u, 0x37494Cu, 0x374954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374954u;
label_374954:
    // 0x374954: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x374954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37495c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37495cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374960: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x374960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374968: 0x3e00008  jr          $ra
    ctx->pc = 0x374968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374968u;
        // 0x37496c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374970u;
}
