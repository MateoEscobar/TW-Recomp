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

// Function: sub_00268AB0
// Address: 0x268ab0 - 0x268b88
void sub_00268AB0_0x268ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268AB0_0x268ab0");
#endif

    switch (ctx->pc) {
        case 0x268ab0u: goto label_268ab0;
        case 0x268ab4u: goto label_268ab4;
        case 0x268ab8u: goto label_268ab8;
        case 0x268abcu: goto label_268abc;
        case 0x268ac0u: goto label_268ac0;
        case 0x268ac4u: goto label_268ac4;
        case 0x268ac8u: goto label_268ac8;
        case 0x268accu: goto label_268acc;
        case 0x268ad0u: goto label_268ad0;
        case 0x268ad4u: goto label_268ad4;
        case 0x268ad8u: goto label_268ad8;
        case 0x268adcu: goto label_268adc;
        case 0x268ae0u: goto label_268ae0;
        case 0x268ae4u: goto label_268ae4;
        case 0x268ae8u: goto label_268ae8;
        case 0x268aecu: goto label_268aec;
        case 0x268af0u: goto label_268af0;
        case 0x268af4u: goto label_268af4;
        case 0x268af8u: goto label_268af8;
        case 0x268afcu: goto label_268afc;
        case 0x268b00u: goto label_268b00;
        case 0x268b04u: goto label_268b04;
        case 0x268b08u: goto label_268b08;
        case 0x268b0cu: goto label_268b0c;
        case 0x268b10u: goto label_268b10;
        case 0x268b14u: goto label_268b14;
        case 0x268b18u: goto label_268b18;
        case 0x268b1cu: goto label_268b1c;
        case 0x268b20u: goto label_268b20;
        case 0x268b24u: goto label_268b24;
        case 0x268b28u: goto label_268b28;
        case 0x268b2cu: goto label_268b2c;
        case 0x268b30u: goto label_268b30;
        case 0x268b34u: goto label_268b34;
        case 0x268b38u: goto label_268b38;
        case 0x268b3cu: goto label_268b3c;
        case 0x268b40u: goto label_268b40;
        case 0x268b44u: goto label_268b44;
        case 0x268b48u: goto label_268b48;
        case 0x268b4cu: goto label_268b4c;
        case 0x268b50u: goto label_268b50;
        case 0x268b54u: goto label_268b54;
        case 0x268b58u: goto label_268b58;
        case 0x268b5cu: goto label_268b5c;
        case 0x268b60u: goto label_268b60;
        case 0x268b64u: goto label_268b64;
        case 0x268b68u: goto label_268b68;
        case 0x268b6cu: goto label_268b6c;
        case 0x268b70u: goto label_268b70;
        case 0x268b74u: goto label_268b74;
        case 0x268b78u: goto label_268b78;
        case 0x268b7cu: goto label_268b7c;
        case 0x268b80u: goto label_268b80;
        case 0x268b84u: goto label_268b84;
        default: break;
    }

    ctx->pc = 0x268ab0u;

label_268ab0:
    // 0x268ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_268ab4:
    // 0x268ab4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x268ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_268ab8:
    // 0x268ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268abc:
    // 0x268abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_268ac0:
    // 0x268ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_268ac4:
    // 0x268ac4: 0xc0e409a  jal         func_390268
label_268ac8:
    if (ctx->pc == 0x268AC8u) {
        ctx->pc = 0x268AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AC4u;
        // 0x268ac8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268ACCu;
        goto label_268acc;
    }
    ctx->pc = 0x268AC4u;
    SET_GPR_U32(ctx, 31, 0x268ACCu);
    ctx->pc = 0x268AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AC4u;
    // 0x268ac8: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268AC4u, 0x268ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268ACCu;
label_268acc:
    // 0x268acc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x268accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_268ad0:
    // 0x268ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268ad4:
    // 0x268ad4: 0x84620118  lh          $v0, 0x118($v1)
    ctx->pc = 0x268ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_268ad8:
    // 0x268ad8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_268adc:
    if (ctx->pc == 0x268ADCu) {
        ctx->pc = 0x268ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AD8u;
        // 0x268adc: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268AE0u;
        goto label_268ae0;
    }
    ctx->pc = 0x268AD8u;
    {
        const bool branch_taken_0x268ad8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x268ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AD8u;
        // 0x268adc: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ad8) {
            ctx->pc = 0x268AE8u;
            goto label_268ae8;
        }
    }
    ctx->pc = 0x268AE0u;
label_268ae0:
    // 0x268ae0: 0x10000024  b           . + 4 + (0x24 << 2)
label_268ae4:
    if (ctx->pc == 0x268AE4u) {
        ctx->pc = 0x268AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AE0u;
        // 0x268ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268AE8u;
        goto label_268ae8;
    }
    ctx->pc = 0x268AE0u;
    {
        const bool branch_taken_0x268ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AE0u;
        // 0x268ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ae0) {
            ctx->pc = 0x268B74u;
            goto label_268b74;
        }
    }
    ctx->pc = 0x268AE8u;
label_268ae8:
    // 0x268ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268aec:
    // 0x268aec: 0xc089974  jal         func_2265D0
label_268af0:
    if (ctx->pc == 0x268AF0u) {
        ctx->pc = 0x268AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AECu;
        // 0x268af0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268AF4u;
        goto label_268af4;
    }
    ctx->pc = 0x268AECu;
    SET_GPR_U32(ctx, 31, 0x268AF4u);
    ctx->pc = 0x268AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AECu;
    // 0x268af0: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x268AECu, 0x268AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AF4u;
