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

// Function: sub_001C4FF8
// Address: 0x1c4ff8 - 0x1c5108
void sub_001C4FF8_0x1c4ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4FF8_0x1c4ff8");
#endif

    switch (ctx->pc) {
        case 0x1c4ff8u: goto label_1c4ff8;
        case 0x1c4ffcu: goto label_1c4ffc;
        case 0x1c5000u: goto label_1c5000;
        case 0x1c5004u: goto label_1c5004;
        case 0x1c5008u: goto label_1c5008;
        case 0x1c500cu: goto label_1c500c;
        case 0x1c5010u: goto label_1c5010;
        case 0x1c5014u: goto label_1c5014;
        case 0x1c5018u: goto label_1c5018;
        case 0x1c501cu: goto label_1c501c;
        case 0x1c5020u: goto label_1c5020;
        case 0x1c5024u: goto label_1c5024;
        case 0x1c5028u: goto label_1c5028;
        case 0x1c502cu: goto label_1c502c;
        case 0x1c5030u: goto label_1c5030;
        case 0x1c5034u: goto label_1c5034;
        case 0x1c5038u: goto label_1c5038;
        case 0x1c503cu: goto label_1c503c;
        case 0x1c5040u: goto label_1c5040;
        case 0x1c5044u: goto label_1c5044;
        case 0x1c5048u: goto label_1c5048;
        case 0x1c504cu: goto label_1c504c;
        case 0x1c5050u: goto label_1c5050;
        case 0x1c5054u: goto label_1c5054;
        case 0x1c5058u: goto label_1c5058;
        case 0x1c505cu: goto label_1c505c;
        case 0x1c5060u: goto label_1c5060;
        case 0x1c5064u: goto label_1c5064;
        case 0x1c5068u: goto label_1c5068;
        case 0x1c506cu: goto label_1c506c;
        case 0x1c5070u: goto label_1c5070;
        case 0x1c5074u: goto label_1c5074;
        case 0x1c5078u: goto label_1c5078;
        case 0x1c507cu: goto label_1c507c;
        case 0x1c5080u: goto label_1c5080;
        case 0x1c5084u: goto label_1c5084;
        case 0x1c5088u: goto label_1c5088;
        case 0x1c508cu: goto label_1c508c;
        case 0x1c5090u: goto label_1c5090;
        case 0x1c5094u: goto label_1c5094;
        case 0x1c5098u: goto label_1c5098;
        case 0x1c509cu: goto label_1c509c;
        case 0x1c50a0u: goto label_1c50a0;
        case 0x1c50a4u: goto label_1c50a4;
        case 0x1c50a8u: goto label_1c50a8;
        case 0x1c50acu: goto label_1c50ac;
        case 0x1c50b0u: goto label_1c50b0;
        case 0x1c50b4u: goto label_1c50b4;
        case 0x1c50b8u: goto label_1c50b8;
        case 0x1c50bcu: goto label_1c50bc;
        case 0x1c50c0u: goto label_1c50c0;
        case 0x1c50c4u: goto label_1c50c4;
        case 0x1c50c8u: goto label_1c50c8;
        case 0x1c50ccu: goto label_1c50cc;
        case 0x1c50d0u: goto label_1c50d0;
        case 0x1c50d4u: goto label_1c50d4;
        case 0x1c50d8u: goto label_1c50d8;
        case 0x1c50dcu: goto label_1c50dc;
        case 0x1c50e0u: goto label_1c50e0;
        case 0x1c50e4u: goto label_1c50e4;
        case 0x1c50e8u: goto label_1c50e8;
        case 0x1c50ecu: goto label_1c50ec;
        case 0x1c50f0u: goto label_1c50f0;
        case 0x1c50f4u: goto label_1c50f4;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c50fcu: goto label_1c50fc;
        case 0x1c5100u: goto label_1c5100;
        case 0x1c5104u: goto label_1c5104;
        default: break;
    }

    ctx->pc = 0x1c4ff8u;

label_1c4ff8:
    // 0x1c4ff8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c4ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c4ffc:
    // 0x1c4ffc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c4ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c5000:
    // 0x1c5000: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c5000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c5004:
    // 0x1c5004: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c5008:
    // 0x1c5008: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c5008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1c500c:
    // 0x1c500c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1c500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1c5010:
    // 0x1c5010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c5014:
    // 0x1c5014: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c5014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5018:
    // 0x1c5018: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1c501c:
    if (ctx->pc == 0x1C501Cu) {
        ctx->pc = 0x1C501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5018u;
        // 0x1c501c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5020u;
        goto label_1c5020;
    }
    ctx->pc = 0x1C5018u;
    {
        const bool branch_taken_0x1c5018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5018u;
        // 0x1c501c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5018) {
            ctx->pc = 0x1C50E4u;
            goto label_1c50e4;
        }
    }
    ctx->pc = 0x1C5020u;
