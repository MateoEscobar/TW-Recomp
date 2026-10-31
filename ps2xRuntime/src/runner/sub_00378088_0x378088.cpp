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

// Function: sub_00378088
// Address: 0x378088 - 0x378160
void sub_00378088_0x378088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378088_0x378088");
#endif

    switch (ctx->pc) {
        case 0x3780b0u: goto label_3780b0;
        case 0x3780b8u: goto label_3780b8;
        case 0x3780c8u: goto label_3780c8;
        case 0x3780e0u: goto label_3780e0;
        case 0x3780e8u: goto label_3780e8;
        case 0x378104u: goto label_378104;
        case 0x378110u: goto label_378110;
        case 0x378120u: goto label_378120;
        case 0x378134u: goto label_378134;
        default: break;
    }

    ctx->pc = 0x378088u;

    // 0x378088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x378088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37808c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37808cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378090: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x378090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x378094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x378094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378098: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x378098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37809c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3780a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3780a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3780a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3780a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3780a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3780A8u;
    SET_GPR_U32(ctx, 31, 0x3780B0u);
    ctx->pc = 0x3780ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780A8u;
    // 0x3780ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3780A8u, 0x3780B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3780B0u;
label_3780b0:
    // 0x3780b0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3780B0u;
    SET_GPR_U32(ctx, 31, 0x3780B8u);
    ctx->pc = 0x3780B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780B0u;
    // 0x3780b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3780B0u, 0x3780B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3780B8u;
label_3780b8:
    // 0x3780b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3780b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3780bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780c0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3780c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780c4: 0x0  nop
    ctx->pc = 0x3780c4u;
    // NOP
label_3780c8:
    // 0x3780c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3780c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3780cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3780ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3780d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3780d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3780d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780d8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3780D8u;
    SET_GPR_U32(ctx, 31, 0x3780E0u);
    ctx->pc = 0x3780DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780D8u;
    // 0x3780dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3780D8u, 0x3780E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3780E0u;
label_3780e0:
    // 0x3780e0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3780E0u;
    SET_GPR_U32(ctx, 31, 0x3780E8u);
    ctx->pc = 0x3780E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780E0u;
    // 0x3780e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3780E0u, 0x3780E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3780E8u;
label_3780e8:
    // 0x3780e8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3780e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3780ec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3780ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3780f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3780F0u;
    {
        const bool branch_taken_0x3780f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3780F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780F0u;
        // 0x3780f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780f0) {
            ctx->pc = 0x3780C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3780c8;
        }
    }
    ctx->pc = 0x3780F8u;
    // 0x3780f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3780f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3780fc: 0xc0e5af4  jal         func_396BD0
    ctx->pc = 0x3780FCu;
    SET_GPR_U32(ctx, 31, 0x378104u);
    ctx->pc = 0x378100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3780FCu;
    // 0x378100: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396BD0u, 0x3780FCu, 0x378104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378104u;
label_378104:
    // 0x378104: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378108: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x378108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37810c: 0x0  nop
    ctx->pc = 0x37810cu;
    // NOP
label_378110:
    // 0x378110: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x378110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x378114: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378118: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378118u;
    SET_GPR_U32(ctx, 31, 0x378120u);
    ctx->pc = 0x37811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378118u;
    // 0x37811c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378118u, 0x378120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378120u;
label_378120:
    // 0x378120: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378128: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37812c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37812Cu;
    SET_GPR_U32(ctx, 31, 0x378134u);
    ctx->pc = 0x378130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37812Cu;
    // 0x378130: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37812Cu, 0x378134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378134u;
label_378134:
    // 0x378134: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x378134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378138: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378138u;
    {
        const bool branch_taken_0x378138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378138u;
        // 0x37813c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378138) {
            ctx->pc = 0x378110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378110;
        }
    }
    ctx->pc = 0x378140u;
    // 0x378140: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x378140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x378144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378148: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x378148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37814c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37814cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378150: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x378150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378158: 0x3e00008  jr          $ra
    ctx->pc = 0x378158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378158u;
        // 0x37815c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378160u;
}
