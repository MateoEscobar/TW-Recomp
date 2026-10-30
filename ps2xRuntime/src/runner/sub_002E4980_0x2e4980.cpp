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

// Function: sub_002E4980
// Address: 0x2e4980 - 0x2e49f8
void sub_002E4980_0x2e4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4980_0x2e4980");
#endif

    switch (ctx->pc) {
        case 0x2e4980u: goto label_2e4980;
        case 0x2e4984u: goto label_2e4984;
        case 0x2e4988u: goto label_2e4988;
        case 0x2e498cu: goto label_2e498c;
        case 0x2e4990u: goto label_2e4990;
        case 0x2e4994u: goto label_2e4994;
        case 0x2e4998u: goto label_2e4998;
        case 0x2e499cu: goto label_2e499c;
        case 0x2e49a0u: goto label_2e49a0;
        case 0x2e49a4u: goto label_2e49a4;
        case 0x2e49a8u: goto label_2e49a8;
        case 0x2e49acu: goto label_2e49ac;
        case 0x2e49b0u: goto label_2e49b0;
        case 0x2e49b4u: goto label_2e49b4;
        case 0x2e49b8u: goto label_2e49b8;
        case 0x2e49bcu: goto label_2e49bc;
        case 0x2e49c0u: goto label_2e49c0;
        case 0x2e49c4u: goto label_2e49c4;
        case 0x2e49c8u: goto label_2e49c8;
        case 0x2e49ccu: goto label_2e49cc;
        case 0x2e49d0u: goto label_2e49d0;
        case 0x2e49d4u: goto label_2e49d4;
        case 0x2e49d8u: goto label_2e49d8;
        case 0x2e49dcu: goto label_2e49dc;
        case 0x2e49e0u: goto label_2e49e0;
        case 0x2e49e4u: goto label_2e49e4;
        case 0x2e49e8u: goto label_2e49e8;
        case 0x2e49ecu: goto label_2e49ec;
        case 0x2e49f0u: goto label_2e49f0;
        case 0x2e49f4u: goto label_2e49f4;
        default: break;
    }

    ctx->pc = 0x2e4980u;

label_2e4980:
    // 0x2e4980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e4984:
    // 0x2e4984: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e4988:
    // 0x2e4988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e498c:
    // 0x2e498c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e4990:
    // 0x2e4990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e4994:
    // 0x2e4994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4998:
    // 0x2e4998: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e4998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2e499c:
    // 0x2e499c: 0x24632370  addiu       $v1, $v1, 0x2370
    ctx->pc = 0x2e499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
label_2e49a0:
    // 0x2e49a0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e49a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2e49a4:
    // 0x2e49a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e49a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e49a8:
    // 0x2e49a8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2e49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2e49ac:
    // 0x2e49ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e49acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2e49b0:
    // 0x2e49b0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2e49b4:
    // 0x2e49b4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2e49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_2e49b8:
    // 0x2e49b8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2e49b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2e49bc:
    // 0x2e49bc: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2e49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_2e49c0:
    // 0x2e49c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2e49c4:
    // 0x2e49c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e49c8:
    // 0x2e49c8: 0x8c862b04  lw          $a2, 0x2B04($a0)
    ctx->pc = 0x2e49c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11012)));
label_2e49cc:
    // 0x2e49cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e49d0:
    // 0x2e49d0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2e49d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2e49d4:
    // 0x2e49d4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2e49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2e49d8:
    // 0x2e49d8: 0x40f809  jalr        $v0
label_2e49dc:
    if (ctx->pc == 0x2E49DCu) {
        ctx->pc = 0x2E49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49D8u;
        // 0x2e49dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E49E0u;
        goto label_2e49e0;
    }
    ctx->pc = 0x2E49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E49E0u);
        ctx->pc = 0x2E49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49D8u;
        // 0x2e49dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E49D8u, 0x2E49E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E49E0u;
label_2e49e0:
    // 0x2e49e0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2e49e4:
    // 0x2e49e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e49e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e49e8:
    // 0x2e49e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e49e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e49ec:
    // 0x2e49ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e49ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e49f0:
    // 0x2e49f0: 0x3e00008  jr          $ra
label_2e49f4:
    if (ctx->pc == 0x2E49F4u) {
        ctx->pc = 0x2E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49F0u;
        // 0x2e49f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E49F8u;
        goto label_fallthrough_0x2e49f0;
    }
    ctx->pc = 0x2E49F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49F0u;
        // 0x2e49f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E49F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e49f0:
    ctx->pc = 0x2E49F8u;
}
