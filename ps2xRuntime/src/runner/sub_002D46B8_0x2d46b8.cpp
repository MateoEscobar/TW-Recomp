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

// Function: sub_002D46B8
// Address: 0x2d46b8 - 0x2d4740
void sub_002D46B8_0x2d46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D46B8_0x2d46b8");
#endif

    switch (ctx->pc) {
        case 0x2d46b8u: goto label_2d46b8;
        case 0x2d46bcu: goto label_2d46bc;
        case 0x2d46c0u: goto label_2d46c0;
        case 0x2d46c4u: goto label_2d46c4;
        case 0x2d46c8u: goto label_2d46c8;
        case 0x2d46ccu: goto label_2d46cc;
        case 0x2d46d0u: goto label_2d46d0;
        case 0x2d46d4u: goto label_2d46d4;
        case 0x2d46d8u: goto label_2d46d8;
        case 0x2d46dcu: goto label_2d46dc;
        case 0x2d46e0u: goto label_2d46e0;
        case 0x2d46e4u: goto label_2d46e4;
        case 0x2d46e8u: goto label_2d46e8;
        case 0x2d46ecu: goto label_2d46ec;
        case 0x2d46f0u: goto label_2d46f0;
        case 0x2d46f4u: goto label_2d46f4;
        case 0x2d46f8u: goto label_2d46f8;
        case 0x2d46fcu: goto label_2d46fc;
        case 0x2d4700u: goto label_2d4700;
        case 0x2d4704u: goto label_2d4704;
        case 0x2d4708u: goto label_2d4708;
        case 0x2d470cu: goto label_2d470c;
        case 0x2d4710u: goto label_2d4710;
        case 0x2d4714u: goto label_2d4714;
        case 0x2d4718u: goto label_2d4718;
        case 0x2d471cu: goto label_2d471c;
        case 0x2d4720u: goto label_2d4720;
        case 0x2d4724u: goto label_2d4724;
        case 0x2d4728u: goto label_2d4728;
        case 0x2d472cu: goto label_2d472c;
        case 0x2d4730u: goto label_2d4730;
        case 0x2d4734u: goto label_2d4734;
        case 0x2d4738u: goto label_2d4738;
        case 0x2d473cu: goto label_2d473c;
        default: break;
    }

    ctx->pc = 0x2d46b8u;

label_2d46b8:
    // 0x2d46b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d46bc:
    // 0x2d46bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2d46c0:
    // 0x2d46c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d46c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d46c4:
    // 0x2d46c4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2d46c8:
    // 0x2d46c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d46c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d46cc:
    // 0x2d46cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d46ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d46d0:
    // 0x2d46d0: 0x246312f0  addiu       $v1, $v1, 0x12F0
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4848));
label_2d46d4:
    // 0x2d46d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2d46d8:
    // 0x2d46d8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2d46dc:
    // 0x2d46dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d46e0:
    // 0x2d46e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2d46e4:
    // 0x2d46e4: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2d46e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2d46e8:
    // 0x2d46e8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d46e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2d46ec:
    // 0x2d46ec: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d46ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2d46f0:
    // 0x2d46f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d46f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2d46f4:
    // 0x2d46f4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_2d46f8:
    if (ctx->pc == 0x2D46F8u) {
        ctx->pc = 0x2D46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46F4u;
        // 0x2d46f8: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D46FCu;
        goto label_2d46fc;
    }
    ctx->pc = 0x2D46F4u;
    {
        const bool branch_taken_0x2d46f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D46F4u;
        // 0x2d46f8: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46f4) {
            ctx->pc = 0x2D4728u;
            goto label_2d4728;
        }
    }
    ctx->pc = 0x2D46FCu;
label_2d46fc:
    // 0x2d46fc: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x2d46fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2d4700:
    // 0x2d4700: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d4704:
    if (ctx->pc == 0x2D4704u) {
        ctx->pc = 0x2D4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4700u;
        // 0x2d4704: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4708u;
        goto label_2d4708;
    }
    ctx->pc = 0x2D4700u;
    {
        const bool branch_taken_0x2d4700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4700u;
        // 0x2d4704: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4700) {
            ctx->pc = 0x2D4728u;
            goto label_2d4728;
        }
    }
    ctx->pc = 0x2D4708u;
label_2d4708:
    // 0x2d4708: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2d4708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d470c:
    // 0x2d470c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2d470cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d4710:
    // 0x2d4710: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d4714:
    // 0x2d4714: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2d4718:
    // 0x2d4718: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2d4718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2d471c:
    // 0x2d471c: 0x40f809  jalr        $v0
label_2d4720:
    if (ctx->pc == 0x2D4720u) {
        ctx->pc = 0x2D4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D471Cu;
        // 0x2d4720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4724u;
        goto label_2d4724;
    }
    ctx->pc = 0x2D471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D4724u);
        ctx->pc = 0x2D4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D471Cu;
        // 0x2d4720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D471Cu, 0x2D4724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4724u;
label_2d4724:
    // 0x2d4724: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d4724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2d4728:
    // 0x2d4728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d4728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d472c:
    // 0x2d472c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4730:
    // 0x2d4730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d4730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4734:
    // 0x2d4734: 0x3e00008  jr          $ra
label_2d4738:
    if (ctx->pc == 0x2D4738u) {
        ctx->pc = 0x2D4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4734u;
        // 0x2d4738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D473Cu;
        goto label_2d473c;
    }
    ctx->pc = 0x2D4734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4734u;
        // 0x2d4738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D473Cu;
label_2d473c:
    // 0x2d473c: 0x0  nop
    ctx->pc = 0x2d473cu;
    // NOP
    ctx->pc = 0x2d4740u;
}
