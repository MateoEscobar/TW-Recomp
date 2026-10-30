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

// Function: sub_003638B8
// Address: 0x3638b8 - 0x3639c8
void sub_003638B8_0x3638b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003638B8_0x3638b8");
#endif

    switch (ctx->pc) {
        case 0x3638f0u: goto label_3638f0;
        case 0x3638f8u: goto label_3638f8;
        case 0x36390cu: goto label_36390c;
        case 0x363914u: goto label_363914;
        case 0x363928u: goto label_363928;
        case 0x363930u: goto label_363930;
        case 0x363944u: goto label_363944;
        case 0x36394cu: goto label_36394c;
        case 0x363960u: goto label_363960;
        case 0x363968u: goto label_363968;
        case 0x36397cu: goto label_36397c;
        case 0x363998u: goto label_363998;
        default: break;
    }

    ctx->pc = 0x3638b8u;

    // 0x3638b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3638b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3638bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3638bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3638c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3638c4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3638c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3638c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3638c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3638cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3638ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3638d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3638d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3638d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3638d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3638d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3638d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3638dc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3638dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3638e0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3638e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3638e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3638e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3638e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3638E8u;
    SET_GPR_U32(ctx, 31, 0x3638F0u);
    ctx->pc = 0x3638ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3638E8u;
    // 0x3638ec: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3638E8u, 0x3638F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3638F0u;
label_3638f0:
    // 0x3638f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3638F0u;
    SET_GPR_U32(ctx, 31, 0x3638F8u);
    ctx->pc = 0x3638F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3638F0u;
    // 0x3638f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3638F0u, 0x3638F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3638F8u;
label_3638f8:
    // 0x3638f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3638f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3638fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3638fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363904: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363904u;
    SET_GPR_U32(ctx, 31, 0x36390Cu);
    ctx->pc = 0x363908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363904u;
    // 0x363908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363904u, 0x36390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36390Cu;
label_36390c:
    // 0x36390c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36390Cu;
    SET_GPR_U32(ctx, 31, 0x363914u);
    ctx->pc = 0x363910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36390Cu;
    // 0x363910: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36390Cu, 0x363914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363914u;
label_363914:
    // 0x363914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363918: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x363918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36391c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363920: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363920u;
    SET_GPR_U32(ctx, 31, 0x363928u);
    ctx->pc = 0x363924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363920u;
    // 0x363924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363920u, 0x363928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363928u;
label_363928:
    // 0x363928: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363928u;
    SET_GPR_U32(ctx, 31, 0x363930u);
    ctx->pc = 0x36392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363928u;
    // 0x36392c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363928u, 0x363930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363930u;
label_363930:
    // 0x363930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363934: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x363934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363938: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36393c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36393Cu;
    SET_GPR_U32(ctx, 31, 0x363944u);
    ctx->pc = 0x363940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36393Cu;
    // 0x363940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36393Cu, 0x363944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363944u;
label_363944:
    // 0x363944: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363944u;
    SET_GPR_U32(ctx, 31, 0x36394Cu);
    ctx->pc = 0x363948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363944u;
    // 0x363948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363944u, 0x36394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36394Cu;
label_36394c:
    // 0x36394c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36394cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363954: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363958: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363958u;
    SET_GPR_U32(ctx, 31, 0x363960u);
    ctx->pc = 0x36395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363958u;
    // 0x36395c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363958u, 0x363960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363960u;
label_363960:
    // 0x363960: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x363960u;
    SET_GPR_U32(ctx, 31, 0x363968u);
    ctx->pc = 0x363964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363960u;
    // 0x363964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x363960u, 0x363968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363968u;
label_363968:
    // 0x363968: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x363968u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36396c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363970: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x363970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363974: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363974u;
    SET_GPR_U32(ctx, 31, 0x36397Cu);
    ctx->pc = 0x363978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363974u;
    // 0x363978: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363974u, 0x36397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36397Cu;
label_36397c:
    // 0x36397c: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x36397cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363980: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x363980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363984: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x363984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363988: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x363988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36398c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36398cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363990: 0xc0b570a  jal         func_2D5C28
    ctx->pc = 0x363990u;
    SET_GPR_U32(ctx, 31, 0x363998u);
    ctx->pc = 0x363994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363990u;
    // 0x363994: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C28u, 0x363990u, 0x363998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363998u;
label_363998:
    // 0x363998: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x363998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36399c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36399cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3639a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3639a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3639a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3639a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3639a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3639a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3639ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3639acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3639b0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3639b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3639b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3639b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3639b8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3639b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3639bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3639BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3639C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639BCu;
        // 0x3639c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3639BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3639C4u;
    // 0x3639c4: 0x0  nop
    ctx->pc = 0x3639c4u;
    // NOP
    ctx->pc = 0x3639c8u;
}
