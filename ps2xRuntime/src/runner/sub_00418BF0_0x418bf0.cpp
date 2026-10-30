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

// Function: sub_00418BF0
// Address: 0x418bf0 - 0x418c68
void sub_00418BF0_0x418bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418BF0_0x418bf0");
#endif

    switch (ctx->pc) {
        case 0x418bf0u: goto label_418bf0;
        case 0x418bf4u: goto label_418bf4;
        case 0x418bf8u: goto label_418bf8;
        case 0x418bfcu: goto label_418bfc;
        case 0x418c00u: goto label_418c00;
        case 0x418c04u: goto label_418c04;
        case 0x418c08u: goto label_418c08;
        case 0x418c0cu: goto label_418c0c;
        case 0x418c10u: goto label_418c10;
        case 0x418c14u: goto label_418c14;
        case 0x418c18u: goto label_418c18;
        case 0x418c1cu: goto label_418c1c;
        case 0x418c20u: goto label_418c20;
        case 0x418c24u: goto label_418c24;
        case 0x418c28u: goto label_418c28;
        case 0x418c2cu: goto label_418c2c;
        case 0x418c30u: goto label_418c30;
        case 0x418c34u: goto label_418c34;
        case 0x418c38u: goto label_418c38;
        case 0x418c3cu: goto label_418c3c;
        case 0x418c40u: goto label_418c40;
        case 0x418c44u: goto label_418c44;
        case 0x418c48u: goto label_418c48;
        case 0x418c4cu: goto label_418c4c;
        case 0x418c50u: goto label_418c50;
        case 0x418c54u: goto label_418c54;
        case 0x418c58u: goto label_418c58;
        case 0x418c5cu: goto label_418c5c;
        case 0x418c60u: goto label_418c60;
        case 0x418c64u: goto label_418c64;
        default: break;
    }

    ctx->pc = 0x418bf0u;

label_418bf0:
    // 0x418bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x418bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_418bf4:
    // 0x418bf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x418bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_418bf8:
    // 0x418bf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x418bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_418bfc:
    // 0x418bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x418bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418c00:
    // 0x418c00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x418c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_418c04:
    // 0x418c04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x418c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_418c08:
    // 0x418c08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x418c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_418c0c:
    // 0x418c0c: 0x26040458  addiu       $a0, $s0, 0x458
    ctx->pc = 0x418c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1112));
label_418c10:
    // 0x418c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_418c14:
    // 0x418c14: 0xc10c4de  jal         func_431378
label_418c18:
    if (ctx->pc == 0x418C18u) {
        ctx->pc = 0x418C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C14u;
        // 0x418c18: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C1Cu;
        goto label_418c1c;
    }
    ctx->pc = 0x418C14u;
    SET_GPR_U32(ctx, 31, 0x418C1Cu);
    ctx->pc = 0x418C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C14u;
    // 0x418c18: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x418C14u, 0x418C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C1Cu;
label_418c1c:
    // 0x418c1c: 0x2604046c  addiu       $a0, $s0, 0x46C
    ctx->pc = 0x418c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1132));
label_418c20:
    // 0x418c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x418c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_418c24:
    // 0x418c24: 0xc10c4de  jal         func_431378
label_418c28:
    if (ctx->pc == 0x418C28u) {
        ctx->pc = 0x418C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C24u;
        // 0x418c28: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C2Cu;
        goto label_418c2c;
    }
    ctx->pc = 0x418C24u;
    SET_GPR_U32(ctx, 31, 0x418C2Cu);
    ctx->pc = 0x418C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C24u;
    // 0x418c28: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x418C24u, 0x418C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C2Cu;
label_418c2c:
    // 0x418c2c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_418c30:
    if (ctx->pc == 0x418C30u) {
        ctx->pc = 0x418C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C2Cu;
        // 0x418c30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C34u;
        goto label_418c34;
    }
    ctx->pc = 0x418C2Cu;
    {
        const bool branch_taken_0x418c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x418C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C2Cu;
        // 0x418c30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418c2c) {
            ctx->pc = 0x418C4Cu;
            goto label_418c4c;
        }
    }
    ctx->pc = 0x418C34u;
label_418c34:
    // 0x418c34: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x418c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_418c38:
    // 0x418c38: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x418c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_418c3c:
    // 0x418c3c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x418c3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_418c40:
    // 0x418c40: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x418c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_418c44:
    // 0x418c44: 0x40f809  jalr        $v0
label_418c48:
    if (ctx->pc == 0x418C48u) {
        ctx->pc = 0x418C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C44u;
        // 0x418c48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C4Cu;
        goto label_418c4c;
    }
    ctx->pc = 0x418C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418C4Cu);
        ctx->pc = 0x418C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C44u;
        // 0x418c48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418C44u, 0x418C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418C4Cu;
label_418c4c:
    // 0x418c4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x418c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418c50:
    // 0x418c50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x418c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_418c54:
    // 0x418c54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x418c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_418c58:
    // 0x418c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_418c5c:
    // 0x418c5c: 0x3e00008  jr          $ra
label_418c60:
    if (ctx->pc == 0x418C60u) {
        ctx->pc = 0x418C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C5Cu;
        // 0x418c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C64u;
        goto label_418c64;
    }
    ctx->pc = 0x418C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C5Cu;
        // 0x418c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418C64u;
label_418c64:
    // 0x418c64: 0x0  nop
    ctx->pc = 0x418c64u;
    // NOP
    ctx->pc = 0x418c68u;
}
