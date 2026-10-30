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

// Function: sub_001A1098
// Address: 0x1a1098 - 0x1a1138
void sub_001A1098_0x1a1098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1098_0x1a1098");
#endif

    ctx->pc = 0x1a1098u;

    // 0x1a1098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a109c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a109cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a10a0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1a10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a10a4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1a10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1a10a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a10ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1a10acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1a10b0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a10b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a10b8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a10bc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a10c0: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a10c4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1a10c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a10c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a10c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a10cc: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1a10ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a10d0: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x1a10d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a10d4: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x1a10d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a10d8: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x1a10d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10dc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a10e0: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x1a10e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10e4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1a10e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10e8: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1a10e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10ec: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x1a10ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a10f4: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1a10f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10f8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1a10f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a10fc: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x1a10fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1100: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x1a1100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x1a1104: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a1104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a1108: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a1108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a110c: 0xac880058  sw          $t0, 0x58($a0)
    ctx->pc = 0x1a110cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 8));
    // 0x1a1110: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x1a1110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x1a1114: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1a1114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1a1118: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x1a1118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x1a111c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1a111cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1a1120: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1a1120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1a1124: 0xac880054  sw          $t0, 0x54($a0)
    ctx->pc = 0x1a1124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 8));
    // 0x1a1128: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1a1128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1a112c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A112Cu;
        // 0x1a1130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1134u;
    // 0x1a1134: 0x0  nop
    ctx->pc = 0x1a1134u;
    // NOP
    ctx->pc = 0x1a1138u;
}
