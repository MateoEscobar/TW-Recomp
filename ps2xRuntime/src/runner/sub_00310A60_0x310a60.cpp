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

// Function: sub_00310A60
// Address: 0x310a60 - 0x310bc4
void sub_00310A60_0x310a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310A60_0x310a60");
#endif

    switch (ctx->pc) {
        case 0x310a60u: goto label_310a60;
        case 0x310a64u: goto label_310a64;
        case 0x310a68u: goto label_310a68;
        case 0x310a6cu: goto label_310a6c;
        case 0x310a70u: goto label_310a70;
        case 0x310a74u: goto label_310a74;
        case 0x310a78u: goto label_310a78;
        case 0x310a7cu: goto label_310a7c;
        case 0x310a80u: goto label_310a80;
        case 0x310a84u: goto label_310a84;
        case 0x310a88u: goto label_310a88;
        case 0x310a8cu: goto label_310a8c;
        case 0x310a90u: goto label_310a90;
        case 0x310a94u: goto label_310a94;
        case 0x310a98u: goto label_310a98;
        case 0x310a9cu: goto label_310a9c;
        case 0x310aa0u: goto label_310aa0;
        case 0x310aa4u: goto label_310aa4;
        case 0x310aa8u: goto label_310aa8;
        case 0x310aacu: goto label_310aac;
        case 0x310ab0u: goto label_310ab0;
        case 0x310ab4u: goto label_310ab4;
        case 0x310ab8u: goto label_310ab8;
        case 0x310abcu: goto label_310abc;
        case 0x310ac0u: goto label_310ac0;
        case 0x310ac4u: goto label_310ac4;
        case 0x310ac8u: goto label_310ac8;
        case 0x310accu: goto label_310acc;
        case 0x310ad0u: goto label_310ad0;
        case 0x310ad4u: goto label_310ad4;
        case 0x310ad8u: goto label_310ad8;
        case 0x310adcu: goto label_310adc;
        case 0x310ae0u: goto label_310ae0;
        case 0x310ae4u: goto label_310ae4;
        case 0x310ae8u: goto label_310ae8;
        case 0x310aecu: goto label_310aec;
        case 0x310af0u: goto label_310af0;
        case 0x310af4u: goto label_310af4;
        case 0x310af8u: goto label_310af8;
        case 0x310afcu: goto label_310afc;
        case 0x310b00u: goto label_310b00;
        case 0x310b04u: goto label_310b04;
        case 0x310b08u: goto label_310b08;
        case 0x310b0cu: goto label_310b0c;
        case 0x310b10u: goto label_310b10;
        case 0x310b14u: goto label_310b14;
        case 0x310b18u: goto label_310b18;
        case 0x310b1cu: goto label_310b1c;
        case 0x310b20u: goto label_310b20;
        case 0x310b24u: goto label_310b24;
        case 0x310b28u: goto label_310b28;
        case 0x310b2cu: goto label_310b2c;
        case 0x310b30u: goto label_310b30;
        case 0x310b34u: goto label_310b34;
        case 0x310b38u: goto label_310b38;
        case 0x310b3cu: goto label_310b3c;
        case 0x310b40u: goto label_310b40;
        case 0x310b44u: goto label_310b44;
        case 0x310b48u: goto label_310b48;
        case 0x310b4cu: goto label_310b4c;
        case 0x310b50u: goto label_310b50;
        case 0x310b54u: goto label_310b54;
        case 0x310b58u: goto label_310b58;
        case 0x310b5cu: goto label_310b5c;
        case 0x310b60u: goto label_310b60;
        case 0x310b64u: goto label_310b64;
        case 0x310b68u: goto label_310b68;
        case 0x310b6cu: goto label_310b6c;
        case 0x310b70u: goto label_310b70;
        case 0x310b74u: goto label_310b74;
        case 0x310b78u: goto label_310b78;
        case 0x310b7cu: goto label_310b7c;
        case 0x310b80u: goto label_310b80;
        case 0x310b84u: goto label_310b84;
        case 0x310b88u: goto label_310b88;
        case 0x310b8cu: goto label_310b8c;
        case 0x310b90u: goto label_310b90;
        case 0x310b94u: goto label_310b94;
        case 0x310b98u: goto label_310b98;
        case 0x310b9cu: goto label_310b9c;
        case 0x310ba0u: goto label_310ba0;
        case 0x310ba4u: goto label_310ba4;
        case 0x310ba8u: goto label_310ba8;
        case 0x310bacu: goto label_310bac;
        case 0x310bb0u: goto label_310bb0;
        case 0x310bb4u: goto label_310bb4;
        case 0x310bb8u: goto label_310bb8;
        case 0x310bbcu: goto label_310bbc;
        case 0x310bc0u: goto label_310bc0;
        default: break;
    }

    ctx->pc = 0x310a60u;

