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

// Function: sub_002CF8F8
// Address: 0x2cf8f8 - 0x2cf980
void sub_002CF8F8_0x2cf8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF8F8_0x2cf8f8");
#endif

    ctx->pc = 0x2cf8f8u;

    // 0x2cf8f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cf8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cf8fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2cf8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2cf900: 0x24631590  addiu       $v1, $v1, 0x1590
    ctx->pc = 0x2cf900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
    // 0x2cf904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cf904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cf908: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2cf908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2cf90c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf910: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2cf910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2cf914: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cf914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf918: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2cf918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf91c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2cf91cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf920: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2cf920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2cf924: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x2cf924u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf928: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2cf928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf92c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2cf92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf930: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x2cf930u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x2cf934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cf934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cf938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf93c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2cf93cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2cf940: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x2cf940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x2cf944: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x2cf944u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2cf948: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2cf948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2cf94c: 0xac88002c  sw          $t0, 0x2C($a0)
    ctx->pc = 0x2cf94cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 8));
    // 0x2cf950: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x2cf950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
    // 0x2cf954: 0xa08b0034  sb          $t3, 0x34($a0)
    ctx->pc = 0x2cf954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 11));
    // 0x2cf958: 0xa08d0037  sb          $t5, 0x37($a0)
    ctx->pc = 0x2cf958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cf95c: 0xa085003b  sb          $a1, 0x3B($a0)
    ctx->pc = 0x2cf95cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 59), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cf960: 0xa0890036  sb          $t1, 0x36($a0)
    ctx->pc = 0x2cf960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 9));
    // 0x2cf964: 0xa0800035  sb          $zero, 0x35($a0)
    ctx->pc = 0x2cf964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf968: 0xa0800038  sb          $zero, 0x38($a0)
    ctx->pc = 0x2cf968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf96c: 0xa0800039  sb          $zero, 0x39($a0)
    ctx->pc = 0x2cf96cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf970: 0xa080003a  sb          $zero, 0x3A($a0)
    ctx->pc = 0x2cf970u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf974: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x2cf974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf978: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF978u;
        // 0x2cf97c: 0xa08c003d  sb          $t4, 0x3D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF980u;
}
