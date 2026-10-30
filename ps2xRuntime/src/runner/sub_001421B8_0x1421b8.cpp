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

// Function: sub_001421B8
// Address: 0x1421b8 - 0x142210
void sub_001421B8_0x1421b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001421B8_0x1421b8");
#endif

    switch (ctx->pc) {
        case 0x1421ccu: goto label_1421cc;
        case 0x1421fcu: goto label_1421fc;
        default: break;
    }

    ctx->pc = 0x1421b8u;

    // 0x1421b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1421b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1421bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1421bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1421c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1421c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1421c4: 0xc04821a  jal         func_120868
    ctx->pc = 0x1421C4u;
    SET_GPR_U32(ctx, 31, 0x1421CCu);
    ctx->pc = 0x1421C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421C4u;
    // 0x1421c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x1421C4u, 0x1421CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1421CCu;
label_1421cc:
    // 0x1421cc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1421ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x1421d0: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x1421d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x1421d4: 0x24637090  addiu       $v1, $v1, 0x7090
    ctx->pc = 0x1421d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28816));
    // 0x1421d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1421d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1421dc: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x1421dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x1421e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1421e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1421e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1421e8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1421e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1421ec: 0x24a592f8  addiu       $a1, $a1, -0x6D08
    ctx->pc = 0x1421ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939384));
    // 0x1421f0: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x1421f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x1421f4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1421F4u;
    SET_GPR_U32(ctx, 31, 0x1421FCu);
    ctx->pc = 0x1421F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1421F4u;
    // 0x1421f8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1421F4u, 0x1421FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1421FCu;
label_1421fc:
    // 0x1421fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1421fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142208: 0x3e00008  jr          $ra
    ctx->pc = 0x142208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142208u;
        // 0x14220c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142210u;
}
