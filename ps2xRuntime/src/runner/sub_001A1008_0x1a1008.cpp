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

// Function: sub_001A1008
// Address: 0x1a1008 - 0x1a1098
void sub_001A1008_0x1a1008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1008_0x1a1008");
#endif

    ctx->pc = 0x1a1008u;

    // 0x1a1008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a100c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a1010: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1a1010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1014: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x1a1014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a1018: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1a1018u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a101c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1020: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x1a1020u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1024: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1a1024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a1028: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x1a1028u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a102c: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x1a102cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1030: 0x8fad0000  lw          $t5, 0x0($sp)
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1034: 0xa1430003  sb          $v1, 0x3($t2)
    ctx->pc = 0x1a1034u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1038: 0xa1430001  sb          $v1, 0x1($t2)
    ctx->pc = 0x1a1038u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a103c: 0xa1430002  sb          $v1, 0x2($t2)
    ctx->pc = 0x1a103cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1040: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a1040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1044: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a1048: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1a1048u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1a104c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x1a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x1a1050: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x1a1050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x1a1054: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1a1054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a1058: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1a1058u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a105c: 0xe48e0040  swc1        $f14, 0x40($a0)
    ctx->pc = 0x1a105cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1a1060: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x1a1060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x1a1064: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x1a1064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1a1068: 0xa08b0065  sb          $t3, 0x65($a0)
    ctx->pc = 0x1a1068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 11));
    // 0x1a106c: 0xa089005c  sb          $t1, 0x5C($a0)
    ctx->pc = 0x1a106cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a1070: 0xac8c0058  sw          $t4, 0x58($a0)
    ctx->pc = 0x1a1070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 12));
    // 0x1a1074: 0xac8d0030  sw          $t5, 0x30($a0)
    ctx->pc = 0x1a1074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 13));
    // 0x1a1078: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1a1078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1a107c: 0xe48e0038  swc1        $f14, 0x38($a0)
    ctx->pc = 0x1a107cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1a1080: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1a1080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1a1084: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1a1084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1a1088: 0xac8c0054  sw          $t4, 0x54($a0)
    ctx->pc = 0x1a1088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 12));
    // 0x1a108c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1a1090: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1090u;
        // 0x1a1094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1098u;
}
