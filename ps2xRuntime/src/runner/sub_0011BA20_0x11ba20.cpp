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

// Function: sub_0011BA20
// Address: 0x11ba20 - 0x11bad8
void sub_0011BA20_0x11ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BA20_0x11ba20");
#endif

    switch (ctx->pc) {
        case 0x11ba20u: goto label_11ba20;
        case 0x11ba24u: goto label_11ba24;
        case 0x11ba28u: goto label_11ba28;
        case 0x11ba2cu: goto label_11ba2c;
        case 0x11ba30u: goto label_11ba30;
        case 0x11ba34u: goto label_11ba34;
        case 0x11ba38u: goto label_11ba38;
        case 0x11ba3cu: goto label_11ba3c;
        case 0x11ba40u: goto label_11ba40;
        case 0x11ba44u: goto label_11ba44;
        case 0x11ba48u: goto label_11ba48;
        case 0x11ba4cu: goto label_11ba4c;
        case 0x11ba50u: goto label_11ba50;
        case 0x11ba54u: goto label_11ba54;
        case 0x11ba58u: goto label_11ba58;
        case 0x11ba5cu: goto label_11ba5c;
        case 0x11ba60u: goto label_11ba60;
        case 0x11ba64u: goto label_11ba64;
        case 0x11ba68u: goto label_11ba68;
        case 0x11ba6cu: goto label_11ba6c;
        case 0x11ba70u: goto label_11ba70;
        case 0x11ba74u: goto label_11ba74;
        case 0x11ba78u: goto label_11ba78;
        case 0x11ba7cu: goto label_11ba7c;
        case 0x11ba80u: goto label_11ba80;
        case 0x11ba84u: goto label_11ba84;
        case 0x11ba88u: goto label_11ba88;
        case 0x11ba8cu: goto label_11ba8c;
        case 0x11ba90u: goto label_11ba90;
        case 0x11ba94u: goto label_11ba94;
        case 0x11ba98u: goto label_11ba98;
        case 0x11ba9cu: goto label_11ba9c;
        case 0x11baa0u: goto label_11baa0;
        case 0x11baa4u: goto label_11baa4;
        case 0x11baa8u: goto label_11baa8;
        case 0x11baacu: goto label_11baac;
        case 0x11bab0u: goto label_11bab0;
        case 0x11bab4u: goto label_11bab4;
        case 0x11bab8u: goto label_11bab8;
        case 0x11babcu: goto label_11babc;
        case 0x11bac0u: goto label_11bac0;
        case 0x11bac4u: goto label_11bac4;
        case 0x11bac8u: goto label_11bac8;
        case 0x11baccu: goto label_11bacc;
        case 0x11bad0u: goto label_11bad0;
        case 0x11bad4u: goto label_11bad4;
        default: break;
    }

    ctx->pc = 0x11ba20u;

label_11ba20:
    // 0x11ba20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_11ba24:
    // 0x11ba24: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x11ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_11ba28:
    // 0x11ba28: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x11ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_11ba2c:
    // 0x11ba2c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_11ba30:
    // 0x11ba30: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x11ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_11ba34:
    // 0x11ba34: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_11ba38:
    // 0x11ba38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_11ba3c:
    // 0x11ba3c: 0xc0e4060  jal         func_390180
label_11ba40:
    if (ctx->pc == 0x11BA40u) {
        ctx->pc = 0x11BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA3Cu;
        // 0x11ba40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA44u;
        goto label_11ba44;
    }
    ctx->pc = 0x11BA3Cu;
    SET_GPR_U32(ctx, 31, 0x11BA44u);
    ctx->pc = 0x11BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA3Cu;
    // 0x11ba40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BA3Cu, 0x11BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA44u;
label_11ba44:
    // 0x11ba44: 0xc047a5e  jal         func_11E978
label_11ba48:
    if (ctx->pc == 0x11BA48u) {
        ctx->pc = 0x11BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA44u;
        // 0x11ba48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA4Cu;
        goto label_11ba4c;
    }
    ctx->pc = 0x11BA44u;
    SET_GPR_U32(ctx, 31, 0x11BA4Cu);
    ctx->pc = 0x11BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA44u;
    // 0x11ba48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11BA44u, 0x11BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA4Cu;
