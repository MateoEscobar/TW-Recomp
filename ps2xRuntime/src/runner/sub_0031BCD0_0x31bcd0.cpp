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

// Function: sub_0031BCD0
// Address: 0x31bcd0 - 0x31bd38
void sub_0031BCD0_0x31bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BCD0_0x31bcd0");
#endif

    switch (ctx->pc) {
        case 0x31bd10u: goto label_31bd10;
        default: break;
    }

    ctx->pc = 0x31bcd0u;

    // 0x31bcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31bcd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31bcd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31bcdc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31bce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31bce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31bce8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31bcec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31bcf0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x31bcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcf4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31bcf8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31bcfc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31bd00: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31bd00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bd04: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31bd08: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31BD08u;
    SET_GPR_U32(ctx, 31, 0x31BD10u);
    ctx->pc = 0x31BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD08u;
    // 0x31bd0c: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31BD08u, 0x31BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD10u;
label_31bd10:
    // 0x31bd10: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31bd14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31bd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd18: 0x24633e60  addiu       $v1, $v1, 0x3E60
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15968));
    // 0x31bd1c: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x31bd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bd20: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x31bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x31bd24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31bd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD2Cu;
        // 0x31bd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD34u;
    // 0x31bd34: 0x0  nop
    ctx->pc = 0x31bd34u;
    // NOP
    ctx->pc = 0x31bd38u;
}