label_1c5020:
    // 0x1c5020: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1c5020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c5024:
    // 0x1c5024: 0x8e040948  lw          $a0, 0x948($s0)
    ctx->pc = 0x1c5024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c5028:
    // 0x1c5028: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1c502c:
    if (ctx->pc == 0x1C502Cu) {
        ctx->pc = 0x1C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5028u;
        // 0x1c502c: 0x240602fb  addiu       $a2, $zero, 0x2FB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 763));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5030u;
        goto label_1c5030;
    }
    ctx->pc = 0x1C5028u;
    {
        const bool branch_taken_0x1c5028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5028u;
        // 0x1c502c: 0x240602fb  addiu       $a2, $zero, 0x2FB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 763));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5028) {
            ctx->pc = 0x1C5050u;
            goto label_1c5050;
        }
    }
    ctx->pc = 0x1C5030u;
label_1c5030:
    // 0x1c5030: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c5030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c5034:
    // 0x1c5034: 0xc138e72  jal         func_4E39C8
label_1c5038:
    if (ctx->pc == 0x1C5038u) {
        ctx->pc = 0x1C5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5034u;
        // 0x1c5038: 0x24a551a8  addiu       $a1, $a1, 0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C503Cu;
        goto label_1c503c;
    }
    ctx->pc = 0x1C5034u;
    SET_GPR_U32(ctx, 31, 0x1C503Cu);
    ctx->pc = 0x1C5038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5034u;
    // 0x1c5038: 0x24a551a8  addiu       $a1, $a1, 0x51A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1C5034u, 0x1C503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C503Cu;
label_1c503c:
    // 0x1c503c: 0xae000948  sw          $zero, 0x948($s0)
    ctx->pc = 0x1c503cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 0));
label_1c5040:
    // 0x1c5040: 0xa2000951  sb          $zero, 0x951($s0)
    ctx->pc = 0x1c5040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2385), (uint8_t)GPR_U32(ctx, 0));
label_1c5044:
    // 0x1c5044: 0xa600094c  sh          $zero, 0x94C($s0)
    ctx->pc = 0x1c5044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2380), (uint16_t)GPR_U32(ctx, 0));
label_1c5048:
    // 0x1c5048: 0xa2000950  sb          $zero, 0x950($s0)
    ctx->pc = 0x1c5048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 0));
label_1c504c:
    // 0x1c504c: 0xae000954  sw          $zero, 0x954($s0)
    ctx->pc = 0x1c504cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2388), GPR_U32(ctx, 0));
label_1c5050:
    // 0x1c5050: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x1c5050u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_1c5054:
    // 0x1c5054: 0x8e030944  lw          $v1, 0x944($s0)
    ctx->pc = 0x1c5054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2372)));
label_1c5058:
    // 0x1c5058: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x1c5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_1c505c:
    // 0x1c505c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1c5060:
    if (ctx->pc == 0x1C5060u) {
        ctx->pc = 0x1C5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C505Cu;
        // 0x1c5060: 0x26110944  addiu       $s1, $s0, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5064u;
        goto label_1c5064;
    }
    ctx->pc = 0x1C505Cu;
    {
        const bool branch_taken_0x1c505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C505Cu;
        // 0x1c5060: 0x26110944  addiu       $s1, $s0, 0x944 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c505c) {
            ctx->pc = 0x1C50E4u;
            goto label_1c50e4;
        }
    }
    ctx->pc = 0x1C5064u;
label_1c5064:
    // 0x1c5064: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1c5064u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1c5068:
    // 0x1c5068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c506c:
    // 0x1c506c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1c506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1c5070:
    // 0x1c5070: 0xc0e8b20  jal         func_3A2C80
label_1c5074:
    if (ctx->pc == 0x1C5074u) {
        ctx->pc = 0x1C5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5070u;
        // 0x1c5074: 0x8c93082c  lw          $s3, 0x82C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5078u;
        goto label_1c5078;
    }
    ctx->pc = 0x1C5070u;
    SET_GPR_U32(ctx, 31, 0x1C5078u);
    ctx->pc = 0x1C5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5070u;
    // 0x1c5074: 0x8c93082c  lw          $s3, 0x82C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x1C5070u, 0x1C5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5078u;
label_1c5078:
    // 0x1c5078: 0xc0e4060  jal         func_390180
label_1c507c:
    if (ctx->pc == 0x1C507Cu) {
        ctx->pc = 0x1C507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5078u;
        // 0x1c507c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5080u;
        goto label_1c5080;
    }
    ctx->pc = 0x1C5078u;
    SET_GPR_U32(ctx, 31, 0x1C5080u);
    ctx->pc = 0x1C507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5078u;
    // 0x1c507c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5078u, 0x1C5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5080u;
