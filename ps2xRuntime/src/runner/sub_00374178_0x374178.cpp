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

// Function: sub_00374178
// Address: 0x374178 - 0x374200
void sub_00374178_0x374178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374178_0x374178");
#endif

    switch (ctx->pc) {
        case 0x37419cu: goto label_37419c;
        case 0x3741a4u: goto label_3741a4;
        case 0x3741bcu: goto label_3741bc;
        case 0x3741d0u: goto label_3741d0;
        case 0x3741e0u: goto label_3741e0;
        default: break;
    }

    ctx->pc = 0x374178u;

    // 0x374178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37417c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374180: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x374184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37418c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x374190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374194: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374194u;
    SET_GPR_U32(ctx, 31, 0x37419Cu);
    ctx->pc = 0x374198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374194u;
    // 0x374198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374194u, 0x37419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37419Cu;
label_37419c:
    // 0x37419c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37419Cu;
    SET_GPR_U32(ctx, 31, 0x3741A4u);
    ctx->pc = 0x3741A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37419Cu;
    // 0x3741a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37419Cu, 0x3741A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741A4u;
label_3741a4:
    // 0x3741a4: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3741a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3741a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3741a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741ac: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3741acu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3741b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3741b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3741b4: 0xc102488  jal         func_409220
    ctx->pc = 0x3741B4u;
    SET_GPR_U32(ctx, 31, 0x3741BCu);
    ctx->pc = 0x3741B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3741B4u;
    // 0x3741b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3741B4u, 0x3741BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741BCu;
label_3741bc:
    // 0x3741bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3741bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3741c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3741c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3741c8: 0xc102488  jal         func_409220
    ctx->pc = 0x3741C8u;
    SET_GPR_U32(ctx, 31, 0x3741D0u);
    ctx->pc = 0x3741CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3741C8u;
    // 0x3741cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3741C8u, 0x3741D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741D0u;
label_3741d0:
    // 0x3741d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3741d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3741d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741d8: 0xc05ac06  jal         func_16B018
    ctx->pc = 0x3741D8u;
    SET_GPR_U32(ctx, 31, 0x3741E0u);
    ctx->pc = 0x3741DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3741D8u;
    // 0x3741dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B018u, 0x3741D8u, 0x3741E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741E0u;
label_3741e0:
    // 0x3741e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3741e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3741e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3741e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3741e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3741ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3741ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3741f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3741f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3741f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3741F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3741F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741F4u;
        // 0x3741f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3741F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3741FCu;
    // 0x3741fc: 0x0  nop
    ctx->pc = 0x3741fcu;
    // NOP
    ctx->pc = 0x374200u;
}
