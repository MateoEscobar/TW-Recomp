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

// Function: sub_00447D10
// Address: 0x447d10 - 0x447dd8
void sub_00447D10_0x447d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447D10_0x447d10");
#endif

    switch (ctx->pc) {
        case 0x447d2cu: goto label_447d2c;
        case 0x447d40u: goto label_447d40;
        case 0x447d64u: goto label_447d64;
        case 0x447d6cu: goto label_447d6c;
        case 0x447dbcu: goto label_447dbc;
        default: break;
    }

    ctx->pc = 0x447d10u;

    // 0x447d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x447d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x447d14: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x447d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x447d18: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x447d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x447d1c: 0x24a5e180  addiu       $a1, $a1, -0x1E80
    ctx->pc = 0x447d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959488));
    // 0x447d20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x447d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x447d24: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x447D24u;
    SET_GPR_U32(ctx, 31, 0x447D2Cu);
    ctx->pc = 0x447D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447D24u;
    // 0x447d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x447D24u, 0x447D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447D2Cu;
label_447d2c:
    // 0x447d2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x447d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x447d30: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x447d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x447d34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x447d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x447d38: 0xc111982  jal         func_446608
    ctx->pc = 0x447D38u;
    SET_GPR_U32(ctx, 31, 0x447D40u);
    ctx->pc = 0x447D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447D38u;
    // 0x447d3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x447D38u, 0x447D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447D40u;
label_447d40:
    // 0x447d40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447d44: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x447d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x447d48: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x447d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x447d4c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x447d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x447d50: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x447d50u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x447d54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x447d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x447d58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x447d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x447d5c: 0xc111982  jal         func_446608
    ctx->pc = 0x447D5Cu;
    SET_GPR_U32(ctx, 31, 0x447D64u);
    ctx->pc = 0x447D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447D5Cu;
    // 0x447d60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446608u, 0x447D5Cu, 0x447D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447D64u;
label_447d64:
    // 0x447d64: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x447D64u;
    SET_GPR_U32(ctx, 31, 0x447D6Cu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x447D64u, 0x447D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447D6Cu;
label_447d6c:
    // 0x447d6c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x447d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x447d70: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x447d70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x447d74: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x447d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x447d78: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x447d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x447d7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x447d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x10000000
    // 0x447d80: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x447d80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x447d84: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x447d88: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x447d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x447d8c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x447d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x447d90: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x447d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x447d94: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x447d94u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x447d98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x447d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x447d9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x447d9cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x447da0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x447da0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x447da4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x447da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x447da8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x447da8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x447dac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x447DACu;
    {
        const bool branch_taken_0x447dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447DACu;
        // 0x447db0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447dac) {
            ctx->pc = 0x447DC0u;
            goto label_447dc0;
        }
    }
    ctx->pc = 0x447DB4u;
    // 0x447db4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x447DB4u;
    SET_GPR_U32(ctx, 31, 0x447DBCu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x447DB4u, 0x447DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447DBCu;
label_447dbc:
    // 0x447dbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_447dc0:
    // 0x447dc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x447dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x447dc4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x447dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x447dc8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x447dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x447dcc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x447dccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x447dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x447DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447DD0u;
        // 0x447dd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447DD8u;
}
