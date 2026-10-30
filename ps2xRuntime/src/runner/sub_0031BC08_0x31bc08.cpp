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

// Function: sub_0031BC08
// Address: 0x31bc08 - 0x31bcb0
void sub_0031BC08_0x31bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BC08_0x31bc08");
#endif

    switch (ctx->pc) {
        case 0x31bc08u: goto label_31bc08;
        case 0x31bc0cu: goto label_31bc0c;
        case 0x31bc10u: goto label_31bc10;
        case 0x31bc14u: goto label_31bc14;
        case 0x31bc18u: goto label_31bc18;
        case 0x31bc1cu: goto label_31bc1c;
        case 0x31bc20u: goto label_31bc20;
        case 0x31bc24u: goto label_31bc24;
        case 0x31bc28u: goto label_31bc28;
        case 0x31bc2cu: goto label_31bc2c;
        case 0x31bc30u: goto label_31bc30;
        case 0x31bc34u: goto label_31bc34;
        case 0x31bc38u: goto label_31bc38;
        case 0x31bc3cu: goto label_31bc3c;
        case 0x31bc40u: goto label_31bc40;
        case 0x31bc44u: goto label_31bc44;
        case 0x31bc48u: goto label_31bc48;
        case 0x31bc4cu: goto label_31bc4c;
        case 0x31bc50u: goto label_31bc50;
        case 0x31bc54u: goto label_31bc54;
        case 0x31bc58u: goto label_31bc58;
        case 0x31bc5cu: goto label_31bc5c;
        case 0x31bc60u: goto label_31bc60;
        case 0x31bc64u: goto label_31bc64;
        case 0x31bc68u: goto label_31bc68;
        case 0x31bc6cu: goto label_31bc6c;
        case 0x31bc70u: goto label_31bc70;
        case 0x31bc74u: goto label_31bc74;
        case 0x31bc78u: goto label_31bc78;
        case 0x31bc7cu: goto label_31bc7c;
        case 0x31bc80u: goto label_31bc80;
        case 0x31bc84u: goto label_31bc84;
        case 0x31bc88u: goto label_31bc88;
        case 0x31bc8cu: goto label_31bc8c;
        case 0x31bc90u: goto label_31bc90;
        case 0x31bc94u: goto label_31bc94;
        case 0x31bc98u: goto label_31bc98;
        case 0x31bc9cu: goto label_31bc9c;
        case 0x31bca0u: goto label_31bca0;
        case 0x31bca4u: goto label_31bca4;
        case 0x31bca8u: goto label_31bca8;
        case 0x31bcacu: goto label_31bcac;
        default: break;
    }

    ctx->pc = 0x31bc08u;

label_31bc08:
    // 0x31bc08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31bc0c:
    // 0x31bc0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_31bc10:
    // 0x31bc10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31bc14:
    // 0x31bc14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31bc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31bc18:
    // 0x31bc18: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x31bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_31bc1c:
    // 0x31bc1c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31bc20:
    // 0x31bc20: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31bc20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31bc24:
    // 0x31bc24: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_31bc28:
    if (ctx->pc == 0x31BC28u) {
        ctx->pc = 0x31BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC24u;
        // 0x31bc28: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC2Cu;
        goto label_31bc2c;
    }
    ctx->pc = 0x31BC24u;
    {
        const bool branch_taken_0x31bc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC24u;
        // 0x31bc28: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc24) {
            ctx->pc = 0x31BCB8u;
            return;
        }
    }
    ctx->pc = 0x31BC2Cu;
label_31bc2c:
    // 0x31bc2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31bc30:
    // 0x31bc30: 0x244214d0  addiu       $v0, $v0, 0x14D0
    ctx->pc = 0x31bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
label_31bc34:
    // 0x31bc34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31bc38:
    // 0x31bc38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31bc3c:
    // 0x31bc3c: 0x800008  jr          $a0
label_31bc40:
    if (ctx->pc == 0x31BC40u) {
        ctx->pc = 0x31BC44u;
        goto label_31bc44;
    }
    ctx->pc = 0x31BC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31BC44u: goto label_31bc44;
            case 0x31BC74u: goto label_31bc74;
            case 0x31BC80u: goto label_31bc80;
            case 0x31BCA0u: goto label_31bca0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31BC44u;
label_31bc44:
    // 0x31bc44: 0xc08a61a  jal         func_229868
label_31bc48:
    if (ctx->pc == 0x31BC48u) {
        ctx->pc = 0x31BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC44u;
        // 0x31bc48: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC4Cu;
        goto label_31bc4c;
    }
    ctx->pc = 0x31BC44u;
    SET_GPR_U32(ctx, 31, 0x31BC4Cu);
    ctx->pc = 0x31BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC44u;
    // 0x31bc48: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31BC44u, 0x31BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC4Cu;
