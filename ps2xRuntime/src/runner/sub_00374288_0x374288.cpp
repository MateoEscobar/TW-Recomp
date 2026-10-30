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

// Function: sub_00374288
// Address: 0x374288 - 0x374350
void sub_00374288_0x374288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374288_0x374288");
#endif

    switch (ctx->pc) {
        case 0x3742b8u: goto label_3742b8;
        case 0x3742c0u: goto label_3742c0;
        case 0x3742d8u: goto label_3742d8;
        case 0x3742ecu: goto label_3742ec;
        case 0x3742f4u: goto label_3742f4;
        case 0x37430cu: goto label_37430c;
        case 0x374314u: goto label_374314;
        case 0x37432cu: goto label_37432c;
        default: break;
    }

    ctx->pc = 0x374288u;

    // 0x374288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x374288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37428c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374290: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x374290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x374294: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x374294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x374298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37429c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37429cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3742a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3742a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3742a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3742a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3742a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3742ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3742acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3742b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3742B0u;
    SET_GPR_U32(ctx, 31, 0x3742B8u);
    ctx->pc = 0x3742B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742B0u;
    // 0x3742b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3742B0u, 0x3742B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742B8u;
label_3742b8:
    // 0x3742b8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3742B8u;
    SET_GPR_U32(ctx, 31, 0x3742C0u);
    ctx->pc = 0x3742BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742B8u;
    // 0x3742bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3742B8u, 0x3742C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742C0u;
label_3742c0:
    // 0x3742c0: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x3742c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3742c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3742c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742c8: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x3742c8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x3742cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3742ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3742d0: 0xc102488  jal         func_409220
    ctx->pc = 0x3742D0u;
    SET_GPR_U32(ctx, 31, 0x3742D8u);
    ctx->pc = 0x3742D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742D0u;
    // 0x3742d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3742D0u, 0x3742D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742D8u;
label_3742d8:
    // 0x3742d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3742d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3742dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3742e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3742e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3742E4u;
    SET_GPR_U32(ctx, 31, 0x3742ECu);
    ctx->pc = 0x3742E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742E4u;
    // 0x3742e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3742E4u, 0x3742ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742ECu;
label_3742ec:
    // 0x3742ec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3742ECu;
    SET_GPR_U32(ctx, 31, 0x3742F4u);
    ctx->pc = 0x3742F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742ECu;
    // 0x3742f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3742ECu, 0x3742F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742F4u;
label_3742f4:
    // 0x3742f4: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3742f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3742f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3742f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742fc: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3742fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x374300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374304: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374304u;
    SET_GPR_U32(ctx, 31, 0x37430Cu);
    ctx->pc = 0x374308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374304u;
    // 0x374308: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374304u, 0x37430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37430Cu;
label_37430c:
    // 0x37430c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37430Cu;
    SET_GPR_U32(ctx, 31, 0x374314u);
    ctx->pc = 0x374310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37430Cu;
    // 0x374310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37430Cu, 0x374314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374314u;
label_374314:
    // 0x374314: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x374314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x374318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x374318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37431c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37431cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374320: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374324: 0xc05abf2  jal         func_16AFC8
    ctx->pc = 0x374324u;
    SET_GPR_U32(ctx, 31, 0x37432Cu);
    ctx->pc = 0x374328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374324u;
    // 0x374328: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AFC8u, 0x374324u, 0x37432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37432Cu;
label_37432c:
    // 0x37432c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37432cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374334: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x374334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374338: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x374338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37433c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37433cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374340: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x374340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374348: 0x3e00008  jr          $ra
    ctx->pc = 0x374348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374348u;
        // 0x37434c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374350u;
}
