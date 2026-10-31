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

// Function: sub_003DEBD0
// Address: 0x3debd0 - 0x3dec80
void sub_003DEBD0_0x3debd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEBD0_0x3debd0");
#endif

    switch (ctx->pc) {
        case 0x3debd0u: goto label_3debd0;
        case 0x3debd4u: goto label_3debd4;
        case 0x3debd8u: goto label_3debd8;
        case 0x3debdcu: goto label_3debdc;
        case 0x3debe0u: goto label_3debe0;
        case 0x3debe4u: goto label_3debe4;
        case 0x3debe8u: goto label_3debe8;
        case 0x3debecu: goto label_3debec;
        case 0x3debf0u: goto label_3debf0;
        case 0x3debf4u: goto label_3debf4;
        case 0x3debf8u: goto label_3debf8;
        case 0x3debfcu: goto label_3debfc;
        case 0x3dec00u: goto label_3dec00;
        case 0x3dec04u: goto label_3dec04;
        case 0x3dec08u: goto label_3dec08;
        case 0x3dec0cu: goto label_3dec0c;
        case 0x3dec10u: goto label_3dec10;
        case 0x3dec14u: goto label_3dec14;
        case 0x3dec18u: goto label_3dec18;
        case 0x3dec1cu: goto label_3dec1c;
        case 0x3dec20u: goto label_3dec20;
        case 0x3dec24u: goto label_3dec24;
        case 0x3dec28u: goto label_3dec28;
        case 0x3dec2cu: goto label_3dec2c;
        case 0x3dec30u: goto label_3dec30;
        case 0x3dec34u: goto label_3dec34;
        case 0x3dec38u: goto label_3dec38;
        case 0x3dec3cu: goto label_3dec3c;
        case 0x3dec40u: goto label_3dec40;
        case 0x3dec44u: goto label_3dec44;
        case 0x3dec48u: goto label_3dec48;
        case 0x3dec4cu: goto label_3dec4c;
        case 0x3dec50u: goto label_3dec50;
        case 0x3dec54u: goto label_3dec54;
        case 0x3dec58u: goto label_3dec58;
        case 0x3dec5cu: goto label_3dec5c;
        case 0x3dec60u: goto label_3dec60;
        case 0x3dec64u: goto label_3dec64;
        case 0x3dec68u: goto label_3dec68;
        case 0x3dec6cu: goto label_3dec6c;
        case 0x3dec70u: goto label_3dec70;
        case 0x3dec74u: goto label_3dec74;
        case 0x3dec78u: goto label_3dec78;
        case 0x3dec7cu: goto label_3dec7c;
        default: break;
    }

    ctx->pc = 0x3debd0u;

label_3debd0:
    // 0x3debd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3debd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3debd4:
    // 0x3debd4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3debd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3debd8:
    // 0x3debd8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3debd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3debdc:
    // 0x3debdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3debdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3debe0:
    // 0x3debe0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3debe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3debe4:
    // 0x3debe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3debe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3debe8:
    // 0x3debe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3debe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3debec:
    // 0x3debec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3debecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3debf0:
    // 0x3debf0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3debf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3debf4:
    // 0x3debf4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3debf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3debf8:
    // 0x3debf8: 0x40f809  jalr        $v0
label_3debfc:
    if (ctx->pc == 0x3DEBFCu) {
        ctx->pc = 0x3DEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBF8u;
        // 0x3debfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC00u;
        goto label_3dec00;
    }
    ctx->pc = 0x3DEBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DEC00u);
        ctx->pc = 0x3DEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBF8u;
        // 0x3debfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEBF8u, 0x3DEC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DEC00u;
label_3dec00:
    // 0x3dec00: 0x24030404  addiu       $v1, $zero, 0x404
    ctx->pc = 0x3dec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3dec04:
    // 0x3dec04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dec04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dec08:
    // 0x3dec08: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3dec08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3dec0c:
    // 0x3dec0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dec10:
    // 0x3dec10: 0xc0e858c  jal         func_3A1630
