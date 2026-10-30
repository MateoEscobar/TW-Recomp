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

// Function: sub_00320BE0
// Address: 0x320be0 - 0x320c68
void sub_00320BE0_0x320be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320BE0_0x320be0");
#endif

    switch (ctx->pc) {
        case 0x320c20u: goto label_320c20;
        default: break;
    }

    ctx->pc = 0x320be0u;

    // 0x320be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x320be4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x320be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x320be8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x320be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x320bec: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x320bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x320bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320bf8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x320bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x320bfc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x320bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x320c00: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x320c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x320c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x320c08: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x320c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x320c0c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x320c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x320c10: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x320c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x320c14: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x320c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x320c18: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x320C18u;
    SET_GPR_U32(ctx, 31, 0x320C20u);
    ctx->pc = 0x320C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C18u;
    // 0x320c1c: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x320C18u, 0x320C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C20u;
label_320c20:
    // 0x320c20: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x320c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x320c24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x320c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x320c28: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x320c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
    // 0x320c2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x320c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x320c30: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x320c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x320c34: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320c38: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x320c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x320c3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c40: 0xa6040028  sh          $a0, 0x28($s0)
    ctx->pc = 0x320c40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x320c44: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x320c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x320c48: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x320c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x320c4c: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x320c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x320c50: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x320c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x320c54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x320c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x320C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C5Cu;
        // 0x320c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320C64u;
    // 0x320c64: 0x0  nop
    ctx->pc = 0x320c64u;
    // NOP
    ctx->pc = 0x320c68u;
}
