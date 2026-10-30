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

// Function: sub_001F93A0
// Address: 0x1f93a0 - 0x1f9418
void sub_001F93A0_0x1f93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F93A0_0x1f93a0");
#endif

    switch (ctx->pc) {
        case 0x1f93c4u: goto label_1f93c4;
        case 0x1f93fcu: goto label_1f93fc;
        default: break;
    }

    ctx->pc = 0x1f93a0u;

    // 0x1f93a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f93a4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1f93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1f93a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f93ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f93acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f93b0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1f93b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1f93b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f93b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f93bc: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1F93BCu;
    SET_GPR_U32(ctx, 31, 0x1F93C4u);
    ctx->pc = 0x1F93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93BCu;
    // 0x1f93c0: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1F93BCu, 0x1F93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93C4u;
label_1f93c4:
    // 0x1f93c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f93c8: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1f93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1f93cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f93d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93d4: 0x3c01469c  lui         $at, 0x469C
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18076 << 16));
    // 0x1f93d8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1f93d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1f93dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f93dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f93e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f93e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f93e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f93e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f93ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f93f0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f93f4: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1F93F4u;
    SET_GPR_U32(ctx, 31, 0x1F93FCu);
    ctx->pc = 0x1F93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93F4u;
    // 0x1f93f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1F93F4u, 0x1F93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93FCu;
label_1f93fc:
    // 0x1f93fc: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1f93fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x1f9400: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f9400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9404: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f9404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f940c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F940Cu;
        // 0x1f9410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9414u;
    // 0x1f9414: 0x0  nop
    ctx->pc = 0x1f9414u;
    // NOP
    ctx->pc = 0x1f9418u;
}