label_268af4:
    // 0x268af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268af8:
    // 0x268af8: 0xc08b186  jal         func_22C618
label_268afc:
    if (ctx->pc == 0x268AFCu) {
        ctx->pc = 0x268AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AF8u;
        // 0x268afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B00u;
        goto label_268b00;
    }
    ctx->pc = 0x268AF8u;
    SET_GPR_U32(ctx, 31, 0x268B00u);
    ctx->pc = 0x268AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268AF8u;
    // 0x268afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x268AF8u, 0x268B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B00u;
label_268b00:
    // 0x268b00: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x268b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_268b04:
    // 0x268b04: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_268b08:
    if (ctx->pc == 0x268B08u) {
        ctx->pc = 0x268B0Cu;
        goto label_268b0c;
    }
    ctx->pc = 0x268B04u;
    {
        const bool branch_taken_0x268b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b04) {
            ctx->pc = 0x268B28u;
            goto label_268b28;
        }
    }
    ctx->pc = 0x268B0Cu;
label_268b0c:
    // 0x268b0c: 0xc05d484  jal         func_175210
label_268b10:
    if (ctx->pc == 0x268B10u) {
        ctx->pc = 0x268B14u;
        goto label_268b14;
    }
    ctx->pc = 0x268B0Cu;
    SET_GPR_U32(ctx, 31, 0x268B14u);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268B0Cu, 0x268B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B14u;
label_268b14:
    // 0x268b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268b18:
    // 0x268b18: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268b1c:
    // 0x268b1c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268b20:
    // 0x268b20: 0xa0f809  jalr        $a1
label_268b24:
    if (ctx->pc == 0x268B24u) {
        ctx->pc = 0x268B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B20u;
        // 0x268b24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B28u;
        goto label_268b28;
    }
    ctx->pc = 0x268B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268B28u);
        ctx->pc = 0x268B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B20u;
        // 0x268b24: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268B20u, 0x268B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268B28u;
label_268b28:
    // 0x268b28: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_268b2c:
    if (ctx->pc == 0x268B2Cu) {
        ctx->pc = 0x268B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B28u;
        // 0x268b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B30u;
        goto label_268b30;
    }
    ctx->pc = 0x268B28u;
    {
        const bool branch_taken_0x268b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B28u;
        // 0x268b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b28) {
            ctx->pc = 0x268B74u;
            goto label_268b74;
        }
    }
    ctx->pc = 0x268B30u;
label_268b30:
    // 0x268b30: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x268b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_268b34:
    // 0x268b34: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_268b38:
    if (ctx->pc == 0x268B38u) {
        ctx->pc = 0x268B3Cu;
        goto label_268b3c;
    }
    ctx->pc = 0x268B34u;
    {
        const bool branch_taken_0x268b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b34) {
            ctx->pc = 0x268B58u;
            goto label_268b58;
        }
    }
    ctx->pc = 0x268B3Cu;
label_268b3c:
    // 0x268b3c: 0xc05d484  jal         func_175210
label_268b40:
    if (ctx->pc == 0x268B40u) {
        ctx->pc = 0x268B44u;
        goto label_268b44;
    }
    ctx->pc = 0x268B3Cu;
    SET_GPR_U32(ctx, 31, 0x268B44u);
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x268B3Cu, 0x268B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B44u;
label_268b44:
    // 0x268b44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268b48:
    // 0x268b48: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x268b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_268b4c:
    // 0x268b4c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x268b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_268b50:
    // 0x268b50: 0xa0f809  jalr        $a1
label_268b54:
    if (ctx->pc == 0x268B54u) {
        ctx->pc = 0x268B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B50u;
        // 0x268b54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B58u;
        goto label_268b58;
    }
    ctx->pc = 0x268B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x268B58u);
        ctx->pc = 0x268B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B50u;
        // 0x268b54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268B50u, 0x268B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268B58u;
label_268b58:
    // 0x268b58: 0xc0899ae  jal         func_2266B8
label_268b5c:
    if (ctx->pc == 0x268B5Cu) {
        ctx->pc = 0x268B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B58u;
        // 0x268b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B60u;
        goto label_268b60;
    }
    ctx->pc = 0x268B58u;
    SET_GPR_U32(ctx, 31, 0x268B60u);
    ctx->pc = 0x268B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B58u;
    // 0x268b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x268B58u, 0x268B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B60u;
label_268b60:
    // 0x268b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268b64:
    // 0x268b64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268b68:
    // 0x268b68: 0xc09a902  jal         func_26A408
label_268b6c:
    if (ctx->pc == 0x268B6Cu) {
        ctx->pc = 0x268B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B68u;
        // 0x268b6c: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B70u;
        goto label_268b70;
    }
    ctx->pc = 0x268B68u;
    SET_GPR_U32(ctx, 31, 0x268B70u);
    ctx->pc = 0x268B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B68u;
    // 0x268b6c: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A408u, 0x268B68u, 0x268B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B70u;
label_268b70:
    // 0x268b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268b74:
    // 0x268b74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x268b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_268b78:
    // 0x268b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_268b7c:
    // 0x268b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_268b80:
    // 0x268b80: 0x3e00008  jr          $ra
label_268b84:
    if (ctx->pc == 0x268B84u) {
        ctx->pc = 0x268B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B80u;
        // 0x268b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268B88u;
        goto label_fallthrough_0x268b80;
    }
    ctx->pc = 0x268B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B80u;
        // 0x268b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x268b80:
    ctx->pc = 0x268B88u;
}