label_310a60:
    // 0x310a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_310a64:
    // 0x310a64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x310a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_310a68:
    // 0x310a68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_310a6c:
    // 0x310a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310a70:
    // 0x310a70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x310a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_310a74:
    // 0x310a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_310a78:
    // 0x310a78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x310a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_310a7c:
    // 0x310a7c: 0xc08a61a  jal         func_229868
label_310a80:
    if (ctx->pc == 0x310A80u) {
        ctx->pc = 0x310A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A7Cu;
        // 0x310a80: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310A84u;
        goto label_310a84;
    }
    ctx->pc = 0x310A7Cu;
    SET_GPR_U32(ctx, 31, 0x310A84u);
    ctx->pc = 0x310A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A7Cu;
    // 0x310a80: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x310A7Cu, 0x310A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A84u;
label_310a84:
    // 0x310a84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x310a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310a88:
    // 0x310a88: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_310a8c:
    if (ctx->pc == 0x310A8Cu) {
        ctx->pc = 0x310A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A88u;
        // 0x310a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310A90u;
        goto label_310a90;
    }
    ctx->pc = 0x310A88u;
    {
        const bool branch_taken_0x310a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A88u;
        // 0x310a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a88) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310A90u;
label_310a90:
    // 0x310a90: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x310a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_310a94:
    // 0x310a94: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x310a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_310a98:
    // 0x310a98: 0x2c830015  sltiu       $v1, $a0, 0x15
    ctx->pc = 0x310a98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_310a9c:
    // 0x310a9c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_310aa0:
    if (ctx->pc == 0x310AA0u) {
        ctx->pc = 0x310AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A9Cu;
        // 0x310aa0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310AA4u;
        goto label_310aa4;
    }
    ctx->pc = 0x310A9Cu;
    {
        const bool branch_taken_0x310a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A9Cu;
        // 0x310aa0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a9c) {
            ctx->pc = 0x310BC4u;
            return;
        }
    }
    ctx->pc = 0x310AA4u;
label_310aa4:
    // 0x310aa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x310aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_310aa8:
    // 0x310aa8: 0x2442e090  addiu       $v0, $v0, -0x1F70
    ctx->pc = 0x310aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959248));
label_310aac:
    // 0x310aac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_310ab0:
    // 0x310ab0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_310ab4:
    // 0x310ab4: 0x800008  jr          $a0
label_310ab8:
    if (ctx->pc == 0x310AB8u) {
        ctx->pc = 0x310ABCu;
        goto label_310abc;
    }
    ctx->pc = 0x310AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x310ABCu: goto label_310abc;
            case 0x310AECu: goto label_310aec;
            case 0x310B00u: goto label_310b00;
            case 0x310B24u: goto label_310b24;
            case 0x310B7Cu: goto label_310b7c;
            case 0x310BACu: goto label_310bac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310AB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x310ABCu;
label_310abc:
    // 0x310abc: 0xc0e409a  jal         func_390268
label_310ac0:
    if (ctx->pc == 0x310AC0u) {
        ctx->pc = 0x310AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ABCu;
        // 0x310ac0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310AC4u;
        goto label_310ac4;
    }
    ctx->pc = 0x310ABCu;
    SET_GPR_U32(ctx, 31, 0x310AC4u);
    ctx->pc = 0x310AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310ABCu;
    // 0x310ac0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310ABCu, 0x310AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310AC4u;