label_31bc4c:
    // 0x31bc4c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_31bc50:
    if (ctx->pc == 0x31BC50u) {
        ctx->pc = 0x31BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC4Cu;
        // 0x31bc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC54u;
        goto label_31bc54;
    }
    ctx->pc = 0x31BC4Cu;
    {
        const bool branch_taken_0x31bc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc4c) {
            ctx->pc = 0x31BC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC4Cu;
            // 0x31bc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BCBCu;
            return;
        }
    }
    ctx->pc = 0x31BC54u;
label_31bc54:
    // 0x31bc54: 0xc087502  jal         func_21D408
label_31bc58:
    if (ctx->pc == 0x31BC58u) {
        ctx->pc = 0x31BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC54u;
        // 0x31bc58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC5Cu;
        goto label_31bc5c;
    }
    ctx->pc = 0x31BC54u;
    SET_GPR_U32(ctx, 31, 0x31BC5Cu);
    ctx->pc = 0x31BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC54u;
    // 0x31bc58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31BC54u, 0x31BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC5Cu;
label_31bc5c:
    // 0x31bc5c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x31bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_31bc60:
    // 0x31bc60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31bc64:
    // 0x31bc64: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_31bc68:
    if (ctx->pc == 0x31BC68u) {
        ctx->pc = 0x31BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC64u;
        // 0x31bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC6Cu;
        goto label_31bc6c;
    }
    ctx->pc = 0x31BC64u;
    {
        const bool branch_taken_0x31bc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC64u;
        // 0x31bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc64) {
            ctx->pc = 0x31BCBCu;
            return;
        }
    }
    ctx->pc = 0x31BC6Cu;
label_31bc6c:
    // 0x31bc6c: 0x1000000c  b           . + 4 + (0xC << 2)
label_31bc70:
    if (ctx->pc == 0x31BC70u) {
        ctx->pc = 0x31BC74u;
        goto label_31bc74;
    }
    ctx->pc = 0x31BC6Cu;
    {
        const bool branch_taken_0x31bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc6c) {
            ctx->pc = 0x31BCA0u;
            goto label_31bca0;
        }
    }
    ctx->pc = 0x31BC74u;
label_31bc74:
    // 0x31bc74: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31bc78:
    // 0x31bc78: 0x10000003  b           . + 4 + (0x3 << 2)
label_31bc7c:
    if (ctx->pc == 0x31BC7Cu) {
        ctx->pc = 0x31BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC78u;
        // 0x31bc7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC80u;
        goto label_31bc80;
    }
    ctx->pc = 0x31BC78u;
    {
        const bool branch_taken_0x31bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC78u;
        // 0x31bc7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc78) {
            ctx->pc = 0x31BC88u;
            goto label_31bc88;
        }
    }
    ctx->pc = 0x31BC80u;
label_31bc80:
    // 0x31bc80: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31bc84:
    // 0x31bc84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x31bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_31bc88:
    // 0x31bc88: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31bc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31bc8c:
    // 0x31bc8c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31bc90:
    // 0x31bc90: 0x60f809  jalr        $v1
label_31bc94:
    if (ctx->pc == 0x31BC94u) {
        ctx->pc = 0x31BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC90u;
        // 0x31bc94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BC98u;
        goto label_31bc98;
    }
    ctx->pc = 0x31BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31BC98u);
        ctx->pc = 0x31BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC90u;
        // 0x31bc94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC90u, 0x31BC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BC98u;
label_31bc98:
    // 0x31bc98: 0x10000008  b           . + 4 + (0x8 << 2)
label_31bc9c:
    if (ctx->pc == 0x31BC9Cu) {
        ctx->pc = 0x31BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC98u;
        // 0x31bc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCA0u;
        goto label_31bca0;
    }
    ctx->pc = 0x31BC98u;
    {
        const bool branch_taken_0x31bc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC98u;
        // 0x31bc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc98) {
            ctx->pc = 0x31BCBCu;
            return;
        }
    }
    ctx->pc = 0x31BCA0u;
label_31bca0:
    // 0x31bca0: 0xc0c6ce2  jal         func_31B388
label_31bca4:
    if (ctx->pc == 0x31BCA4u) {
        ctx->pc = 0x31BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCA0u;
        // 0x31bca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCA8u;
        goto label_31bca8;
    }
    ctx->pc = 0x31BCA0u;
    SET_GPR_U32(ctx, 31, 0x31BCA8u);
    ctx->pc = 0x31BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCA0u;
    // 0x31bca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B388u, 0x31BCA0u, 0x31BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCA8u;
label_31bca8:
    // 0x31bca8: 0x10000004  b           . + 4 + (0x4 << 2)
label_31bcac:
    if (ctx->pc == 0x31BCACu) {
        ctx->pc = 0x31BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCA8u;
        // 0x31bcac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BCB0u;
        goto label_fallthrough_0x31bca8;
    }
    ctx->pc = 0x31BCA8u;
    {
        const bool branch_taken_0x31bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCA8u;
        // 0x31bcac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bca8) {
            ctx->pc = 0x31BCBCu;
            return;
        }
    }
label_fallthrough_0x31bca8:
    ctx->pc = 0x31BCB0u;
}
