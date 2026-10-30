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

// Function: sub_001D1848
// Address: 0x1d1848 - 0x1d18d8
void sub_001D1848_0x1d1848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1848_0x1d1848");
#endif

    switch (ctx->pc) {
        case 0x1d185cu: goto label_1d185c;
        case 0x1d189cu: goto label_1d189c;
        case 0x1d18a4u: goto label_1d18a4;
        case 0x1d18acu: goto label_1d18ac;
        case 0x1d18b4u: goto label_1d18b4;
        default: break;
    }

    ctx->pc = 0x1d1848u;

    // 0x1d1848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d184c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d1850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1854: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D1854u;
    SET_GPR_U32(ctx, 31, 0x1D185Cu);
    ctx->pc = 0x1D1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1854u;
    // 0x1d1858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D1854u, 0x1D185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D185Cu;
label_1d185c:
    // 0x1d185c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d185cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d1860: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1d1860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d1864: 0x24638510  addiu       $v1, $v1, -0x7AF0
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935824));
    // 0x1d1868: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1d1868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1d186c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1d186cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x1d1870: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1d1870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1d1874: 0x24a5b488  addiu       $a1, $a1, -0x4B78
    ctx->pc = 0x1d1874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947976));
    // 0x1d1878: 0x24c6b4b0  addiu       $a2, $a2, -0x4B50
    ctx->pc = 0x1d1878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948016));
    // 0x1d187c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d187cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d1880: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d1880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d1884: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d1884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d1888: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d1888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d188c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d188cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d1890: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1d1890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x1d1894: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1D1894u;
    SET_GPR_U32(ctx, 31, 0x1D189Cu);
    ctx->pc = 0x1D1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1894u;
    // 0x1d1898: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1D1894u, 0x1D189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D189Cu;
label_1d189c:
    // 0x1d189c: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D189Cu;
    SET_GPR_U32(ctx, 31, 0x1D18A4u);
    ctx->pc = 0x1D18A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D189Cu;
    // 0x1d18a0: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D189Cu, 0x1D18A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18A4u;
label_1d18a4:
    // 0x1d18a4: 0xc074fbc  jal         func_1D3EF0
    ctx->pc = 0x1D18A4u;
    SET_GPR_U32(ctx, 31, 0x1D18ACu);
    ctx->pc = 0x1D18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18A4u;
    // 0x1d18a8: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x1D18A4u, 0x1D18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18ACu;
label_1d18ac:
    // 0x1d18ac: 0xc073a9c  jal         func_1CEA70
    ctx->pc = 0x1D18ACu;
    SET_GPR_U32(ctx, 31, 0x1D18B4u);
    ctx->pc = 0x1D18B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D18ACu;
    // 0x1d18b0: 0x26040430  addiu       $a0, $s0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x1D18ACu, 0x1D18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D18B4u;
label_1d18b4:
    // 0x1d18b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d18b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d18b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d18bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d18c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d18c4: 0xae03078c  sw          $v1, 0x78C($s0)
    ctx->pc = 0x1d18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1932), GPR_U32(ctx, 3));
    // 0x1d18c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d18c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d18cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D18CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18CCu;
        // 0x1d18d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D18CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D18D4u;
    // 0x1d18d4: 0x0  nop
    ctx->pc = 0x1d18d4u;
    // NOP
    ctx->pc = 0x1d18d8u;
}
