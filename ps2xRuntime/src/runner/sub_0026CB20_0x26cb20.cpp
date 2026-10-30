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

// Function: sub_0026CB20
// Address: 0x26cb20 - 0x26cb98
void sub_0026CB20_0x26cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CB20_0x26cb20");
#endif

    switch (ctx->pc) {
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb24u: goto label_26cb24;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb2cu: goto label_26cb2c;
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb34u: goto label_26cb34;
        case 0x26cb38u: goto label_26cb38;
        case 0x26cb3cu: goto label_26cb3c;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb4cu: goto label_26cb4c;
        case 0x26cb50u: goto label_26cb50;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cb58u: goto label_26cb58;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb60u: goto label_26cb60;
        case 0x26cb64u: goto label_26cb64;
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb74u: goto label_26cb74;
        case 0x26cb78u: goto label_26cb78;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb84u: goto label_26cb84;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb90u: goto label_26cb90;
        case 0x26cb94u: goto label_26cb94;
        default: break;
    }

    ctx->pc = 0x26cb20u;

label_26cb20:
    // 0x26cb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26cb24:
    // 0x26cb24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26cb28:
    // 0x26cb28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26cb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cb2c:
    // 0x26cb2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26cb30:
    // 0x26cb30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26cb34:
    // 0x26cb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26cb38:
    // 0x26cb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26cb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cb3c:
    // 0x26cb3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26cb40:
    // 0x26cb40: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x26cb40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_26cb44:
    // 0x26cb44: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_26cb48:
    // 0x26cb48: 0xc0f809  jalr        $a2
label_26cb4c:
    if (ctx->pc == 0x26CB4Cu) {
        ctx->pc = 0x26CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB48u;
        // 0x26cb4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB50u;
        goto label_26cb50;
    }
    ctx->pc = 0x26CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x26CB50u);
        ctx->pc = 0x26CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB48u;
        // 0x26cb4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CB48u, 0x26CB50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CB50u;
label_26cb50:
    // 0x26cb50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26cb54:
    // 0x26cb54: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cb58:
    // 0x26cb58: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cb5c:
    // 0x26cb5c: 0x40f809  jalr        $v0
label_26cb60:
    if (ctx->pc == 0x26CB60u) {
        ctx->pc = 0x26CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB5Cu;
        // 0x26cb60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB64u;
        goto label_26cb64;
    }
    ctx->pc = 0x26CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CB64u);
        ctx->pc = 0x26CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB5Cu;
        // 0x26cb60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CB5Cu, 0x26CB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CB64u;
label_26cb64:
    // 0x26cb64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_26cb68:
    if (ctx->pc == 0x26CB68u) {
        ctx->pc = 0x26CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB64u;
        // 0x26cb68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB6Cu;
        goto label_26cb6c;
    }
    ctx->pc = 0x26CB64u;
    {
        const bool branch_taken_0x26cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cb64) {
            ctx->pc = 0x26CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB64u;
            // 0x26cb68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB88u;
            goto label_26cb88;
        }
    }
    ctx->pc = 0x26CB6Cu;
label_26cb6c:
    // 0x26cb6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26cb70:
    // 0x26cb70: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cb74:
    // 0x26cb74: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cb78:
    // 0x26cb78: 0x40f809  jalr        $v0
label_26cb7c:
    if (ctx->pc == 0x26CB7Cu) {
        ctx->pc = 0x26CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB78u;
        // 0x26cb7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB80u;
        goto label_26cb80;
    }
    ctx->pc = 0x26CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CB80u);
        ctx->pc = 0x26CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB78u;
        // 0x26cb7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CB78u, 0x26CB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CB80u;
label_26cb80:
    // 0x26cb80: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x26cb80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_26cb84:
    // 0x26cb84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26cb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26cb88:
    // 0x26cb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26cb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26cb8c:
    // 0x26cb8c: 0x3e00008  jr          $ra
label_26cb90:
    if (ctx->pc == 0x26CB90u) {
        ctx->pc = 0x26CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB8Cu;
        // 0x26cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB94u;
        goto label_26cb94;
    }
    ctx->pc = 0x26CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB8Cu;
        // 0x26cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CB94u;
label_26cb94:
    // 0x26cb94: 0x0  nop
    ctx->pc = 0x26cb94u;
    // NOP
    ctx->pc = 0x26cb98u;
}
