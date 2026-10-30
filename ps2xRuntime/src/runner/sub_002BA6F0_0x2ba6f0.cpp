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

// Function: sub_002BA6F0
// Address: 0x2ba6f0 - 0x2ba740
void sub_002BA6F0_0x2ba6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA6F0_0x2ba6f0");
#endif

    switch (ctx->pc) {
        case 0x2ba730u: goto label_2ba730;
        default: break;
    }

    ctx->pc = 0x2ba6f0u;

    // 0x2ba6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba6f4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ba6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2ba6f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ba6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2ba6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ba6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba708: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ba708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba70c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2ba70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2ba710: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ba710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2ba714: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ba714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ba718: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2ba718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2ba71c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ba71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba720: 0xe4c0012c  swc1        $f0, 0x12C($a2)
    ctx->pc = 0x2ba720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 300), bits); }
    // 0x2ba724: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ba724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba728: 0xc087612  jal         func_21D848
    ctx->pc = 0x2BA728u;
    SET_GPR_U32(ctx, 31, 0x2BA730u);
    ctx->pc = 0x2BA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA728u;
    // 0x2ba72c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2BA728u, 0x2BA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA730u;
label_2ba730:
    // 0x2ba730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba734: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA734u;
        // 0x2ba738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA73Cu;
    // 0x2ba73c: 0x0  nop
    ctx->pc = 0x2ba73cu;
    // NOP
    ctx->pc = 0x2ba740u;
}
