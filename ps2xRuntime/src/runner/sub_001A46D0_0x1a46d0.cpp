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

// Function: sub_001A46D0
// Address: 0x1a46d0 - 0x1a4748
void sub_001A46D0_0x1a46d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A46D0_0x1a46d0");
#endif

    switch (ctx->pc) {
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        default: break;
    }

    ctx->pc = 0x1a46d0u;

label_1a46d0:
    // 0x1a46d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a46d4:
    // 0x1a46d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1a46d8:
    // 0x1a46d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a46d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a46dc:
    // 0x1a46dc: 0x244297c8  addiu       $v0, $v0, -0x6838
    ctx->pc = 0x1a46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940616));
label_1a46e0:
    // 0x1a46e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a46e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a46e4:
    // 0x1a46e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a46e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a46e8:
    // 0x1a46e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a46ec:
    // 0x1a46ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a46f0:
    // 0x1a46f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a46f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a46f4:
    // 0x1a46f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a46f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a46f8:
    // 0x1a46f8: 0x8c6827e4  lw          $t0, 0x27E4($v1)
    ctx->pc = 0x1a46f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1a46fc:
    // 0x1a46fc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1a4700:
    // 0x1a4700: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1a4704:
    // 0x1a4704: 0x24c63ea0  addiu       $a2, $a2, 0x3EA0
    ctx->pc = 0x1a4704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16032));
label_1a4708:
    // 0x1a4708: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a470c:
    // 0x1a470c: 0x24070067  addiu       $a3, $zero, 0x67
    ctx->pc = 0x1a470cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_1a4710:
    // 0x1a4710: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1a4710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1a4714:
    // 0x1a4714: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1a4718:
    // 0x1a4718: 0x60f809  jalr        $v1
label_1a471c:
    if (ctx->pc == 0x1A471Cu) {
        ctx->pc = 0x1A471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4718u;
        // 0x1a471c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4720u;
        goto label_1a4720;
    }
    ctx->pc = 0x1A4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4720u);
        ctx->pc = 0x1A471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4718u;
        // 0x1a471c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4718u, 0x1A4720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4720u;
label_1a4720:
    // 0x1a4720: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1a4720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1a4724:
    // 0x1a4724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4728:
    // 0x1a4728: 0xc06e410  jal         func_1B9040
label_1a472c:
    if (ctx->pc == 0x1A472Cu) {
        ctx->pc = 0x1A472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4728u;
        // 0x1a472c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4730u;
        goto label_1a4730;
    }
    ctx->pc = 0x1A4728u;
    SET_GPR_U32(ctx, 31, 0x1A4730u);
    ctx->pc = 0x1A472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4728u;
    // 0x1a472c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1A4728u, 0x1A4730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4730u;
label_1a4730:
    // 0x1a4730: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4734:
    // 0x1a4734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4738:
    // 0x1a4738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a473c:
    // 0x1a473c: 0x3e00008  jr          $ra
label_1a4740:
    if (ctx->pc == 0x1A4740u) {
        ctx->pc = 0x1A4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A473Cu;
        // 0x1a4740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4744u;
        goto label_1a4744;
    }
    ctx->pc = 0x1A473Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A473Cu;
        // 0x1a4740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A473Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4744u;
label_1a4744:
    // 0x1a4744: 0x0  nop
    ctx->pc = 0x1a4744u;
    // NOP
    ctx->pc = 0x1a4748u;
}
