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

// Function: sub_002296C0
// Address: 0x2296c0 - 0x229770
void sub_002296C0_0x2296c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002296C0_0x2296c0");
#endif

    switch (ctx->pc) {
        case 0x2296ecu: goto label_2296ec;
        case 0x22970cu: goto label_22970c;
        case 0x229720u: goto label_229720;
        case 0x22972cu: goto label_22972c;
        case 0x229738u: goto label_229738;
        case 0x229748u: goto label_229748;
        case 0x229750u: goto label_229750;
        default: break;
    }

    ctx->pc = 0x2296c0u;

    // 0x2296c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2296c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2296c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2296c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2296c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2296c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2296cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2296ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2296d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2296d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2296d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2296d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2296dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2296dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2296e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2296e4: 0xc0e896e  jal         func_3A25B8
    ctx->pc = 0x2296E4u;
    SET_GPR_U32(ctx, 31, 0x2296ECu);
    ctx->pc = 0x2296E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296E4u;
    // 0x2296e8: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x2296E4u, 0x2296ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296ECu;
label_2296ec:
    // 0x2296ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2296ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296f0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2296F0u;
    {
        const bool branch_taken_0x2296f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296f0) {
            ctx->pc = 0x2296F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2296F0u;
            // 0x2296f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229718u;
            goto label_229718;
        }
    }
    ctx->pc = 0x2296F8u;
    // 0x2296f8: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2296f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x2296fc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2296fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x229700: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229704: 0xc0e8568  jal         func_3A15A0
    ctx->pc = 0x229704u;
    SET_GPR_U32(ctx, 31, 0x22970Cu);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x229704u, 0x22970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22970Cu;
label_22970c:
    // 0x22970c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x22970cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x229710: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x229710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x229714: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x229714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_229718:
    // 0x229718: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x229718u;
    SET_GPR_U32(ctx, 31, 0x229720u);
    ctx->pc = 0x22971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229718u;
    // 0x22971c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x229718u, 0x229720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229720u;
label_229720:
    // 0x229720: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x229724: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x229724u;
    SET_GPR_U32(ctx, 31, 0x22972Cu);
    ctx->pc = 0x229728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229724u;
    // 0x229728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x229724u, 0x22972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22972Cu;
label_22972c:
    // 0x22972c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x229730: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x229730u;
    SET_GPR_U32(ctx, 31, 0x229738u);
    ctx->pc = 0x229734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229730u;
    // 0x229734: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x229730u, 0x229738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229738u;
label_229738:
    // 0x229738: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x229738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x22973c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22973cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229740: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x229740u;
    SET_GPR_U32(ctx, 31, 0x229748u);
    ctx->pc = 0x229744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229740u;
    // 0x229744: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x229740u, 0x229748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229748u;
label_229748:
    // 0x229748: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x229748u;
    SET_GPR_U32(ctx, 31, 0x229750u);
    ctx->pc = 0x22974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229748u;
    // 0x22974c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x229748u, 0x229750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229750u;
label_229750:
    // 0x229750: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x229750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229754: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x229754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22975c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22975cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229764: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x229764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229768: 0x3e00008  jr          $ra
    ctx->pc = 0x229768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229768u;
        // 0x22976c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229770u;
}
