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

// Function: sub_00362250
// Address: 0x362250 - 0x362360
void sub_00362250_0x362250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362250_0x362250");
#endif

    switch (ctx->pc) {
        case 0x362284u: goto label_362284;
        case 0x36228cu: goto label_36228c;
        case 0x3622a0u: goto label_3622a0;
        case 0x3622a8u: goto label_3622a8;
        case 0x3622bcu: goto label_3622bc;
        case 0x3622c4u: goto label_3622c4;
        case 0x3622dcu: goto label_3622dc;
        case 0x3622e4u: goto label_3622e4;
        case 0x3622fcu: goto label_3622fc;
        case 0x362304u: goto label_362304;
        case 0x36231cu: goto label_36231c;
        case 0x362338u: goto label_362338;
        default: break;
    }

    ctx->pc = 0x362250u;

    // 0x362250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x362254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362258: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x362258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36225c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x362260: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x362264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362268: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x362268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x36226c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36226cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362270: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x362270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x362274: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x362274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x362278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36227c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36227Cu;
    SET_GPR_U32(ctx, 31, 0x362284u);
    ctx->pc = 0x362280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36227Cu;
    // 0x362280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36227Cu, 0x362284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362284u;
label_362284:
    // 0x362284: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362284u;
    SET_GPR_U32(ctx, 31, 0x36228Cu);
    ctx->pc = 0x362288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362284u;
    // 0x362288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362284u, 0x36228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36228Cu;
label_36228c:
    // 0x36228c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36228cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362290: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x362290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362298: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362298u;
    SET_GPR_U32(ctx, 31, 0x3622A0u);
    ctx->pc = 0x36229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362298u;
    // 0x36229c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362298u, 0x3622A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622A0u;
label_3622a0:
    // 0x3622a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3622A0u;
    SET_GPR_U32(ctx, 31, 0x3622A8u);
    ctx->pc = 0x3622A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622A0u;
    // 0x3622a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3622A0u, 0x3622A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622A8u;
label_3622a8:
    // 0x3622a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3622a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3622acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3622b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3622b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3622B4u;
    SET_GPR_U32(ctx, 31, 0x3622BCu);
    ctx->pc = 0x3622B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622B4u;
    // 0x3622b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3622B4u, 0x3622BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622BCu;
label_3622bc:
    // 0x3622bc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3622BCu;
    SET_GPR_U32(ctx, 31, 0x3622C4u);
    ctx->pc = 0x3622C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622BCu;
    // 0x3622c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3622BCu, 0x3622C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622C4u;
label_3622c4:
    // 0x3622c4: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x3622c4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3622c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3622c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3622ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3622d0: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x3622d0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x3622d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3622D4u;
    SET_GPR_U32(ctx, 31, 0x3622DCu);
    ctx->pc = 0x3622D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622D4u;
    // 0x3622d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3622D4u, 0x3622DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622DCu;
label_3622dc:
    // 0x3622dc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3622DCu;
    SET_GPR_U32(ctx, 31, 0x3622E4u);
    ctx->pc = 0x3622E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622DCu;
    // 0x3622e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3622DCu, 0x3622E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622E4u;
label_3622e4:
    // 0x3622e4: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3622e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3622e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3622e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3622ec: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3622ecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3622f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3622f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3622f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3622F4u;
    SET_GPR_U32(ctx, 31, 0x3622FCu);
    ctx->pc = 0x3622F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622F4u;
    // 0x3622f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3622F4u, 0x3622FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3622FCu;
label_3622fc:
    // 0x3622fc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3622FCu;
    SET_GPR_U32(ctx, 31, 0x362304u);
    ctx->pc = 0x362300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622FCu;
    // 0x362300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3622FCu, 0x362304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362304u;
label_362304:
    // 0x362304: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x362304u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36230c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x36230cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x362310: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x362310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362314: 0xc102488  jal         func_409220
    ctx->pc = 0x362314u;
    SET_GPR_U32(ctx, 31, 0x36231Cu);
    ctx->pc = 0x362318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362314u;
    // 0x362318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x362314u, 0x36231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36231Cu;
label_36231c:
    // 0x36231c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x36231cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x362320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362324: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x362324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362328: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x362328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36232c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36232cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362330: 0xc0a95fa  jal         func_2A57E8
    ctx->pc = 0x362330u;
    SET_GPR_U32(ctx, 31, 0x362338u);
    ctx->pc = 0x362334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362330u;
    // 0x362334: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A57E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A57E8u, 0x362330u, 0x362338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362338u;
label_362338:
    // 0x362338: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x362338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36233c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36233cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362340: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x362340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362344: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x362344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x362348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36234c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36234cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362350: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x362350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362358: 0x3e00008  jr          $ra
    ctx->pc = 0x362358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362358u;
        // 0x36235c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362360u;
}
