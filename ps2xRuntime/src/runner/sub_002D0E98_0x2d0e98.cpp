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

// Function: sub_002D0E98
// Address: 0x2d0e98 - 0x2d0f68
void sub_002D0E98_0x2d0e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0E98_0x2d0e98");
#endif

    switch (ctx->pc) {
        case 0x2d0ee4u: goto label_2d0ee4;
        case 0x2d0eecu: goto label_2d0eec;
        case 0x2d0efcu: goto label_2d0efc;
        case 0x2d0f04u: goto label_2d0f04;
        case 0x2d0f30u: goto label_2d0f30;
        case 0x2d0f3cu: goto label_2d0f3c;
        default: break;
    }

    ctx->pc = 0x2d0e98u;

    // 0x2d0e98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d0e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d0e9c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d0ea0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d0ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d0ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d0ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ea8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d0eac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d0eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0eb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d0eb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d0eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0eb8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2d0ebc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d0ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ec0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2d0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2d0ec4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2d0ec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ec8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2d0ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d0ecc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2d0eccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ed0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d0ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d0ed4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d0ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d0ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0edc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D0EDCu;
    SET_GPR_U32(ctx, 31, 0x2D0EE4u);
    ctx->pc = 0x2D0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EDCu;
    // 0x2d0ee0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D0EDCu, 0x2D0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EE4u;
label_2d0ee4:
    // 0x2d0ee4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D0EE4u;
    SET_GPR_U32(ctx, 31, 0x2D0EECu);
    ctx->pc = 0x2D0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EE4u;
    // 0x2d0ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D0EE4u, 0x2D0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EECu;
label_2d0eec:
    // 0x2d0eec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0EECu;
    {
        const bool branch_taken_0x2d0eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EECu;
        // 0x2d0ef0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0eec) {
            ctx->pc = 0x2D0F40u;
            goto label_2d0f40;
        }
    }
    ctx->pc = 0x2D0EF4u;
    // 0x2d0ef4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D0EF4u;
    SET_GPR_U32(ctx, 31, 0x2D0EFCu);
    ctx->pc = 0x2D0EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EF4u;
    // 0x2d0ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D0EF4u, 0x2D0EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EFCu;
label_2d0efc:
    // 0x2d0efc: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D0EFCu;
    SET_GPR_U32(ctx, 31, 0x2D0F04u);
    ctx->pc = 0x2D0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EFCu;
    // 0x2d0f00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D0EFCu, 0x2D0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F04u;
label_2d0f04:
    // 0x2d0f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f08: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0F08u;
    {
        const bool branch_taken_0x2d0f08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F08u;
        // 0x2d0f0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f08) {
            ctx->pc = 0x2D0F30u;
            goto label_2d0f30;
        }
    }
    ctx->pc = 0x2D0F10u;
    // 0x2d0f10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d0f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d0f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f18: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d0f18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f1c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2d0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f20: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2d0f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f28: 0xc0b43da  jal         func_2D0F68
    ctx->pc = 0x2D0F28u;
    SET_GPR_U32(ctx, 31, 0x2D0F30u);
    ctx->pc = 0x2D0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F28u;
    // 0x2d0f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F68u, 0x2D0F28u, 0x2D0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F30u;
label_2d0f30:
    // 0x2d0f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f34: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D0F34u;
    SET_GPR_U32(ctx, 31, 0x2D0F3Cu);
    ctx->pc = 0x2D0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F34u;
    // 0x2d0f38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D0F34u, 0x2D0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F3Cu;
label_2d0f3c:
    // 0x2d0f3c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d0f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d0f40:
    // 0x2d0f40: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d0f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d0f44: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d0f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0f48: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d0f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0f4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d0f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0f50: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d0f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0f54: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2d0f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0f5c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2d0f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0f60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F60u;
        // 0x2d0f64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0F68u;
}
