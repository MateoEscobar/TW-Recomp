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

// Function: sub_00379EA0
// Address: 0x379ea0 - 0x379f80
void sub_00379EA0_0x379ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379EA0_0x379ea0");
#endif

    switch (ctx->pc) {
        case 0x379ed4u: goto label_379ed4;
        case 0x379edcu: goto label_379edc;
        case 0x379ef0u: goto label_379ef0;
        case 0x379f04u: goto label_379f04;
        case 0x379f0cu: goto label_379f0c;
        case 0x379f20u: goto label_379f20;
        case 0x379f34u: goto label_379f34;
        case 0x379f3cu: goto label_379f3c;
        case 0x379f54u: goto label_379f54;
        default: break;
    }

    ctx->pc = 0x379ea0u;

    // 0x379ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x379ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x379ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379ea8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x379ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x379eac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x379eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x379eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379eb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379eb8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x379eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x379ebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x379ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x379ec0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x379ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x379ec4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x379ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x379ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379ecc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379ECCu;
    SET_GPR_U32(ctx, 31, 0x379ED4u);
    ctx->pc = 0x379ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379ECCu;
    // 0x379ed0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379ECCu, 0x379ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379ED4u;
label_379ed4:
    // 0x379ed4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379ED4u;
    SET_GPR_U32(ctx, 31, 0x379EDCu);
    ctx->pc = 0x379ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379ED4u;
    // 0x379ed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379ED4u, 0x379EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379EDCu;
label_379edc:
    // 0x379edc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x379edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ee4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379ee8: 0xc102488  jal         func_409220
    ctx->pc = 0x379EE8u;
    SET_GPR_U32(ctx, 31, 0x379EF0u);
    ctx->pc = 0x379EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379EE8u;
    // 0x379eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x379EE8u, 0x379EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379EF0u;
label_379ef0:
    // 0x379ef0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x379ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ef4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x379ef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379efc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379EFCu;
    SET_GPR_U32(ctx, 31, 0x379F04u);
    ctx->pc = 0x379F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379EFCu;
    // 0x379f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379EFCu, 0x379F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F04u;
label_379f04:
    // 0x379f04: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x379F04u;
    SET_GPR_U32(ctx, 31, 0x379F0Cu);
    ctx->pc = 0x379F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F04u;
    // 0x379f08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x379F04u, 0x379F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F0Cu;
label_379f0c:
    // 0x379f0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x379f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379f18: 0xc102488  jal         func_409220
    ctx->pc = 0x379F18u;
    SET_GPR_U32(ctx, 31, 0x379F20u);
    ctx->pc = 0x379F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F18u;
    // 0x379f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x379F18u, 0x379F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F20u;
label_379f20:
    // 0x379f20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x379f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379F2Cu;
    SET_GPR_U32(ctx, 31, 0x379F34u);
    ctx->pc = 0x379F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F2Cu;
    // 0x379f30: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379F2Cu, 0x379F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F34u;
label_379f34:
    // 0x379f34: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x379F34u;
    SET_GPR_U32(ctx, 31, 0x379F3Cu);
    ctx->pc = 0x379F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F34u;
    // 0x379f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x379F34u, 0x379F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F3Cu;
label_379f3c:
    // 0x379f3c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x379f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x379f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x379f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x379f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f4c: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x379F4Cu;
    SET_GPR_U32(ctx, 31, 0x379F54u);
    ctx->pc = 0x379F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379F4Cu;
    // 0x379f50: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x379F4Cu, 0x379F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379F54u;
label_379f54:
    // 0x379f54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x379f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x379f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x379f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x379f60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x379f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379f68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x379f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379f6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x379f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379f74: 0x3e00008  jr          $ra
    ctx->pc = 0x379F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F74u;
        // 0x379f78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379F7Cu;
    // 0x379f7c: 0x0  nop
    ctx->pc = 0x379f7cu;
    // NOP
    ctx->pc = 0x379f80u;
}
