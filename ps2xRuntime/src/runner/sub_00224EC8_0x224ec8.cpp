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

// Function: sub_00224EC8
// Address: 0x224ec8 - 0x224f28
void sub_00224EC8_0x224ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224EC8_0x224ec8");
#endif

    switch (ctx->pc) {
        case 0x224ee0u: goto label_224ee0;
        case 0x224ef4u: goto label_224ef4;
        default: break;
    }

    ctx->pc = 0x224ec8u;

    // 0x224ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224ecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224ed8: 0xc088ade  jal         func_222B78
    ctx->pc = 0x224ED8u;
    SET_GPR_U32(ctx, 31, 0x224EE0u);
    ctx->pc = 0x224EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224ED8u;
    // 0x224edc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x224ED8u, 0x224EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EE0u;
label_224ee0:
    // 0x224ee0: 0x90430042  lbu         $v1, 0x42($v0)
    ctx->pc = 0x224ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x224ee4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x224EE4u;
    {
        const bool branch_taken_0x224ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EE4u;
        // 0x224ee8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ee4) {
            ctx->pc = 0x224F10u;
            goto label_224f10;
        }
    }
    ctx->pc = 0x224EECu;
    // 0x224eec: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x224EECu;
    SET_GPR_U32(ctx, 31, 0x224EF4u);
    ctx->pc = 0x224EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EECu;
    // 0x224ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x224EECu, 0x224EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EF4u;
label_224ef4:
    // 0x224ef4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x224ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x224ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x224ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224efc: 0x0  nop
    ctx->pc = 0x224efcu;
    // NOP
    // 0x224f00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224f04: 0x0  nop
    ctx->pc = 0x224f04u;
    // NOP
    // 0x224f08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x224F08u;
    {
        const bool branch_taken_0x224f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224f08) {
            ctx->pc = 0x224F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224F08u;
            // 0x224f0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224F10u;
            goto label_224f10;
        }
    }
    ctx->pc = 0x224F10u;
label_224f10:
    // 0x224f10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x224f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224f20: 0x3e00008  jr          $ra
    ctx->pc = 0x224F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F20u;
        // 0x224f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F28u;
}
