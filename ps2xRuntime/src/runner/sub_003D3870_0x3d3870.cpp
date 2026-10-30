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

// Function: sub_003D3870
// Address: 0x3d3870 - 0x3d38e0
void sub_003D3870_0x3d3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3870_0x3d3870");
#endif

    switch (ctx->pc) {
        case 0x3d3870u: goto label_3d3870;
        case 0x3d3874u: goto label_3d3874;
        case 0x3d3878u: goto label_3d3878;
        case 0x3d387cu: goto label_3d387c;
        case 0x3d3880u: goto label_3d3880;
        case 0x3d3884u: goto label_3d3884;
        case 0x3d3888u: goto label_3d3888;
        case 0x3d388cu: goto label_3d388c;
        case 0x3d3890u: goto label_3d3890;
        case 0x3d3894u: goto label_3d3894;
        case 0x3d3898u: goto label_3d3898;
        case 0x3d389cu: goto label_3d389c;
        case 0x3d38a0u: goto label_3d38a0;
        case 0x3d38a4u: goto label_3d38a4;
        case 0x3d38a8u: goto label_3d38a8;
        case 0x3d38acu: goto label_3d38ac;
        case 0x3d38b0u: goto label_3d38b0;
        case 0x3d38b4u: goto label_3d38b4;
        case 0x3d38b8u: goto label_3d38b8;
        case 0x3d38bcu: goto label_3d38bc;
        case 0x3d38c0u: goto label_3d38c0;
        case 0x3d38c4u: goto label_3d38c4;
        case 0x3d38c8u: goto label_3d38c8;
        case 0x3d38ccu: goto label_3d38cc;
        case 0x3d38d0u: goto label_3d38d0;
        case 0x3d38d4u: goto label_3d38d4;
        case 0x3d38d8u: goto label_3d38d8;
        case 0x3d38dcu: goto label_3d38dc;
        default: break;
    }

    ctx->pc = 0x3d3870u;

label_3d3870:
    // 0x3d3870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d3874:
    // 0x3d3874: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d3874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d3878:
    // 0x3d3878: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d387c:
    // 0x3d387c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d387cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3880:
    // 0x3d3880: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d3880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3d3884:
    // 0x3d3884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d3884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d3888:
    // 0x3d3888: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d3888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d388c:
    // 0x3d388c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d3890:
    // 0x3d3890: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d3890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3894:
    // 0x3d3894: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d3898:
    // 0x3d3898: 0x40f809  jalr        $v0
label_3d389c:
    if (ctx->pc == 0x3D389Cu) {
        ctx->pc = 0x3D389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3898u;
        // 0x3d389c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D38A0u;
        goto label_3d38a0;
    }
    ctx->pc = 0x3D3898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D38A0u);
        ctx->pc = 0x3D389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3898u;
        // 0x3d389c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3898u, 0x3D38A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D38A0u;
label_3d38a0:
    // 0x3d38a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d38a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d38a4:
    // 0x3d38a4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3d38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d38a8:
    // 0x3d38a8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3d38ac:
    if (ctx->pc == 0x3D38ACu) {
        ctx->pc = 0x3D38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38A8u;
        // 0x3d38ac: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D38B0u;
        goto label_3d38b0;
    }
    ctx->pc = 0x3D38A8u;
    {
        const bool branch_taken_0x3d38a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38A8u;
        // 0x3d38ac: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38a8) {
            ctx->pc = 0x3D38C4u;
            goto label_3d38c4;
        }
    }
    ctx->pc = 0x3D38B0u;
label_3d38b0:
    // 0x3d38b0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_3d38b4:
    if (ctx->pc == 0x3D38B4u) {
        ctx->pc = 0x3D38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38B0u;
        // 0x3d38b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D38B8u;
        goto label_3d38b8;
    }
    ctx->pc = 0x3D38B0u;
    {
        const bool branch_taken_0x3d38b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38B0u;
        // 0x3d38b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d38b0) {
            ctx->pc = 0x3D38C8u;
            goto label_3d38c8;
        }
    }
    ctx->pc = 0x3D38B8u;
label_3d38b8:
    // 0x3d38b8: 0xc0ea146  jal         func_3A8518
label_3d38bc:
    if (ctx->pc == 0x3D38BCu) {
        ctx->pc = 0x3D38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38B8u;
        // 0x3d38bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D38C0u;
        goto label_3d38c0;
    }
    ctx->pc = 0x3D38B8u;
    SET_GPR_U32(ctx, 31, 0x3D38C0u);
    ctx->pc = 0x3D38BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D38B8u;
    // 0x3d38bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D38B8u, 0x3D38C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D38C0u;
label_3d38c0:
    // 0x3d38c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3d38c4:
    // 0x3d38c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d38c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d38c8:
    // 0x3d38c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d38c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d38cc:
    // 0x3d38cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d38ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d38d0:
    // 0x3d38d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d38d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d38d4:
    // 0x3d38d4: 0x3e00008  jr          $ra
label_3d38d8:
    if (ctx->pc == 0x3D38D8u) {
        ctx->pc = 0x3D38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38D4u;
        // 0x3d38d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D38DCu;
        goto label_3d38dc;
    }
    ctx->pc = 0x3D38D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D38D4u;
        // 0x3d38d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D38D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D38DCu;
label_3d38dc:
    // 0x3d38dc: 0x0  nop
    ctx->pc = 0x3d38dcu;
    // NOP
    ctx->pc = 0x3d38e0u;
}
