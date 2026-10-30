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

// Function: sub_00139D00
// Address: 0x139d00 - 0x139d48
void sub_00139D00_0x139d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139D00_0x139d00");
#endif

    switch (ctx->pc) {
        case 0x139d30u: goto label_139d30;
        default: break;
    }

    ctx->pc = 0x139d00u;

    // 0x139d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139d04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x139d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x139d08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139d0c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139D0Cu;
    {
        const bool branch_taken_0x139d0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x139D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D0Cu;
        // 0x139d10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d0c) {
            ctx->pc = 0x139D34u;
            goto label_139d34;
        }
    }
    ctx->pc = 0x139D14u;
    // 0x139d14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139D14u;
    {
        const bool branch_taken_0x139d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D14u;
        // 0x139d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d14) {
            ctx->pc = 0x139D38u;
            goto label_139d38;
        }
    }
    ctx->pc = 0x139D1Cu;
    // 0x139d1c: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x139d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x139d20: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x139d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x139d24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x139d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139d28: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x139D28u;
    SET_GPR_U32(ctx, 31, 0x139D30u);
    ctx->pc = 0x139D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D28u;
    // 0x139d2c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x139D28u, 0x139D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D30u;
label_139d30:
    // 0x139d30: 0xe60091d8  swc1        $f0, -0x6E28($s0)
    ctx->pc = 0x139d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939096), bits); }
label_139d34:
    // 0x139d34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_139d38:
    // 0x139d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x139D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D3Cu;
        // 0x139d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139D44u;
    // 0x139d44: 0x0  nop
    ctx->pc = 0x139d44u;
    // NOP
    ctx->pc = 0x139d48u;
}