label_1c5080:
    // 0x1c5080: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1c5084:
    if (ctx->pc == 0x1C5084u) {
        ctx->pc = 0x1C5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5080u;
        // 0x1c5084: 0x8e44bd30  lw          $a0, -0x42D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5088u;
        goto label_1c5088;
    }
    ctx->pc = 0x1C5080u;
    {
        const bool branch_taken_0x1c5080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5080) {
            ctx->pc = 0x1C5084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5080u;
            // 0x1c5084: 0x8e44bd30  lw          $a0, -0x42D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C5088u;
label_1c5088:
    // 0x1c5088: 0xc0e4060  jal         func_390180
label_1c508c:
    if (ctx->pc == 0x1C508Cu) {
        ctx->pc = 0x1C508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5088u;
        // 0x1c508c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5090u;
        goto label_1c5090;
    }
    ctx->pc = 0x1C5088u;
    SET_GPR_U32(ctx, 31, 0x1C5090u);
    ctx->pc = 0x1C508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5088u;
    // 0x1c508c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C5088u, 0x1C5090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5090u;
label_1c5090:
    // 0x1c5090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5094:
    // 0x1c5094: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1c5094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1c5098:
    // 0x1c5098: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1c5098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1c509c:
    // 0x1c509c: 0xa0f809  jalr        $a1
label_1c50a0:
    if (ctx->pc == 0x1C50A0u) {
        ctx->pc = 0x1C50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C509Cu;
        // 0x1c50a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50A4u;
        goto label_1c50a4;
    }
    ctx->pc = 0x1C509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C50A4u);
        ctx->pc = 0x1C50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C509Cu;
        // 0x1c50a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C509Cu, 0x1C50A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C50A4u;
label_1c50a4:
    // 0x1c50a4: 0x8e44bd30  lw          $a0, -0x42D0($s2)
    ctx->pc = 0x1c50a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_1c50a8:
    // 0x1c50a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c50ac:
    // 0x1c50ac: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1c50b0:
    // 0x1c50b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c50b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c50b4:
    // 0x1c50b4: 0xae040930  sw          $a0, 0x930($s0)
    ctx->pc = 0x1c50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2352), GPR_U32(ctx, 4));
label_1c50b8:
    // 0x1c50b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c50b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c50bc:
    // 0x1c50bc: 0xa2000951  sb          $zero, 0x951($s0)
    ctx->pc = 0x1c50bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2385), (uint8_t)GPR_U32(ctx, 0));
label_1c50c0:
    // 0x1c50c0: 0xa2000950  sb          $zero, 0x950($s0)
    ctx->pc = 0x1c50c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 0));
label_1c50c4:
    // 0x1c50c4: 0x7e030920  sq          $v1, 0x920($s0)
    ctx->pc = 0x1c50c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2336), GPR_VEC(ctx, 3));
label_1c50c8:
    // 0x1c50c8: 0xae000934  sw          $zero, 0x934($s0)
    ctx->pc = 0x1c50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2356), GPR_U32(ctx, 0));
label_1c50cc:
    // 0x1c50cc: 0xa600094c  sh          $zero, 0x94C($s0)
    ctx->pc = 0x1c50ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2380), (uint16_t)GPR_U32(ctx, 0));
label_1c50d0:
    // 0x1c50d0: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x1c50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_1c50d4:
    // 0x1c50d4: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_1c50d8:
    // 0x1c50d8: 0xae000954  sw          $zero, 0x954($s0)
    ctx->pc = 0x1c50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2388), GPR_U32(ctx, 0));
label_1c50dc:
    // 0x1c50dc: 0xc0e8b20  jal         func_3A2C80
label_1c50e0:
    if (ctx->pc == 0x1C50E0u) {
        ctx->pc = 0x1C50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50DCu;
        // 0x1c50e0: 0xae020944  sw          $v0, 0x944($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50E4u;
        goto label_1c50e4;
    }
    ctx->pc = 0x1C50DCu;
    SET_GPR_U32(ctx, 31, 0x1C50E4u);
    ctx->pc = 0x1C50E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50DCu;
    // 0x1c50e0: 0xae020944  sw          $v0, 0x944($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x1C50DCu, 0x1C50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50E4u;
label_1c50e4:
    // 0x1c50e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c50e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c50e8:
    // 0x1c50e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c50e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c50ec:
    // 0x1c50ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c50ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c50f0:
    // 0x1c50f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c50f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c50f4:
    // 0x1c50f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1c50f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c50f8:
    // 0x1c50f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c50f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c50fc:
    // 0x1c50fc: 0x3e00008  jr          $ra
label_1c5100:
    if (ctx->pc == 0x1C5100u) {
        ctx->pc = 0x1C5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50FCu;
        // 0x1c5100: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5104u;
        goto label_1c5104;
    }
    ctx->pc = 0x1C50FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50FCu;
        // 0x1c5100: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5104u;
label_1c5104:
    // 0x1c5104: 0x0  nop
    ctx->pc = 0x1c5104u;
    // NOP
    ctx->pc = 0x1c5108u;
}
