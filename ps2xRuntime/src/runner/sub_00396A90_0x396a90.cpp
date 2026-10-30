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

// Function: sub_00396A90
// Address: 0x396a90 - 0x396b68
void sub_00396A90_0x396a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396A90_0x396a90");
#endif

    switch (ctx->pc) {
        case 0x396a90u: goto label_396a90;
        case 0x396a94u: goto label_396a94;
        case 0x396a98u: goto label_396a98;
        case 0x396a9cu: goto label_396a9c;
        case 0x396aa0u: goto label_396aa0;
        case 0x396aa4u: goto label_396aa4;
        case 0x396aa8u: goto label_396aa8;
        case 0x396aacu: goto label_396aac;
        case 0x396ab0u: goto label_396ab0;
        case 0x396ab4u: goto label_396ab4;
        case 0x396ab8u: goto label_396ab8;
        case 0x396abcu: goto label_396abc;
        case 0x396ac0u: goto label_396ac0;
        case 0x396ac4u: goto label_396ac4;
        case 0x396ac8u: goto label_396ac8;
        case 0x396accu: goto label_396acc;
        case 0x396ad0u: goto label_396ad0;
        case 0x396ad4u: goto label_396ad4;
        case 0x396ad8u: goto label_396ad8;
        case 0x396adcu: goto label_396adc;
        case 0x396ae0u: goto label_396ae0;
        case 0x396ae4u: goto label_396ae4;
        case 0x396ae8u: goto label_396ae8;
        case 0x396aecu: goto label_396aec;
        case 0x396af0u: goto label_396af0;
        case 0x396af4u: goto label_396af4;
        case 0x396af8u: goto label_396af8;
        case 0x396afcu: goto label_396afc;
        case 0x396b00u: goto label_396b00;
        case 0x396b04u: goto label_396b04;
        case 0x396b08u: goto label_396b08;
        case 0x396b0cu: goto label_396b0c;
        case 0x396b10u: goto label_396b10;
        case 0x396b14u: goto label_396b14;
        case 0x396b18u: goto label_396b18;
        case 0x396b1cu: goto label_396b1c;
        case 0x396b20u: goto label_396b20;
        case 0x396b24u: goto label_396b24;
        case 0x396b28u: goto label_396b28;
        case 0x396b2cu: goto label_396b2c;
        case 0x396b30u: goto label_396b30;
        case 0x396b34u: goto label_396b34;
        case 0x396b38u: goto label_396b38;
        case 0x396b3cu: goto label_396b3c;
        case 0x396b40u: goto label_396b40;
        case 0x396b44u: goto label_396b44;
        case 0x396b48u: goto label_396b48;
        case 0x396b4cu: goto label_396b4c;
        case 0x396b50u: goto label_396b50;
        case 0x396b54u: goto label_396b54;
        case 0x396b58u: goto label_396b58;
        case 0x396b5cu: goto label_396b5c;
        case 0x396b60u: goto label_396b60;
        case 0x396b64u: goto label_396b64;
        default: break;
    }

    ctx->pc = 0x396a90u;

label_396a90:
    // 0x396a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_396a94:
    // 0x396a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x396a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_396a98:
    // 0x396a98: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_396a9c:
    // 0x396a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x396a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_396aa0:
    // 0x396aa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x396aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_396aa4:
    // 0x396aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_396aa8:
    // 0x396aa8: 0xc0e4060  jal         func_390180
label_396aac:
    if (ctx->pc == 0x396AACu) {
        ctx->pc = 0x396AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AA8u;
        // 0x396aac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AB0u;
        goto label_396ab0;
    }
    ctx->pc = 0x396AA8u;
    SET_GPR_U32(ctx, 31, 0x396AB0u);
    ctx->pc = 0x396AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AA8u;
    // 0x396aac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396AA8u, 0x396AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AB0u;
label_396ab0:
    // 0x396ab0: 0xc0e57ce  jal         func_395F38
label_396ab4:
    if (ctx->pc == 0x396AB4u) {
        ctx->pc = 0x396AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AB0u;
        // 0x396ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AB8u;
        goto label_396ab8;
    }
    ctx->pc = 0x396AB0u;
    SET_GPR_U32(ctx, 31, 0x396AB8u);
    ctx->pc = 0x396AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AB0u;
    // 0x396ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x396AB0u, 0x396AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AB8u;
label_396ab8:
    // 0x396ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396abc:
    // 0x396abc: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
label_396ac0:
    if (ctx->pc == 0x396AC0u) {
        ctx->pc = 0x396AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396ABCu;
        // 0x396ac0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AC4u;
        goto label_396ac4;
    }
    ctx->pc = 0x396ABCu;
    {
        const bool branch_taken_0x396abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396abc) {
            ctx->pc = 0x396AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396ABCu;
            // 0x396ac0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B54u;
            goto label_396b54;
        }
    }
    ctx->pc = 0x396AC4u;
label_396ac4:
    // 0x396ac4: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_396ac8:
    if (ctx->pc == 0x396AC8u) {
        ctx->pc = 0x396ACCu;
        goto label_396acc;
    }
    ctx->pc = 0x396AC4u;
    {
        const bool branch_taken_0x396ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ac4) {
            ctx->pc = 0x396B48u;
            goto label_396b48;
        }
    }
    ctx->pc = 0x396ACCu;
