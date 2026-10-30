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

// Function: sub_0026A298
// Address: 0x26a298 - 0x26a408
void sub_0026A298_0x26a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A298_0x26a298");
#endif

    switch (ctx->pc) {
        case 0x26a298u: goto label_26a298;
        case 0x26a29cu: goto label_26a29c;
        case 0x26a2a0u: goto label_26a2a0;
        case 0x26a2a4u: goto label_26a2a4;
        case 0x26a2a8u: goto label_26a2a8;
        case 0x26a2acu: goto label_26a2ac;
        case 0x26a2b0u: goto label_26a2b0;
        case 0x26a2b4u: goto label_26a2b4;
        case 0x26a2b8u: goto label_26a2b8;
        case 0x26a2bcu: goto label_26a2bc;
        case 0x26a2c0u: goto label_26a2c0;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2c8u: goto label_26a2c8;
        case 0x26a2ccu: goto label_26a2cc;
        case 0x26a2d0u: goto label_26a2d0;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a2d8u: goto label_26a2d8;
        case 0x26a2dcu: goto label_26a2dc;
        case 0x26a2e0u: goto label_26a2e0;
        case 0x26a2e4u: goto label_26a2e4;
        case 0x26a2e8u: goto label_26a2e8;
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a2f0u: goto label_26a2f0;
        case 0x26a2f4u: goto label_26a2f4;
        case 0x26a2f8u: goto label_26a2f8;
        case 0x26a2fcu: goto label_26a2fc;
        case 0x26a300u: goto label_26a300;
        case 0x26a304u: goto label_26a304;
        case 0x26a308u: goto label_26a308;
        case 0x26a30cu: goto label_26a30c;
        case 0x26a310u: goto label_26a310;
        case 0x26a314u: goto label_26a314;
        case 0x26a318u: goto label_26a318;
        case 0x26a31cu: goto label_26a31c;
        case 0x26a320u: goto label_26a320;
        case 0x26a324u: goto label_26a324;
        case 0x26a328u: goto label_26a328;
        case 0x26a32cu: goto label_26a32c;
        case 0x26a330u: goto label_26a330;
        case 0x26a334u: goto label_26a334;
        case 0x26a338u: goto label_26a338;
        case 0x26a33cu: goto label_26a33c;
        case 0x26a340u: goto label_26a340;
        case 0x26a344u: goto label_26a344;
        case 0x26a348u: goto label_26a348;
        case 0x26a34cu: goto label_26a34c;
        case 0x26a350u: goto label_26a350;
        case 0x26a354u: goto label_26a354;
        case 0x26a358u: goto label_26a358;
        case 0x26a35cu: goto label_26a35c;
        case 0x26a360u: goto label_26a360;
        case 0x26a364u: goto label_26a364;
        case 0x26a368u: goto label_26a368;
        case 0x26a36cu: goto label_26a36c;
        case 0x26a370u: goto label_26a370;
        case 0x26a374u: goto label_26a374;
        case 0x26a378u: goto label_26a378;
        case 0x26a37cu: goto label_26a37c;
        case 0x26a380u: goto label_26a380;
        case 0x26a384u: goto label_26a384;
        case 0x26a388u: goto label_26a388;
        case 0x26a38cu: goto label_26a38c;
        case 0x26a390u: goto label_26a390;
        case 0x26a394u: goto label_26a394;
        case 0x26a398u: goto label_26a398;
        case 0x26a39cu: goto label_26a39c;
        case 0x26a3a0u: goto label_26a3a0;
        case 0x26a3a4u: goto label_26a3a4;
        case 0x26a3a8u: goto label_26a3a8;
        case 0x26a3acu: goto label_26a3ac;
        case 0x26a3b0u: goto label_26a3b0;
        case 0x26a3b4u: goto label_26a3b4;
        case 0x26a3b8u: goto label_26a3b8;
        case 0x26a3bcu: goto label_26a3bc;
        case 0x26a3c0u: goto label_26a3c0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3c8u: goto label_26a3c8;
        case 0x26a3ccu: goto label_26a3cc;
        case 0x26a3d0u: goto label_26a3d0;
        case 0x26a3d4u: goto label_26a3d4;
        case 0x26a3d8u: goto label_26a3d8;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a3e4u: goto label_26a3e4;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3ecu: goto label_26a3ec;
        case 0x26a3f0u: goto label_26a3f0;
        case 0x26a3f4u: goto label_26a3f4;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a3fcu: goto label_26a3fc;
        case 0x26a400u: goto label_26a400;
        case 0x26a404u: goto label_26a404;
        default: break;
    }

    ctx->pc = 0x26a298u;

