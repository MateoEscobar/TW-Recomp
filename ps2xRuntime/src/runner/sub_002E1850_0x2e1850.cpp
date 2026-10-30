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

// Function: sub_002E1850
// Address: 0x2e1850 - 0x2e18d8
void sub_002E1850_0x2e1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1850_0x2e1850");
#endif

    switch (ctx->pc) {
        case 0x2e18bcu: goto label_2e18bc;
        default: break;
    }

    ctx->pc = 0x2e1850u;

    // 0x2e1850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1854: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e1854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e1858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e185c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2e1860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1868: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x2e1868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2e186c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e186cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e1870: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2e1870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e1874: 0x24421ad0  addiu       $v0, $v0, 0x1AD0
    ctx->pc = 0x2e1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x2e1878: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e1878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e187c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2e187cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2e1880: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e1880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1884: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2e1884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2e1888: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e1888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2e188c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2e188cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x2e1890: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2e1890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
    // 0x2e1894: 0xe60c001c  swc1        $f12, 0x1C($s0)
    ctx->pc = 0x2e1894u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2e1898: 0xe60d0020  swc1        $f13, 0x20($s0)
    ctx->pc = 0x2e1898u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2e189c: 0xe60e0024  swc1        $f14, 0x24($s0)
    ctx->pc = 0x2e189cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2e18a0: 0xe60f0028  swc1        $f15, 0x28($s0)
    ctx->pc = 0x2e18a0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2e18a4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2e18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2e18a8: 0xa2070038  sb          $a3, 0x38($s0)
    ctx->pc = 0x2e18a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e18ac: 0xa209003c  sb          $t1, 0x3C($s0)
    ctx->pc = 0x2e18acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e18b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e18b4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x2E18B4u;
    SET_GPR_U32(ctx, 31, 0x2E18BCu);
    ctx->pc = 0x2E18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E18B4u;
    // 0x2e18b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2E18B4u, 0x2E18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18BCu;
label_2e18bc:
    // 0x2e18bc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2e18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2e18c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e18c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e18c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e18c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e18c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e18cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E18CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18CCu;
        // 0x2e18d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E18CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E18D4u;
    // 0x2e18d4: 0x0  nop
    ctx->pc = 0x2e18d4u;
    // NOP
    ctx->pc = 0x2e18d8u;
}
