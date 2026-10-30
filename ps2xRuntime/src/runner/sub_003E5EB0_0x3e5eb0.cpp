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

// Function: sub_003E5EB0
// Address: 0x3e5eb0 - 0x3e5f20
void sub_003E5EB0_0x3e5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5EB0_0x3e5eb0");
#endif

    switch (ctx->pc) {
        case 0x3e5ed4u: goto label_3e5ed4;
        case 0x3e5ef4u: goto label_3e5ef4;
        case 0x3e5f04u: goto label_3e5f04;
        default: break;
    }

    ctx->pc = 0x3e5eb0u;

    // 0x3e5eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5eb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e5eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e5eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e5eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ebc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e5ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e5ec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e5ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e5ec4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e5ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e5ecc: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E5ECCu;
    SET_GPR_U32(ctx, 31, 0x3E5ED4u);
    ctx->pc = 0x3E5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5ECCu;
    // 0x3e5ed0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E5ECCu, 0x3E5ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5ED4u;
label_3e5ed4:
    // 0x3e5ed4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3e5ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3e5ed8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3e5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3e5edc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3e5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e5ee0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3e5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x3e5ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e5ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ee8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3e5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x3e5eec: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E5EECu;
    SET_GPR_U32(ctx, 31, 0x3E5EF4u);
    ctx->pc = 0x3E5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5EECu;
    // 0x3e5ef0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E5EECu, 0x3E5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5EF4u;
label_3e5ef4:
    // 0x3e5ef4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3e5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3e5ef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e5ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5efc: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E5EFCu;
    SET_GPR_U32(ctx, 31, 0x3E5F04u);
    ctx->pc = 0x3E5F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5EFCu;
    // 0x3e5f00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E5EFCu, 0x3E5F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5F04u;
label_3e5f04:
    // 0x3e5f04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e5f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5f08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e5f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5f0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e5f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e5f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5f14: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F14u;
        // 0x3e5f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5F1Cu;
    // 0x3e5f1c: 0x0  nop
    ctx->pc = 0x3e5f1cu;
    // NOP
    ctx->pc = 0x3e5f20u;
}