label_310ac4:
    // 0x310ac4: 0x16220040  bne         $s1, $v0, . + 4 + (0x40 << 2)
label_310ac8:
    if (ctx->pc == 0x310AC8u) {
        ctx->pc = 0x310AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AC4u;
        // 0x310ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310ACCu;
        goto label_310acc;
    }
    ctx->pc = 0x310AC4u;
    {
        const bool branch_taken_0x310ac4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x310AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AC4u;
        // 0x310ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ac4) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310ACCu;
label_310acc:
    // 0x310acc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x310accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_310ad0:
    // 0x310ad0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x310ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_310ad4:
    // 0x310ad4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x310ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_310ad8:
    // 0x310ad8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x310ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_310adc:
    // 0x310adc: 0x60f809  jalr        $v1
label_310ae0:
    if (ctx->pc == 0x310AE0u) {
        ctx->pc = 0x310AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ADCu;
        // 0x310ae0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310AE4u;
        goto label_310ae4;
    }
    ctx->pc = 0x310ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x310AE4u);
        ctx->pc = 0x310AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ADCu;
        // 0x310ae0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310ADCu, 0x310AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310AE4u;
label_310ae4:
    // 0x310ae4: 0x10000038  b           . + 4 + (0x38 << 2)
label_310ae8:
    if (ctx->pc == 0x310AE8u) {
        ctx->pc = 0x310AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AE4u;
        // 0x310ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310AECu;
        goto label_310aec;
    }
    ctx->pc = 0x310AE4u;
    {
        const bool branch_taken_0x310ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AE4u;
        // 0x310ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ae4) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310AECu;
label_310aec:
    // 0x310aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310af0:
    // 0x310af0: 0xc0c40a2  jal         func_310288
label_310af4:
    if (ctx->pc == 0x310AF4u) {
        ctx->pc = 0x310AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AF0u;
        // 0x310af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310AF8u;
        goto label_310af8;
    }
    ctx->pc = 0x310AF0u;
    SET_GPR_U32(ctx, 31, 0x310AF8u);
    ctx->pc = 0x310AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310AF0u;
    // 0x310af4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310288u, 0x310AF0u, 0x310AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310AF8u;
label_310af8:
    // 0x310af8: 0x10000033  b           . + 4 + (0x33 << 2)
label_310afc:
    if (ctx->pc == 0x310AFCu) {
        ctx->pc = 0x310AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AF8u;
        // 0x310afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B00u;
        goto label_310b00;
    }
    ctx->pc = 0x310AF8u;
    {
        const bool branch_taken_0x310af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AF8u;
        // 0x310afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310af8) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B00u;
label_310b00:
    // 0x310b00: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x310b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_310b04:
    // 0x310b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310b08:
    // 0x310b08: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_310b0c:
    if (ctx->pc == 0x310B0Cu) {
        ctx->pc = 0x310B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B08u;
        // 0x310b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B10u;
        goto label_310b10;
    }
    ctx->pc = 0x310B08u;
    {
        const bool branch_taken_0x310b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x310B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B08u;
        // 0x310b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b08) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B10u;
label_310b10:
    // 0x310b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310b14:
    // 0x310b14: 0xc0c40a2  jal         func_310288
label_310b18:
    if (ctx->pc == 0x310B18u) {
        ctx->pc = 0x310B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B14u;
        // 0x310b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B1Cu;
        goto label_310b1c;
    }
    ctx->pc = 0x310B14u;
    SET_GPR_U32(ctx, 31, 0x310B1Cu);
    ctx->pc = 0x310B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B14u;
    // 0x310b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310288u, 0x310B14u, 0x310B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B1Cu;
label_310b1c:
    // 0x310b1c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_310b20:
    if (ctx->pc == 0x310B20u) {
        ctx->pc = 0x310B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B1Cu;
        // 0x310b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B24u;
        goto label_310b24;
    }
    ctx->pc = 0x310B1Cu;
    {
        const bool branch_taken_0x310b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B1Cu;
        // 0x310b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b1c) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B24u;
label_310b24:
    // 0x310b24: 0xc0e409a  jal         func_390268
label_310b28:
    if (ctx->pc == 0x310B28u) {
        ctx->pc = 0x310B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B24u;
        // 0x310b28: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B2Cu;
        goto label_310b2c;
    }
    ctx->pc = 0x310B24u;
    SET_GPR_U32(ctx, 31, 0x310B2Cu);
    ctx->pc = 0x310B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B24u;
    // 0x310b28: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310B24u, 0x310B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B2Cu;
label_310b2c:
    // 0x310b2c: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
label_310b30:
    if (ctx->pc == 0x310B30u) {
        ctx->pc = 0x310B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B2Cu;
        // 0x310b30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B34u;
        goto label_310b34;
    }
    ctx->pc = 0x310B2Cu;
    {
        const bool branch_taken_0x310b2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x310B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B2Cu;
        // 0x310b30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b2c) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B34u;
label_310b34:
    // 0x310b34: 0xc087502  jal         func_21D408
label_310b38:
    if (ctx->pc == 0x310B38u) {
        ctx->pc = 0x310B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B34u;
        // 0x310b38: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B3Cu;
        goto label_310b3c;
    }
    ctx->pc = 0x310B34u;
    SET_GPR_U32(ctx, 31, 0x310B3Cu);
    ctx->pc = 0x310B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B34u;
    // 0x310b38: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310B34u, 0x310B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B3Cu;
label_310b3c:
    // 0x310b3c: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x310b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_310b40:
    // 0x310b40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x310b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310b44:
    // 0x310b44: 0xc05a3d6  jal         func_168F58
label_310b48:
    if (ctx->pc == 0x310B48u) {
        ctx->pc = 0x310B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B44u;
        // 0x310b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B4Cu;
        goto label_310b4c;
    }
    ctx->pc = 0x310B44u;
    SET_GPR_U32(ctx, 31, 0x310B4Cu);
    ctx->pc = 0x310B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B44u;
    // 0x310b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168F58u, 0x310B44u, 0x310B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B4Cu;
label_310b4c:
    // 0x310b4c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_310b50:
    if (ctx->pc == 0x310B50u) {
        ctx->pc = 0x310B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B4Cu;
        // 0x310b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B54u;
        goto label_310b54;
    }
    ctx->pc = 0x310B4Cu;
    {
        const bool branch_taken_0x310b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B4Cu;
        // 0x310b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b4c) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B54u;
label_310b54:
    // 0x310b54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x310b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310b58:
    // 0x310b58: 0xc05a3f8  jal         func_168FE0
label_310b5c:
    if (ctx->pc == 0x310B5Cu) {
        ctx->pc = 0x310B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B58u;
        // 0x310b5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B60u;
        goto label_310b60;
    }
    ctx->pc = 0x310B58u;
    SET_GPR_U32(ctx, 31, 0x310B60u);
    ctx->pc = 0x310B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B58u;
    // 0x310b5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x310B58u, 0x310B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B60u;
label_310b60:
    // 0x310b60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_310b64:
    if (ctx->pc == 0x310B64u) {
        ctx->pc = 0x310B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B60u;
        // 0x310b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B68u;
        goto label_310b68;
    }
    ctx->pc = 0x310B60u;
    {
        const bool branch_taken_0x310b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B60u;
        // 0x310b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b60) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B68u;
label_310b68:
    // 0x310b68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x310b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310b6c:
    // 0x310b6c: 0xc05a432  jal         func_1690C8
label_310b70:
    if (ctx->pc == 0x310B70u) {
        ctx->pc = 0x310B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B6Cu;
        // 0x310b70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B74u;
        goto label_310b74;
    }
    ctx->pc = 0x310B6Cu;
    SET_GPR_U32(ctx, 31, 0x310B74u);
    ctx->pc = 0x310B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B6Cu;
    // 0x310b70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x310B6Cu, 0x310B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B74u;
label_310b74:
    // 0x310b74: 0x10000014  b           . + 4 + (0x14 << 2)
label_310b78:
    if (ctx->pc == 0x310B78u) {
        ctx->pc = 0x310B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B74u;
        // 0x310b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B7Cu;
        goto label_310b7c;
    }
    ctx->pc = 0x310B74u;
    {
        const bool branch_taken_0x310b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B74u;
        // 0x310b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b74) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B7Cu;
label_310b7c:
    // 0x310b7c: 0xc0e409a  jal         func_390268
label_310b80:
    if (ctx->pc == 0x310B80u) {
        ctx->pc = 0x310B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B7Cu;
        // 0x310b80: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B84u;
        goto label_310b84;
    }
    ctx->pc = 0x310B7Cu;
    SET_GPR_U32(ctx, 31, 0x310B84u);
    ctx->pc = 0x310B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B7Cu;
    // 0x310b80: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310B7Cu, 0x310B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B84u;
label_310b84:
    // 0x310b84: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
label_310b88:
    if (ctx->pc == 0x310B88u) {
        ctx->pc = 0x310B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B84u;
        // 0x310b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B8Cu;
        goto label_310b8c;
    }
    ctx->pc = 0x310B84u;
    {
        const bool branch_taken_0x310b84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x310B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B84u;
        // 0x310b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b84) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B8Cu;
label_310b8c:
    // 0x310b8c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x310b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_310b90:
    // 0x310b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310b94:
    // 0x310b94: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_310b98:
    if (ctx->pc == 0x310B98u) {
        ctx->pc = 0x310B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B94u;
        // 0x310b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310B9Cu;
        goto label_310b9c;
    }
    ctx->pc = 0x310B94u;
    {
        const bool branch_taken_0x310b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x310B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B94u;
        // 0x310b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b94) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310B9Cu;
label_310b9c:
    // 0x310b9c: 0xc0c422a  jal         func_3108A8
label_310ba0:
    if (ctx->pc == 0x310BA0u) {
        ctx->pc = 0x310BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B9Cu;
        // 0x310ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310BA4u;
        goto label_310ba4;
    }
    ctx->pc = 0x310B9Cu;
    SET_GPR_U32(ctx, 31, 0x310BA4u);
    ctx->pc = 0x310BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B9Cu;
    // 0x310ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3108A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3108A8u, 0x310B9Cu, 0x310BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BA4u;
label_310ba4:
    // 0x310ba4: 0x10000008  b           . + 4 + (0x8 << 2)
label_310ba8:
    if (ctx->pc == 0x310BA8u) {
        ctx->pc = 0x310BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BA4u;
        // 0x310ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310BACu;
        goto label_310bac;
    }
    ctx->pc = 0x310BA4u;
    {
        const bool branch_taken_0x310ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BA4u;
        // 0x310ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ba4) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310BACu;
label_310bac:
    // 0x310bac: 0xc0e409a  jal         func_390268
label_310bb0:
    if (ctx->pc == 0x310BB0u) {
        ctx->pc = 0x310BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BACu;
        // 0x310bb0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310BB4u;
        goto label_310bb4;
    }
    ctx->pc = 0x310BACu;
    SET_GPR_U32(ctx, 31, 0x310BB4u);
    ctx->pc = 0x310BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BACu;
    // 0x310bb0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310BACu, 0x310BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BB4u;
label_310bb4:
    // 0x310bb4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_310bb8:
    if (ctx->pc == 0x310BB8u) {
        ctx->pc = 0x310BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BB4u;
        // 0x310bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310BBCu;
        goto label_310bbc;
    }
    ctx->pc = 0x310BB4u;
    {
        const bool branch_taken_0x310bb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x310BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BB4u;
        // 0x310bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bb4) {
            ctx->pc = 0x310BC8u;
            return;
        }
    }
    ctx->pc = 0x310BBCu;
label_310bbc:
    // 0x310bbc: 0xc0c422a  jal         func_3108A8
label_310bc0:
    if (ctx->pc == 0x310BC0u) {
        ctx->pc = 0x310BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BBCu;
        // 0x310bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310BC4u;
        goto label_fallthrough_0x310bbc;
    }
    ctx->pc = 0x310BBCu;
    SET_GPR_U32(ctx, 31, 0x310BC4u);
    ctx->pc = 0x310BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BBCu;
    // 0x310bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3108A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3108A8u, 0x310BBCu, 0x310BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x310bbc:
    ctx->pc = 0x310BC4u;
}
