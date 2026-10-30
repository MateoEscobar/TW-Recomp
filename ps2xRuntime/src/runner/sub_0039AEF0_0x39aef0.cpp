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

// Function: sub_0039AEF0
// Address: 0x39aef0 - 0x39b018
void sub_0039AEF0_0x39aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AEF0_0x39aef0");
#endif

    switch (ctx->pc) {
        case 0x39aef0u: goto label_39aef0;
        case 0x39aef4u: goto label_39aef4;
        case 0x39aef8u: goto label_39aef8;
        case 0x39aefcu: goto label_39aefc;
        case 0x39af00u: goto label_39af00;
        case 0x39af04u: goto label_39af04;
        case 0x39af08u: goto label_39af08;
        case 0x39af0cu: goto label_39af0c;
        case 0x39af10u: goto label_39af10;
        case 0x39af14u: goto label_39af14;
        case 0x39af18u: goto label_39af18;
        case 0x39af1cu: goto label_39af1c;
        case 0x39af20u: goto label_39af20;
        case 0x39af24u: goto label_39af24;
        case 0x39af28u: goto label_39af28;
        case 0x39af2cu: goto label_39af2c;
        case 0x39af30u: goto label_39af30;
        case 0x39af34u: goto label_39af34;
        case 0x39af38u: goto label_39af38;
        case 0x39af3cu: goto label_39af3c;
        case 0x39af40u: goto label_39af40;
        case 0x39af44u: goto label_39af44;
        case 0x39af48u: goto label_39af48;
        case 0x39af4cu: goto label_39af4c;
        case 0x39af50u: goto label_39af50;
        case 0x39af54u: goto label_39af54;
        case 0x39af58u: goto label_39af58;
        case 0x39af5cu: goto label_39af5c;
        case 0x39af60u: goto label_39af60;
        case 0x39af64u: goto label_39af64;
        case 0x39af68u: goto label_39af68;
        case 0x39af6cu: goto label_39af6c;
        case 0x39af70u: goto label_39af70;
        case 0x39af74u: goto label_39af74;
        case 0x39af78u: goto label_39af78;
        case 0x39af7cu: goto label_39af7c;
        case 0x39af80u: goto label_39af80;
        case 0x39af84u: goto label_39af84;
        case 0x39af88u: goto label_39af88;
        case 0x39af8cu: goto label_39af8c;
        case 0x39af90u: goto label_39af90;
        case 0x39af94u: goto label_39af94;
        case 0x39af98u: goto label_39af98;
        case 0x39af9cu: goto label_39af9c;
        case 0x39afa0u: goto label_39afa0;
        case 0x39afa4u: goto label_39afa4;
        case 0x39afa8u: goto label_39afa8;
        case 0x39afacu: goto label_39afac;
        case 0x39afb0u: goto label_39afb0;
        case 0x39afb4u: goto label_39afb4;
        case 0x39afb8u: goto label_39afb8;
        case 0x39afbcu: goto label_39afbc;
        case 0x39afc0u: goto label_39afc0;
        case 0x39afc4u: goto label_39afc4;
        case 0x39afc8u: goto label_39afc8;
        case 0x39afccu: goto label_39afcc;
        case 0x39afd0u: goto label_39afd0;
        case 0x39afd4u: goto label_39afd4;
        case 0x39afd8u: goto label_39afd8;
        case 0x39afdcu: goto label_39afdc;
        case 0x39afe0u: goto label_39afe0;
        case 0x39afe4u: goto label_39afe4;
        case 0x39afe8u: goto label_39afe8;
        case 0x39afecu: goto label_39afec;
        case 0x39aff0u: goto label_39aff0;
        case 0x39aff4u: goto label_39aff4;
        case 0x39aff8u: goto label_39aff8;
        case 0x39affcu: goto label_39affc;
        case 0x39b000u: goto label_39b000;
        case 0x39b004u: goto label_39b004;
        case 0x39b008u: goto label_39b008;
        case 0x39b00cu: goto label_39b00c;
        case 0x39b010u: goto label_39b010;
        case 0x39b014u: goto label_39b014;
        default: break;
    }

    ctx->pc = 0x39aef0u;