label_26a298:
    // 0x26a298: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26a298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26a29c:
    // 0x26a29c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_26a2a0:
    // 0x26a2a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x26a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_26a2a4:
    // 0x26a2a4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26a2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26a2a8:
    // 0x26a2a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x26a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_26a2ac:
    // 0x26a2ac: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26a2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_26a2b0:
    // 0x26a2b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_26a2b4:
    // 0x26a2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a2b8:
    // 0x26a2b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x26a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_26a2bc:
    // 0x26a2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a2c0:
    // 0x26a2c0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x26a2c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_26a2c4:
    // 0x26a2c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26a2c8:
    // 0x26a2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26a2cc:
    // 0x26a2cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x26a2ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_26a2d0:
    // 0x26a2d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x26a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_26a2d4:
    // 0x26a2d4: 0xc041532  jal         func_1054C8
label_26a2d8:
    if (ctx->pc == 0x26A2D8u) {
        ctx->pc = 0x26A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2D4u;
        // 0x26a2d8: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2DCu;
        goto label_26a2dc;
    }
    ctx->pc = 0x26A2D4u;
    SET_GPR_U32(ctx, 31, 0x26A2DCu);
    ctx->pc = 0x26A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2D4u;
    // 0x26a2d8: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A2D4u, 0x26A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2DCu;
label_26a2dc:
    // 0x26a2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a2e0:
    // 0x26a2e0: 0xc041532  jal         func_1054C8
label_26a2e4:
    if (ctx->pc == 0x26A2E4u) {
        ctx->pc = 0x26A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2E0u;
        // 0x26a2e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2E8u;
        goto label_26a2e8;
    }
    ctx->pc = 0x26A2E0u;
    SET_GPR_U32(ctx, 31, 0x26A2E8u);
    ctx->pc = 0x26A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2E0u;
    // 0x26a2e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A2E0u, 0x26A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2E8u;
label_26a2e8:
    // 0x26a2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a2ec:
    // 0x26a2ec: 0xc041532  jal         func_1054C8
label_26a2f0:
    if (ctx->pc == 0x26A2F0u) {
        ctx->pc = 0x26A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2ECu;
        // 0x26a2f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A2F4u;
        goto label_26a2f4;
    }
    ctx->pc = 0x26A2ECu;
    SET_GPR_U32(ctx, 31, 0x26A2F4u);
    ctx->pc = 0x26A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2ECu;
    // 0x26a2f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A2ECu, 0x26A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2F4u;
label_26a2f4:
    // 0x26a2f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a2f8:
    // 0x26a2f8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_26a2fc:
    if (ctx->pc == 0x26A2FCu) {
        ctx->pc = 0x26A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2F8u;
        // 0x26a2fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A300u;
        goto label_26a300;
    }
    ctx->pc = 0x26A2F8u;
    {
        const bool branch_taken_0x26a2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2F8u;
        // 0x26a2fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2f8) {
            ctx->pc = 0x26A318u;
            goto label_26a318;
        }
    }
    ctx->pc = 0x26A300u;
label_26a300:
    // 0x26a300: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26a300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26a304:
    // 0x26a304: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26a308:
    // 0x26a308: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26a30c:
    // 0x26a30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a310:
    // 0x26a310: 0xc041b20  jal         func_106C80
