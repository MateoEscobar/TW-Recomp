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

// Function: sub_002DFBA8
// Address: 0x2dfba8 - 0x2dfc30
void sub_002DFBA8_0x2dfba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFBA8_0x2dfba8");
#endif

    switch (ctx->pc) {
        case 0x2dfc18u: goto label_2dfc18;
        default: break;
    }

    ctx->pc = 0x2dfba8u;

    // 0x2dfba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dfbac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2dfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2dfbb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dfbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dfbb4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2dfbb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2dfbb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dfbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfbbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfbc0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2dfbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2dfbc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfbc8: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x2dfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x2dfbcc: 0x24421c50  addiu       $v0, $v0, 0x1C50
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7248));
    // 0x2dfbd0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2dfbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfbd4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2dfbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2dfbd8: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2dfbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfbdc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2dfbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2dfbe0: 0xa600002a  sh          $zero, 0x2A($s0)
    ctx->pc = 0x2dfbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dfbe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dfbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfbe8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2dfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2dfbec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2dfbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dfbf0: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x2dfbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfbf4: 0xa2000036  sb          $zero, 0x36($s0)
    ctx->pc = 0x2dfbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfbf8: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2dfbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfbfc: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x2dfbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x2dfc00: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2dfc00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2dfc04: 0xa2070028  sb          $a3, 0x28($s0)
    ctx->pc = 0x2dfc04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 7));
    // 0x2dfc08: 0xa609002c  sh          $t1, 0x2C($s0)
    ctx->pc = 0x2dfc08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 9));
    // 0x2dfc0c: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x2dfc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dfc10: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2DFC10u;
    SET_GPR_U32(ctx, 31, 0x2DFC18u);
    ctx->pc = 0x2DFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC10u;
    // 0x2dfc14: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2DFC10u, 0x2DFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC18u;
label_2dfc18:
    // 0x2dfc18: 0xa2020037  sb          $v0, 0x37($s0)
    ctx->pc = 0x2dfc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dfc1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dfc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dfc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfc28: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC28u;
        // 0x2dfc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFC30u;
}