label_39aef0:
    // 0x39aef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39aef4:
    // 0x39aef4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_39aef8:
    // 0x39aef8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39aef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39aefc:
    // 0x39aefc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39af00:
    // 0x39af00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39af00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_39af04:
    // 0x39af04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39af04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39af08:
    // 0x39af08: 0xc0e8570  jal         func_3A15C0
label_39af0c:
    if (ctx->pc == 0x39AF0Cu) {
        ctx->pc = 0x39AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF08u;
        // 0x39af0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF10u;
        goto label_39af10;
    }
    ctx->pc = 0x39AF08u;
    SET_GPR_U32(ctx, 31, 0x39AF10u);
    ctx->pc = 0x39AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF08u;
    // 0x39af0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x39AF08u, 0x39AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF10u;
label_39af10:
    // 0x39af10: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x39af10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_39af14:
    // 0x39af14: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x39af14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_39af18:
    // 0x39af18: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x39af18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_39af1c:
    // 0x39af1c: 0xc10c1fa  jal         func_4307E8
label_39af20:
    if (ctx->pc == 0x39AF20u) {
        ctx->pc = 0x39AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF1Cu;
        // 0x39af20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF24u;
        goto label_39af24;
    }
    ctx->pc = 0x39AF1Cu;
    SET_GPR_U32(ctx, 31, 0x39AF24u);
    ctx->pc = 0x39AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF1Cu;
    // 0x39af20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x39AF1Cu, 0x39AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF24u;
label_39af24:
    // 0x39af24: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39af24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_39af28:
    // 0x39af28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39af2c:
    // 0x39af2c: 0x8c862b04  lw          $a2, 0x2B04($a0)
    ctx->pc = 0x39af2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11012)));
label_39af30:
    // 0x39af30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39af34:
    // 0x39af34: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x39af34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_39af38:
    // 0x39af38: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x39af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_39af3c:
    // 0x39af3c: 0x40f809  jalr        $v0
label_39af40:
    if (ctx->pc == 0x39AF40u) {
        ctx->pc = 0x39AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF3Cu;
        // 0x39af40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF44u;
        goto label_39af44;
    }
    ctx->pc = 0x39AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39AF44u);
        ctx->pc = 0x39AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF3Cu;
        // 0x39af40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AF3Cu, 0x39AF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AF44u;
label_39af44:
    // 0x39af44: 0xc0e3fce  jal         func_38FF38
label_39af48:
    if (ctx->pc == 0x39AF48u) {
        ctx->pc = 0x39AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF44u;
        // 0x39af48: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF4Cu;
        goto label_39af4c;
    }
    ctx->pc = 0x39AF44u;
    SET_GPR_U32(ctx, 31, 0x39AF4Cu);
    ctx->pc = 0x39AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF44u;
    // 0x39af48: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF38u, 0x39AF44u, 0x39AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF4Cu;
label_39af4c:
    // 0x39af4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39af50:
    // 0x39af50: 0xc0e3ff4  jal         func_38FFD0
label_39af54:
    if (ctx->pc == 0x39AF54u) {
        ctx->pc = 0x39AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF50u;
        // 0x39af54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF58u;
        goto label_39af58;
    }
    ctx->pc = 0x39AF50u;
    SET_GPR_U32(ctx, 31, 0x39AF58u);
    ctx->pc = 0x39AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF50u;
    // 0x39af54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x39AF50u, 0x39AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF58u;
label_39af58:
    // 0x39af58: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x39af58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39af5c:
    // 0x39af5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39af60:
    // 0x39af60: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x39af60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_39af64:
    // 0x39af64: 0x86110190  lh          $s1, 0x190($s0)
    ctx->pc = 0x39af64u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 400)));
label_39af68:
    // 0x39af68: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x39af68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_39af6c:
    // 0x39af6c: 0xc0f15a8  jal         func_3C56A0
label_39af70:
    if (ctx->pc == 0x39AF70u) {
        ctx->pc = 0x39AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF6Cu;
        // 0x39af70: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF74u;
        goto label_39af74;
    }
    ctx->pc = 0x39AF6Cu;
    SET_GPR_U32(ctx, 31, 0x39AF74u);
    ctx->pc = 0x39AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AF6Cu;
    // 0x39af70: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56A0u, 0x39AF6Cu, 0x39AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AF74u;