label_396acc:
    // 0x396acc: 0xc0e4752  jal         func_391D48
label_396ad0:
    if (ctx->pc == 0x396AD0u) {
        ctx->pc = 0x396AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396ACCu;
        // 0x396ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AD4u;
        goto label_396ad4;
    }
    ctx->pc = 0x396ACCu;
    SET_GPR_U32(ctx, 31, 0x396AD4u);
    ctx->pc = 0x396AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396ACCu;
    // 0x396ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D48u, 0x396ACCu, 0x396AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AD4u;
label_396ad4:
    // 0x396ad4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396ad8:
    // 0x396ad8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x396ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_396adc:
    // 0x396adc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x396adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_396ae0:
    // 0x396ae0: 0x40f809  jalr        $v0
label_396ae4:
    if (ctx->pc == 0x396AE4u) {
        ctx->pc = 0x396AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AE0u;
        // 0x396ae4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AE8u;
        goto label_396ae8;
    }
    ctx->pc = 0x396AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396AE8u);
        ctx->pc = 0x396AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AE0u;
        // 0x396ae4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396AE0u, 0x396AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396AE8u;
label_396ae8:
    // 0x396ae8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_396aec:
    if (ctx->pc == 0x396AECu) {
        ctx->pc = 0x396AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AE8u;
        // 0x396aec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AF0u;
        goto label_396af0;
    }
    ctx->pc = 0x396AE8u;
    {
        const bool branch_taken_0x396ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ae8) {
            ctx->pc = 0x396AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396AE8u;
            // 0x396aec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B54u;
            goto label_396b54;
        }
    }
    ctx->pc = 0x396AF0u;
label_396af0:
    // 0x396af0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396af4:
    // 0x396af4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x396af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_396af8:
    // 0x396af8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x396af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_396afc:
    // 0x396afc: 0x40f809  jalr        $v0
label_396b00:
    if (ctx->pc == 0x396B00u) {
        ctx->pc = 0x396B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AFCu;
        // 0x396b00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B04u;
        goto label_396b04;
    }
    ctx->pc = 0x396AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396B04u);
        ctx->pc = 0x396B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AFCu;
        // 0x396b00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396AFCu, 0x396B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396B04u;
label_396b04:
    // 0x396b04: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x396b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_396b08:
    // 0x396b08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x396b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_396b0c:
    // 0x396b0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x396b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_396b10:
    // 0x396b10: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x396b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_396b14:
    // 0x396b14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x396b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396b18:
    // 0x396b18: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x396b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_396b1c:
    // 0x396b1c: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x396b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_396b20:
    // 0x396b20: 0x40f809  jalr        $v0
label_396b24:
    if (ctx->pc == 0x396B24u) {
        ctx->pc = 0x396B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B20u;
        // 0x396b24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B28u;
        goto label_396b28;
    }
    ctx->pc = 0x396B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396B28u);
        ctx->pc = 0x396B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B20u;
        // 0x396b24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396B20u, 0x396B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396B28u;
label_396b28:
    // 0x396b28: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x396b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_396b2c:
    // 0x396b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396b30:
    // 0x396b30: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x396b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_396b34:
    // 0x396b34: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x396b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_396b38:
    // 0x396b38: 0xc0f809  jalr        $a2
label_396b3c:
    if (ctx->pc == 0x396B3Cu) {
        ctx->pc = 0x396B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B38u;
        // 0x396b3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B40u;
        goto label_396b40;
    }
    ctx->pc = 0x396B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x396B40u);
        ctx->pc = 0x396B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B38u;
        // 0x396b3c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396B38u, 0x396B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396B40u;
label_396b40:
    // 0x396b40: 0x10000004  b           . + 4 + (0x4 << 2)
label_396b44:
    if (ctx->pc == 0x396B44u) {
        ctx->pc = 0x396B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B40u;
        // 0x396b44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B48u;
        goto label_396b48;
    }
    ctx->pc = 0x396B40u;
    {
        const bool branch_taken_0x396b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B40u;
        // 0x396b44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b40) {
            ctx->pc = 0x396B54u;
            goto label_396b54;
        }
    }
    ctx->pc = 0x396B48u;
label_396b48:
    // 0x396b48: 0xc0e4936  jal         func_3924D8
label_396b4c:
    if (ctx->pc == 0x396B4Cu) {
        ctx->pc = 0x396B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B48u;
        // 0x396b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B50u;
        goto label_396b50;
    }
    ctx->pc = 0x396B48u;
    SET_GPR_U32(ctx, 31, 0x396B50u);
    ctx->pc = 0x396B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B48u;
    // 0x396b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x396B48u, 0x396B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396B50u;
label_396b50:
    // 0x396b50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x396b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_396b54:
    // 0x396b54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x396b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_396b58:
    // 0x396b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396b5c:
    // 0x396b5c: 0x3e00008  jr          $ra
label_396b60:
    if (ctx->pc == 0x396B60u) {
        ctx->pc = 0x396B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B5Cu;
        // 0x396b60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B64u;
        goto label_396b64;
    }
    ctx->pc = 0x396B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B5Cu;
        // 0x396b60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396B64u;
label_396b64:
    // 0x396b64: 0x0  nop
    ctx->pc = 0x396b64u;
    // NOP
    ctx->pc = 0x396b68u;
}
