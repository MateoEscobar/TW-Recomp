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

// Function: sub_002E5128
// Address: 0x2e5128 - 0x2e51a8
void sub_002E5128_0x2e5128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5128_0x2e5128");
#endif

    switch (ctx->pc) {
        case 0x2e5128u: goto label_2e5128;
        case 0x2e512cu: goto label_2e512c;
        case 0x2e5130u: goto label_2e5130;
        case 0x2e5134u: goto label_2e5134;
        case 0x2e5138u: goto label_2e5138;
        case 0x2e513cu: goto label_2e513c;
        case 0x2e5140u: goto label_2e5140;
        case 0x2e5144u: goto label_2e5144;
        case 0x2e5148u: goto label_2e5148;
        case 0x2e514cu: goto label_2e514c;
        case 0x2e5150u: goto label_2e5150;
        case 0x2e5154u: goto label_2e5154;
        case 0x2e5158u: goto label_2e5158;
        case 0x2e515cu: goto label_2e515c;
        case 0x2e5160u: goto label_2e5160;
        case 0x2e5164u: goto label_2e5164;
        case 0x2e5168u: goto label_2e5168;
        case 0x2e516cu: goto label_2e516c;
        case 0x2e5170u: goto label_2e5170;
        case 0x2e5174u: goto label_2e5174;
        case 0x2e5178u: goto label_2e5178;
        case 0x2e517cu: goto label_2e517c;
        case 0x2e5180u: goto label_2e5180;
        case 0x2e5184u: goto label_2e5184;
        case 0x2e5188u: goto label_2e5188;
        case 0x2e518cu: goto label_2e518c;
        case 0x2e5190u: goto label_2e5190;
        case 0x2e5194u: goto label_2e5194;
        case 0x2e5198u: goto label_2e5198;
        case 0x2e519cu: goto label_2e519c;
        case 0x2e51a0u: goto label_2e51a0;
        case 0x2e51a4u: goto label_2e51a4;
        default: break;
    }

    ctx->pc = 0x2e5128u;

label_2e5128:
    // 0x2e5128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e512c:
    // 0x2e512c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e5130:
    // 0x2e5130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e5134:
    // 0x2e5134: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e5134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e5138:
    // 0x2e5138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e513c:
    // 0x2e513c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5140:
    // 0x2e5140: 0x24632250  addiu       $v1, $v1, 0x2250
    ctx->pc = 0x2e5140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8784));
label_2e5144:
    // 0x2e5144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e5144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e5148:
    // 0x2e5148: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2e5148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_2e514c:
    // 0x2e514c: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2e514cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_2e5150:
    // 0x2e5150: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2e5150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2e5154:
    // 0x2e5154: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e5154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2e5158:
    // 0x2e5158: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e5158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2e515c:
    // 0x2e515c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e5160:
    // 0x2e5160: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e5160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2e5164:
    // 0x2e5164: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e5164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2e5168:
    // 0x2e5168: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2e5168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e516c:
    // 0x2e516c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e5170:
    // 0x2e5170: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e5170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e5174:
    // 0x2e5174: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5178:
    // 0x2e5178: 0x40f809  jalr        $v0
label_2e517c:
    if (ctx->pc == 0x2E517Cu) {
        ctx->pc = 0x2E517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5178u;
        // 0x2e517c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5180u;
        goto label_2e5180;
    }
    ctx->pc = 0x2E5178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5180u);
        ctx->pc = 0x2E517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5178u;
        // 0x2e517c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5178u, 0x2E5180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5180u;
label_2e5180:
    // 0x2e5180: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e5184:
    // 0x2e5184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e5184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5188:
    // 0x2e5188: 0xc0d5068  jal         func_3541A0
label_2e518c:
    if (ctx->pc == 0x2E518Cu) {
        ctx->pc = 0x2E518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5188u;
        // 0x2e518c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5190u;
        goto label_2e5190;
    }
    ctx->pc = 0x2E5188u;
    SET_GPR_U32(ctx, 31, 0x2E5190u);
    ctx->pc = 0x2E518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5188u;
    // 0x2e518c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541A0u, 0x2E5188u, 0x2E5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5190u;
label_2e5190:
    // 0x2e5190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e5190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5194:
    // 0x2e5194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5198:
    // 0x2e5198: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e519c:
    // 0x2e519c: 0x3e00008  jr          $ra
label_2e51a0:
    if (ctx->pc == 0x2E51A0u) {
        ctx->pc = 0x2E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E519Cu;
        // 0x2e51a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E51A4u;
        goto label_2e51a4;
    }
    ctx->pc = 0x2E519Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E519Cu;
        // 0x2e51a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E519Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E51A4u;
label_2e51a4:
    // 0x2e51a4: 0x0  nop
    ctx->pc = 0x2e51a4u;
    // NOP
    ctx->pc = 0x2e51a8u;
}
