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

// Function: sub_004DB2D8
// Address: 0x4db2d8 - 0x4db388
void sub_004DB2D8_0x4db2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB2D8_0x4db2d8");
#endif

    ctx->pc = 0x4db2d8u;

    // 0x4db2d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4db2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4db2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB2DCu;
        // 0x4db2e0: 0x8c62b1d8  lw          $v0, -0x4E28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947288)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB2E4u;
    // 0x4db2e4: 0x0  nop
    ctx->pc = 0x4db2e4u;
    // NOP
    // 0x4db2e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db2ec: 0x0  nop
    ctx->pc = 0x4db2ecu;
    // NOP
    // 0x4db2f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db2f4: 0x0  nop
    ctx->pc = 0x4db2f4u;
    // NOP
    // 0x4db2f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db2fc: 0x0  nop
    ctx->pc = 0x4db2fcu;
    // NOP
    // 0x4db300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db304: 0x0  nop
    ctx->pc = 0x4db304u;
    // NOP
    // 0x4db308: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db30c: 0x0  nop
    ctx->pc = 0x4db30cu;
    // NOP
    // 0x4db310: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x4db310u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4db314: 0x0  nop
    ctx->pc = 0x4db314u;
    // NOP
    // 0x4db318: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4db318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4db31c: 0x0  nop
    ctx->pc = 0x4db31cu;
    // NOP
    // 0x4db320: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4db320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4db324: 0x0  nop
    ctx->pc = 0x4db324u;
    // NOP
    // 0x4db328: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4db328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4db32c: 0x0  nop
    ctx->pc = 0x4db32cu;
    // NOP
    // 0x4db330: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x4db330u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4db334: 0x0  nop
    ctx->pc = 0x4db334u;
    // NOP
    // 0x4db338: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4db338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4db33c: 0x0  nop
    ctx->pc = 0x4db33cu;
    // NOP
    // 0x4db340: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4db340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4db344: 0x0  nop
    ctx->pc = 0x4db344u;
    // NOP
    // 0x4db348: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x4db348u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4db34c: 0x0  nop
    ctx->pc = 0x4db34cu;
    // NOP
    // 0x4db350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db354: 0x0  nop
    ctx->pc = 0x4db354u;
    // NOP
    // 0x4db358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db35c: 0x0  nop
    ctx->pc = 0x4db35cu;
    // NOP
    // 0x4db360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db364: 0x0  nop
    ctx->pc = 0x4db364u;
    // NOP
    // 0x4db368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db36c: 0x0  nop
    ctx->pc = 0x4db36cu;
    // NOP
    // 0x4db370: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db374: 0x0  nop
    ctx->pc = 0x4db374u;
    // NOP
    // 0x4db378: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4db378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db37c: 0x0  nop
    ctx->pc = 0x4db37cu;
    // NOP
    // 0x4db380: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4db380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db384: 0x0  nop
    ctx->pc = 0x4db384u;
    // NOP
    ctx->pc = 0x4db388u;
}
