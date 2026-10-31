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

// Function: sub_0037B7D8
// Address: 0x37b7d8 - 0x37b850
void sub_0037B7D8_0x37b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B7D8_0x37b7d8");
#endif

    switch (ctx->pc) {
        case 0x37b800u: goto label_37b800;
        case 0x37b808u: goto label_37b808;
        case 0x37b820u: goto label_37b820;
        case 0x37b828u: goto label_37b828;
        case 0x37b834u: goto label_37b834;
        default: break;
    }

    ctx->pc = 0x37b7d8u;

    // 0x37b7d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37b7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37b7dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b7e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37b7e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37b7e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37b7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37b7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37b7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37b7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b7f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B7F8u;
    SET_GPR_U32(ctx, 31, 0x37B800u);
    ctx->pc = 0x37B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7F8u;
    // 0x37b7fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B7F8u, 0x37B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B800u;
label_37b800:
    // 0x37b800: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B800u;
    SET_GPR_U32(ctx, 31, 0x37B808u);
    ctx->pc = 0x37B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B800u;
    // 0x37b804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B800u, 0x37B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B808u;
label_37b808:
    // 0x37b808: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x37b808u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b80c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37b80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b810: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37b810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b814: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x37b814u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37b818: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B818u;
    SET_GPR_U32(ctx, 31, 0x37B820u);
    ctx->pc = 0x37B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B818u;
    // 0x37b81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B818u, 0x37B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B820u;
label_37b820:
    // 0x37b820: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37B820u;
    SET_GPR_U32(ctx, 31, 0x37B828u);
    ctx->pc = 0x37B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B820u;
    // 0x37b824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37B820u, 0x37B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B828u;
label_37b828:
    // 0x37b828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b82c: 0xc106b36  jal         func_41ACD8
    ctx->pc = 0x37B82Cu;
    SET_GPR_U32(ctx, 31, 0x37B834u);
    ctx->pc = 0x37B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B82Cu;
    // 0x37b830: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ACD8u, 0x37B82Cu, 0x37B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B834u;
label_37b834:
    // 0x37b834: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37b834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b83c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37b83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b840: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37b840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b848: 0x3e00008  jr          $ra
    ctx->pc = 0x37B848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B848u;
        // 0x37b84c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B850u;
}
