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

// Function: sub_001CB2A8
// Address: 0x1cb2a8 - 0x1cb338
void sub_001CB2A8_0x1cb2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB2A8_0x1cb2a8");
#endif

    switch (ctx->pc) {
        case 0x1cb2e4u: goto label_1cb2e4;
        case 0x1cb2f8u: goto label_1cb2f8;
        case 0x1cb308u: goto label_1cb308;
        case 0x1cb310u: goto label_1cb310;
        default: break;
    }

    ctx->pc = 0x1cb2a8u;

    // 0x1cb2a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb2ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cb2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cb2b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cb2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cb2b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cb2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cb2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cb2bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb2c0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1cb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cb2c4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CB2C4u;
    {
        const bool branch_taken_0x1cb2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2C4u;
        // 0x1cb2c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2c4) {
            ctx->pc = 0x1CB320u;
            goto label_1cb320;
        }
    }
    ctx->pc = 0x1CB2CCu;
    // 0x1cb2cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb2d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb2d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb2d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1cb2dc: 0xc062c5a  jal         func_18B168
    ctx->pc = 0x1CB2DCu;
    SET_GPR_U32(ctx, 31, 0x1CB2E4u);
    ctx->pc = 0x1CB2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2DCu;
    // 0x1cb2e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x1CB2DCu, 0x1CB2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2E4u;
label_1cb2e4:
    // 0x1cb2e4: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x1cb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1cb2e8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x1cb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x1cb2ec: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x1cb2f0: 0xc072af0  jal         func_1CABC0
    ctx->pc = 0x1CB2F0u;
    SET_GPR_U32(ctx, 31, 0x1CB2F8u);
    ctx->pc = 0x1CB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2F0u;
    // 0x1cb2f4: 0xac510438  sw          $s1, 0x438($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1080), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CABC0u, 0x1CB2F0u, 0x1CB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2F8u;
label_1cb2f8:
    // 0x1cb2f8: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1cb2fc: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x1cb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x1cb300: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1CB300u;
    SET_GPR_U32(ctx, 31, 0x1CB308u);
    ctx->pc = 0x1CB304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB300u;
    // 0x1cb304: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CB300u, 0x1CB308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB308u;
label_1cb308:
    // 0x1cb308: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x1CB308u;
    SET_GPR_U32(ctx, 31, 0x1CB310u);
    ctx->pc = 0x1CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB308u;
    // 0x1cb30c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1CB308u, 0x1CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB310u;
label_1cb310:
    // 0x1cb310: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x1cb310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1cb314: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x1cb314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x1cb318: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1cb318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1cb31c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cb31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb320:
    // 0x1cb320: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cb320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb324: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cb324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB32Cu;
        // 0x1cb330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB334u;
    // 0x1cb334: 0x0  nop
    ctx->pc = 0x1cb334u;
    // NOP
    ctx->pc = 0x1cb338u;
}
