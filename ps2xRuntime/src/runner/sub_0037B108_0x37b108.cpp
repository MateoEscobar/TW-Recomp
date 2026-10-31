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

// Function: sub_0037B108
// Address: 0x37b108 - 0x37b178
void sub_0037B108_0x37b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B108_0x37b108");
#endif

    switch (ctx->pc) {
        case 0x37b128u: goto label_37b128;
        case 0x37b130u: goto label_37b130;
        case 0x37b148u: goto label_37b148;
        case 0x37b150u: goto label_37b150;
        case 0x37b15cu: goto label_37b15c;
        default: break;
    }

    ctx->pc = 0x37b108u;

    // 0x37b108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b10c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b110: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b11c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b120: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B120u;
    SET_GPR_U32(ctx, 31, 0x37B128u);
    ctx->pc = 0x37B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B120u;
    // 0x37b124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B120u, 0x37B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B128u;
label_37b128:
    // 0x37b128: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B128u;
    SET_GPR_U32(ctx, 31, 0x37B130u);
    ctx->pc = 0x37B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B128u;
    // 0x37b12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B128u, 0x37B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B130u;
label_37b130:
    // 0x37b130: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b134: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37b138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b140: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B140u;
    SET_GPR_U32(ctx, 31, 0x37B148u);
    ctx->pc = 0x37B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B140u;
    // 0x37b144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B140u, 0x37B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B148u;
label_37b148:
    // 0x37b148: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B148u;
    SET_GPR_U32(ctx, 31, 0x37B150u);
    ctx->pc = 0x37B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B148u;
    // 0x37b14c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B148u, 0x37B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B150u;
label_37b150:
    // 0x37b150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b154: 0xc107c0c  jal         func_41F030
    ctx->pc = 0x37B154u;
    SET_GPR_U32(ctx, 31, 0x37B15Cu);
    ctx->pc = 0x37B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B154u;
    // 0x37b158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F030u, 0x37B154u, 0x37B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B15Cu;
label_37b15c:
    // 0x37b15c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b16c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B16Cu;
        // 0x37b170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B174u;
    // 0x37b174: 0x0  nop
    ctx->pc = 0x37b174u;
    // NOP
    ctx->pc = 0x37b178u;
}
