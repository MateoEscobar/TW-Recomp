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

// Function: sub_00360870
// Address: 0x360870 - 0x360988
void sub_00360870_0x360870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360870_0x360870");
#endif

    switch (ctx->pc) {
        case 0x3608a4u: goto label_3608a4;
        case 0x3608acu: goto label_3608ac;
        case 0x3608b8u: goto label_3608b8;
        case 0x3608d0u: goto label_3608d0;
        case 0x3608e8u: goto label_3608e8;
        case 0x3608f0u: goto label_3608f0;
        case 0x360904u: goto label_360904;
        case 0x360918u: goto label_360918;
        case 0x360920u: goto label_360920;
        case 0x360934u: goto label_360934;
        case 0x36093cu: goto label_36093c;
        case 0x360958u: goto label_360958;
        default: break;
    }

    ctx->pc = 0x360870u;

    // 0x360870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x360870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x360874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x360874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360878: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x360878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x36087c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360880: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x360880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x360884: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x360884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x360888: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x360888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x36088c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x36088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x360890: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x360890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x360894: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x360894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x360898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36089c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36089Cu;
    SET_GPR_U32(ctx, 31, 0x3608A4u);
    ctx->pc = 0x3608A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36089Cu;
    // 0x3608a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36089Cu, 0x3608A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608A4u;
label_3608a4:
    // 0x3608a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3608A4u;
    SET_GPR_U32(ctx, 31, 0x3608ACu);
    ctx->pc = 0x3608A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608A4u;
    // 0x3608a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3608A4u, 0x3608ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608ACu;
label_3608ac:
    // 0x3608ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3608acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608b0: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x3608B0u;
    SET_GPR_U32(ctx, 31, 0x3608B8u);
    ctx->pc = 0x3608B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608B0u;
    // 0x3608b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x3608B0u, 0x3608B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608B8u;
label_3608b8:
    // 0x3608b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3608b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3608bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3608BCu;
    {
        const bool branch_taken_0x3608bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3608C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608BCu;
        // 0x3608c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608bc) {
            ctx->pc = 0x3608D4u;
            goto label_3608d4;
        }
    }
    ctx->pc = 0x3608C4u;
    // 0x3608c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3608c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608c8: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x3608C8u;
    SET_GPR_U32(ctx, 31, 0x3608D0u);
    ctx->pc = 0x3608CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608C8u;
    // 0x3608cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x3608C8u, 0x3608D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608D0u;
label_3608d0:
    // 0x3608d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3608d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3608d4:
    // 0x3608d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3608d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3608d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3608dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3608dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3608E0u;
    SET_GPR_U32(ctx, 31, 0x3608E8u);
    ctx->pc = 0x3608E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608E0u;
    // 0x3608e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3608E0u, 0x3608E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608E8u;
label_3608e8:
    // 0x3608e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3608E8u;
    SET_GPR_U32(ctx, 31, 0x3608F0u);
    ctx->pc = 0x3608ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608E8u;
    // 0x3608ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3608E8u, 0x3608F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608F0u;
label_3608f0:
    // 0x3608f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3608f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3608f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3608f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3608fc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3608FCu;
    SET_GPR_U32(ctx, 31, 0x360904u);
    ctx->pc = 0x360900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3608FCu;
    // 0x360900: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3608FCu, 0x360904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360904u;
label_360904:
    // 0x360904: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360908: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x360908u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36090c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360910: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360910u;
    SET_GPR_U32(ctx, 31, 0x360918u);
    ctx->pc = 0x360914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360910u;
    // 0x360914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360910u, 0x360918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360918u;
label_360918:
    // 0x360918: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360918u;
    SET_GPR_U32(ctx, 31, 0x360920u);
    ctx->pc = 0x36091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360918u;
    // 0x36091c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360918u, 0x360920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360920u;
label_360920:
    // 0x360920: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x360924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360928: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x360928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36092c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36092Cu;
    SET_GPR_U32(ctx, 31, 0x360934u);
    ctx->pc = 0x360930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36092Cu;
    // 0x360930: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36092Cu, 0x360934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360934u;
label_360934:
    // 0x360934: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360934u;
    SET_GPR_U32(ctx, 31, 0x36093Cu);
    ctx->pc = 0x360938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360934u;
    // 0x360938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360934u, 0x36093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36093Cu;
label_36093c:
    // 0x36093c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360940: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x360940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360944: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x360944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360948: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x360948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36094c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x36094cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360950: 0xc0b816a  jal         func_2E05A8
    ctx->pc = 0x360950u;
    SET_GPR_U32(ctx, 31, 0x360958u);
    ctx->pc = 0x360954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360950u;
    // 0x360954: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E05A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E05A8u, 0x360950u, 0x360958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360958u;
label_360958:
    // 0x360958: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x360958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36095c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36095cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360960: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x360960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x360964: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x360964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360968: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x360968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36096c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x36096cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360970: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x360970u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360974: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x360974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36097c: 0x3e00008  jr          $ra
    ctx->pc = 0x36097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36097Cu;
        // 0x360980: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360984u;
    // 0x360984: 0x0  nop
    ctx->pc = 0x360984u;
    // NOP
    ctx->pc = 0x360988u;
}