label_39af74:
    // 0x39af74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x39af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39af78:
    // 0x39af78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39af7c:
    // 0x39af7c: 0x60f809  jalr        $v1
label_39af80:
    if (ctx->pc == 0x39AF80u) {
        ctx->pc = 0x39AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF7Cu;
        // 0x39af80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF84u;
        goto label_39af84;
    }
    ctx->pc = 0x39AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39AF84u);
        ctx->pc = 0x39AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF7Cu;
        // 0x39af80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AF7Cu, 0x39AF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AF84u;
label_39af84:
    // 0x39af84: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x39af84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_39af88:
    // 0x39af88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39af8c:
    // 0x39af8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x39af8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39af90:
    // 0x39af90: 0x8ca2d268  lw          $v0, -0x2D98($a1)
    ctx->pc = 0x39af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955624)));
label_39af94:
    // 0x39af94: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39af94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_39af98:
    // 0x39af98: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x39af98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_39af9c:
    // 0x39af9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39af9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39afa0:
    // 0x39afa0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x39afa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_39afa4:
    // 0x39afa4: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x39afa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_39afa8:
    // 0x39afa8: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x39afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_39afac:
    // 0x39afac: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x39afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_39afb0:
    // 0x39afb0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x39afb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_39afb4:
    // 0x39afb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39afb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39afb8:
    // 0x39afb8: 0x8ca2d268  lw          $v0, -0x2D98($a1)
    ctx->pc = 0x39afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955624)));
label_39afbc:
    // 0x39afbc: 0xe64200c8  swc1        $f2, 0xC8($s2)
    ctx->pc = 0x39afbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
label_39afc0:
    // 0x39afc0: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x39afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_39afc4:
    // 0x39afc4: 0xe64100cc  swc1        $f1, 0xCC($s2)
    ctx->pc = 0x39afc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
label_39afc8:
    // 0x39afc8: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x39afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_39afcc:
    // 0x39afcc: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x39afccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_39afd0:
    // 0x39afd0: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x39afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_39afd4:
    // 0x39afd4: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x39afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
label_39afd8:
    // 0x39afd8: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x39afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
label_39afdc:
    // 0x39afdc: 0x8cc22c2c  lw          $v0, 0x2C2C($a2)
    ctx->pc = 0x39afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11308)));
label_39afe0:
    // 0x39afe0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x39afe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_39afe4:
    // 0x39afe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39afe8:
    // 0x39afe8: 0xa64000d8  sh          $zero, 0xD8($s2)
    ctx->pc = 0x39afe8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 0));
label_39afec:
    // 0x39afec: 0x7e4300a0  sq          $v1, 0xA0($s2)
    ctx->pc = 0x39afecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), GPR_VEC(ctx, 3));
label_39aff0:
    // 0x39aff0: 0xa64000da  sh          $zero, 0xDA($s2)
    ctx->pc = 0x39aff0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 0));
label_39aff4:
    // 0x39aff4: 0xc0e8568  jal         func_3A15A0
label_39aff8:
    if (ctx->pc == 0x39AFF8u) {
        ctx->pc = 0x39AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFF4u;
        // 0x39aff8: 0xacc22c2c  sw          $v0, 0x2C2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 11308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AFFCu;
        goto label_39affc;
    }
    ctx->pc = 0x39AFF4u;
    SET_GPR_U32(ctx, 31, 0x39AFFCu);
    ctx->pc = 0x39AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AFF4u;
    // 0x39aff8: 0xacc22c2c  sw          $v0, 0x2C2C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 11308), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x39AFF4u, 0x39AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFFCu;
label_39affc:
    // 0x39affc: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x39affcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_39b000:
    // 0x39b000: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39b000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39b004:
    // 0x39b004: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39b004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39b008:
    // 0x39b008: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39b008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39b00c:
    // 0x39b00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b010:
    // 0x39b010: 0x3e00008  jr          $ra
label_39b014:
    if (ctx->pc == 0x39B014u) {
        ctx->pc = 0x39B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B010u;
        // 0x39b014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B018u;
        goto label_fallthrough_0x39b010;
    }
    ctx->pc = 0x39B010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B010u;
        // 0x39b014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b010:
    ctx->pc = 0x39B018u;
}
