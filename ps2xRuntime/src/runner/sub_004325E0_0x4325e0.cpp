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

// Function: sub_004325E0
// Address: 0x4325e0 - 0x432640
void sub_004325E0_0x4325e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004325E0_0x4325e0");
#endif

    switch (ctx->pc) {
        case 0x432634u: goto label_432634;
        default: break;
    }

    ctx->pc = 0x4325e0u;

    // 0x4325e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4325e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4325e4: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x4325e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x4325e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4325e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4325ec: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x4325ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x4325f0: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x4325f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x4325f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4325f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4325f8: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x4325f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x4325fc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x4325fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x432600: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x432600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x432604: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x432604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x432608: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x432608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x43260c: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x43260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x432610: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x432610u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x432614: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x432614u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x432618: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x432618u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x43261c: 0xe7b20054  swc1        $f18, 0x54($sp)
    ctx->pc = 0x43261cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x432620: 0x8d8269ec  lw          $v0, 0x69EC($t4)
    ctx->pc = 0x432620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x432624: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x432624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x432628: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x432628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x43262c: 0xc10d9c4  jal         func_436710
    ctx->pc = 0x43262Cu;
    SET_GPR_U32(ctx, 31, 0x432634u);
    ctx->pc = 0x432630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43262Cu;
    // 0x432630: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436710u, 0x43262Cu, 0x432634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432634u;
label_432634:
    // 0x432634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432638: 0x3e00008  jr          $ra
    ctx->pc = 0x432638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432638u;
        // 0x43263c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432640u;
}