label_26a314:
    if (ctx->pc == 0x26A314u) {
        ctx->pc = 0x26A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A310u;
        // 0x26a314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A318u;
        goto label_26a318;
    }
    ctx->pc = 0x26A310u;
    SET_GPR_U32(ctx, 31, 0x26A318u);
    ctx->pc = 0x26A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A310u;
    // 0x26a314: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26A310u, 0x26A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A318u;
label_26a318:
    // 0x26a318: 0xc05d484  jal         func_175210
label_26a31c:
    if (ctx->pc == 0x26A31Cu) {
        ctx->pc = 0x26A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A318u;
        // 0x26a31c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A320u;
        goto label_26a320;
    }
    ctx->pc = 0x26A318u;
    SET_GPR_U32(ctx, 31, 0x26A320u);
    ctx->pc = 0x26A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A318u;
    // 0x26a31c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26A318u, 0x26A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A320u;
label_26a320:
    // 0x26a320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a324:
    // 0x26a324: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26a324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26a328:
    // 0x26a328: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26a328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26a32c:
    // 0x26a32c: 0xa0f809  jalr        $a1
label_26a330:
    if (ctx->pc == 0x26A330u) {
        ctx->pc = 0x26A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A32Cu;
        // 0x26a330: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A334u;
        goto label_26a334;
    }
    ctx->pc = 0x26A32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26A334u);
        ctx->pc = 0x26A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A32Cu;
        // 0x26a330: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A32Cu, 0x26A334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A334u;
label_26a334:
    // 0x26a334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a338:
    // 0x26a338: 0xc087016  jal         func_21C058
label_26a33c:
    if (ctx->pc == 0x26A33Cu) {
        ctx->pc = 0x26A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A338u;
        // 0x26a33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A340u;
        goto label_26a340;
    }
    ctx->pc = 0x26A338u;
    SET_GPR_U32(ctx, 31, 0x26A340u);
    ctx->pc = 0x26A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A338u;
    // 0x26a33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26A338u, 0x26A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A340u;
label_26a340:
    // 0x26a340: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_26a344:
    if (ctx->pc == 0x26A344u) {
        ctx->pc = 0x26A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A340u;
        // 0x26a344: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A348u;
        goto label_26a348;
    }
    ctx->pc = 0x26A340u;
    {
        const bool branch_taken_0x26a340 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A340u;
        // 0x26a344: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a340) {
            ctx->pc = 0x26A368u;
            goto label_26a368;
        }
    }
    ctx->pc = 0x26A348u;
label_26a348:
    // 0x26a348: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26a34c:
    // 0x26a34c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26a34cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26a350:
    // 0x26a350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a354:
    // 0x26a354: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26a354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26a358:
    // 0x26a358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26a358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a35c:
    // 0x26a35c: 0xc04159e  jal         func_105678
label_26a360:
    if (ctx->pc == 0x26A360u) {
        ctx->pc = 0x26A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A35Cu;
        // 0x26a360: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A364u;
        goto label_26a364;
    }
    ctx->pc = 0x26A35Cu;
    SET_GPR_U32(ctx, 31, 0x26A364u);
    ctx->pc = 0x26A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A35Cu;
    // 0x26a360: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26A35Cu, 0x26A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A364u;
label_26a364:
    // 0x26a364: 0x0  nop
    ctx->pc = 0x26a364u;
    // NOP
label_26a368:
    // 0x26a368: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26a36c:
    // 0x26a36c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26a370:
    // 0x26a370: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_26a374:
    if (ctx->pc == 0x26A374u) {
        ctx->pc = 0x26A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A370u;
        // 0x26a374: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A378u;
        goto label_26a378;
    }
    ctx->pc = 0x26A370u;
    {
        const bool branch_taken_0x26a370 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A370u;
        // 0x26a374: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a370) {
            ctx->pc = 0x26A3B8u;
            goto label_26a3b8;
        }
    }
    ctx->pc = 0x26A378u;
label_26a378:
    // 0x26a378: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26a37c:
    // 0x26a37c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26a37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26a380:
    // 0x26a380: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26a384:
    // 0x26a384: 0x40f809  jalr        $v0