label_3dec14:
    if (ctx->pc == 0x3DEC14u) {
        ctx->pc = 0x3DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC10u;
        // 0x3dec14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC18u;
        goto label_3dec18;
    }
    ctx->pc = 0x3DEC10u;
    SET_GPR_U32(ctx, 31, 0x3DEC18u);
    ctx->pc = 0x3DEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC10u;
    // 0x3dec14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DEC10u, 0x3DEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC18u;
label_3dec18:
    // 0x3dec18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3dec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dec1c:
    // 0x3dec1c: 0xc0ea12a  jal         func_3A84A8
label_3dec20:
    if (ctx->pc == 0x3DEC20u) {
        ctx->pc = 0x3DEC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC1Cu;
        // 0x3dec20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC24u;
        goto label_3dec24;
    }
    ctx->pc = 0x3DEC1Cu;
    SET_GPR_U32(ctx, 31, 0x3DEC24u);
    ctx->pc = 0x3DEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC1Cu;
    // 0x3dec20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DEC1Cu, 0x3DEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC24u;
label_3dec24:
    // 0x3dec24: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3dec24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dec28:
    // 0x3dec28: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3dec28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3dec2c:
    // 0x3dec2c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dec30:
    // 0x3dec30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dec34:
    // 0x3dec34: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3dec34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3dec38:
    // 0x3dec38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dec3c:
    // 0x3dec3c: 0xc0cd4ee  jal         func_3353B8
label_3dec40:
    if (ctx->pc == 0x3DEC40u) {
        ctx->pc = 0x3DEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC3Cu;
        // 0x3dec40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC44u;
        goto label_3dec44;
    }
    ctx->pc = 0x3DEC3Cu;
    SET_GPR_U32(ctx, 31, 0x3DEC44u);
    ctx->pc = 0x3DEC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC3Cu;
    // 0x3dec40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DEC3Cu, 0x3DEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC44u;
label_3dec44:
    // 0x3dec44: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x3dec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3dec48:
    // 0x3dec48: 0xc0e858c  jal         func_3A1630
label_3dec4c:
    if (ctx->pc == 0x3DEC4Cu) {
        ctx->pc = 0x3DEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC48u;
        // 0x3dec4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC50u;
        goto label_3dec50;
    }
    ctx->pc = 0x3DEC48u;
    SET_GPR_U32(ctx, 31, 0x3DEC50u);
    ctx->pc = 0x3DEC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC48u;
    // 0x3dec4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DEC48u, 0x3DEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC50u;
label_3dec50:
    // 0x3dec50: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3dec50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3dec54:
    // 0x3dec54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dec58:
    // 0x3dec58: 0xc0cd4ee  jal         func_3353B8
label_3dec5c:
    if (ctx->pc == 0x3DEC5Cu) {
        ctx->pc = 0x3DEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC58u;
        // 0x3dec5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC60u;
        goto label_3dec60;
    }
    ctx->pc = 0x3DEC58u;
    SET_GPR_U32(ctx, 31, 0x3DEC60u);
    ctx->pc = 0x3DEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC58u;
    // 0x3dec5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DEC58u, 0x3DEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC60u;
label_3dec60:
    // 0x3dec60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3dec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3dec64:
    // 0x3dec64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3dec64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dec68:
    // 0x3dec68: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3dec68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3dec6c:
    // 0x3dec6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3dec6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dec70:
    // 0x3dec70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dec70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dec74:
    // 0x3dec74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dec78:
    // 0x3dec78: 0x3e00008  jr          $ra
label_3dec7c:
    if (ctx->pc == 0x3DEC7Cu) {
        ctx->pc = 0x3DEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC78u;
        // 0x3dec7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEC80u;
        goto label_fallthrough_0x3dec78;
    }
    ctx->pc = 0x3DEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC78u;
        // 0x3dec7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dec78:
    ctx->pc = 0x3DEC80u;
}
