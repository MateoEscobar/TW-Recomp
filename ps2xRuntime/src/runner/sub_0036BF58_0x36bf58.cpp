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

// Function: sub_0036BF58
// Address: 0x36bf58 - 0x36c038
void sub_0036BF58_0x36bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BF58_0x36bf58");
#endif

    switch (ctx->pc) {
        case 0x36bf88u: goto label_36bf88;
        case 0x36bf9cu: goto label_36bf9c;
        case 0x36bfa4u: goto label_36bfa4;
        case 0x36bfb8u: goto label_36bfb8;
        case 0x36bfc0u: goto label_36bfc0;
        case 0x36bfd4u: goto label_36bfd4;
        case 0x36bff4u: goto label_36bff4;
        case 0x36bffcu: goto label_36bffc;
        case 0x36c014u: goto label_36c014;
        default: break;
    }

    ctx->pc = 0x36bf58u;

    // 0x36bf58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36bf5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bf60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36bf64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36bf70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36bf74: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36bf78: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x36bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36bf7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bf80: 0xc102488  jal         func_409220
    ctx->pc = 0x36BF80u;
    SET_GPR_U32(ctx, 31, 0x36BF88u);
    ctx->pc = 0x36BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF80u;
    // 0x36bf84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36BF80u, 0x36BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF88u;
label_36bf88:
    // 0x36bf88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36bf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36bf8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36bf94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BF94u;
    SET_GPR_U32(ctx, 31, 0x36BF9Cu);
    ctx->pc = 0x36BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF94u;
    // 0x36bf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BF94u, 0x36BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF9Cu;
label_36bf9c:
    // 0x36bf9c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36BF9Cu;
    SET_GPR_U32(ctx, 31, 0x36BFA4u);
    ctx->pc = 0x36BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF9Cu;
    // 0x36bfa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36BF9Cu, 0x36BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFA4u;
label_36bfa4:
    // 0x36bfa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36bfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36bfa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36bfb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BFB0u;
    SET_GPR_U32(ctx, 31, 0x36BFB8u);
    ctx->pc = 0x36BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFB0u;
    // 0x36bfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BFB0u, 0x36BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFB8u;
label_36bfb8:
    // 0x36bfb8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36BFB8u;
    SET_GPR_U32(ctx, 31, 0x36BFC0u);
    ctx->pc = 0x36BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFB8u;
    // 0x36bfbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36BFB8u, 0x36BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFC0u;
label_36bfc0:
    // 0x36bfc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36bfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36bfcc: 0xc102488  jal         func_409220
    ctx->pc = 0x36BFCCu;
    SET_GPR_U32(ctx, 31, 0x36BFD4u);
    ctx->pc = 0x36BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFCCu;
    // 0x36bfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36BFCCu, 0x36BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFD4u;
label_36bfd4:
    // 0x36bfd4: 0x34068187  ori         $a2, $zero, 0x8187
    ctx->pc = 0x36bfd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33159);
    // 0x36bfd8: 0x634f8  dsll        $a2, $a2, 19
    ctx->pc = 0x36bfd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 19);
    // 0x36bfdc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x36bfdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x36bfe0: 0x63738  dsll        $a2, $a2, 28
    ctx->pc = 0x36bfe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 28);
    // 0x36bfe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36bfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bfec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BFECu;
    SET_GPR_U32(ctx, 31, 0x36BFF4u);
    ctx->pc = 0x36BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFECu;
    // 0x36bff0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BFECu, 0x36BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFF4u;
label_36bff4:
    // 0x36bff4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36BFF4u;
    SET_GPR_U32(ctx, 31, 0x36BFFCu);
    ctx->pc = 0x36BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BFF4u;
    // 0x36bff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BFF4u, 0x36BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BFFCu;
label_36bffc:
    // 0x36bffc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36bffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c000: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c004: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36c004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c008: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36c008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c00c: 0xc107b28  jal         func_41ECA0
    ctx->pc = 0x36C00Cu;
    SET_GPR_U32(ctx, 31, 0x36C014u);
    ctx->pc = 0x36C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C00Cu;
    // 0x36c010: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ECA0u, 0x36C00Cu, 0x36C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C014u;
label_36c014:
    // 0x36c014: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x36c014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36c018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c01c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x36c01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36c020: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36c020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c024: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x36c024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c028: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x36c028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c030: 0x3e00008  jr          $ra
    ctx->pc = 0x36C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C030u;
        // 0x36c034: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C038u;
}