label_11ba4c:
    // 0x11ba4c: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x11ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_11ba50:
    // 0x11ba50: 0xc0e4060  jal         func_390180
label_11ba54:
    if (ctx->pc == 0x11BA54u) {
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA50u;
        // 0x11ba54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA58u;
        goto label_11ba58;
    }
    ctx->pc = 0x11BA50u;
    SET_GPR_U32(ctx, 31, 0x11BA58u);
    ctx->pc = 0x11BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA50u;
    // 0x11ba54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BA50u, 0x11BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA58u;
label_11ba58:
    // 0x11ba58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11ba5c:
    // 0x11ba5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ba5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ba60:
    // 0x11ba60: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x11ba60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11ba64:
    // 0x11ba64: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x11ba64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_11ba68:
    // 0x11ba68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ba68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11ba6c:
    // 0x11ba6c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_11ba70:
    // 0x11ba70: 0x40f809  jalr        $v0
label_11ba74:
    if (ctx->pc == 0x11BA74u) {
        ctx->pc = 0x11BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA70u;
        // 0x11ba74: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA78u;
        goto label_11ba78;
    }
    ctx->pc = 0x11BA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BA78u);
        ctx->pc = 0x11BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA70u;
        // 0x11ba74: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA70u, 0x11BA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BA78u;
label_11ba78:
    // 0x11ba78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11ba7c:
    // 0x11ba7c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x11ba7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11ba80:
    // 0x11ba80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ba84:
    // 0x11ba84: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_11ba88:
    // 0x11ba88: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x11ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_11ba8c:
    // 0x11ba8c: 0x40f809  jalr        $v0
label_11ba90:
    if (ctx->pc == 0x11BA90u) {
        ctx->pc = 0x11BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA8Cu;
        // 0x11ba90: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA94u;
        goto label_11ba94;
    }
    ctx->pc = 0x11BA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BA94u);
        ctx->pc = 0x11BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA8Cu;
        // 0x11ba90: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA8Cu, 0x11BA94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BA94u;
label_11ba94:
    // 0x11ba94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ba98:
    // 0x11ba98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ba98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ba9c:
    // 0x11ba9c: 0xc0cd66c  jal         func_3359B0
label_11baa0:
    if (ctx->pc == 0x11BAA0u) {
        ctx->pc = 0x11BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA9Cu;
        // 0x11baa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BAA4u;
        goto label_11baa4;
    }
    ctx->pc = 0x11BA9Cu;
    SET_GPR_U32(ctx, 31, 0x11BAA4u);
    ctx->pc = 0x11BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA9Cu;
    // 0x11baa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x11BA9Cu, 0x11BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAA4u;
label_11baa4:
    // 0x11baa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11baa8:
    // 0x11baa8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11baa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11baac:
    // 0x11baac: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x11baacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_11bab0:
    // 0x11bab0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_11bab4:
    // 0x11bab4: 0x60f809  jalr        $v1
label_11bab8:
    if (ctx->pc == 0x11BAB8u) {
        ctx->pc = 0x11BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB4u;
        // 0x11bab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BABCu;
        goto label_11babc;
    }
    ctx->pc = 0x11BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BABCu);
        ctx->pc = 0x11BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAB4u;
        // 0x11bab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BAB4u, 0x11BABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BABCu;
label_11babc:
    // 0x11babc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11babcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11bac0:
    // 0x11bac0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11bac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11bac4:
    // 0x11bac4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x11bac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11bac8:
    // 0x11bac8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11bacc:
    // 0x11bacc: 0x3e00008  jr          $ra
label_11bad0:
    if (ctx->pc == 0x11BAD0u) {
        ctx->pc = 0x11BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BACCu;
        // 0x11bad0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BAD4u;
        goto label_11bad4;
    }
    ctx->pc = 0x11BACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BACCu;
        // 0x11bad0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BAD4u;
label_11bad4:
    // 0x11bad4: 0x0  nop
    ctx->pc = 0x11bad4u;
    // NOP
    ctx->pc = 0x11bad8u;
}