label_26a388:
    if (ctx->pc == 0x26A388u) {
        ctx->pc = 0x26A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A384u;
        // 0x26a388: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A38Cu;
        goto label_26a38c;
    }
    ctx->pc = 0x26A384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A38Cu);
        ctx->pc = 0x26A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A384u;
        // 0x26a388: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A384u, 0x26A38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A38Cu;
label_26a38c:
    // 0x26a38c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26a390:
    // 0x26a390: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26a390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26a394:
    // 0x26a394: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26a398:
    // 0x26a398: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26a398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26a39c:
    // 0x26a39c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26a39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a3a0:
    // 0x26a3a0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26a3a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a3a4:
    // 0x26a3a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a3a8:
    // 0x26a3a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26a3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26a3ac:
    // 0x26a3ac: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x26a3acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_26a3b0:
    // 0x26a3b0: 0xc041664  jal         func_105990
label_26a3b4:
    if (ctx->pc == 0x26A3B4u) {
        ctx->pc = 0x26A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3B0u;
        // 0x26a3b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3B8u;
        goto label_26a3b8;
    }
    ctx->pc = 0x26A3B0u;
    SET_GPR_U32(ctx, 31, 0x26A3B8u);
    ctx->pc = 0x26A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A3B0u;
    // 0x26a3b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26A3B0u, 0x26A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3B8u;
label_26a3b8:
    // 0x26a3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a3bc:
    // 0x26a3bc: 0xc089990  jal         func_226640
label_26a3c0:
    if (ctx->pc == 0x26A3C0u) {
        ctx->pc = 0x26A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3BCu;
        // 0x26a3c0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3C4u;
        goto label_26a3c4;
    }
    ctx->pc = 0x26A3BCu;
    SET_GPR_U32(ctx, 31, 0x26A3C4u);
    ctx->pc = 0x26A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A3BCu;
    // 0x26a3c0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26A3BCu, 0x26A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3C4u;
label_26a3c4:
    // 0x26a3c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a3c8:
    // 0x26a3c8: 0xc05d53a  jal         func_1754E8
label_26a3cc:
    if (ctx->pc == 0x26A3CCu) {
        ctx->pc = 0x26A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3C8u;
        // 0x26a3cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3D0u;
        goto label_26a3d0;
    }
    ctx->pc = 0x26A3C8u;
    SET_GPR_U32(ctx, 31, 0x26A3D0u);
    ctx->pc = 0x26A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A3C8u;
    // 0x26a3cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26A3C8u, 0x26A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3D0u;
label_26a3d0:
    // 0x26a3d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26a3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26a3d4:
    // 0x26a3d4: 0xc05d4f6  jal         func_1753D8
label_26a3d8:
    if (ctx->pc == 0x26A3D8u) {
        ctx->pc = 0x26A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3D4u;
        // 0x26a3d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3DCu;
        goto label_26a3dc;
    }
    ctx->pc = 0x26A3D4u;
    SET_GPR_U32(ctx, 31, 0x26A3DCu);
    ctx->pc = 0x26A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A3D4u;
    // 0x26a3d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26A3D4u, 0x26A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3DCu;
label_26a3dc:
    // 0x26a3dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x26a3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26a3e0:
    // 0x26a3e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x26a3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26a3e4:
    // 0x26a3e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26a3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26a3e8:
    // 0x26a3e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26a3ec:
    // 0x26a3ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x26a3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26a3f0:
    // 0x26a3f0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x26a3f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26a3f4:
    // 0x26a3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26a3f8:
    // 0x26a3f8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x26a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26a3fc:
    // 0x26a3fc: 0x3e00008  jr          $ra
label_26a400:
    if (ctx->pc == 0x26A400u) {
        ctx->pc = 0x26A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3FCu;
        // 0x26a400: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A404u;
        goto label_26a404;
    }
    ctx->pc = 0x26A3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3FCu;
        // 0x26a400: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A404u;
label_26a404:
    // 0x26a404: 0x0  nop
    ctx->pc = 0x26a404u;
    // NOP
    ctx->pc = 0x26a408u;
}
