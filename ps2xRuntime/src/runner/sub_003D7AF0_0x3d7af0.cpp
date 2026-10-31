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

// Function: sub_003D7AF0
// Address: 0x3d7af0 - 0x3d7b38
void sub_003D7AF0_0x3d7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7AF0_0x3d7af0");
#endif

    switch (ctx->pc) {
        case 0x3d7af0u: goto label_3d7af0;
        case 0x3d7af4u: goto label_3d7af4;
        case 0x3d7af8u: goto label_3d7af8;
        case 0x3d7afcu: goto label_3d7afc;
        case 0x3d7b00u: goto label_3d7b00;
        case 0x3d7b04u: goto label_3d7b04;
        case 0x3d7b08u: goto label_3d7b08;
        case 0x3d7b0cu: goto label_3d7b0c;
        case 0x3d7b10u: goto label_3d7b10;
        case 0x3d7b14u: goto label_3d7b14;
        case 0x3d7b18u: goto label_3d7b18;
        case 0x3d7b1cu: goto label_3d7b1c;
        case 0x3d7b20u: goto label_3d7b20;
        case 0x3d7b24u: goto label_3d7b24;
        case 0x3d7b28u: goto label_3d7b28;
        case 0x3d7b2cu: goto label_3d7b2c;
        case 0x3d7b30u: goto label_3d7b30;
        case 0x3d7b34u: goto label_3d7b34;
        default: break;
    }

    ctx->pc = 0x3d7af0u;

label_3d7af0:
    // 0x3d7af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d7af4:
    // 0x3d7af4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d7af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d7af8:
    // 0x3d7af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d7af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d7afc:
    // 0x3d7afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b00:
    // 0x3d7b00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7b04:
    // 0x3d7b04: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7b08:
    // 0x3d7b08: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7b0c:
    // 0x3d7b0c: 0x40f809  jalr        $v0
label_3d7b10:
    if (ctx->pc == 0x3D7B10u) {
        ctx->pc = 0x3D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B0Cu;
        // 0x3d7b10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B14u;
        goto label_3d7b14;
    }
    ctx->pc = 0x3D7B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7B14u);
        ctx->pc = 0x3D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B0Cu;
        // 0x3d7b10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7B0Cu, 0x3D7B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7B14u;
label_3d7b14:
    // 0x3d7b14: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d7b18:
    // 0x3d7b18: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d7b1c:
    // 0x3d7b1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d7b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7b20:
    // 0x3d7b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d7b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d7b24:
    // 0x3d7b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7b28:
    // 0x3d7b28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d7b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d7b2c:
    // 0x3d7b2c: 0x3e00008  jr          $ra
label_3d7b30:
    if (ctx->pc == 0x3D7B30u) {
        ctx->pc = 0x3D7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B2Cu;
        // 0x3d7b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B34u;
        goto label_3d7b34;
    }
    ctx->pc = 0x3D7B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B2Cu;
        // 0x3d7b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7B34u;
label_3d7b34:
    // 0x3d7b34: 0x0  nop
    ctx->pc = 0x3d7b34u;
    // NOP
    ctx->pc = 0x3d7b38u;
}
