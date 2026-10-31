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

// Function: sub_002E1140
// Address: 0x2e1140 - 0x2e1230
void sub_002E1140_0x2e1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1140_0x2e1140");
#endif

    switch (ctx->pc) {
        case 0x2e119cu: goto label_2e119c;
        case 0x2e11a4u: goto label_2e11a4;
        case 0x2e11b4u: goto label_2e11b4;
        case 0x2e11bcu: goto label_2e11bc;
        case 0x2e11f0u: goto label_2e11f0;
        case 0x2e11fcu: goto label_2e11fc;
        default: break;
    }

    ctx->pc = 0x2e1140u;

    // 0x2e1140: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e1140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e1144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e1144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e1148: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e1148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e114c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1150: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e1150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e1154: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e1154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1158: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e115c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e115cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1160: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e1164: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e1164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1168: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e116c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e116cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1170: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e1170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2e1174: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2e1174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1178: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2e1178u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e117c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2e117cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1180: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2e1180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e1184: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2e1184u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e1188: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e1188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e118c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e1190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e1190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e1194: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E1194u;
    SET_GPR_U32(ctx, 31, 0x2E119Cu);
    ctx->pc = 0x2E1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1194u;
    // 0x2e1198: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E1194u, 0x2E119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E119Cu;
label_2e119c:
    // 0x2e119c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E119Cu;
    SET_GPR_U32(ctx, 31, 0x2E11A4u);
    ctx->pc = 0x2E11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E119Cu;
    // 0x2e11a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E119Cu, 0x2E11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11A4u;
label_2e11a4:
    // 0x2e11a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E11A4u;
    {
        const bool branch_taken_0x2e11a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11A4u;
        // 0x2e11a8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11a4) {
            ctx->pc = 0x2E1200u;
            goto label_2e1200;
        }
    }
    ctx->pc = 0x2E11ACu;
    // 0x2e11ac: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E11ACu;
    SET_GPR_U32(ctx, 31, 0x2E11B4u);
    ctx->pc = 0x2E11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11ACu;
    // 0x2e11b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E11ACu, 0x2E11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11B4u;
label_2e11b4:
    // 0x2e11b4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E11B4u;
    SET_GPR_U32(ctx, 31, 0x2E11BCu);
    ctx->pc = 0x2E11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11B4u;
    // 0x2e11b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E11B4u, 0x2E11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11BCu;
label_2e11bc:
    // 0x2e11bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e11bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11c0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E11C0u;
    {
        const bool branch_taken_0x2e11c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11C0u;
        // 0x2e11c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11c0) {
            ctx->pc = 0x2E11F0u;
            goto label_2e11f0;
        }
    }
    ctx->pc = 0x2E11C8u;
    // 0x2e11c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e11c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e11ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11d0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e11d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e11d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e11d8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2e11d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e11dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e11e0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2e11e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e11e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11e8: 0xc0b848c  jal         func_2E1230
    ctx->pc = 0x2E11E8u;
    SET_GPR_U32(ctx, 31, 0x2E11F0u);
    ctx->pc = 0x2E11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11E8u;
    // 0x2e11ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1230u, 0x2E11E8u, 0x2E11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11F0u;
label_2e11f0:
    // 0x2e11f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e11f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11f4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E11F4u;
    SET_GPR_U32(ctx, 31, 0x2E11FCu);
    ctx->pc = 0x2E11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11F4u;
    // 0x2e11f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E11F4u, 0x2E11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11FCu;
label_2e11fc:
    // 0x2e11fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e11fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e1200:
    // 0x2e1200: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e1200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1204: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e1204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1208: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e1208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e120c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e120cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1210: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e1210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1214: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e1214u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1218: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e1218u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e121c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e121cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1220: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2e1220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e1224: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2e1224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1228: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1228u;
        // 0x2e122c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1230u;
}
