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

// Function: sub_002F6EF0
// Address: 0x2f6ef0 - 0x2f6f48
void sub_002F6EF0_0x2f6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6EF0_0x2f6ef0");
#endif

    switch (ctx->pc) {
        case 0x2f6ef0u: goto label_2f6ef0;
        case 0x2f6ef4u: goto label_2f6ef4;
        case 0x2f6ef8u: goto label_2f6ef8;
        case 0x2f6efcu: goto label_2f6efc;
        case 0x2f6f00u: goto label_2f6f00;
        case 0x2f6f04u: goto label_2f6f04;
        case 0x2f6f08u: goto label_2f6f08;
        case 0x2f6f0cu: goto label_2f6f0c;
        case 0x2f6f10u: goto label_2f6f10;
        case 0x2f6f14u: goto label_2f6f14;
        case 0x2f6f18u: goto label_2f6f18;
        case 0x2f6f1cu: goto label_2f6f1c;
        case 0x2f6f20u: goto label_2f6f20;
        case 0x2f6f24u: goto label_2f6f24;
        case 0x2f6f28u: goto label_2f6f28;
        case 0x2f6f2cu: goto label_2f6f2c;
        case 0x2f6f30u: goto label_2f6f30;
        case 0x2f6f34u: goto label_2f6f34;
        case 0x2f6f38u: goto label_2f6f38;
        case 0x2f6f3cu: goto label_2f6f3c;
        case 0x2f6f40u: goto label_2f6f40;
        case 0x2f6f44u: goto label_2f6f44;
        default: break;
    }

    ctx->pc = 0x2f6ef0u;

label_2f6ef0:
    // 0x2f6ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f6ef4:
    // 0x2f6ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6ef8:
    // 0x2f6ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f6efc:
    // 0x2f6efc: 0x2407ffef  addiu       $a3, $zero, -0x11
    ctx->pc = 0x2f6efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2f6f00:
    // 0x2f6f00: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f6f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2f6f04:
    // 0x2f6f04: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f6f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2f6f08:
    // 0x2f6f08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f6f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6f0c:
    // 0x2f6f0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f6f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f6f10:
    // 0x2f6f10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6f14:
    // 0x2f6f14: 0xa06202d3  sb          $v0, 0x2D3($v1)
    ctx->pc = 0x2f6f14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 723), (uint8_t)GPR_U32(ctx, 2));
label_2f6f18:
    // 0x2f6f18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f6f1c:
    // 0x2f6f1c: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2f6f1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2f6f20:
    // 0x2f6f20: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2f6f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6f24:
    // 0x2f6f24: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2f6f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2f6f28:
    // 0x2f6f28: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2f6f28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2f6f2c:
    // 0x2f6f2c: 0x84c300e0  lh          $v1, 0xE0($a2)
    ctx->pc = 0x2f6f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2f6f30:
    // 0x2f6f30: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x2f6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2f6f34:
    // 0x2f6f34: 0x40f809  jalr        $v0
label_2f6f38:
    if (ctx->pc == 0x2F6F38u) {
        ctx->pc = 0x2F6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F34u;
        // 0x2f6f38: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6F3Cu;
        goto label_2f6f3c;
    }
    ctx->pc = 0x2F6F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F6F3Cu);
        ctx->pc = 0x2F6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F34u;
        // 0x2f6f38: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F34u, 0x2F6F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6F3Cu;
label_2f6f3c:
    // 0x2f6f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6f40:
    // 0x2f6f40: 0x3e00008  jr          $ra
label_2f6f44:
    if (ctx->pc == 0x2F6F44u) {
        ctx->pc = 0x2F6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F40u;
        // 0x2f6f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6F48u;
        goto label_fallthrough_0x2f6f40;
    }
    ctx->pc = 0x2F6F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F40u;
        // 0x2f6f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f6f40:
    ctx->pc = 0x2F6F48u;
}
