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

// Function: sub_0035F2F0
// Address: 0x35f2f0 - 0x35f370
void sub_0035F2F0_0x35f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F2F0_0x35f2f0");
#endif

    switch (ctx->pc) {
        case 0x35f318u: goto label_35f318;
        case 0x35f320u: goto label_35f320;
        case 0x35f338u: goto label_35f338;
        case 0x35f340u: goto label_35f340;
        case 0x35f350u: goto label_35f350;
        default: break;
    }

    ctx->pc = 0x35f2f0u;

    // 0x35f2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f2f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f2fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35f300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f308: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f30c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f310: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F310u;
    SET_GPR_U32(ctx, 31, 0x35F318u);
    ctx->pc = 0x35F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F310u;
    // 0x35f314: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F310u, 0x35F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F318u;
label_35f318:
    // 0x35f318: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F318u;
    SET_GPR_U32(ctx, 31, 0x35F320u);
    ctx->pc = 0x35F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F318u;
    // 0x35f31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F318u, 0x35F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F320u;
label_35f320:
    // 0x35f320: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f320u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f324: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35f324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f328: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f328u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f32c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f330: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F330u;
    SET_GPR_U32(ctx, 31, 0x35F338u);
    ctx->pc = 0x35F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F330u;
    // 0x35f334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F330u, 0x35F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F338u;
label_35f338:
    // 0x35f338: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F338u;
    SET_GPR_U32(ctx, 31, 0x35F340u);
    ctx->pc = 0x35F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F338u;
    // 0x35f33c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F338u, 0x35F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F340u;
label_35f340:
    // 0x35f340: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f348: 0xc05ad18  jal         func_16B460
    ctx->pc = 0x35F348u;
    SET_GPR_U32(ctx, 31, 0x35F350u);
    ctx->pc = 0x35F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F348u;
    // 0x35f34c: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B460u, 0x35F348u, 0x35F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F350u;
label_35f350:
    // 0x35f350: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f358: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f35c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f364: 0x3e00008  jr          $ra
    ctx->pc = 0x35F364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F364u;
        // 0x35f368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F36Cu;
    // 0x35f36c: 0x0  nop
    ctx->pc = 0x35f36cu;
    // NOP
    ctx->pc = 0x35f370u;
}
