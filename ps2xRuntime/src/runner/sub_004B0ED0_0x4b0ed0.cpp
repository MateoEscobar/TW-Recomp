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

// Function: sub_004B0ED0
// Address: 0x4b0ed0 - 0x4b0f40
void sub_004B0ED0_0x4b0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0ED0_0x4b0ed0");
#endif

    switch (ctx->pc) {
        case 0x4b0ed0u: goto label_4b0ed0;
        case 0x4b0ed4u: goto label_4b0ed4;
        case 0x4b0ed8u: goto label_4b0ed8;
        case 0x4b0edcu: goto label_4b0edc;
        case 0x4b0ee0u: goto label_4b0ee0;
        case 0x4b0ee4u: goto label_4b0ee4;
        case 0x4b0ee8u: goto label_4b0ee8;
        case 0x4b0eecu: goto label_4b0eec;
        case 0x4b0ef0u: goto label_4b0ef0;
        case 0x4b0ef4u: goto label_4b0ef4;
        case 0x4b0ef8u: goto label_4b0ef8;
        case 0x4b0efcu: goto label_4b0efc;
        case 0x4b0f00u: goto label_4b0f00;
        case 0x4b0f04u: goto label_4b0f04;
        case 0x4b0f08u: goto label_4b0f08;
        case 0x4b0f0cu: goto label_4b0f0c;
        case 0x4b0f10u: goto label_4b0f10;
        case 0x4b0f14u: goto label_4b0f14;
        case 0x4b0f18u: goto label_4b0f18;
        case 0x4b0f1cu: goto label_4b0f1c;
        case 0x4b0f20u: goto label_4b0f20;
        case 0x4b0f24u: goto label_4b0f24;
        case 0x4b0f28u: goto label_4b0f28;
        case 0x4b0f2cu: goto label_4b0f2c;
        case 0x4b0f30u: goto label_4b0f30;
        case 0x4b0f34u: goto label_4b0f34;
        case 0x4b0f38u: goto label_4b0f38;
        case 0x4b0f3cu: goto label_4b0f3c;
        default: break;
    }

    ctx->pc = 0x4b0ed0u;

label_4b0ed0:
    // 0x4b0ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b0ed4:
    // 0x4b0ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b0ed8:
    // 0x4b0ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b0edc:
    // 0x4b0edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b0edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ee0:
    // 0x4b0ee0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4b0ee4:
    // 0x4b0ee4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_4b0ee8:
    if (ctx->pc == 0x4B0EE8u) {
        ctx->pc = 0x4B0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0EE4u;
        // 0x4b0ee8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0EECu;
        goto label_4b0eec;
    }
    ctx->pc = 0x4B0EE4u;
    {
        const bool branch_taken_0x4b0ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0EE4u;
        // 0x4b0ee8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ee4) {
            ctx->pc = 0x4B0F34u;
            goto label_4b0f34;
        }
    }
    ctx->pc = 0x4B0EECu;
label_4b0eec:
    // 0x4b0eec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b0ef0:
    // 0x4b0ef0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b0ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4b0ef4:
    // 0x4b0ef4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4b0ef8:
    if (ctx->pc == 0x4B0EF8u) {
        ctx->pc = 0x4B0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0EF4u;
        // 0x4b0ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0EFCu;
        goto label_4b0efc;
    }
    ctx->pc = 0x4B0EF4u;
    {
        const bool branch_taken_0x4b0ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0ef4) {
            ctx->pc = 0x4B0EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0EF4u;
            // 0x4b0ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0F1Cu;
            goto label_4b0f1c;
        }
    }
    ctx->pc = 0x4B0EFCu;
label_4b0efc:
    // 0x4b0efc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b0f00:
    // 0x4b0f00: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x4b0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_4b0f04:
    // 0x4b0f04: 0x40f809  jalr        $v0
label_4b0f08:
    if (ctx->pc == 0x4B0F08u) {
        ctx->pc = 0x4B0F0Cu;
        goto label_4b0f0c;
    }
    ctx->pc = 0x4B0F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0F0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0F04u, 0x4B0F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0F0Cu;
label_4b0f0c:
    // 0x4b0f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0f10:
    // 0x4b0f10: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_4b0f14:
    if (ctx->pc == 0x4B0F14u) {
        ctx->pc = 0x4B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F10u;
        // 0x4b0f14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0F18u;
        goto label_4b0f18;
    }
    ctx->pc = 0x4B0F10u;
    {
        const bool branch_taken_0x4b0f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F10u;
        // 0x4b0f14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f10) {
            ctx->pc = 0x4B0F34u;
            goto label_4b0f34;
        }
    }
    ctx->pc = 0x4B0F18u;
label_4b0f18:
    // 0x4b0f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0f1c:
    // 0x4b0f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0f20:
    // 0x4b0f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b0f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0f24:
    // 0x4b0f24: 0x2485004b  addiu       $a1, $a0, 0x4B
    ctx->pc = 0x4b0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
label_4b0f28:
    // 0x4b0f28: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x4b0f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_4b0f2c:
    // 0x4b0f2c: 0x812c392  j           func_4B0E48
label_4b0f30:
    if (ctx->pc == 0x4B0F30u) {
        ctx->pc = 0x4B0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F2Cu;
        // 0x4b0f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0F34u;
        goto label_4b0f34;
    }
    ctx->pc = 0x4B0F2Cu;
    ctx->pc = 0x4B0F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0F2Cu;
    // 0x4b0f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E48u;
    sub_004B0E48_0x4b0e48(rdram, ctx, runtime); return;
    ctx->pc = 0x4B0F34u;
label_4b0f34:
    // 0x4b0f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b0f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0f38:
    // 0x4b0f38: 0x3e00008  jr          $ra
label_4b0f3c:
    if (ctx->pc == 0x4B0F3Cu) {
        ctx->pc = 0x4B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F38u;
        // 0x4b0f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0F40u;
        goto label_fallthrough_0x4b0f38;
    }
    ctx->pc = 0x4B0F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F38u;
        // 0x4b0f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b0f38:
    ctx->pc = 0x4B0F40u;
}
