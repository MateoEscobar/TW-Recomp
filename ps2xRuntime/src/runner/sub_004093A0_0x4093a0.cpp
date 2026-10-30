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

// Function: sub_004093A0
// Address: 0x4093a0 - 0x409438
void sub_004093A0_0x4093a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004093A0_0x4093a0");
#endif

    switch (ctx->pc) {
        case 0x4093c8u: goto label_4093c8;
        case 0x4093d4u: goto label_4093d4;
        case 0x4093e0u: goto label_4093e0;
        case 0x4093ecu: goto label_4093ec;
        case 0x409400u: goto label_409400;
        case 0x409418u: goto label_409418;
        default: break;
    }

    ctx->pc = 0x4093a0u;

    // 0x4093a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4093a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4093a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4093a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4093a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4093a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4093ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4093acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4093b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4093b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4093b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4093b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4093b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4093b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4093bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4093bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4093c0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4093C0u;
    SET_GPR_U32(ctx, 31, 0x4093C8u);
    ctx->pc = 0x4093C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4093C0u;
    // 0x4093c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4093C0u, 0x4093C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4093C8u;
label_4093c8:
    // 0x4093c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4093c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4093cc: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x4093CCu;
    SET_GPR_U32(ctx, 31, 0x4093D4u);
    ctx->pc = 0x4093D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4093CCu;
    // 0x4093d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x4093CCu, 0x4093D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4093D4u;
label_4093d4:
    // 0x4093d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4093d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4093d8: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x4093D8u;
    SET_GPR_U32(ctx, 31, 0x4093E0u);
    ctx->pc = 0x4093DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4093D8u;
    // 0x4093dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x4093D8u, 0x4093E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4093E0u;
label_4093e0:
    // 0x4093e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4093e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4093e4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x4093E4u;
    SET_GPR_U32(ctx, 31, 0x4093ECu);
    ctx->pc = 0x4093E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4093E4u;
    // 0x4093e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x4093E4u, 0x4093ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4093ECu;
label_4093ec:
    // 0x4093ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4093ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4093f0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4093F0u;
    {
        const bool branch_taken_0x4093f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4093F0u;
        // 0x4093f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4093f0) {
            ctx->pc = 0x409408u;
            goto label_409408;
        }
    }
    ctx->pc = 0x4093F8u;
    // 0x4093f8: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x4093F8u;
    SET_GPR_U32(ctx, 31, 0x409400u);
    ctx->pc = 0x4093FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4093F8u;
    // 0x4093fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x4093F8u, 0x409400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409400u;
label_409400:
    // 0x409400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x409400u;
    {
        const bool branch_taken_0x409400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409400u;
        // 0x409404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409400) {
            ctx->pc = 0x40940Cu;
            goto label_40940c;
        }
    }
    ctx->pc = 0x409408u;
label_409408:
    // 0x409408: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x409408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40940c:
    // 0x40940c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409410: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409410u;
    SET_GPR_U32(ctx, 31, 0x409418u);
    ctx->pc = 0x409414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409410u;
    // 0x409414: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409410u, 0x409418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409418u;
label_409418:
    // 0x409418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x409418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40941c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40941cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409420: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409424: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40942c: 0x3e00008  jr          $ra
    ctx->pc = 0x40942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40942Cu;
        // 0x409430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409434u;
    // 0x409434: 0x0  nop
    ctx->pc = 0x409434u;
    // NOP
    ctx->pc = 0x409438u;
}
