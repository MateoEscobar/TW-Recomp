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

// Function: sub_00361730
// Address: 0x361730 - 0x361808
void sub_00361730_0x361730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361730_0x361730");
#endif

    switch (ctx->pc) {
        case 0x36175cu: goto label_36175c;
        case 0x361764u: goto label_361764;
        case 0x361770u: goto label_361770;
        case 0x361788u: goto label_361788;
        case 0x3617a0u: goto label_3617a0;
        case 0x3617a8u: goto label_3617a8;
        case 0x3617c0u: goto label_3617c0;
        case 0x3617c8u: goto label_3617c8;
        case 0x3617e0u: goto label_3617e0;
        default: break;
    }

    ctx->pc = 0x361730u;

    // 0x361730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x361734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x361738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36173c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36173cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361740: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x361740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x361744: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x361744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x361748: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x361748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36174c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x361750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x361750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361754: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361754u;
    SET_GPR_U32(ctx, 31, 0x36175Cu);
    ctx->pc = 0x361758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361754u;
    // 0x361758: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361754u, 0x36175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36175Cu;
label_36175c:
    // 0x36175c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36175Cu;
    SET_GPR_U32(ctx, 31, 0x361764u);
    ctx->pc = 0x361760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36175Cu;
    // 0x361760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36175Cu, 0x361764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361764u;
label_361764:
    // 0x361764: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361768: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x361768u;
    SET_GPR_U32(ctx, 31, 0x361770u);
    ctx->pc = 0x36176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361768u;
    // 0x36176c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x361768u, 0x361770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361770u;
label_361770:
    // 0x361770: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x361770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x361774: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x361774u;
    {
        const bool branch_taken_0x361774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361774u;
        // 0x361778: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361774) {
            ctx->pc = 0x36178Cu;
            goto label_36178c;
        }
    }
    ctx->pc = 0x36177Cu;
    // 0x36177c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361780: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x361780u;
    SET_GPR_U32(ctx, 31, 0x361788u);
    ctx->pc = 0x361784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361780u;
    // 0x361784: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x361780u, 0x361788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361788u;
label_361788:
    // 0x361788: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36178c:
    // 0x36178c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36178cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361790: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361794: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361798: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361798u;
    SET_GPR_U32(ctx, 31, 0x3617A0u);
    ctx->pc = 0x36179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361798u;
    // 0x36179c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361798u, 0x3617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617A0u;
label_3617a0:
    // 0x3617a0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3617A0u;
    SET_GPR_U32(ctx, 31, 0x3617A8u);
    ctx->pc = 0x3617A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617A0u;
    // 0x3617a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3617A0u, 0x3617A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617A8u;
label_3617a8:
    // 0x3617a8: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3617a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3617ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3617acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617b0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3617b0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3617b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3617b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3617B8u;
    SET_GPR_U32(ctx, 31, 0x3617C0u);
    ctx->pc = 0x3617BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617B8u;
    // 0x3617bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3617B8u, 0x3617C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617C0u;
label_3617c0:
    // 0x3617c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3617C0u;
    SET_GPR_U32(ctx, 31, 0x3617C8u);
    ctx->pc = 0x3617C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617C0u;
    // 0x3617c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3617C0u, 0x3617C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617C8u;
label_3617c8:
    // 0x3617c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3617c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3617cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3617ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3617d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3617d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617d8: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x3617D8u;
    SET_GPR_U32(ctx, 31, 0x3617E0u);
    ctx->pc = 0x3617DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3617D8u;
    // 0x3617dc: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A60E0u, 0x3617D8u, 0x3617E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3617E0u;
label_3617e0:
    // 0x3617e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3617e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3617e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3617e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3617e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3617ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3617ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3617f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3617f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3617f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3617f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3617f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3617f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3617fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3617FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3617FCu;
        // 0x361800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3617FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361804u;
    // 0x361804: 0x0  nop
    ctx->pc = 0x361804u;
    // NOP
    ctx->pc = 0x361808u;
}
