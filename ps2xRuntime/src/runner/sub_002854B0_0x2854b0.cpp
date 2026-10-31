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

// Function: sub_002854B0
// Address: 0x2854b0 - 0x285520
void sub_002854B0_0x2854b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002854B0_0x2854b0");
#endif

    ctx->pc = 0x2854b0u;

    // 0x2854b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2854b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2854b4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2854b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2854b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2854B8u;
    {
        const bool branch_taken_0x2854b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854B8u;
        // 0x2854bc: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854b8) {
            ctx->pc = 0x285514u;
            goto label_285514;
        }
    }
    ctx->pc = 0x2854C0u;
    // 0x2854c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2854C0u;
    {
        const bool branch_taken_0x2854c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C0u;
        // 0x2854c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854c0) {
            ctx->pc = 0x2854D0u;
            goto label_2854d0;
        }
    }
    ctx->pc = 0x2854C8u;
    // 0x2854c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2854C8u;
    {
        const bool branch_taken_0x2854c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854C8u;
        // 0x2854cc: 0x24420a18  addiu       $v0, $v0, 0xA18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854c8) {
            ctx->pc = 0x2854D8u;
            goto label_2854d8;
        }
    }
    ctx->pc = 0x2854D0u;
label_2854d0:
    // 0x2854d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2854d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2854d4: 0x24420a38  addiu       $v0, $v0, 0xA38
    ctx->pc = 0x2854d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2616));
label_2854d8:
    // 0x2854d8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2854d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2854dc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2854dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2854e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2854e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2854e4: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x2854e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x2854e8: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x2854e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2854ec: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2854ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2854f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2854f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2854f4: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x2854f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2854f8: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x2854f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x2854fc: 0xa04b001c  sb          $t3, 0x1C($v0)
    ctx->pc = 0x2854fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 11));
    // 0x285500: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x285500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x285504: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x285504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x285508: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x285508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x28550c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x28550cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x285510: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x285510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
label_285514:
    // 0x285514: 0x3e00008  jr          $ra
    ctx->pc = 0x285514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28551Cu;
    // 0x28551c: 0x0  nop
    ctx->pc = 0x28551cu;
    // NOP
    ctx->pc = 0x285520u;
}
